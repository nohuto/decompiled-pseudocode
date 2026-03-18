/*
 * XREFs of KeRequestTerminationThread @ 0x14047D128
 * Callers:
 *     KeRequestTerminationProcess @ 0x14072F85C (KeRequestTerminationProcess.c)
 *     PspInsertThread @ 0x1408F1D7C (PspInsertThread.c)
 *     PspTerminateThreadByPointer @ 0x1408F48F0 (PspTerminateThreadByPointer.c)
 * Callees:
 *     KiAcquireThreadLockRaiseToDpc @ 0x140204DB0 (KiAcquireThreadLockRaiseToDpc.c)
 *     KiExitDispatcher @ 0x140287260 (KiExitDispatcher.c)
 *     KiInsertQueueApc @ 0x1402F0510 (KiInsertQueueApc.c)
 *     KiSignalThreadForApc @ 0x1402F1D40 (KiSignalThreadForApc.c)
 *     KeAlertThread @ 0x14047D210 (KeAlertThread.c)
 *     KeForceResumeThread @ 0x14047D350 (KeForceResumeThread.c)
 *     VslRequestSecureThreadExit @ 0x14058AAA8 (VslRequestSecureThreadExit.c)
 */

void __fastcall KeRequestTerminationThread(__int64 a1)
{
  __int64 v1; // rax
  char v3; // si
  struct _KPRCB *CurrentPrcb; // rbp
  unsigned __int8 v5; // r14
  unsigned __int8 v6; // [rsp+50h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 544);
  v6 = 0;
  if ( (*(_BYTE *)(v1 + 368) & 1) != 0 )
    VslRequestSecureThreadExit();
  if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 0xFu) )
  {
    v3 = 0;
    KiAcquireThreadLockRaiseToDpc(a1, &v6);
    CurrentPrcb = KeGetCurrentPrcb();
    v5 = v6;
    if ( (*(_DWORD *)(a1 + 116) & 0x4000) != 0 )
    {
      v3 = 1;
      if ( !*(_BYTE *)(a1 + 730) )
      {
        *(_BYTE *)(a1 + 730) = 1;
        KiInsertQueueApc(a1 + 648);
        KiSignalThreadForApc((__int64)CurrentPrcb, a1 + 648, v5, 0);
      }
    }
    *(_QWORD *)(a1 + 64) = 0LL;
    KiExitDispatcher(CurrentPrcb, 0LL, 1u, 0, v5);
    if ( v3 )
    {
      KeAlertThread(a1, 0LL);
      KeForceResumeThread(a1);
    }
  }
}
