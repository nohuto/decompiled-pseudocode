/*
 * XREFs of PsThawMultiProcess @ 0x1404E6564
 * Callers:
 *     NtChangeProcessState @ 0x1407757D0 (NtChangeProcessState.c)
 *     PspDeleteProcessStateChange @ 0x140776ED0 (PspDeleteProcessStateChange.c)
 *     DbgkForwardException @ 0x1408F32F0 (DbgkForwardException.c)
 *     DbgkpResumeProcess @ 0x140A5A3B4 (DbgkpResumeProcess.c)
 *     PspChangeProcessExecutionState @ 0x140ACFA40 (PspChangeProcessExecutionState.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140419080 (KiQueryUnbiasedInterruptTime.c)
 *     PspLockProcessExclusive @ 0x14044FF38 (PspLockProcessExclusive.c)
 *     PspUnlockProcessExclusive @ 0x140458484 (PspUnlockProcessExclusive.c)
 *     KeThawMultiProcess @ 0x14048A9E4 (KeThawMultiProcess.c)
 *     PsWow64GetProcessNtdllType @ 0x1408DFF44 (PsWow64GetProcessNtdllType.c)
 *     PspWow64GetSharedInformation @ 0x1408DFF60 (PspWow64GetSharedInformation.c)
 *     EtwTiLogSuspendResumeProcess @ 0x140A5A3D4 (EtwTiLogSuspendResumeProcess.c)
 *     EtwTraceFreezeThawProcess @ 0x140A687C0 (EtwTraceFreezeThawProcess.c)
 *     VslUpdateFreezeTimeBias @ 0x140A8D164 (VslUpdateFreezeTimeBias.c)
 *     PspPostFreezeOperationWorkEnqueue @ 0x140A94554 (PspPostFreezeOperationWorkEnqueue.c)
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
    PspUnlockProcessExclusive(a1);
    if ( (*(_BYTE *)(a1 + 368) & 1) != 0 )
    {
      VslUpdateFreezeTimeBias(a1, v7);
    }
    else
    {
      *(_QWORD *)qword_140FC7510 += v7;
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
    if ( (unsigned __int8)Win32kAsyncProcessFreezeThawSupportIsActive() && (*(_DWORD *)(a1 + 500) & 8) == 0 )
      PspPostFreezeOperationWorkEnqueue(a1);
    result = *((_QWORD *)&PerfGlobalGroupMask + 1);
    if ( (BYTE8(PerfGlobalGroupMask) & 2) != 0 )
    {
      if ( v11 )
        return EtwTraceFreezeThawProcess(a1, 0LL);
    }
  }
  return result;
}
