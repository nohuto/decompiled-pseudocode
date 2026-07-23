/*
 * XREFs of CmpProtectPool @ 0x140479388
 * Callers:
 *     HvpFreeBin @ 0x140A634EC (HvpFreeBin.c)
 *     sub_140BE30B0 @ 0x140BE30B0 (sub_140BE30B0.c)
 * Callees:
 *     ExProtectPoolEx @ 0x140382168 (ExProtectPoolEx.c)
 */

__int64 __fastcall CmpProtectPool(unsigned __int64 a1, __int64 a2, unsigned int a3)
{
  return ExProtectPoolEx(a1, a1, a2, a3);
}
