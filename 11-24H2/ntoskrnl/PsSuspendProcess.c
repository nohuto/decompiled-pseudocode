/*
 * XREFs of PsSuspendProcess @ 0x140A0CD70
 * Callers:
 *     PspFreezeProcessWorker @ 0x140779160 (PspFreezeProcessWorker.c)
 *     NtSuspendProcess @ 0x140A0CAA0 (NtSuspendProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140289BD0 (KiLeaveCriticalRegionUnsafe.c)
 *     PsGetNextProcessThread @ 0x1408EEC70 (PsGetNextProcessThread.c)
 *     PsSuspendThread @ 0x140A0CF10 (PsSuspendThread.c)
 *     EtwTiLogSuspendResumeProcess @ 0x140A5A3D4 (EtwTiLogSuspendResumeProcess.c)
 */

__int64 __fastcall PsSuspendProcess(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  struct _EX_RUNDOWN_REF *v2; // r14
  unsigned int v4; // ebx
  _QWORD *NextProcessThread; // rax
  _QWORD *v7; // rdi

  CurrentThread = KeGetCurrentThread();
  v2 = (struct _EX_RUNDOWN_REF *)(a1 + 488);
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 488)) == 1 )
  {
    NextProcessThread = PsGetNextProcessThread(a1, 0LL);
    v4 = 0;
    while ( 1 )
    {
      v7 = NextProcessThread;
      if ( !NextProcessThread )
        break;
      if ( (*((_DWORD *)NextProcessThread + 29) & 0x200000) == 0 )
        PsSuspendThread(NextProcessThread, 0LL);
      NextProcessThread = PsGetNextProcessThread(a1, v7);
    }
    ExReleaseRundownProtection_0(v2);
  }
  else
  {
    v4 = -1073741558;
  }
  if ( (*(_DWORD *)(a1 + 1532) & 0x80000) != 0 )
    EtwTiLogSuspendResumeProcess(v4, CurrentThread, a1, 0LL);
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  return v4;
}
