/*
 * XREFs of sub_180015DA8 @ 0x180015DA8
 * Callers:
 *     sub_180015E64 @ 0x180015E64 (sub_180015E64.c)
 * Callees:
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 *     sub_180010AE8 @ 0x180010AE8 (sub_180010AE8.c)
 *     sub_180010B10 @ 0x180010B10 (sub_180010B10.c)
 *     sub_180010F44 @ 0x180010F44 (sub_180010F44.c)
 *     sub_180015174 @ 0x180015174 (sub_180015174.c)
 *     sub_180016E68 @ 0x180016E68 (sub_180016E68.c)
 *     sub_18002851C @ 0x18002851C (sub_18002851C.c)
 *     sub_180031634 @ 0x180031634 (sub_180031634.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_180015DA8(__int64 a1, _QWORD *a2)
{
  __int64 *v4; // r9
  __int64 v5; // rdx
  __int64 v7; // [rsp+28h] [rbp-30h] BYREF
  volatile signed __int32 *v8; // [rsp+30h] [rbp-28h]
  _BYTE v9[32]; // [rsp+38h] [rbp-20h] BYREF

  sub_180016E68(a2);
  sub_18002851C(a1 + 808, v9);
  sub_180015174(&v7, a2);
  v5 = *(_QWORD *)(a1 + 872);
  if ( v5 == *(_QWORD *)(a1 + 880) )
    sub_180010B10(v4, v5, (__int64)&v7);
  else
    sub_180010AE8((__int64)v4, &v7);
  if ( v8 )
    sub_180010544(v8);
  sub_180010F44((__int64)v9);
  sub_180031634(a1, *a2, 1LL);
  return a2;
}
