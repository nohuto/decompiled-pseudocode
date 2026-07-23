/*
 * XREFs of MD4Init @ 0x180159F00
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptWipeAsm @ 0x18012F7C0 (SymCryptWipeAsm.c)
 *     ScRsa32Compat_Md4ExportAndWipe @ 0x18015A060 (ScRsa32Compat_Md4ExportAndWipe.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall MD4Init(__int64 a1)
{
  _DWORD v3[4]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v4; // [rsp+30h] [rbp-78h]
  __int64 v5; // [rsp+38h] [rbp-70h]
  __int128 v6; // [rsp+80h] [rbp-28h]

  v3[1] = 0;
  memset_thunk_772440563353939046(v3, 0, 0x6CuLL);
  SymCryptWipeAsm((__int64)v3, 0x70uLL);
  v4 = 0LL;
  v6 = xmmword_18019B858;
  v5 = 0LL;
  v3[0] = 0;
  return ScRsa32Compat_Md4ExportAndWipe(v3, a1);
}
