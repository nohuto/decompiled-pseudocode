/*
 * XREFs of sub_180053500 @ 0x180053500
 * Callers:
 *     sub_1800530A0 @ 0x1800530A0 (sub_1800530A0.c)
 *     sub_180053688 @ 0x180053688 (sub_180053688.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011C04 @ 0x180011C04 (sub_180011C04.c)
 *     sub_18001268C @ 0x18001268C (sub_18001268C.c)
 */

_QWORD *__fastcall sub_180053500(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rax
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+28h] [rbp-10h]

  v2 = *(_QWORD **)(a1 + 40);
  if ( v2 == *(_QWORD **)(a1 + 48) )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    sub_180011C04(*v2 + 56LL, &v5);
    sub_18001268C(v5, a2);
    if ( v6 )
      sub_18001060C(v6);
  }
  return a2;
}
