/*
 * XREFs of sub_180090D40 @ 0x180090D40
 * Callers:
 *     sub_18008DE6C @ 0x18008DE6C (sub_18008DE6C.c)
 * Callees:
 *     sub_1800138F8 @ 0x1800138F8 (sub_1800138F8.c)
 *     sub_18001E5E0 @ 0x18001E5E0 (sub_18001E5E0.c)
 *     sub_180090A30 @ 0x180090A30 (sub_180090A30.c)
 */

__int64 __fastcall sub_180090D40(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rsi
  _QWORD *v7; // r12
  _QWORD *v8; // r15
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r11
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // r13
  bool v17; // bl
  _QWORD *v18; // rax
  __int64 v20; // rax
  __int64 v21; // r11
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // r12
  bool v25; // bl
  _QWORD *v26; // [rsp+20h] [rbp-58h] BYREF
  _QWORD *v27; // [rsp+28h] [rbp-50h]
  __int64 v28; // [rsp+30h] [rbp-48h]
  __int64 v30; // [rsp+88h] [rbp+10h]

  if ( a2 != a3 )
  {
    v6 = a1[3];
    v7 = *(_QWORD **)(a2 + 8);
    v8 = (_QWORD *)a1[1];
    v26 = a1 + 1;
    v27 = v7;
    v28 = a2;
    v9 = sub_1800138F8(a2 + 16);
    v12 = sub_18001E5E0(v11, v9, *(_QWORD *)(v10 + 32));
    v14 = 2 * (a1[6] & v12);
    v15 = *(_QWORD *)(v6 + 16 * (a1[6] & v12) + 8);
    v16 = *(_QWORD *)(v6 + 8 * v14);
    v30 = *(_QWORD *)(v6 + 8 * v14 + 8);
    while ( 1 )
    {
      v17 = v13 == v15;
      sub_180090A30(&v26);
      if ( v17 )
        break;
      v13 = v28;
      v15 = v30;
      if ( v28 == a3 )
      {
        if ( v16 == a2 )
LABEL_6:
          *(_QWORD *)(v6 + 8 * v14) = v13;
        goto LABEL_7;
      }
    }
    if ( v16 == a2 )
    {
      *(_QWORD *)(v6 + 8 * v14) = v8;
      v7 = v8;
    }
    for ( *(_QWORD *)(v6 + 8 * v14 + 8) = v7; ; *(_QWORD *)(v6 + 8 * v14 + 8) = v8 )
    {
      v13 = v28;
      if ( v28 == a3 )
        break;
      v20 = sub_1800138F8(v28 + 16);
      v23 = sub_18001E5E0(v22, v20, *(_QWORD *)(v21 + 32));
      v14 = 2 * (a1[6] & v23);
      v24 = *(_QWORD *)(v6 + 16 * (a1[6] & v23) + 8);
      while ( 1 )
      {
        v25 = v13 == v24;
        sub_180090A30(&v26);
        if ( v25 )
          break;
        v13 = v28;
        if ( v28 == a3 )
          goto LABEL_6;
      }
      *(_QWORD *)(v6 + 8 * v14) = v8;
    }
LABEL_7:
    v18 = v27;
    *v27 = v13;
    *(_QWORD *)(v13 + 8) = v18;
  }
  return a3;
}
