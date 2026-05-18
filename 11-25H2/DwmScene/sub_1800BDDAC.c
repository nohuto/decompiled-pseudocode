/*
 * XREFs of sub_1800BDDAC @ 0x1800BDDAC
 * Callers:
 *     sub_1800BDB30 @ 0x1800BDB30 (sub_1800BDB30.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_18001C2C0 @ 0x18001C2C0 (sub_18001C2C0.c)
 *     sub_180027138 @ 0x180027138 (sub_180027138.c)
 *     sub_180040A14 @ 0x180040A14 (sub_180040A14.c)
 *     sub_1800BC20C @ 0x1800BC20C (sub_1800BC20C.c)
 *     sub_1800BC268 @ 0x1800BC268 (sub_1800BC268.c)
 *     sub_1800BC360 @ 0x1800BC360 (sub_1800BC360.c)
 *     sub_1800BC44C @ 0x1800BC44C (sub_1800BC44C.c)
 *     sub_1800BD88C @ 0x1800BD88C (sub_1800BD88C.c)
 *     sub_1800BEB08 @ 0x1800BEB08 (sub_1800BEB08.c)
 */

__int64 __fastcall sub_1800BDDAC(__int64 a1)
{
  __int64 result; // rax
  __int64 *v3; // r15
  signed int v4; // esi
  __int64 v5; // rcx
  unsigned int v6; // r10d
  __int64 v7; // rax
  __int64 v8; // rbx
  char *v9; // rdx
  unsigned int v10; // r10d
  __int64 v11; // rcx
  __int64 *v12; // rbx
  __int64 *v13; // rax
  __int64 *i; // rax
  __int64 v15; // r14
  unsigned int v16; // esi
  __int64 *v17; // rsi
  __int64 v18; // r9
  __int64 v19; // r10
  __int64 v20; // rbx
  unsigned __int64 v21; // rdx
  __int64 v22; // r11
  unsigned __int64 v23; // rdx
  __int64 v24; // r11
  __int64 v25; // r9
  __int64 *v26; // rax
  _BYTE v27[16]; // [rsp+20h] [rbp-60h] BYREF
  char v28; // [rsp+30h] [rbp-50h] BYREF
  char v29; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v30[6]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v31; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v32; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v33; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v34; // [rsp+D8h] [rbp+58h] BYREF

  result = *(unsigned int *)(a1 + 1592);
  if ( !(_DWORD)result )
    return result;
  v3 = (__int64 *)(a1 + 1600);
  v4 = (*(_DWORD *)(a1 + 1596) - (int)result + 21) % 0x14u;
  do
  {
    LODWORD(v31) = *(_DWORD *)(56LL * v4 + a1 + 488);
    v5 = sub_180040A14(v3, v30, &v31)[2];
    if ( !*(_BYTE *)(v5 + 25) && v6 >= *(_DWORD *)(v5 + 32) )
    {
      v7 = sub_1800BC360(v3, (__int64)v27, &v31);
      result = (__int64)sub_1800BD88C(a1, &v32, *(_DWORD *)(*(_QWORD *)v7 + 44LL));
      v8 = v32;
      if ( v32 <= 0 )
        break;
      v9 = &v28;
      goto LABEL_27;
    }
    result = (__int64)sub_180040A14(v3, v30, &v31);
    v11 = *v3;
    v12 = *(__int64 **)(result + 16);
    if ( v12 == *(__int64 **)*v3 )
      break;
    if ( *((_BYTE *)v12 + 25) )
    {
      v12 = (__int64 *)v12[2];
    }
    else
    {
      v13 = (__int64 *)*v12;
      if ( *(_BYTE *)(*v12 + 25) )
      {
        for ( i = (__int64 *)v12[1]; !*((_BYTE *)i + 25) && v12 == (__int64 *)*i; i = (__int64 *)i[1] )
          v12 = i;
        if ( !*((_BYTE *)v12 + 25) )
          v12 = i;
      }
      else
      {
        do
        {
          v12 = v13;
          v13 = (__int64 *)v13[2];
        }
        while ( !*((_BYTE *)v13 + 25) );
      }
    }
    result = *(_QWORD *)(v11 + 8);
    v15 = *v3;
    while ( !*(_BYTE *)(result + 25) )
    {
      if ( v10 >= *(_DWORD *)(result + 32) )
      {
        result = *(_QWORD *)(result + 16);
      }
      else
      {
        v15 = result;
        result = *(_QWORD *)result;
      }
    }
    if ( v15 == v11 )
      break;
    sub_1800BD88C(a1, &v33, *((_DWORD *)v12 + 11));
    result = (__int64)sub_1800BD88C(a1, &v34, *(_DWORD *)(v15 + 44));
    if ( v33 <= 0 )
      break;
    result = v34;
    if ( v34 <= 0 )
      break;
    v9 = &v29;
    v8 = v33
       + ((int)v31 - *((_DWORD *)v12 + 8))
       * ((v34 - v33)
        / (unsigned int)(*(_DWORD *)(v15 + 32) - *((_DWORD *)v12 + 8)));
LABEL_27:
    *(_QWORD *)(*(_QWORD *)sub_1800BC268((__int64 *)(a1 + 1632), (__int64)v9, &v31) + 40LL) = v8;
    --*(_DWORD *)(a1 + 1592);
    v16 = v4 + 1;
    result = 20 * (v16 / 0x14);
    v4 = v16 % 0x14;
  }
  while ( *(_DWORD *)(a1 + 1592) );
  if ( *(_QWORD *)(a1 + 1608) > 0x14uLL )
  {
    v17 = *(__int64 **)(a1 + 1600);
    v31 = *v17;
    do
      result = (__int64)sub_18001C2C0(&v31);
    while ( v19 != 1 );
    v20 = v31;
    v31 = v18;
    if ( *(_BYTE *)(v20 + 25) )
    {
      result = sub_1800BC20C(a1 + 1600, a1 + 1600, v17[1]);
      v17[1] = (__int64)v17;
      *v17 = (__int64)v17;
      v17[2] = (__int64)v17;
      *(_QWORD *)(a1 + 1608) = 0LL;
    }
    else
    {
      while ( v18 != v20 )
      {
        sub_18001C2C0(&v31);
        v26 = sub_180027138((_QWORD *)(a1 + 1600), v25);
        result = sub_180010134(v26, 0x48uLL);
        v18 = v31;
      }
    }
  }
  v21 = *(_QWORD *)(a1 + 1624);
  if ( v21 > 0x14 )
  {
    v31 = **(_QWORD **)(a1 + 1616);
    sub_1800BC44C(&v31, v21 - 20);
    result = sub_1800BEB08(a1 + 1616, &v31, v22, v31);
  }
  v23 = *(_QWORD *)(a1 + 1640);
  if ( v23 > 0x14 )
  {
    v31 = **(_QWORD **)(a1 + 1632);
    sub_1800BC44C(&v31, v23 - 20);
    return sub_1800BEB08(a1 + 1632, &v31, v24, v31);
  }
  return result;
}
