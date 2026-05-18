/*
 * XREFs of sub_180015BC8 @ 0x180015BC8
 * Callers:
 *     sub_180015C98 @ 0x180015C98 (sub_180015C98.c)
 * Callees:
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 *     sub_180010AE8 @ 0x180010AE8 (sub_180010AE8.c)
 *     sub_180010B10 @ 0x180010B10 (sub_180010B10.c)
 *     sub_180010F44 @ 0x180010F44 (sub_180010F44.c)
 *     sub_180016BAC @ 0x180016BAC (sub_180016BAC.c)
 *     sub_18002851C @ 0x18002851C (sub_18002851C.c)
 *     sub_180031634 @ 0x180031634 (sub_180031634.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_180015BC8(__int64 *a1, _QWORD *a2)
{
  __int64 *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int128 v8; // [rsp+28h] [rbp-30h] BYREF
  _BYTE v9[32]; // [rsp+38h] [rbp-20h] BYREF

  sub_180016BAC(a2);
  sub_18002851C(a1 + 101, v9);
  v4 = a1 + 108;
  v8 = 0LL;
  v5 = a2[1];
  if ( v5 )
  {
    *(_QWORD *)&v8 = *a2;
    *((_QWORD *)&v8 + 1) = v5;
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 12));
  }
  v6 = a1[109];
  if ( v6 == a1[110] )
    sub_180010B10(v4, v6, (__int64)&v8);
  else
    sub_180010AE8((__int64)v4, &v8);
  if ( *((_QWORD *)&v8 + 1) )
    sub_180010544(*((volatile signed __int32 **)&v8 + 1));
  sub_180010F44((__int64)v9);
  sub_180031634(a1, *a2, 1LL);
  return a2;
}
