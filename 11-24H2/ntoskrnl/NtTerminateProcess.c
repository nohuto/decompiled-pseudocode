/*
 * XREFs of NtTerminateProcess @ 0x140ACF260
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140289BD0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     PsGetProcessCreateTimeQuadPart @ 0x140445970 (PsGetProcessCreateTimeQuadPart.c)
 *     PsGetProcessStartKey @ 0x140447F60 (PsGetProcessStartKey.c)
 *     PspLockProcessExclusive @ 0x14044FF38 (PspLockProcessExclusive.c)
 *     PspUnlockProcessExclusive @ 0x140458484 (PspUnlockProcessExclusive.c)
 *     KeForceResumeThread @ 0x1404752D0 (KeForceResumeThread.c)
 *     Feature_Servicing_ZwTerminateMinimalProcess_Terminate_Fix__private_IsEnabledDeviceUsageNoInline @ 0x1405E35D0 (Feature_Servicing_ZwTerminateMinimalProcess_Terminate_Fix__private_IsEnabledDeviceUsageNoInline.c)
 *     PsTerminateMinimalProcess @ 0x140778D58 (PsTerminateMinimalProcess.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140847AA0 (ObpReferenceObjectByHandleWithTag.c)
 *     PspTerminateAllThreads @ 0x1408EEED4 (PspTerminateAllThreads.c)
 *     PspTerminateProcess @ 0x1408F4E40 (PspTerminateProcess.c)
 *     PspTerminateThreadByPointer @ 0x1408FDF10 (PspTerminateThreadByPointer.c)
 *     PspExitThread @ 0x1408FDFF0 (PspExitThread.c)
 *     PspLogAuditTerminateRemoteProcessEvent @ 0x140A897C0 (PspLogAuditTerminateRemoteProcessEvent.c)
 */

NTSTATUS __cdecl NtTerminateProcess(HANDLE ProcessHandle, NTSTATUS ExitStatus)
{
  struct _KTHREAD *CurrentThread; // rsi
  int v3; // ebx
  __int64 Process; // rdi
  char PreviousMode; // r15
  NTSTATUS result; // eax
  int IsEnabledDeviceUsageNoInline; // eax
  struct _KPROCESS *v9; // r14
  int v10; // r13d
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  PVOID Object; // [rsp+80h] [rbp+8h] BYREF
  LONGLONG TimeQuadPart; // [rsp+90h] [rbp+18h]
  unsigned __int64 ProcessStartKey; // [rsp+98h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  Object = 0LL;
  Process = (__int64)CurrentThread->ApcState.Process;
  PreviousMode = CurrentThread->PreviousMode;
  if ( ProcessHandle )
  {
    result = ObpReferenceObjectByHandleWithTag(
               (ULONG_PTR)ProcessHandle,
               1,
               (__int64)PsProcessType,
               PreviousMode,
               0x65547350u,
               &Object,
               0LL,
               0LL);
    if ( result < 0 )
      return result;
    IsEnabledDeviceUsageNoInline = Feature_Servicing_ZwTerminateMinimalProcess_Terminate_Fix__private_IsEnabledDeviceUsageNoInline();
    v9 = (struct _KPROCESS *)Object;
    if ( IsEnabledDeviceUsageNoInline && (*((_DWORD *)Object + 383) & 1) != 0 && !*((_QWORD *)Object + 200) )
    {
      if ( PreviousMode )
      {
        v3 = -1073741790;
      }
      else if ( Object == (PVOID)Process )
      {
        v3 = -1073741637;
      }
      else
      {
        PsTerminateMinimalProcess((PRKPROCESS)Object, ExitStatus);
      }
      ObfDereferenceObjectWithTag(v9, 0x65547350u);
      return v3;
    }
    if ( !PreviousMode && (*(_BYTE *)(Process + 368) & 1) == 0 )
      v3 = 1;
    v10 = *((_DWORD *)Object + 116);
    ProcessStartKey = PsGetProcessStartKey((__int64)Object);
    TimeQuadPart = PsGetProcessCreateTimeQuadPart(v9);
    --CurrentThread->KernelApcDisable;
    v3 = PspTerminateProcess(&v9->Header.Lock, (struct _EX_RUNDOWN_REF *)CurrentThread, ExitStatus, v3);
    ObfDereferenceObjectWithTag(v9, 0x65547350u);
    if ( v9 == (struct _KPROCESS *)Process )
    {
      if ( PreviousMode == 1 || (*(_BYTE *)(Process + 368) & 1) != 0 )
      {
        _InterlockedOr((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 1u);
        KeForceResumeThread((__int64)CurrentThread);
        KeLeaveCriticalRegionThread();
        PspExitThread(ExitStatus);
        JUMPOUT(0x140ACF4D5LL);
      }
    }
    else
    {
      PspLogAuditTerminateRemoteProcessEvent(v10, v3, ProcessStartKey, TimeQuadPart);
    }
  }
  else
  {
    if ( PreviousMode != 1 && (*(_BYTE *)(Process + 368) & 1) == 0 || (*(_DWORD *)(Process + 1532) & 1) != 0 )
      return -1073741637;
    PspLockProcessExclusive((__int64)CurrentThread->ApcState.Process, (__int64)CurrentThread);
    _m_prefetchw((const void *)(Process + 500));
    v11 = *(_DWORD *)(Process + 500);
    do
    {
      v12 = v11;
      v11 = _InterlockedCompareExchange((volatile signed __int32 *)(Process + 500), v11 | 0x40000000, v11);
    }
    while ( v12 != v11 );
    if ( (v11 & 0x40000008) != 0 )
    {
      PspUnlockProcessExclusive(Process);
      PspTerminateThreadByPointer((ULONG_PTR)CurrentThread, ExitStatus, 1);
      return 0;
    }
    *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x40u;
    if ( *(_DWORD *)(Process + 1364) == 259 )
      *(_DWORD *)(Process + 1364) = ExitStatus;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(Process + 456), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(Process + 456));
    KeAbPostRelease(Process + 456);
    v3 = PspTerminateAllThreads((PVOID)Process, (struct _EX_RUNDOWN_REF *)CurrentThread, ExitStatus, 0);
  }
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  return v3;
}
