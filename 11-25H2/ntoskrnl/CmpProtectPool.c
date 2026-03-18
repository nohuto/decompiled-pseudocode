/*
 * XREFs of CmpProtectPool @ 0x14047D948
 * Callers:
 *     HvpFreeBin @ 0x140A674FC (HvpFreeBin.c)
 *     sub_140BD00B0 @ 0x140BD00B0 (sub_140BD00B0.c)
 * Callees:
 *     ExProtectPoolEx @ 0x14039FD08 (ExProtectPoolEx.c)
 */

__int64 __fastcall CmpProtectPool(unsigned __int64 a1, __int64 a2, unsigned int a3)
{
  return ExProtectPoolEx(a1, a1, a2, a3);
}
