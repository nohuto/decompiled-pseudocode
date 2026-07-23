/*
 * XREFs of ?KiDeregisterObjectWaitBlock@@YAEPEAXPEAU_KWAIT_BLOCK@@@Z @ 0x1402D381C
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x1402D2740 (NtWaitForWorkViaWorkerFactory.c)
 *     ExpShutdownWorkerFactory @ 0x1403ADC94 (ExpShutdownWorkerFactory.c)
 *     IopCancelWaitCompletionPacket @ 0x14041B244 (IopCancelWaitCompletionPacket.c)
 *     ExCancelDpcEventWait @ 0x140655CC0 (ExCancelDpcEventWait.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x1402C72D0 (KiAcquireKobjectLockSafe.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

char __fastcall KiDeregisterObjectWaitBlock(volatile signed __int32 *a1, struct _KWAIT_BLOCK *a2)
{
  volatile signed __int32 *v3; // rsi
  char v4; // bp
  unsigned __int8 CurrentIrql; // di
  __int64 v6; // rdx
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rax

  v3 = a1;
  v4 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  KiAcquireKobjectLockSafe(v3);
  if ( a2->BlockState == 4 )
  {
    Flink = a2->WaitListEntry.Flink;
    if ( (struct _KWAIT_BLOCK *)a2->WaitListEntry.Flink->Blink != a2
      || (Blink = a2->WaitListEntry.Blink, (struct _KWAIT_BLOCK *)Blink->Flink != a2) )
    {
      __fastfail(3u);
    }
    Blink->Flink = Flink;
    v4 = 1;
    Flink->Blink = Blink;
    a2->BlockState = 5;
  }
  _InterlockedAnd(v3, 0xFFFFFF7F);
  if ( KiIrqlFlags )
  {
    LOBYTE(v6) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v6);
  }
  __writecr8(CurrentIrql);
  return v4;
}
