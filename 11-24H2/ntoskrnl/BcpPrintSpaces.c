/*
 * XREFs of BcpPrintSpaces @ 0x14069AFE8
 * Callers:
 *     BcpDisplayCriticalString @ 0x140699B4C (BcpDisplayCriticalString.c)
 *     BcpDisplayCriticalStringCentered @ 0x140699EB0 (BcpDisplayCriticalStringCentered.c)
 *     BcpDisplayProgressModernized @ 0x14069AA84 (BcpDisplayProgressModernized.c)
 * Callees:
 *     BgpDisplayCharacterEx @ 0x140698FEC (BgpDisplayCharacterEx.c)
 */

__int64 __fastcall BcpPrintSpaces(__int64 *a1, unsigned int a2, unsigned int a3, unsigned int a4, int a5, _DWORD *a6)
{
  int v7; // esi
  int v8; // edx
  unsigned __int64 v13; // [rsp+40h] [rbp-28h]
  int v14; // [rsp+78h] [rbp+10h] BYREF
  int v15; // [rsp+80h] [rbp+18h] BYREF

  v14 = 0;
  v7 = a5;
  v8 = 0;
  v15 = 0;
  while ( a2 < a3 )
  {
    v8 = BgpDisplayCharacterEx(0x20u, a1, a2, a4, v7, v7, &v14, &v15, v13);
    if ( v8 < 0 )
      return (unsigned int)v8;
    a2 += v14;
  }
  *a6 = v15;
  return (unsigned int)v8;
}
