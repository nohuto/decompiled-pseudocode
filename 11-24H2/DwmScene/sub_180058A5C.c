/*
 * XREFs of sub_180058A5C @ 0x180058A5C
 * Callers:
 *     sub_1800559D0 @ 0x1800559D0 (sub_1800559D0.c)
 *     sub_180057330 @ 0x180057330 (sub_180057330.c)
 *     sub_18005788C @ 0x18005788C (sub_18005788C.c)
 *     sub_180058D60 @ 0x180058D60 (sub_180058D60.c)
 *     sub_180066E54 @ 0x180066E54 (sub_180066E54.c)
 *     sub_18006C298 @ 0x18006C298 (sub_18006C298.c)
 *     sub_180083AF0 @ 0x180083AF0 (sub_180083AF0.c)
 *     sub_18008B3F0 @ 0x18008B3F0 (sub_18008B3F0.c)
 *     sub_18008D058 @ 0x18008D058 (sub_18008D058.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 *     sub_180058AB0 @ 0x180058AB0 (sub_180058AB0.c)
 */

__int64 __fastcall sub_180058A5C(__int64 a1, __int64 *a2)
{
  __int64 *v4; // rcx
  __int64 result; // rax
  __int64 v6; // rcx

  v4 = (__int64 *)(a1 + 136);
  result = *v4;
  if ( *a2 != *v4 )
  {
    sub_180011110(v4, a2);
    result = sub_180058AB0(a1, 4LL);
  }
  v6 = a2[1];
  if ( v6 )
    return sub_18001060C(v6);
  return result;
}
