/*
 * XREFs of CmpProtectPoolEx @ 0x14048B830
 * Callers:
 *     HvpProtectBinPartial @ 0x140882DC4 (HvpProtectBinPartial.c)
 *     HvpAddBin @ 0x1409F795C (HvpAddBin.c)
 * Callees:
 *     ExProtectPoolEx @ 0x14039FD08 (ExProtectPoolEx.c)
 */

__int64 __fastcall CmpProtectPoolEx(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4)
{
  return ExProtectPoolEx(a1, a2, a3, a4);
}
