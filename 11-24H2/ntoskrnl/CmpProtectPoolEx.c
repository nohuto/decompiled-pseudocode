/*
 * XREFs of CmpProtectPoolEx @ 0x14048B094
 * Callers:
 *     HvpAddBin @ 0x140980584 (HvpAddBin.c)
 *     HvpProtectBinPartial @ 0x140A378BC (HvpProtectBinPartial.c)
 * Callees:
 *     ExProtectPoolEx @ 0x140388828 (ExProtectPoolEx.c)
 */

__int64 __fastcall CmpProtectPoolEx(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4)
{
  return ExProtectPoolEx(a1, a2, a3, a4);
}
