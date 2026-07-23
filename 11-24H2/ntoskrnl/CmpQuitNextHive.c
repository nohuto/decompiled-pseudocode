/*
 * XREFs of CmpQuitNextHive @ 0x140A56D90
 * Callers:
 *     CmpDoFlushAll @ 0x14020DA6C (CmpDoFlushAll.c)
 * Callees:
 *     CmpDereferenceHive @ 0x140840680 (CmpDereferenceHive.c)
 */

__int64 __fastcall CmpQuitNextHive(volatile signed __int32 *a1)
{
  return CmpDereferenceHive(a1);
}
