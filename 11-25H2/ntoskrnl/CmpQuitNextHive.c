/*
 * XREFs of CmpQuitNextHive @ 0x140A5D420
 * Callers:
 *     CmpDoFlushAll @ 0x14032401C (CmpDoFlushAll.c)
 * Callees:
 *     CmpDereferenceHive @ 0x1408484B4 (CmpDereferenceHive.c)
 */

__int64 __fastcall CmpQuitNextHive(volatile signed __int32 *a1)
{
  return CmpDereferenceHive(a1);
}
