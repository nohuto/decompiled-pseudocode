/*
 * XREFs of PsSuspendProcess @ 0x1409BA0F0
 * Callers:
 *     PspFreezeProcessWorker @ 0x1407693B0 (PspFreezeProcessWorker.c)
 *     NtSuspendProcess @ 0x140A92250 (NtSuspendProcess.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x14029B9E0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     PsGetNextProcessThread @ 0x1408BD940 (PsGetNextProcessThread.c)
 *     PsSuspendThread @ 0x1409BA290 (PsSuspendThread.c)
 *     EtwTiLogSuspendResumeProcess @ 0x140A60384 (EtwTiLogSuspendResumeProcess.c)
 */

__int64 __fastcall PsSuspendProcess(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  struct _EX_RUNDOWN_REF *v2; // r14
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD *NextProcessThread; // rax
  unsigned int v8; // ebx
  _QWORD *v9; // rdi

  CurrentThread = KeGetCurrentThread();
  v2 = (struct _EX_RUNDOWN_REF *)(a1 + 488);
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 488)) == 1 )
  {
    NextProcessThread = PsGetNextProcessThread(a1, 0LL);
    v8 = 0;
    while ( 1 )
    {
      v9 = NextProcessThread;
      if ( !NextProcessThread )
        break;
      if ( (*((_DWORD *)NextProcessThread + 29) & 0x200000) == 0 )
        PsSuspendThread(NextProcessThread, 0LL);
      NextProcessThread = PsGetNextProcessThread(a1, v9);
    }
    ExReleaseRundownProtection_0(v2);
  }
  else
  {
    v8 = -1073741558;
  }
  if ( (*(_DWORD *)(a1 + 1532) & 0x80000) != 0 )
    EtwTiLogSuspendResumeProcess(v8, CurrentThread, a1, 0LL);
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v4, v5, v6);
  return v8;
}
