/*
 * XREFs of CmpQuitNextHive @ 0x140A5EBA0
 * Callers:
 *     CmpDoFlushAll @ 0x14024528C (CmpDoFlushAll.c)
 * Callees:
 *     CmpDereferenceHive @ 0x1408443C0 (CmpDereferenceHive.c)
 */

__int64 __fastcall CmpQuitNextHive(volatile signed __int32 *a1)
{
  return CmpDereferenceHive(a1);
}
