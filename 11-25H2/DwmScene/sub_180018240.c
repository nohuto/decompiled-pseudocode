/*
 * XREFs of sub_180018240 @ 0x180018240
 * Callers:
 *     sub_180012940 @ 0x180012940 (sub_180012940.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_18001258C @ 0x18001258C (sub_18001258C.c)
 */

__int64 __fastcall sub_180018240(__int64 a1, __int64 a2)
{
  __int64 v2; // r11
  __int64 *i; // rax
  __int64 v4; // rbx
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+28h] [rbp-10h]

  sub_18001258C(a2, &v6);
  for ( i = *(__int64 **)(v2 + 112); i != *(__int64 **)(v2 + 120); ++i )
  {
    v4 = *i;
    if ( *(_QWORD *)(*i + 16) == v6 )
    {
      if ( v7 )
        sub_18001050C(v7);
      return v4;
    }
  }
  if ( v7 )
    sub_18001050C(v7);
  return 0LL;
}
