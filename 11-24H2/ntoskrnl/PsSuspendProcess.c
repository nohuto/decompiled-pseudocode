/*
 * XREFs of PsSuspendProcess @ 0x14093A350
 * Callers:
 *     PspFreezeProcessWorker @ 0x140779060 (PspFreezeProcessWorker.c)
 *     NtSuspendProcess @ 0x14093B510 (NtSuspendProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402595C0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     PsSuspendThread @ 0x14093A4F0 (PsSuspendThread.c)
 *     PsGetNextProcessThread @ 0x14094A700 (PsGetNextProcessThread.c)
 *     EtwTiLogSuspendResumeProcess @ 0x140A61AE0 (EtwTiLogSuspendResumeProcess.c)
 */

__int64 __fastcall PsSuspendProcess(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  struct _EX_RUNDOWN_REF *v2; // r14
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // ebx
  __int64 NextProcessThread; // rax
  __int64 v10; // rdi

  CurrentThread = KeGetCurrentThread();
  v2 = (struct _EX_RUNDOWN_REF *)(a1 + 488);
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 + 488)) == 1 )
  {
    NextProcessThread = PsGetNextProcessThread(a1, 0LL);
    v7 = 0;
    while ( 1 )
    {
      v10 = NextProcessThread;
      if ( !NextProcessThread )
        break;
      if ( (*(_DWORD *)(NextProcessThread + 116) & 0x200000) == 0 )
        PsSuspendThread(NextProcessThread, 0LL);
      NextProcessThread = PsGetNextProcessThread(a1, v10);
    }
    ExReleaseRundownProtection_0(v2);
  }
  else
  {
    v7 = -1073741558;
  }
  if ( (*(_DWORD *)(a1 + 1532) & 0x80000) != 0 )
    EtwTiLogSuspendResumeProcess(v7, CurrentThread, a1, 0LL);
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v4, v5, v6);
  return v7;
}
