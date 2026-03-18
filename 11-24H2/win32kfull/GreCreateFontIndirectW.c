/*
 * XREFs of GreCreateFontIndirectW @ 0x140037A84
 * Callers:
 *     ?UserCreateFontIndirectW@@YAPEAUHFONT__@@PEAUtagLOGFONTW@@@Z @ 0x140037A20 (-UserCreateFontIndirectW@@YAPEAUHFONT__@@PEAUtagLOGFONTW@@@Z.c)
 *     xxxSetNCFonts @ 0x140112490 (xxxSetNCFonts.c)
 *     FinishStockFontInit @ 0x140151750 (FinishStockFontInit.c)
 *     CreateScaledFont @ 0x1401CD670 (CreateScaledFont.c)
 *     CreateFontFromUserProfile @ 0x1401CD854 (CreateFontFromUserProfile.c)
 *     ValidateExternalLogFont @ 0x1401CDBB4 (ValidateExternalLogFont.c)
 *     UserSetAltScaleFont @ 0x1401F345C (UserSetAltScaleFont.c)
 * Callees:
 *     hfontCreate @ 0x140025080 (hfontCreate.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall GreCreateFontIndirectW(__int128 *a1)
{
  int v2; // edi
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  int v5; // ecx
  __int128 v6; // xmm0
  bool v7; // zf
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int64 v10; // xmm1_8
  _OWORD Src[5]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v13; // [rsp+80h] [rbp-80h]
  int v14; // [rsp+88h] [rbp-78h]
  __int16 v15; // [rsp+8Ch] [rbp-74h]
  __int16 v16; // [rsp+10Ch] [rbp+Ch]
  __int16 v17; // [rsp+14Ch] [rbp+4Ch]
  __int64 v18; // [rsp+18Ch] [rbp+8Ch]

  v2 = *((_BYTE *)a1 + 93) != 0 ? 0x80 : 0;
  memset_0(Src, 0, 0x1A4uLL);
  v3 = *a1;
  v4 = a1[1];
  v14 = *((_DWORD *)a1 + 22);
  v5 = v2 | 8;
  Src[0] = v3;
  v6 = a1[2];
  v7 = *((_BYTE *)a1 + 92) == 0;
  Src[1] = v4;
  v8 = a1[3];
  if ( v7 )
    v5 = v2;
  Src[2] = v6;
  v9 = a1[4];
  Src[3] = v8;
  v10 = *((_QWORD *)a1 + 10);
  Src[4] = v9;
  v13 = v10;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 134248036LL;
  return hfontCreate((char *)Src, 0, 0, 0LL, v5);
}
