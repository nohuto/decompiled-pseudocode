/*
 * XREFs of sub_18004CF28 @ 0x18004CF28
 * Callers:
 *     sub_180033500 @ 0x180033500 (sub_180033500.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     sub_1800137F8 @ 0x1800137F8 (sub_1800137F8.c)
 *     sub_18001B7E8 @ 0x18001B7E8 (sub_18001B7E8.c)
 *     sub_18001C2C0 @ 0x18001C2C0 (sub_18001C2C0.c)
 *     sub_18004A524 @ 0x18004A524 (sub_18004A524.c)
 *     sub_18004A598 @ 0x18004A598 (sub_18004A598.c)
 *     sub_18004D4D0 @ 0x18004D4D0 (sub_18004D4D0.c)
 *     sub_18004D5B4 @ 0x18004D5B4 (sub_18004D5B4.c)
 *     sub_18005BDE0 @ 0x18005BDE0 (sub_18005BDE0.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_18004CF28(__int64 a1)
{
  __int64 v1; // r15
  __int64 v3; // rcx
  __int64 v4; // r14
  __int64 *j; // rbx
  __int64 **v6; // rax
  __int64 *i; // rax
  __int64 *v8; // rcx
  __int64 v9; // rbx
  _QWORD *v10; // rbx
  _QWORD *v11; // rbx
  _QWORD *v12; // rbx
  __int64 result; // rax
  __int64 k; // rbx
  _BYTE *v15; // rax
  __int64 m; // rbx
  _BYTE *v17; // rax
  __int64 v18[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v19; // [rsp+50h] [rbp+8h] BYREF

  v1 = a1 + 18560;
  v3 = **(_QWORD **)(a1 + 18560);
  v19 = v3;
  while ( !*(_BYTE *)(v3 + 25) )
  {
    sub_18005BDE0(*(_QWORD *)(v3 + 64));
    sub_18001C2C0(&v19);
    v3 = v19;
  }
  v4 = a1 + 18592;
  j = **(__int64 ***)(a1 + 18592);
  while ( !*((_BYTE *)j + 25) )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)j[8] + 8LL))(j[8]);
    v6 = (__int64 **)j[2];
    if ( *((_BYTE *)v6 + 25) )
    {
      for ( i = (__int64 *)j[1]; !*((_BYTE *)i + 25) && j == (__int64 *)i[2]; i = (__int64 *)i[1] )
        j = i;
      j = i;
    }
    else
    {
      v8 = *v6;
      for ( j = (__int64 *)j[2]; !*((_BYTE *)v8 + 25); v8 = (__int64 *)*v8 )
        j = v8;
    }
  }
  v9 = *(_QWORD *)(a1 + 18576);
  sub_18004A524(a1 + 18576, a1 + 18576, *(char **)(v9 + 8));
  *(_QWORD *)(v9 + 8) = v9;
  *(_QWORD *)v9 = v9;
  *(_QWORD *)(v9 + 16) = v9;
  *(_QWORD *)(a1 + 18584) = 0LL;
  sub_18004D4D0(v1);
  v10 = *(_QWORD **)v4;
  sub_18004A598(a1 + 18592, a1 + 18592, *(char **)(*(_QWORD *)v4 + 8LL));
  v10[1] = v10;
  *v10 = v10;
  v10[2] = v10;
  *(_QWORD *)(a1 + 18600) = 0LL;
  v11 = *(_QWORD **)(a1 + 16);
  sub_18001B7E8(a1 + 16, a1 + 16, v11[1]);
  v11[1] = v11;
  *v11 = v11;
  v11[2] = v11;
  *(_QWORD *)(a1 + 24) = 0LL;
  v12 = *(_QWORD **)(a1 + 2088);
  sub_18001B7E8(a1 + 2088, a1 + 2088, v12[1]);
  v12[1] = v12;
  *v12 = v12;
  v12[2] = v12;
  *(_OWORD *)v18 = 0LL;
  *(_QWORD *)(a1 + 2096) = 0LL;
  sub_180011010((_QWORD *)(a1 + 18648), v18);
  if ( v18[1] )
    sub_18001050C(v18[1]);
  *(_OWORD *)v18 = 0LL;
  result = (__int64)sub_180011010((_QWORD *)(a1 + 18632), v18);
  if ( v18[1] )
    result = sub_18001050C(v18[1]);
  for ( k = a1 + 32; k != a1 + 2080; k += 32LL )
  {
    v15 = (_BYTE *)sub_1800137F8(k);
    *(_QWORD *)(k + 16) = 0LL;
    *v15 = 0;
    result = sub_18004D5B4(k);
  }
  for ( m = a1 + 2104; m != a1 + 18488; m += 32LL )
  {
    v17 = (_BYTE *)sub_1800137F8(m);
    *(_QWORD *)(m + 16) = 0LL;
    *v17 = 0;
    result = sub_18004D5B4(m);
  }
  return result;
}
