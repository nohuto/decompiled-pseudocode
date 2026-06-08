/*
 * XREFs of sub_14000D650 @ 0x14000D650
 * Callers:
 *     <none>
 * Callees:
 *     sub_140005230 @ 0x140005230 (sub_140005230.c)
 */

void __fastcall sub_14000D650(struct _KDPC *Dpc, PVOID *DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  sub_140005230(DeferredContext, (__int64)(DeferredContext + 116), (__int64)&unk_140014380, (__int64)&unk_140014420);
}
