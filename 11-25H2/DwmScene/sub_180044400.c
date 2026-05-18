/*
 * XREFs of sub_180044400 @ 0x180044400
 * Callers:
 *     sub_1800444D0 @ 0x1800444D0 (sub_1800444D0.c)
 * Callees:
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 *     sub_180010AE8 @ 0x180010AE8 (sub_180010AE8.c)
 *     sub_180010B10 @ 0x180010B10 (sub_180010B10.c)
 *     sub_180010F44 @ 0x180010F44 (sub_180010F44.c)
 *     sub_18002851C @ 0x18002851C (sub_18002851C.c)
 *     sub_180031634 @ 0x180031634 (sub_180031634.c)
 *     sub_180044AAC @ 0x180044AAC (sub_180044AAC.c)
 */

__int64 *__fastcall sub_180044400(__int64 a1, __int64 *a2)
{
  __int64 *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int128 v8; // [rsp+28h] [rbp-30h] BYREF
  _BYTE v9[32]; // [rsp+38h] [rbp-20h] BYREF

  sub_180044AAC(a2);
  sub_18002851C(a1 + 808, (__int64)v9);
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
    sub_180010B10(v4, v6, (__int64)&v8);
  else
    sub_180010AE8((__int64)v4, &v8);
  if ( *((_QWORD *)&v8 + 1) )
    sub_180010544(*((volatile signed __int32 **)&v8 + 1));
  sub_180010F44((__int64)v9);
  sub_180031634(a1, *a2, 1);
  return a2;
}
