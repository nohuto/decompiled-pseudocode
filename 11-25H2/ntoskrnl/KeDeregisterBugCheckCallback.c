/*
 * XREFs of KeDeregisterBugCheckCallback @ 0x1405AEDF0
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x140253560 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

BOOLEAN __stdcall KeDeregisterBugCheckCallback(PKBUGCHECK_CALLBACK_RECORD CallbackRecord)
{
  unsigned __int8 CurrentIrql; // di
  BOOLEAN v3; // si
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  KxAcquireSpinLock(&KeBugCheckCallbackLock);
  v3 = 0;
  if ( CallbackRecord->State == 1 )
  {
    CallbackRecord->State = 0;
    Flink = CallbackRecord->Entry.Flink;
    if ( (PKBUGCHECK_CALLBACK_RECORD)CallbackRecord->Entry.Flink->Blink != CallbackRecord
      || (Blink = CallbackRecord->Entry.Blink, (PKBUGCHECK_CALLBACK_RECORD)Blink->Flink != CallbackRecord) )
    {
      __fastfail(3u);
    }
    Blink->Flink = Flink;
    v3 = 1;
    Flink->Blink = Blink;
  }
  KxReleaseSpinLock((volatile signed __int64 *)&KeBugCheckCallbackLock);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return v3;
}
