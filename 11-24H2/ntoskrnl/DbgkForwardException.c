/*
 * XREFs of DbgkForwardException @ 0x140938C20
 * Callers:
 *     KiSchedulerApc @ 0x140295D20 (KiSchedulerApc.c)
 *     KiDispatchException @ 0x1403E8310 (KiDispatchException.c)
 *     PsDispatchIumService @ 0x14048D020 (PsDispatchIumService.c)
 *     DbgkpSendErrorMessage @ 0x14093A900 (DbgkpSendErrorMessage.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     PspUnlockProcessShared @ 0x14025E2E0 (PspUnlockProcessShared.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     PspLockProcessShared @ 0x14033E760 (PspLockProcessShared.c)
 *     PsReferenceSiloContext @ 0x14033FA90 (PsReferenceSiloContext.c)
 *     ExGetExtensionTable @ 0x1403AA530 (ExGetExtensionTable.c)
 *     KeCopyExceptionRecord @ 0x140433170 (KeCopyExceptionRecord.c)
 *     ExReleaseExtensionTable @ 0x14044FE80 (ExReleaseExtensionTable.c)
 *     EtwTelemetryCoverageReport @ 0x140457F60 (EtwTelemetryCoverageReport.c)
 *     PspLockProcessExclusive @ 0x14045AB10 (PspLockProcessExclusive.c)
 *     PspUnlockProcessExclusive @ 0x140462E74 (PspUnlockProcessExclusive.c)
 *     EtwTraceDebuggerEvent @ 0x1404C8930 (EtwTraceDebuggerEvent.c)
 *     TelemetryCoverageStringHashInternal @ 0x1404CA964 (TelemetryCoverageStringHashInternal.c)
 *     PsThawMultiProcess @ 0x1404EEE60 (PsThawMultiProcess.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     DbgkpQueueMessage @ 0x140939080 (DbgkpQueueMessage.c)
 *     DbgkpSuspendProcess @ 0x140939394 (DbgkpSuspendProcess.c)
 *     PspRecordCrashedProcessIntoBlackbox @ 0x1409393D4 (PspRecordCrashedProcessIntoBlackbox.c)
 *     PsSetProcessTelemetryAppState @ 0x1409394B0 (PsSetProcessTelemetryAppState.c)
 *     DbgkpSendErrorMessage @ 0x14093A900 (DbgkpSendErrorMessage.c)
 *     DbgkpSendApiMessageLpc @ 0x140A3020C (DbgkpSendApiMessageLpc.c)
 */

bool __fastcall DbgkForwardException(__int64 a1, unsigned __int8 a2, char a3)
{
  _KPROCESS *Process; // rdi
  __int64 v7; // r9
  _KPROCESS *v8; // rbx
  void *UserTime; // rsi
  char v10; // di
  struct _KTHREAD *CurrentThread; // rbp
  int v12; // esi
  int v13; // edi
  int v14; // eax
  char *v16; // rdx
  int v17; // ecx
  char v18; // al
  __int64 v19; // [rsp+30h] [rbp-158h] BYREF
  int v20; // [rsp+40h] [rbp-148h] BYREF
  int v21; // [rsp+44h] [rbp-144h]
  int v22; // [rsp+68h] [rbp-120h]
  int v23; // [rsp+6Ch] [rbp-11Ch]
  _BYTE v24[152]; // [rsp+70h] [rbp-118h] BYREF
  BOOL v25; // [rsp+108h] [rbp-80h]

  v19 = 0LL;
  memset_0(&v20, 0, 0x110uLL);
  if ( !a3 )
    goto LABEL_7;
  LODWORD(v19) = 1;
  Process = KeGetCurrentThread()->ApcState.Process;
  _m_prefetchw((char *)&Process[3].ActiveGroupsMask.Masks[1] + 4);
  if ( (_InterlockedOr((volatile signed __int32 *)&Process[3].ActiveGroupsMask.Masks[1] + 1, 4u) & 4) == 0 )
  {
    if ( (unsigned int)dword_140E08604 < MEMORY[0xFFFFF7800000037C] )
    {
      if ( !dword_140E08600 )
      {
        v16 = off_140E085F8;
        v17 = -2128831035;
        v18 = *off_140E085F8;
        if ( *off_140E085F8 )
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
            dword_140E08600 = 1;
            EtwTelemetryCoverageReport(&off_140E085F8);
            goto LABEL_4;
          }
        }
        dword_140E08600 = v17;
      }
      EtwTelemetryCoverageReport(&off_140E085F8);
    }
LABEL_4:
    PspRecordCrashedProcessIntoBlackbox(Process);
    PsSetProcessTelemetryAppState(Process);
  }
  if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspHwTraceExtensionHost) )
  {
    guard_dispatch_icall_no_overrides(Process, KeGetCurrentThread(), &v19, v7);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspHwTraceExtensionHost);
  }
LABEL_7:
  v20 = 13631656;
  v21 = 8;
  v22 = 0;
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
    v21 = 7;
    v10 = 1;
  }
  if ( UserTime || !a2 )
  {
    KeCopyExceptionRecord((__int64)v24, a1);
    v25 = a3 == 0;
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
        v23 = 259;
        v13 = DbgkpQueueMessage(v8, CurrentThread, 0LL);
        if ( v12 )
        {
          PsThawMultiProcess((__int64)v8, 0, 1u);
          KeLeaveCriticalRegionThread();
        }
        if ( v13 < 0 )
          return 0;
        if ( v23 != 1073807361 )
          goto LABEL_23;
      }
    }
    if ( UserTime )
    {
      v13 = DbgkpSendApiMessageLpc(&v20, UserTime, a2);
      ObfDereferenceObject(UserTime);
LABEL_23:
      if ( v13 < 0 )
        return 0;
    }
    else
    {
      v23 = -2147418111;
    }
    v14 = v23;
    if ( v23 != -2147418111 )
      return v14 >= 0;
    if ( !a2 )
    {
      v14 = DbgkpSendErrorMessage(a1, 2LL, &v20);
      return v14 >= 0;
    }
  }
  return 0;
}
