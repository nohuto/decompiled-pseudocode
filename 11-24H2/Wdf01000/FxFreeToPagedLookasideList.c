/*
 * XREFs of FxFreeToPagedLookasideList @ 0x140080E00
 * Callers:
 *     ?ReclaimPool@FxPagedLookasideListFromPool@@MEAAXPEAX@Z @ 0x140095C60 (-ReclaimPool@FxPagedLookasideListFromPool@@MEAAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxFreeToPagedLookasideList(_PAGED_LOOKASIDE_LIST *Lookaside, void *Entry)
{
  ExFreeToPagedLookasideList(Lookaside, Entry);
}
