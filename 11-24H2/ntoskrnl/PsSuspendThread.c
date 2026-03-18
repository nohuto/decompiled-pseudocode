/*
 * XREFs of PsSuspendThread @ 0x14093A4F0
 * Callers:
 *     DbgkQueueUserExceptionReport @ 0x140707404 (DbgkQueueUserExceptionReport.c)
 *     PspWow64SetContextThread @ 0x140913174 (PspWow64SetContextThread.c)
 *     DbgkpPostFakeThreadMessages @ 0x140939BE0 (DbgkpPostFakeThreadMessages.c)
 *     PsSuspendProcess @ 0x14093A350 (PsSuspendProcess.c)
 *     NtSuspendThread @ 0x14093A420 (NtSuspendThread.c)
 *     NtChangeThreadState @ 0x14093ADE0 (NtChangeThreadState.c)
 *     PspWow64GetContextThread @ 0x1409A90C0 (PspWow64GetContextThread.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     KeSuspendThread @ 0x140483128 (KeSuspendThread.c)
 *     EtwTiLogSuspendResumeThread @ 0x14093A5E4 (EtwTiLogSuspendResumeThread.c)
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
  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 + 1416)) )
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
