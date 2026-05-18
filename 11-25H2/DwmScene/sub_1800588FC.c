/*
 * XREFs of sub_1800588FC @ 0x1800588FC
 * Callers:
 *     sub_180055870 @ 0x180055870 (sub_180055870.c)
 *     sub_1800571D0 @ 0x1800571D0 (sub_1800571D0.c)
 *     sub_18005772C @ 0x18005772C (sub_18005772C.c)
 *     sub_180058C00 @ 0x180058C00 (sub_180058C00.c)
 *     sub_180066CF4 @ 0x180066CF4 (sub_180066CF4.c)
 *     sub_18006C138 @ 0x18006C138 (sub_18006C138.c)
 *     sub_180083990 @ 0x180083990 (sub_180083990.c)
 *     sub_18008B290 @ 0x18008B290 (sub_18008B290.c)
 *     sub_18008CEF8 @ 0x18008CEF8 (sub_18008CEF8.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     sub_180058950 @ 0x180058950 (sub_180058950.c)
 */

__int64 __fastcall sub_1800588FC(__int64 a1, __int64 *a2)
{
  __int64 *v4; // rcx
  __int64 result; // rax
  __int64 v6; // rcx

  v4 = (__int64 *)(a1 + 136);
  result = *v4;
  if ( *a2 != *v4 )
  {
    sub_180011010(v4, a2);
    result = sub_180058950(a1, 4LL);
  }
  v6 = a2[1];
  if ( v6 )
    return sub_18001050C(v6);
  return result;
}
