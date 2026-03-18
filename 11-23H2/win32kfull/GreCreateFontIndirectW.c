/*
 * XREFs of GreCreateFontIndirectW @ 0x1C00C4BF8
 * Callers:
 *     FinishStockFontInit @ 0x1C0019280 (FinishStockFontInit.c)
 *     ValidateExternalLogFont @ 0x1C00CFF2C (ValidateExternalLogFont.c)
 *     xxxSetNCFonts @ 0x1C00CFFDC (xxxSetNCFonts.c)
 *     CreateFontFromUserProfile @ 0x1C00D0578 (CreateFontFromUserProfile.c)
 *     UserSetAltScaleFont @ 0x1C00D0848 (UserSetAltScaleFont.c)
 *     CreateScaledFont @ 0x1C01BEC58 (CreateScaledFont.c)
 * Callees:
 *     hfontCreate @ 0x1C00C4ED0 (hfontCreate.c)
 *     vConvertLogFontW @ 0x1C01166B0 (vConvertLogFontW.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 */

__int64 __fastcall GreCreateFontIndirectW(__int64 a1, unsigned int a2)
{
  _BYTE Src[432]; // [rsp+30h] [rbp-1C8h] BYREF

  memset_0(Src, 0, 0x1A4uLL);
  vConvertLogFontW(Src, a1);
  return hfontCreate(Src, a2);
}
