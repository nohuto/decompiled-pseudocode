/*
 * XREFs of DbgkForwardException @ 0x1408F32F0
 * Callers:
 *     KiSchedulerApc @ 0x1402E00D0 (KiSchedulerApc.c)
 *     KiDispatchException @ 0x1403D5EB0 (KiDispatchException.c)
 *     PsDispatchIumService @ 0x1404E66B4 (PsDispatchIumService.c)
 *     DbgkpSendErrorMessage @ 0x1409E93F0 (DbgkpSendErrorMessage.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     PspUnlockProcessShared @ 0x14028E8F0 (PspUnlockProcessShared.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     PspLockProcessShared @ 0x14031DC40 (PspLockProcessShared.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     ExGetExtensionTable @ 0x140398F94 (ExGetExtensionTable.c)
 *     KeCopyExceptionRecord @ 0x1404252B0 (KeCopyExceptionRecord.c)
 *     ExReleaseExtensionTable @ 0x1404450F0 (ExReleaseExtensionTable.c)
 *     EtwTelemetryCoverageReport @ 0x14044D270 (EtwTelemetryCoverageReport.c)
 *     PspLockProcessExclusive @ 0x14044FF38 (PspLockProcessExclusive.c)
 *     PspUnlockProcessExclusive @ 0x140458484 (PspUnlockProcessExclusive.c)
 *     EtwTraceDebuggerEvent @ 0x1404C1F80 (EtwTraceDebuggerEvent.c)
 *     TelemetryCoverageStringHashInternal @ 0x1404C3E84 (TelemetryCoverageStringHashInternal.c)
 *     PsThawMultiProcess @ 0x1404E6564 (PsThawMultiProcess.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     DbgkpQueueMessage @ 0x1408F3750 (DbgkpQueueMessage.c)
 *     DbgkpSuspendProcess @ 0x1408F3A64 (DbgkpSuspendProcess.c)
 *     PspRecordCrashedProcessIntoBlackbox @ 0x1408F3AA4 (PspRecordCrashedProcessIntoBlackbox.c)
 *     PsSetProcessTelemetryAppState @ 0x1408F3B80 (PsSetProcessTelemetryAppState.c)
 *     DbgkpSendErrorMessage @ 0x1409E93F0 (DbgkpSendErrorMessage.c)
 *     DbgkpSendApiMessageLpc @ 0x140A24CFC (DbgkpSendApiMessageLpc.c)
 */

bool __fastcall DbgkForwardException(__int64 a1, unsigned __int8 a2, char a3)
{
  char *v6; // rdx
  _KPROCESS *Process; // rdi
  _KPROCESS *v8; // rbx
  void *UserTime; // rsi
  char v10; // di
  struct _KTHREAD *CurrentThread; // rbp
  int v12; // esi
  int v13; // edi
  int v14; // eax
  int v16; // ecx
  char v17; // al
  int v18; // [rsp+40h] [rbp-148h] BYREF
  int v19; // [rsp+44h] [rbp-144h]
  int v20; // [rsp+68h] [rbp-120h]
  int v21; // [rsp+6Ch] [rbp-11Ch]
  _BYTE v22[152]; // [rsp+70h] [rbp-118h] BYREF
  BOOL v23; // [rsp+108h] [rbp-80h]

  memset_0(&v18, 0, 0x110uLL);
  if ( !a3 )
    goto LABEL_7;
  Process = KeGetCurrentThread()->ApcState.Process;
  _m_prefetchw((char *)&Process[3].ActiveGroupsMask.Masks[1] + 4);
  if ( (_InterlockedOr((volatile signed __int32 *)&Process[3].ActiveGroupsMask.Masks[1] + 1, 4u) & 4) == 0 )
  {
    if ( (unsigned int)dword_140E0868C < MEMORY[0xFFFFF7800000037C] )
    {
      if ( !dword_140E08688 )
      {
        v6 = off_140E08680;
        v16 = -2128831035;
        v17 = *off_140E08680;
        if ( *off_140E08680 )
        {
          do
          {
            ++v6;
            v16 = v17 + 16777619 * v16;
            v17 = *v6;
          }
          while ( *v6 );
          if ( !v16 )
          {
            dword_140E08688 = 1;
            EtwTelemetryCoverageReport((__int64)&off_140E08680, (__int64)v6);
            goto LABEL_4;
          }
        }
        dword_140E08688 = v16;
      }
      EtwTelemetryCoverageReport((__int64)&off_140E08680, (__int64)v6);
    }
LABEL_4:
    PspRecordCrashedProcessIntoBlackbox(Process);
    PsSetProcessTelemetryAppState(Process);
  }
  if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspHwTraceExtensionHost) )
  {
    guard_dispatch_icall_no_overrides(Process, KeGetCurrentThread());
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspHwTraceExtensionHost);
  }
LABEL_7:
  v18 = 13631656;
  v19 = 8;
  v20 = 0;
  v8 = KeGetCurrentThread()->ApcState.Process;
  if ( a2 )
  {
    if ( (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 4) != 0 )
      UserTime = 0LL;
    else
      UserTime = (void *)v8[1].UserTime;
    v10 = 0;
  }
  else
  {
    if ( v8[1].SwapListEntry.Next )
    {
      PspLockProcessShared((__int64)v8, (__int64)KeGetCurrentThread());
      UserTime = (void *)((unsigned __int64)v8[1].SwapListEntry.Next & 0xFFFFFFFFFFFFFFF8uLL);
      PsReferenceSiloContext(UserTime);
      PspUnlockProcessShared((__int64)v8);
    }
    else
    {
      UserTime = 0LL;
    }
    v19 = 7;
    v10 = 1;
  }
  if ( UserTime || !a2 )
  {
    KeCopyExceptionRecord((__int64)v22, a1);
    v23 = a3 == 0;
    if ( !v10 )
    {
      CurrentThread = KeGetCurrentThread();
      if ( (PerfGlobalGroupMask[0] & 0x400000) != 0 )
        EtwTraceDebuggerEvent((__int64)KeGetCurrentThread()->ApcState.Process, (__int64)CurrentThread, 1);
      while ( 1 )
      {
        v12 = 0;
        if ( v8 == KeGetCurrentThread()->ApcState.Process && a2 )
          v12 = (unsigned __int8)DbgkpSuspendProcess(v8);
        v21 = 259;
        v13 = DbgkpQueueMessage(v8, CurrentThread, 0LL);
        if ( v12 )
        {
          PsThawMultiProcess((__int64)v8, 0, 1u);
          KeLeaveCriticalRegionThread();
        }
        if ( v13 < 0 )
          return 0;
        if ( v21 != 1073807361 )
          goto LABEL_23;
      }
    }
    if ( UserTime )
    {
      v13 = DbgkpSendApiMessageLpc(&v18, UserTime, a2);
      ObfDereferenceObject(UserTime);
LABEL_23:
      if ( v13 < 0 )
        return 0;
    }
    else
    {
      v21 = -2147418111;
    }
    v14 = v21;
    if ( v21 != -2147418111 )
      return v14 >= 0;
    if ( !a2 )
    {
      v14 = DbgkpSendErrorMessage(a1, 2LL, &v18);
      return v14 >= 0;
    }
  }
  return 0;
}
