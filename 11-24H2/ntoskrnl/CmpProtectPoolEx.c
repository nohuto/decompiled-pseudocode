/*
 * XREFs of CmpProtectPoolEx @ 0x140485EC4
 * Callers:
 *     HvpAddBin @ 0x140968D94 (HvpAddBin.c)
 *     HvpProtectBinPartial @ 0x140A2C4E4 (HvpProtectBinPartial.c)
 * Callees:
 *     ExProtectPoolEx @ 0x140382168 (ExProtectPoolEx.c)
 */

__int64 __fastcall CmpProtectPoolEx(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4)
{
  return ExProtectPoolEx(a1, a2, a3, a4);
}
