/*
 * XREFs of PsFreezeProcess @ 0x140AC7BE0
 * Callers:
 *     NtChangeProcessState @ 0x140765BE0 (NtChangeProcessState.c)
 *     DbgkpSuspendProcess @ 0x14091FB94 (DbgkpSuspendProcess.c)
 *     MiForceCrashForInvalidAccess @ 0x140AB2078 (MiForceCrashForInvalidAccess.c)
 *     PspChangeProcessExecutionState @ 0x140AC7CBC (PspChangeProcessExecutionState.c)
 * Callees:
 *     PspUnlockProcessExclusive @ 0x1403D76DC (PspUnlockProcessExclusive.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14042F3F0 (KiQueryUnbiasedInterruptTime.c)
 *     PspLockProcessExclusive @ 0x14045AFE0 (PspLockProcessExclusive.c)
 *     KeFreezeProcess @ 0x140494EF4 (KeFreezeProcess.c)
 *     KeForceResumeProcess @ 0x1404A9118 (KeForceResumeProcess.c)
 *     Feature_DisableAppStateSuspendedTelemetry__private_IsEnabledDeviceUsageNoInline @ 0x1404F23E8 (Feature_DisableAppStateSuspendedTelemetry__private_IsEnabledDeviceUsageNoInline.c)
 *     PspPostFreezeOperationWorkEnqueue @ 0x1406EBF50 (PspPostFreezeOperationWorkEnqueue.c)
 *     PsSetProcessTelemetryAppState @ 0x14091FCB0 (PsSetProcessTelemetryAppState.c)
 *     EtwTiLogSuspendResumeProcess @ 0x140A60384 (EtwTiLogSuspendResumeProcess.c)
 *     EtwTraceFreezeThawProcess @ 0x140A6D0E8 (EtwTraceFreezeThawProcess.c)
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
    PspUnlockProcessExclusive(a1, (__int64)CurrentThread);
    PspPostFreezeOperationWorkEnqueue((_QWORD *)a1);
    if ( (BYTE8(PerfGlobalGroupMask[0]) & 2) != 0 )
      EtwTraceFreezeThawProcess(a1, 1);
    if ( !(unsigned int)Feature_DisableAppStateSuspendedTelemetry__private_IsEnabledDeviceUsageNoInline() )
      PsSetProcessTelemetryAppState((PRKPROCESS)a1, 1);
  }
  return 1;
}
