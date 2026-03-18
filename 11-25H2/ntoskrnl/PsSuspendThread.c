/*
 * XREFs of PsSuspendThread @ 0x1409BA290
 * Callers:
 *     DbgkQueueUserExceptionReport @ 0x1406FB524 (DbgkQueueUserExceptionReport.c)
 *     PspWow64SetContextThread @ 0x1408B96E4 (PspWow64SetContextThread.c)
 *     NtChangeThreadState @ 0x1409B9840 (NtChangeThreadState.c)
 *     DbgkpPostFakeThreadMessages @ 0x1409B9A84 (DbgkpPostFakeThreadMessages.c)
 *     PsSuspendProcess @ 0x1409BA0F0 (PsSuspendProcess.c)
 *     NtSuspendThread @ 0x1409BA1C0 (NtSuspendThread.c)
 *     PspWow64GetContextThread @ 0x1409C4730 (PspWow64GetContextThread.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     KeSuspendThread @ 0x1404875A0 (KeSuspendThread.c)
 *     EtwTiLogSuspendResumeThread @ 0x1409BA384 (EtwTiLogSuspendResumeThread.c)
 */

__int64 __fastcall PsSuspendThread(__int64 a1, _DWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  struct _EX_RUNDOWN_REF *v5; // r15
  __int64 v6; // r9
  unsigned int v7; // ebx
  int v9; // [rsp+20h] [rbp-38h]

  v9 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (struct _EX_RUNDOWN_REF *)(a1 + 1416);
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 1416)) )
  {
    if ( (*(_DWORD *)(a1 + 1440) & 1) != 0 )
    {
      v7 = -1073741749;
    }
    else
    {
      v9 = KeSuspendThread(a1);
      v7 = 0;
    }
    ExReleaseRundownProtection_0(v5);
  }
  else
  {
    v7 = -1073741749;
  }
  if ( a2 )
  {
    *a2 = v9;
    if ( !v9 && (*(_DWORD *)(*(_QWORD *)(a1 + 544) + 1532LL) & 0x100000) != 0 )
    {
      LOBYTE(v6) = 1;
      EtwTiLogSuspendResumeThread(v7, CurrentThread, a1, v6);
    }
  }
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v7;
}
