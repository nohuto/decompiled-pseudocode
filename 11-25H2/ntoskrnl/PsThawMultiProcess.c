/*
 * XREFs of PsThawMultiProcess @ 0x1404EBCE4
 * Callers:
 *     NtChangeProcessState @ 0x140765BE0 (NtChangeProcessState.c)
 *     PspDeleteProcessStateChange @ 0x1407672E0 (PspDeleteProcessStateChange.c)
 *     DbgkForwardException @ 0x14091F420 (DbgkForwardException.c)
 *     DbgkpResumeProcess @ 0x140A60364 (DbgkpResumeProcess.c)
 *     PspChangeProcessExecutionState @ 0x140AC7CBC (PspChangeProcessExecutionState.c)
 * Callees:
 *     PspUnlockProcessExclusive @ 0x1403D76DC (PspUnlockProcessExclusive.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14042F3F0 (KiQueryUnbiasedInterruptTime.c)
 *     PspLockProcessExclusive @ 0x14045AFE0 (PspLockProcessExclusive.c)
 *     KeThawMultiProcess @ 0x140491514 (KeThawMultiProcess.c)
 *     Feature_DisableAppStateSuspendedTelemetry__private_IsEnabledDeviceUsageNoInline @ 0x1404F23E8 (Feature_DisableAppStateSuspendedTelemetry__private_IsEnabledDeviceUsageNoInline.c)
 *     PspPostFreezeOperationWorkEnqueue @ 0x1406EBF50 (PspPostFreezeOperationWorkEnqueue.c)
 *     PsWow64GetProcessNtdllType @ 0x14083CB84 (PsWow64GetProcessNtdllType.c)
 *     PspWow64GetSharedInformation @ 0x14083CBA0 (PspWow64GetSharedInformation.c)
 *     PsSetProcessTelemetryAppState @ 0x14091FCB0 (PsSetProcessTelemetryAppState.c)
 *     EtwTiLogSuspendResumeProcess @ 0x140A60384 (EtwTiLogSuspendResumeProcess.c)
 *     EtwTraceFreezeThawProcess @ 0x140A6D0E8 (EtwTraceFreezeThawProcess.c)
 *     VslUpdateFreezeTimeBias @ 0x140A8B964 (VslUpdateFreezeTimeBias.c)
 */

__int64 __fastcall PsThawMultiProcess(__int64 a1, char a2, unsigned int a3)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 v7; // rsi
  unsigned int ProcessNtdllType; // eax
  __int64 SharedInformation; // rax
  __int64 result; // rax
  int v11; // esi

  CurrentThread = KeGetCurrentThread();
  if ( a2 )
  {
    v7 = 0LL;
    PspLockProcessExclusive(a1, (__int64)CurrentThread);
    if ( *(_QWORD *)(a1 + 1584) )
    {
      v7 = KiQueryUnbiasedInterruptTime() - *(_QWORD *)(a1 + 1584);
      *(_QWORD *)(a1 + 1584) = 0LL;
      *(_QWORD *)(a1 + 1680) += v7;
    }
    PspUnlockProcessExclusive(a1, (__int64)CurrentThread);
    if ( (*(_BYTE *)(a1 + 368) & 1) != 0 )
    {
      VslUpdateFreezeTimeBias(a1, v7);
    }
    else
    {
      *(_QWORD *)qword_140FC64D0 += v7;
      ProcessNtdllType = PsWow64GetProcessNtdllType(a1);
      if ( ProcessNtdllType )
      {
        SharedInformation = PspWow64GetSharedInformation(ProcessNtdllType);
        **(_QWORD **)(SharedInformation + 64) += v7;
      }
    }
  }
  result = KeThawMultiProcess(a1, a2, a3);
  v11 = result;
  if ( (_DWORD)result == a3 && (*(_DWORD *)(a1 + 1532) & 0x80000) != 0 )
    result = EtwTiLogSuspendResumeProcess(0LL, CurrentThread, a1, 3LL);
  if ( a2 )
  {
    if ( (*(_DWORD *)(a1 + 500) & 8) == 0 )
      PspPostFreezeOperationWorkEnqueue(a1);
    if ( !(unsigned int)Feature_DisableAppStateSuspendedTelemetry__private_IsEnabledDeviceUsageNoInline() )
      PsSetProcessTelemetryAppState((PRKPROCESS)a1);
    result = *((_QWORD *)&PerfGlobalGroupMask + 1);
    if ( (BYTE8(PerfGlobalGroupMask) & 2) != 0 )
    {
      if ( v11 )
        return EtwTraceFreezeThawProcess(a1, 0LL);
    }
  }
  return result;
}
