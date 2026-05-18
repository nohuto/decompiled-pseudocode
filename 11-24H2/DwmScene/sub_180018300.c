/*
 * XREFs of sub_180018300 @ 0x180018300
 * Callers:
 *     sub_180012A40 @ 0x180012A40 (sub_180012A40.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_18001268C @ 0x18001268C (sub_18001268C.c)
 */

__int64 __fastcall sub_180018300(__int64 a1, __int64 a2)
{
  __int64 v2; // r11
  __int64 *i; // rax
  __int64 v4; // rbx
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+28h] [rbp-10h]

  sub_18001268C(a2, &v6);
  for ( i = *(__int64 **)(v2 + 112); i != *(__int64 **)(v2 + 120); ++i )
  {
    v4 = *i;
    if ( *(_QWORD *)(*i + 16) == v6 )
    {
      if ( v7 )
        sub_18001060C(v7);
      return v4;
    }
  }
  if ( v7 )
    sub_18001060C(v7);
  return 0LL;
}
