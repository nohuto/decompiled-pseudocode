/*
 * XREFs of PsFreezeProcess @ 0x14093A750
 * Callers:
 *     NtChangeProcessState @ 0x1407755B0 (NtChangeProcessState.c)
 *     DbgkpSuspendProcess @ 0x140939394 (DbgkpSuspendProcess.c)
 *     MiForceCrashForInvalidAccess @ 0x140AB6F10 (MiForceCrashForInvalidAccess.c)
 *     PspChangeProcessExecutionState @ 0x140AD16D4 (PspChangeProcessExecutionState.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x1404251D0 (KiQueryUnbiasedInterruptTime.c)
 *     PspLockProcessExclusive @ 0x14045AB10 (PspLockProcessExclusive.c)
 *     PspUnlockProcessExclusive @ 0x140462E74 (PspUnlockProcessExclusive.c)
 *     KeFreezeProcess @ 0x1404634A0 (KeFreezeProcess.c)
 *     KeForceResumeProcess @ 0x1404A7414 (KeForceResumeProcess.c)
 *     EtwTiLogSuspendResumeProcess @ 0x140A61AE0 (EtwTiLogSuspendResumeProcess.c)
 *     EtwTraceFreezeThawProcess @ 0x140A6F33C (EtwTraceFreezeThawProcess.c)
 *     PspPostFreezeOperationWorkEnqueue @ 0x140A97D04 (PspPostFreezeOperationWorkEnqueue.c)
 */

char __fastcall PsFreezeProcess(__int64 a1, char a2)
{
  int v5; // eax
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v7; // rdx

  if ( (*(_DWORD *)(a1 + 500) & 8) != 0 )
    return 0;
  v5 = KeFreezeProcess(a1, a2);
  if ( (*(_DWORD *)(a1 + 500) & 8) != 0 )
  {
    KeForceResumeProcess(a1);
    return 0;
  }
  CurrentThread = KeGetCurrentThread();
  if ( !v5 && (*(_DWORD *)(a1 + 1532) & 0x80000) != 0 )
    EtwTiLogSuspendResumeProcess(0LL, CurrentThread, a1, 2LL);
  if ( a2 )
  {
    PspLockProcessExclusive(a1, (__int64)CurrentThread);
    *(_QWORD *)(a1 + 1584) = KiQueryUnbiasedInterruptTime();
    PspUnlockProcessExclusive(a1);
    if ( (unsigned __int8)Win32kAsyncProcessFreezeThawSupportIsActive() )
      PspPostFreezeOperationWorkEnqueue(a1);
    if ( (BYTE8(PerfGlobalGroupMask[0]) & 2) != 0 )
    {
      LOBYTE(v7) = 1;
      EtwTraceFreezeThawProcess(a1, v7);
    }
  }
  return 1;
}
