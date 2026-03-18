/*
 * XREFs of UserSetAltScaleFont @ 0x1401F345C
 * Callers:
 *     xxxSetNCFonts @ 0x140112490 (xxxSetNCFonts.c)
 *     ?SetIconFonts@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@@Z @ 0x140112FC8 (-SetIconFonts@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@@Z.c)
 *     ?SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z @ 0x14028FA28 (-SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z.c)
 * Callees:
 *     GreExtGetObjectW @ 0x14001442C (GreExtGetObjectW.c)
 *     GreCreateFontIndirectW @ 0x140037A84 (GreCreateFontIndirectW.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall UserSetAltScaleFont(Gre::Base *a1, __int64 *a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 UserSessionState; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  INT v10; // eax
  __int64 FontIndirectW; // rax
  INT a[23]; // [rsp+20h] [rbp-78h] BYREF
  __int16 v14; // [rsp+7Ch] [rbp-1Ch]

  v2 = 0;
  v14 = 0;
  if ( !(unsigned int)GreExtGetObjectW(a1, 96LL, a) )
    return 0LL;
  UserSessionState = W32GetUserSessionState(v5, v4);
  a[0] = EngMulDiv(a[0], 96, *(unsigned __int16 *)(*(_QWORD *)(UserSessionState + 19928) + 6998LL));
  v9 = W32GetUserSessionState(v8, v7);
  v10 = EngMulDiv(a[1], 96, *(unsigned __int16 *)(*(_QWORD *)(v9 + 19928) + 6998LL));
  v14 = 257;
  a[1] = v10;
  FontIndirectW = GreCreateFontIndirectW((__int128 *)a);
  *a2 = FontIndirectW;
  LOBYTE(v2) = FontIndirectW != 0;
  return v2;
}
