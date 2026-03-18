/*
 * XREFs of BgpDisplayCharacterEx @ 0x140697F6C
 * Callers:
 *     BcpDisplayCriticalCharacter @ 0x1406989F0 (BcpDisplayCriticalCharacter.c)
 *     BcpDisplayCriticalString @ 0x140698ACC (BcpDisplayCriticalString.c)
 *     BcpDisplayCriticalStringCentered @ 0x140698E30 (BcpDisplayCriticalStringCentered.c)
 *     BcpDisplayProgress @ 0x1406997F4 (BcpDisplayProgress.c)
 *     BcpPrintSpaces @ 0x140699F68 (BcpPrintSpaces.c)
 *     BgpConsoleDisplayCharacter @ 0x140BB0AB0 (BgpConsoleDisplayCharacter.c)
 *     BgpConsoleDisplayCharacterEx @ 0x140BB0BC4 (BgpConsoleDisplayCharacterEx.c)
 *     BgpConsoleDrawCursor @ 0x140BB0F18 (BgpConsoleDrawCursor.c)
 *     BgpConsoleScrollScreen @ 0x140BB1314 (BgpConsoleScrollScreen.c)
 * Callees:
 *     BgpTxtDisplayCharacter @ 0x140472A28 (BgpTxtDisplayCharacter.c)
 *     BgpTxtAdjustStaticRegion @ 0x140698788 (BgpTxtAdjustStaticRegion.c)
 */

__int64 __fastcall BgpDisplayCharacterEx(
        unsigned __int16 a1,
        __int64 *a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        int a6,
        _DWORD *a7,
        _DWORD *a8,
        unsigned __int64 a9)
{
  __int64 result; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  _DWORD v14[2]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v15; // [rsp+48h] [rbp-20h]
  int v16; // [rsp+50h] [rbp-18h]
  int v17; // [rsp+54h] [rbp-14h]

  v17 = 0;
  if ( (dword_140EF0050 & 1) == 0 )
    return 3221225473LL;
  v12 = a2[3];
  v14[0] = a5;
  v14[1] = a6;
  v16 = *((_DWORD *)a2 + 2);
  v13 = *a2;
  a9 = __PAIR64__(a4, a3);
  v15 = v13;
  result = BgpTxtAdjustStaticRegion(v12, &a9, v14);
  if ( (int)result >= 0 )
    return BgpTxtDisplayCharacter(a2[3], a1, 0, a7, a8);
  return result;
}
