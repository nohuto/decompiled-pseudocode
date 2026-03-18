/*
 * XREFs of ViFreeContextTable @ 0x140B848D8
 * Callers:
 *     VfInsertContext @ 0x1406107E0 (VfInsertContext.c)
 *     VfRemoveContext @ 0x140610980 (VfRemoveContext.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x14024A9C0 (ExFreeToNPagedLookasideList.c)
 */

void __fastcall ViFreeContextTable(PVOID Entry)
{
  ExFreeToNPagedLookasideList(&ViObjectContextTableLookaside, Entry);
}
