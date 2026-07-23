/*
 * XREFs of PsFreezeProcess @ 0x140ACF964
 * Callers:
 *     NtChangeProcessState @ 0x1407757D0 (NtChangeProcessState.c)
 *     DbgkpSuspendProcess @ 0x1408F3A64 (DbgkpSuspendProcess.c)
 *     MiForceCrashForInvalidAccess @ 0x140AB11E8 (MiForceCrashForInvalidAccess.c)
 *     PspChangeProcessExecutionState @ 0x140ACFA40 (PspChangeProcessExecutionState.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140419080 (KiQueryUnbiasedInterruptTime.c)
 *     PspLockProcessExclusive @ 0x14044FF38 (PspLockProcessExclusive.c)
 *     PspUnlockProcessExclusive @ 0x140458484 (PspUnlockProcessExclusive.c)
 *     KeFreezeProcess @ 0x14048E57C (KeFreezeProcess.c)
 *     KeForceResumeProcess @ 0x1404A1E44 (KeForceResumeProcess.c)
 *     EtwTiLogSuspendResumeProcess @ 0x140A5A3D4 (EtwTiLogSuspendResumeProcess.c)
 *     EtwTraceFreezeThawProcess @ 0x140A687C0 (EtwTraceFreezeThawProcess.c)
 *     PspPostFreezeOperationWorkEnqueue @ 0x140A94554 (PspPostFreezeOperationWorkEnqueue.c)
 */

char __fastcall PsFreezeProcess(__int64 a1, char a2)
{
  int v5; // eax
  struct _KTHREAD *CurrentThread; // rsi

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
    EtwTiLogSuspendResumeProcess(0, (__int64)CurrentThread, a1, 2);
  if ( a2 )
  {
    PspLockProcessExclusive(a1, (__int64)CurrentThread);
    *(_QWORD *)(a1 + 1584) = KiQueryUnbiasedInterruptTime();
    PspUnlockProcessExclusive(a1);
    if ( (unsigned __int8)Win32kAsyncProcessFreezeThawSupportIsActive() )
      PspPostFreezeOperationWorkEnqueue((_QWORD *)a1);
    if ( (BYTE8(PerfGlobalGroupMask[0]) & 2) != 0 )
      EtwTraceFreezeThawProcess(a1, 1);
  }
  return 1;
}
