/*
 * XREFs of sub_1800BD7C0 @ 0x1800BD7C0
 * Callers:
 *     sub_1800BE3F0 @ 0x1800BE3F0 (sub_1800BE3F0.c)
 *     sub_1800BE7A0 @ 0x1800BE7A0 (sub_1800BE7A0.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_1800B9B64 @ 0x1800B9B64 (sub_1800B9B64.c)
 *     sub_1800BD964 @ 0x1800BD964 (sub_1800BD964.c)
 */

_QWORD *__fastcall sub_1800BD7C0(__int64 a1, _QWORD *a2)
{
  __int64 v4; // [rsp+28h] [rbp-20h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  sub_1800BD964(a1, &v4);
  if ( v4 )
  {
    sub_1800B9B64(v4, a2);
    if ( v5 )
      sub_18001060C(v5);
  }
  else
  {
    if ( v5 )
      sub_18001060C(v5);
    *a2 = 0LL;
  }
  return a2;
}
