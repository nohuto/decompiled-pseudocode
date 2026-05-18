/*
 * XREFs of sub_18006A24C @ 0x18006A24C
 * Callers:
 *     sub_18006B954 @ 0x18006B954 (sub_18006B954.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011C64 @ 0x180011C64 (sub_180011C64.c)
 *     sub_1800393B8 @ 0x1800393B8 (sub_1800393B8.c)
 *     sub_18003BD1C @ 0x18003BD1C (sub_18003BD1C.c)
 *     sub_18006A32C @ 0x18006A32C (sub_18006A32C.c)
 *     sub_18006AF28 @ 0x18006AF28 (sub_18006AF28.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall sub_18006A24C(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // xmm6_8
  __int128 v9; // [rsp+30h] [rbp-48h] BYREF
  __int128 v10; // [rsp+40h] [rbp-38h] BYREF
  __int64 v11; // [rsp+50h] [rbp-28h] BYREF
  __int64 v12; // [rsp+58h] [rbp-20h]

  sub_18003BD1C(a1);
  v4 = *(_QWORD *)sub_18006A32C(a1, &v10);
  if ( *((_QWORD *)&v10 + 1) )
    sub_18001050C(*((__int64 *)&v10 + 1));
  if ( v4 )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    v5 = sub_180011C64(a1 + 8, &v11);
    sub_18006AF28(&v9, v5);
    if ( v12 )
      sub_18001050C(v12);
    v6 = *((_QWORD *)&v9 + 1);
    if ( *((_QWORD *)&v9 + 1) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v9 + 1) + 8LL));
      v6 = *((_QWORD *)&v9 + 1);
    }
    v7 = v9;
    v10 = v9;
    sub_1800393B8(a1, &v10);
    if ( *((_QWORD *)&v10 + 1) )
      sub_18001050C(*((__int64 *)&v10 + 1));
    *a2 = v7;
    a2[1] = v6;
  }
  return a2;
}
