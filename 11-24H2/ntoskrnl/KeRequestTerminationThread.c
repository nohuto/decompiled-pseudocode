/*
 * XREFs of KeRequestTerminationThread @ 0x140479818
 * Callers:
 *     KeRequestTerminationProcess @ 0x14073BAEC (KeRequestTerminationProcess.c)
 *     PspInsertThread @ 0x1408A59BC (PspInsertThread.c)
 *     PspTerminateThreadByPointer @ 0x1408A7CB0 (PspTerminateThreadByPointer.c)
 * Callees:
 *     KiSignalThreadForApc @ 0x140296870 (KiSignalThreadForApc.c)
 *     KiAcquireThreadLockRaiseToDpc @ 0x1402A1A20 (KiAcquireThreadLockRaiseToDpc.c)
 *     KiExitDispatcher @ 0x14031E7A0 (KiExitDispatcher.c)
 *     KiInsertQueueApc @ 0x1403377A0 (KiInsertQueueApc.c)
 *     KeAlertThread @ 0x140479900 (KeAlertThread.c)
 *     KeForceResumeThread @ 0x140479A40 (KeForceResumeThread.c)
 *     VslRequestSecureThreadExit @ 0x14058E148 (VslRequestSecureThreadExit.c)
 */

void __fastcall KeRequestTerminationThread(__int64 a1)
{
  __int64 v1; // rax
  char v3; // si
  struct _KPRCB *CurrentPrcb; // rbp
  char v5; // r14
  char v6; // [rsp+50h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 544);
  v6 = 0;
  if ( (*(_BYTE *)(v1 + 368) & 1) != 0 )
    VslRequestSecureThreadExit();
  if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 0xFu) )
  {
    v3 = 0;
    KiAcquireThreadLockRaiseToDpc(a1, (unsigned __int8 *)&v6);
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
    KiExitDispatcher((unsigned __int64)CurrentPrcb, 0LL, 1u, 0, v5);
    if ( v3 )
    {
      KeAlertThread(a1, 0LL);
      KeForceResumeThread(a1);
    }
  }
}
