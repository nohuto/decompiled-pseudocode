/*
 * XREFs of ViUnlockContextPointer @ 0x140B84A0C
 * Callers:
 *     VfInsertContext @ 0x1406107E0 (VfInsertContext.c)
 *     VfRemoveContext @ 0x140610980 (VfRemoveContext.c)
 * Callees:
 *     <none>
 */

void __fastcall ViUnlockContextPointer(volatile signed __int64 *a1)
{
  _InterlockedIncrement64(a1);
}
