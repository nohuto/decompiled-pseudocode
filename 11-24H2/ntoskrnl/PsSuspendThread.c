/*
 * XREFs of PsSuspendThread @ 0x140A0CF10
 * Callers:
 *     DbgkQueueUserExceptionReport @ 0x140704FC4 (DbgkQueueUserExceptionReport.c)
 *     PspWow64SetContextThread @ 0x1408EA8C4 (PspWow64SetContextThread.c)
 *     DbgkpPostFakeThreadMessages @ 0x1408F50E4 (DbgkpPostFakeThreadMessages.c)
 *     PspWow64GetContextThread @ 0x140992510 (PspWow64GetContextThread.c)
 *     NtChangeThreadState @ 0x140A0CB20 (NtChangeThreadState.c)
 *     PsSuspendProcess @ 0x140A0CD70 (PsSuspendProcess.c)
 *     NtSuspendThread @ 0x140A0CE40 (NtSuspendThread.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     KeSuspendThread @ 0x14047E25C (KeSuspendThread.c)
 *     EtwTiLogSuspendResumeThread @ 0x140A0D004 (EtwTiLogSuspendResumeThread.c)
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
  KeLeaveCriticalRegionThread();
  return v7;
}
