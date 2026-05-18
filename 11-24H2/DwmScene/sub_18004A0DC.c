/*
 * XREFs of sub_18004A0DC @ 0x18004A0DC
 * Callers:
 *     sub_18004CA78 @ 0x18004CA78 (sub_18004CA78.c)
 * Callees:
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 *     sub_180010BE8 @ 0x180010BE8 (sub_180010BE8.c)
 *     sub_180010C10 @ 0x180010C10 (sub_180010C10.c)
 *     sub_180011044 @ 0x180011044 (sub_180011044.c)
 *     sub_18002867C @ 0x18002867C (sub_18002867C.c)
 *     sub_180031794 @ 0x180031794 (sub_180031794.c)
 *     sub_18004B31C @ 0x18004B31C (sub_18004B31C.c)
 */

__int64 *__fastcall sub_18004A0DC(__int64 a1, __int64 *a2)
{
  __int64 *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int128 v8; // [rsp+28h] [rbp-30h] BYREF
  _BYTE v9[32]; // [rsp+38h] [rbp-20h] BYREF

  sub_18004B31C(a2);
  sub_18002867C(a1 + 808, (__int64)v9);
  v4 = (__int64 *)(a1 + 864);
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
    sub_180010C10(v4, v6, (__int64)&v8);
  else
    sub_180010BE8((__int64)v4, &v8);
  if ( *((_QWORD *)&v8 + 1) )
    sub_180010644(*((volatile signed __int32 **)&v8 + 1));
  sub_180011044((__int64)v9);
  sub_180031794(a1, *a2, 1);
  return a2;
}
