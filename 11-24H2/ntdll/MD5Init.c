/*
 * XREFs of MD5Init @ 0x180118150
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptWipeAsm @ 0x18012F7C0 (SymCryptWipeAsm.c)
 *     ScRsa32Compat_Md5ExportAndWipe @ 0x18015A0B4 (ScRsa32Compat_Md5ExportAndWipe.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall MD5Init(__int64 a1)
{
  _DWORD v3[4]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v4; // [rsp+30h] [rbp-78h]
  __int64 v5; // [rsp+38h] [rbp-70h]
  __int128 v6; // [rsp+80h] [rbp-28h]

  v3[1] = 0;
  memset_thunk_772440563353939046(v3, 0, 0x6CuLL);
  SymCryptWipeAsm(v3, 112LL);
  v4 = 0LL;
  v6 = xmmword_180199580;
  v5 = 0LL;
  v3[0] = 0;
  return ScRsa32Compat_Md5ExportAndWipe(v3, a1);
}
