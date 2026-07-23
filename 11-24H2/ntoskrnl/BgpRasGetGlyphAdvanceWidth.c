/*
 * XREFs of BgpRasGetGlyphAdvanceWidth @ 0x14069BC80
 * Callers:
 *     BgpFoGetAdvanceWidth @ 0x140699748 (BgpFoGetAdvanceWidth.c)
 *     BgpFoGetStringAdvanceWidth @ 0x140699768 (BgpFoGetStringAdvanceWidth.c)
 *     BcpDisplayCriticalString @ 0x140699B4C (BcpDisplayCriticalString.c)
 *     BcpDisplayCriticalStringCentered @ 0x140699EB0 (BcpDisplayCriticalStringCentered.c)
 * Callees:
 *     RaspGetXExtent @ 0x14069C374 (RaspGetXExtent.c)
 */

__int64 __fastcall BgpRasGetGlyphAdvanceWidth(int a1, unsigned __int16 a2, int a3, __int64 a4, __int128 *a5)
{
  __int128 *v5; // rbx
  __int64 result; // rax
  __int128 v7; // [rsp+30h] [rbp-28h] BYREF
  __int64 v8; // [rsp+40h] [rbp-18h]

  v5 = &v7;
  v8 = 0LL;
  if ( a5 )
    v5 = a5;
  v7 = 0LL;
  result = RaspGetXExtent(a2, a1, a3, a2);
  *((_QWORD *)v5 + 2) = 0LL;
  return result;
}
