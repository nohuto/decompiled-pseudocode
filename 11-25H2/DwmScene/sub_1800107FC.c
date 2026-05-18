/*
 * XREFs of sub_1800107FC @ 0x1800107FC
 * Callers:
 *     sub_180011190 @ 0x180011190 (sub_180011190.c)
 *     sub_18006BDB0 @ 0x18006BDB0 (sub_18006BDB0.c)
 *     sub_18006C60C @ 0x18006C60C (sub_18006C60C.c)
 *     sub_1800844A0 @ 0x1800844A0 (sub_1800844A0.c)
 *     sub_180089370 @ 0x180089370 (sub_180089370.c)
 *     sub_18008B8C0 @ 0x18008B8C0 (sub_18008B8C0.c)
 *     sub_1800925E0 @ 0x1800925E0 (sub_1800925E0.c)
 *     sub_1800BCE20 @ 0x1800BCE20 (sub_1800BCE20.c)
 *     sub_1800CBD30 @ 0x1800CBD30 (sub_1800CBD30.c)
 * Callees:
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 *     sub_180010AE8 @ 0x180010AE8 (sub_180010AE8.c)
 *     sub_180010B10 @ 0x180010B10 (sub_180010B10.c)
 *     sub_180010CE8 @ 0x180010CE8 (sub_180010CE8.c)
 *     sub_180010F44 @ 0x180010F44 (sub_180010F44.c)
 *     sub_18002851C @ 0x18002851C (sub_18002851C.c)
 *     sub_180031634 @ 0x180031634 (sub_180031634.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_1800107FC(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int128 v8; // [rsp+28h] [rbp-30h] BYREF
  _BYTE v9[32]; // [rsp+38h] [rbp-20h] BYREF

  sub_180010CE8(a2);
  sub_18002851C(a1 + 808, v9);
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
    sub_180010B10(v4, v6, &v8);
  else
    sub_180010AE8(v4, &v8);
  if ( *((_QWORD *)&v8 + 1) )
    sub_180010544(*((volatile signed __int32 **)&v8 + 1));
  sub_180010F44(v9);
  sub_180031634(a1, *a2, 0LL);
  return a2;
}
