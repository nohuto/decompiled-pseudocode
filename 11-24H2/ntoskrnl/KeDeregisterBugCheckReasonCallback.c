/*
 * XREFs of KeDeregisterBugCheckReasonCallback @ 0x1404A1620
 * Callers:
 *     CarCleanup @ 0x1406164FC (CarCleanup.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140254AE0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

BOOLEAN __stdcall KeDeregisterBugCheckReasonCallback(PKBUGCHECK_REASON_CALLBACK_RECORD CallbackRecord)
{
  PKBUGCHECK_REASON_CALLBACK_RECORD v1; // rbx
  unsigned __int8 CurrentIrql; // di
  BOOLEAN v3; // si
  bool v4; // zf
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rax
  __int64 v7; // rdx

  v1 = CallbackRecord;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(CallbackRecord) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(CallbackRecord, 15LL);
  }
  KxAcquireSpinLock(&KeBugCheckCallbackLock);
  v3 = 0;
  if ( v1->State == 1 )
  {
    v4 = v1->Reason == 1023;
    v1->State = 0;
    if ( v4 )
      _InterlockedDecrement(&KiRecoveryCallbackCount);
    Flink = v1->Entry.Flink;
    if ( (PKBUGCHECK_REASON_CALLBACK_RECORD)v1->Entry.Flink->Blink != v1
      || (Blink = v1->Entry.Blink, (PKBUGCHECK_REASON_CALLBACK_RECORD)Blink->Flink != v1) )
    {
      __fastfail(3u);
    }
    Blink->Flink = Flink;
    v3 = 1;
    Flink->Blink = Blink;
  }
  KxReleaseSpinLock((volatile signed __int64 *)&KeBugCheckCallbackLock);
  if ( KiIrqlFlags )
  {
    LOBYTE(v7) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v7);
  }
  __writecr8(CurrentIrql);
  return v3;
}
