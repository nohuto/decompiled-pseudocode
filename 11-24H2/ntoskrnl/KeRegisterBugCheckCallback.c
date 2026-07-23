/*
 * XREFs of KeRegisterBugCheckCallback @ 0x1404B7E90
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     KiCheckForDuplicateBugCheckCallback @ 0x140460810 (KiCheckForDuplicateBugCheckCallback.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

BOOLEAN __stdcall KeRegisterBugCheckCallback(
        PKBUGCHECK_CALLBACK_RECORD CallbackRecord,
        PKBUGCHECK_CALLBACK_ROUTINE CallbackRoutine,
        PVOID Buffer,
        ULONG Length,
        PUCHAR Component)
{
  __int64 v5; // rbp
  PKBUGCHECK_CALLBACK_RECORD v8; // rbx
  unsigned __int8 CurrentIrql; // di
  BOOLEAN v10; // si
  struct _LIST_ENTRY *v11; // r8
  __int64 v12; // rax
  __int64 v13; // rdx

  v5 = Length;
  v8 = CallbackRecord;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(CallbackRecord) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(CallbackRecord, 15LL);
  }
  KxAcquireSpinLock(&KeBugCheckCallbackLock);
  v10 = 0;
  if ( !v8->State && !KiCheckForDuplicateBugCheckCallback(&KeBugCheckCallbackListHead, v8) )
  {
    v8->CallbackRoutine = CallbackRoutine;
    v8->Buffer = Buffer;
    v8->Checksum = (ULONG_PTR)&Component[(unsigned __int64)CallbackRoutine + v5 + (_QWORD)Buffer];
    v10 = 1;
    v8->Length = v5;
    v8->Component = Component;
    v8->State = 1;
    v12 = KeBugCheckCallbackListHead;
    if ( *(struct _LIST_ENTRY **)(KeBugCheckCallbackListHead + 8) != v11 )
      __fastfail(3u);
    v8->Entry.Flink = (struct _LIST_ENTRY *)KeBugCheckCallbackListHead;
    v8->Entry.Blink = v11;
    *(_QWORD *)(v12 + 8) = v8;
    KeBugCheckCallbackListHead = (__int64)v8;
  }
  KxReleaseSpinLock((volatile signed __int64 *)&KeBugCheckCallbackLock);
  if ( KiIrqlFlags )
  {
    LOBYTE(v13) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v13);
  }
  __writecr8(CurrentIrql);
  return v10;
}
