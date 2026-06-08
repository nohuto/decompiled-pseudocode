/*
 * XREFs of sub_140005200 @ 0x140005200
 * Callers:
 *     <none>
 * Callees:
 *     sub_140005230 @ 0x140005230 (sub_140005230.c)
 */

void __fastcall sub_140005200(struct _KDPC *Dpc, char *DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  sub_140005230(DeferredContext, DeferredContext + 776, &unk_1400130E0, &unk_1400130D0);
}
