/*
 * XREFs of sub_180044674 @ 0x180044674
 * Callers:
 *     sub_180044650 @ 0x180044650 (sub_180044650.c)
 * Callees:
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 *     sub_180010BE8 @ 0x180010BE8 (sub_180010BE8.c)
 *     sub_180010C10 @ 0x180010C10 (sub_180010C10.c)
 *     sub_180011044 @ 0x180011044 (sub_180011044.c)
 *     sub_18002867C @ 0x18002867C (sub_18002867C.c)
 *     sub_180031794 @ 0x180031794 (sub_180031794.c)
 *     sub_180044CD8 @ 0x180044CD8 (sub_180044CD8.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall sub_180044674(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int128 v10; // [rsp+28h] [rbp-30h] BYREF
  _BYTE v11[32]; // [rsp+38h] [rbp-20h] BYREF

  sub_180044CD8(a2, a4);
  sub_18002867C(a1 + 808, (__int64)v11);
  v6 = (__int64 *)(a1 + 864);
  v10 = 0LL;
  v7 = a2[1];
  if ( v7 )
  {
    *(_QWORD *)&v10 = *a2;
    *((_QWORD *)&v10 + 1) = v7;
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 12));
  }
  v8 = *(_QWORD *)(a1 + 872);
  if ( v8 == *(_QWORD *)(a1 + 880) )
    sub_180010C10(v6, v8, (__int64)&v10);
  else
    sub_180010BE8((__int64)v6, &v10);
  if ( *((_QWORD *)&v10 + 1) )
    sub_180010644(*((volatile signed __int32 **)&v10 + 1));
  sub_180011044((__int64)v11);
  sub_180031794(a1, *a2, 1);
  return a2;
}
