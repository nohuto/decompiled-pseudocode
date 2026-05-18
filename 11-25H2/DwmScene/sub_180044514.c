/*
 * XREFs of sub_180044514 @ 0x180044514
 * Callers:
 *     sub_1800444F0 @ 0x1800444F0 (sub_1800444F0.c)
 * Callees:
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 *     sub_180010AE8 @ 0x180010AE8 (sub_180010AE8.c)
 *     sub_180010B10 @ 0x180010B10 (sub_180010B10.c)
 *     sub_180010F44 @ 0x180010F44 (sub_180010F44.c)
 *     sub_18002851C @ 0x18002851C (sub_18002851C.c)
 *     sub_180031634 @ 0x180031634 (sub_180031634.c)
 *     sub_180044B78 @ 0x180044B78 (sub_180044B78.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall sub_180044514(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int128 v10; // [rsp+28h] [rbp-30h] BYREF
  _BYTE v11[32]; // [rsp+38h] [rbp-20h] BYREF

  sub_180044B78(a2, a4);
  sub_18002851C(a1 + 808, (__int64)v11);
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
    sub_180010B10(v6, v8, (__int64)&v10);
  else
    sub_180010AE8((__int64)v6, &v10);
  if ( *((_QWORD *)&v10 + 1) )
    sub_180010544(*((volatile signed __int32 **)&v10 + 1));
  sub_180010F44((__int64)v11);
  sub_180031634(a1, *a2, 1);
  return a2;
}
