/*
 * XREFs of sub_180015EA8 @ 0x180015EA8
 * Callers:
 *     sub_180015F64 @ 0x180015F64 (sub_180015F64.c)
 * Callees:
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 *     sub_180010BE8 @ 0x180010BE8 (sub_180010BE8.c)
 *     sub_180010C10 @ 0x180010C10 (sub_180010C10.c)
 *     sub_180011044 @ 0x180011044 (sub_180011044.c)
 *     sub_180015274 @ 0x180015274 (sub_180015274.c)
 *     sub_180016F68 @ 0x180016F68 (sub_180016F68.c)
 *     sub_18002867C @ 0x18002867C (sub_18002867C.c)
 *     sub_180031794 @ 0x180031794 (sub_180031794.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_180015EA8(__int64 a1, _QWORD *a2)
{
  __int64 *v4; // r9
  __int64 v5; // rdx
  __int64 v7; // [rsp+28h] [rbp-30h] BYREF
  volatile signed __int32 *v8; // [rsp+30h] [rbp-28h]
  _BYTE v9[32]; // [rsp+38h] [rbp-20h] BYREF

  sub_180016F68(a2);
  sub_18002867C(a1 + 808, v9);
  sub_180015274(&v7, a2);
  v5 = *(_QWORD *)(a1 + 872);
  if ( v5 == *(_QWORD *)(a1 + 880) )
    sub_180010C10(v4, v5, (__int64)&v7);
  else
    sub_180010BE8((__int64)v4, &v7);
  if ( v8 )
    sub_180010644(v8);
  sub_180011044((__int64)v9);
  sub_180031794(a1, *a2, 1LL);
  return a2;
}
