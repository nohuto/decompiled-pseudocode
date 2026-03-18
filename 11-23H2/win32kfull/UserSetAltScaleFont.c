/*
 * XREFs of UserSetAltScaleFont @ 0x1C00D0848
 * Callers:
 *     xxxSetNCFonts @ 0x1C00CFFDC (xxxSetNCFonts.c)
 *     SetIconMetrics @ 0x1C00D1B34 (SetIconMetrics.c)
 *     ?SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z @ 0x1C01C71A4 (-SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z.c)
 * Callees:
 *     GreExtGetObjectW @ 0x1C004B0D0 (GreExtGetObjectW.c)
 *     GreCreateFontIndirectW @ 0x1C00C4BF8 (GreCreateFontIndirectW.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 */

__int64 __fastcall UserSetAltScaleFont(HBRUSH a1, __int64 *a2)
{
  int ObjectW; // eax
  unsigned int v5; // ebx
  __int64 FontIndirectW; // rax
  INT a; // [rsp+20h] [rbp-78h] BYREF
  INT v9; // [rsp+24h] [rbp-74h]

  memset_0(&a, 0, 0x5CuLL);
  ObjectW = GreExtGetObjectW(a1, 92LL, (__int64)&a);
  v5 = 0;
  if ( !ObjectW )
    return 0LL;
  a = EngMulDiv(a, 96, *(unsigned __int16 *)(gpsi + 6998LL));
  v9 = EngMulDiv(v9, 96, *(unsigned __int16 *)(gpsi + 6998LL));
  FontIndirectW = GreCreateFontIndirectW((__int64)&a, 0x88u);
  *a2 = FontIndirectW;
  LOBYTE(v5) = FontIndirectW != 0;
  return v5;
}
