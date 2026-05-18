/*
 * XREFs of sub_18006A3AC @ 0x18006A3AC
 * Callers:
 *     sub_18006BAB4 @ 0x18006BAB4 (sub_18006BAB4.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011D64 @ 0x180011D64 (sub_180011D64.c)
 *     sub_180039518 @ 0x180039518 (sub_180039518.c)
 *     sub_18003BE7C @ 0x18003BE7C (sub_18003BE7C.c)
 *     sub_18006A48C @ 0x18006A48C (sub_18006A48C.c)
 *     sub_18006B088 @ 0x18006B088 (sub_18006B088.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall sub_18006A3AC(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // xmm6_8
  __int128 v9; // [rsp+30h] [rbp-48h] BYREF
  __int128 v10; // [rsp+40h] [rbp-38h] BYREF
  __int64 v11; // [rsp+50h] [rbp-28h] BYREF
  __int64 v12; // [rsp+58h] [rbp-20h]

  sub_18003BE7C(a1);
  v4 = *(_QWORD *)sub_18006A48C(a1, &v10);
  if ( *((_QWORD *)&v10 + 1) )
    sub_18001060C(*((__int64 *)&v10 + 1));
  if ( v4 )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    v5 = sub_180011D64(a1 + 8, &v11);
    sub_18006B088(&v9, v5);
    if ( v12 )
      sub_18001060C(v12);
    v6 = *((_QWORD *)&v9 + 1);
    if ( *((_QWORD *)&v9 + 1) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v9 + 1) + 8LL));
      v6 = *((_QWORD *)&v9 + 1);
    }
    v7 = v9;
    v10 = v9;
    sub_180039518(a1, &v10);
    if ( *((_QWORD *)&v10 + 1) )
      sub_18001060C(*((__int64 *)&v10 + 1));
    *a2 = v7;
    a2[1] = v6;
  }
  return a2;
}
