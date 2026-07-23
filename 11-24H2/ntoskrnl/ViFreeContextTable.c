/*
 * XREFs of ViFreeContextTable @ 0x140B868D8
 * Callers:
 *     VfInsertContext @ 0x14060EDA0 (VfInsertContext.c)
 *     VfRemoveContext @ 0x14060EF40 (VfRemoveContext.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1402E4C00 (ExFreeToNPagedLookasideList.c)
 */

void __fastcall ViFreeContextTable(PVOID Entry)
{
  ExFreeToNPagedLookasideList(&ViObjectContextTableLookaside, Entry);
}
