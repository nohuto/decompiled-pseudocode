/*
 * XREFs of ViUnlockContextPointer @ 0x140B86A0C
 * Callers:
 *     VfInsertContext @ 0x14060EDA0 (VfInsertContext.c)
 *     VfRemoveContext @ 0x14060EF40 (VfRemoveContext.c)
 * Callees:
 *     <none>
 */

void __fastcall ViUnlockContextPointer(volatile signed __int64 *a1)
{
  _InterlockedIncrement64(a1);
}
