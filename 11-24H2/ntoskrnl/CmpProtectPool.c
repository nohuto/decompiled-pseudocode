/*
 * XREFs of CmpProtectPool @ 0x14047E198
 * Callers:
 *     HvpFreeBin @ 0x140A6A13C (HvpFreeBin.c)
 *     sub_140BE10B0 @ 0x140BE10B0 (sub_140BE10B0.c)
 * Callees:
 *     ExProtectPoolEx @ 0x140388828 (ExProtectPoolEx.c)
 */

__int64 __fastcall CmpProtectPool(unsigned __int64 a1, __int64 a2, unsigned int a3)
{
  return ExProtectPoolEx(a1, a1, a2, a3);
}
