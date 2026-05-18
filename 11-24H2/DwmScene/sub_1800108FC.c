/*
 * XREFs of sub_1800108FC @ 0x1800108FC
 * Callers:
 *     sub_180011290 @ 0x180011290 (sub_180011290.c)
 *     sub_18006BF10 @ 0x18006BF10 (sub_18006BF10.c)
 *     sub_18006C76C @ 0x18006C76C (sub_18006C76C.c)
 *     sub_180084600 @ 0x180084600 (sub_180084600.c)
 *     sub_1800894D0 @ 0x1800894D0 (sub_1800894D0.c)
 *     sub_18008BA20 @ 0x18008BA20 (sub_18008BA20.c)
 *     sub_180092740 @ 0x180092740 (sub_180092740.c)
 *     sub_1800BCF80 @ 0x1800BCF80 (sub_1800BCF80.c)
 *     sub_1800CBE90 @ 0x1800CBE90 (sub_1800CBE90.c)
 * Callees:
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 *     sub_180010BE8 @ 0x180010BE8 (sub_180010BE8.c)
 *     sub_180010C10 @ 0x180010C10 (sub_180010C10.c)
 *     sub_180010DE8 @ 0x180010DE8 (sub_180010DE8.c)
 *     sub_180011044 @ 0x180011044 (sub_180011044.c)
 *     sub_18002867C @ 0x18002867C (sub_18002867C.c)
 *     sub_180031794 @ 0x180031794 (sub_180031794.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_1800108FC(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int128 v8; // [rsp+28h] [rbp-30h] BYREF
  _BYTE v9[32]; // [rsp+38h] [rbp-20h] BYREF

  sub_180010DE8(a2);
  sub_18002867C(a1 + 808, v9);
  v4 = a1 + 864;
  v8 = 0LL;
  v5 = a2[1];
  if ( v5 )
  {
    *(_QWORD *)&v8 = *a2;
    *((_QWORD *)&v8 + 1) = v5;
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 12));
  }
  v6 = *(_QWORD *)(a1 + 872);
  if ( v6 == *(_QWORD *)(a1 + 880) )
    sub_180010C10(v4, v6, &v8);
  else
    sub_180010BE8(v4, &v8);
  if ( *((_QWORD *)&v8 + 1) )
    sub_180010644(*((volatile signed __int32 **)&v8 + 1));
  sub_180011044(v9);
  sub_180031794(a1, *a2, 0LL);
  return a2;
}
