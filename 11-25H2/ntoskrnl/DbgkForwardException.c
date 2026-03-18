/*
 * XREFs of DbgkForwardException @ 0x14091F420
 * Callers:
 *     KiDispatchException @ 0x14025DD90 (KiDispatchException.c)
 *     KiSchedulerApc @ 0x1402F2C80 (KiSchedulerApc.c)
 *     PsDispatchIumService @ 0x14048F2F0 (PsDispatchIumService.c)
 *     DbgkpSendErrorMessage @ 0x1408B6DA4 (DbgkpSendErrorMessage.c)
 * Callees:
 *     PsReferenceSiloContext @ 0x14029A8F0 (PsReferenceSiloContext.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     PspUnlockProcessShared @ 0x14029BF00 (PspUnlockProcessShared.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     PspUnlockProcessExclusive @ 0x1403D76DC (PspUnlockProcessExclusive.c)
 *     PspLockProcessShared @ 0x1403F8E70 (PspLockProcessShared.c)
 *     ExGetExtensionTable @ 0x14042C694 (ExGetExtensionTable.c)
 *     KeCopyExceptionRecord @ 0x1404367D0 (KeCopyExceptionRecord.c)
 *     ExReleaseExtensionTable @ 0x1404516B0 (ExReleaseExtensionTable.c)
 *     EtwTelemetryCoverageReport @ 0x1404575C0 (EtwTelemetryCoverageReport.c)
 *     PspLockProcessExclusive @ 0x14045AFE0 (PspLockProcessExclusive.c)
 *     EtwTraceDebuggerEvent @ 0x1404C7B70 (EtwTraceDebuggerEvent.c)
 *     TelemetryCoverageStringHashInternal @ 0x1404CAC28 (TelemetryCoverageStringHashInternal.c)
 *     PsThawMultiProcess @ 0x1404EBCE4 (PsThawMultiProcess.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     DbgkpSendErrorMessage @ 0x1408B6DA4 (DbgkpSendErrorMessage.c)
 *     DbgkpQueueMessage @ 0x14091F880 (DbgkpQueueMessage.c)
 *     DbgkpSuspendProcess @ 0x14091FB94 (DbgkpSuspendProcess.c)
 *     PspRecordCrashedProcessIntoBlackbox @ 0x14091FBD4 (PspRecordCrashedProcessIntoBlackbox.c)
 *     PsSetProcessTelemetryAppState @ 0x14091FCB0 (PsSetProcessTelemetryAppState.c)
 *     DbgkpSendApiMessageLpc @ 0x1409CDD5C (DbgkpSendApiMessageLpc.c)
 */

bool __fastcall DbgkForwardException(__int64 a1, unsigned __int8 a2, char a3)
{
  _KPROCESS *Process; // rdi
  _KPROCESS *v7; // rbx
  void *UserTime; // rsi
  char v9; // di
  struct _KTHREAD *v10; // rbp
  int v11; // esi
  int v12; // edi
  int v13; // eax
  struct _KTHREAD *CurrentThread; // rdi
  char *v16; // rdx
  int v17; // ecx
  char v18; // al
  int v19; // [rsp+40h] [rbp-148h] BYREF
  int v20; // [rsp+44h] [rbp-144h]
  int v21; // [rsp+68h] [rbp-120h]
  int v22; // [rsp+6Ch] [rbp-11Ch]
  _BYTE v23[152]; // [rsp+70h] [rbp-118h] BYREF
  BOOL v24; // [rsp+108h] [rbp-80h]

  memset_0(&v19, 0, 0x110uLL);
  if ( !a3 )
    goto LABEL_7;
  Process = KeGetCurrentThread()->ApcState.Process;
  _m_prefetchw((char *)&Process[3].ActiveGroupsMask.Masks[1] + 4);
  if ( (_InterlockedOr((volatile signed __int32 *)&Process[3].ActiveGroupsMask.Masks[1] + 1, 4u) & 4) == 0 )
  {
    if ( (unsigned int)dword_140E08524 < MEMORY[0xFFFFF7800000037C] )
    {
      if ( !dword_140E08520 )
      {
        v16 = off_140E08518;
        v17 = -2128831035;
        v18 = *off_140E08518;
        if ( *off_140E08518 )
        {
          do
          {
            ++v16;
            v17 = v18 + 16777619 * v17;
            v18 = *v16;
          }
          while ( *v16 );
          if ( !v17 )
          {
            dword_140E08520 = 1;
            EtwTelemetryCoverageReport(&off_140E08518);
            goto LABEL_4;
          }
        }
        dword_140E08520 = v17;
      }
      EtwTelemetryCoverageReport(&off_140E08518);
    }
LABEL_4:
    PspRecordCrashedProcessIntoBlackbox(Process);
    PsSetProcessTelemetryAppState(Process);
  }
  if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspHwTraceExtensionHost) )
  {
    guard_dispatch_icall_no_overrides(Process);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspHwTraceExtensionHost);
  }
LABEL_7:
  v19 = 13631656;
  v20 = 8;
  v21 = 0;
  v7 = KeGetCurrentThread()->ApcState.Process;
  if ( a2 )
  {
    if ( (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 4) != 0 )
      UserTime = 0LL;
    else
      UserTime = (void *)v7[1].UserTime;
    v9 = 0;
  }
  else
  {
    if ( v7[1].SwapListEntry.Next )
    {
      CurrentThread = KeGetCurrentThread();
      PspLockProcessShared((__int64)v7, (__int64)CurrentThread);
      UserTime = (void *)((unsigned __int64)v7[1].SwapListEntry.Next & 0xFFFFFFFFFFFFFFF8uLL);
      PsReferenceSiloContext(UserTime);
      PspUnlockProcessShared((__int64)v7, (__int64)CurrentThread);
    }
    else
    {
      UserTime = 0LL;
    }
    v20 = 7;
    v9 = 1;
  }
  if ( UserTime || !a2 )
  {
    KeCopyExceptionRecord((__int64)v23, a1);
    v24 = a3 == 0;
    if ( !v9 )
    {
      v10 = KeGetCurrentThread();
      if ( (PerfGlobalGroupMask[0] & 0x400000) != 0 )
        EtwTraceDebuggerEvent((__int64)KeGetCurrentThread()->ApcState.Process, (__int64)v10, 1);
      while ( 1 )
      {
        v11 = 0;
        if ( v7 == KeGetCurrentThread()->ApcState.Process && a2 )
          v11 = (unsigned __int8)DbgkpSuspendProcess(v7);
        v22 = 259;
        v12 = DbgkpQueueMessage(v7, v10, 0LL);
        if ( v11 )
        {
          PsThawMultiProcess((__int64)v7, 0, 1u);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        }
        if ( v12 < 0 )
          return 0;
        if ( v22 != 1073807361 )
          goto LABEL_23;
      }
    }
    if ( UserTime )
    {
      v12 = DbgkpSendApiMessageLpc(&v19, UserTime, a2);
      ObfDereferenceObject(UserTime);
LABEL_23:
      if ( v12 < 0 )
        return 0;
    }
    else
    {
      v22 = -2147418111;
    }
    v13 = v22;
    if ( v22 != -2147418111 )
      return v13 >= 0;
    if ( !a2 )
    {
      v13 = DbgkpSendErrorMessage(a1, 2, (__int64)&v19);
      return v13 >= 0;
    }
  }
  return 0;
}
