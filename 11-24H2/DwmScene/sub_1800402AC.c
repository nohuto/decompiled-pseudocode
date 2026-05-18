/*
 * XREFs of sub_1800402AC @ 0x1800402AC
 * Callers:
 *     sub_18003DB68 @ 0x18003DB68 (sub_18003DB68.c)
 * Callees:
 *     sub_18001E5E0 @ 0x18001E5E0 (sub_18001E5E0.c)
 *     sub_18003FF8C @ 0x18003FF8C (sub_18003FF8C.c)
 */

__int64 __fastcall sub_1800402AC(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *v6; // r12
  _QWORD *v7; // r15
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // r11
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // r13
  bool v14; // bl
  __int64 v15; // rcx
  _QWORD *v16; // rax
  __int64 v18; // rax
  __int64 v19; // r12
  bool v20; // bl
  _QWORD *v21; // [rsp+20h] [rbp-58h] BYREF
  _QWORD *v22; // [rsp+28h] [rbp-50h]
  __int64 v23; // [rsp+30h] [rbp-48h]
  __int64 v25; // [rsp+88h] [rbp+10h]

  if ( a2 != a3 )
  {
    v6 = *(_QWORD **)(a2 + 8);
    v7 = (_QWORD *)a1[1];
    v8 = a1[3];
    v21 = a1 + 1;
    v22 = v6;
    v23 = a2;
    v9 = sub_18001E5E0((__int64)a1, a2 + 16, 8uLL);
    v11 = 2 * (a1[6] & v9);
    v12 = *(_QWORD *)(v8 + 16 * (a1[6] & v9) + 8);
    v13 = *(_QWORD *)(v8 + 8 * v11);
    v25 = *(_QWORD *)(v8 + 8 * v11 + 8);
    while ( 1 )
    {
      v14 = v10 == v12;
      sub_18003FF8C(&v21);
      if ( v14 )
        break;
      v10 = v23;
      v12 = v25;
      if ( v23 == a3 )
      {
        if ( v13 == a2 )
LABEL_6:
          *(_QWORD *)(v8 + 8 * v11) = v10;
        goto LABEL_7;
      }
    }
    if ( v13 == a2 )
    {
      *(_QWORD *)(v8 + 8 * v11) = v7;
      v6 = v7;
    }
    for ( *(_QWORD *)(v8 + 8 * v11 + 8) = v6; ; *(_QWORD *)(v8 + 8 * v11 + 8) = v7 )
    {
      v10 = v23;
      if ( v23 == a3 )
        break;
      v18 = sub_18001E5E0(v15, v23 + 16, 8uLL);
      v11 = 2 * (a1[6] & v18);
      v19 = *(_QWORD *)(v8 + 16 * (a1[6] & v18) + 8);
      while ( 1 )
      {
        v20 = v10 == v19;
        sub_18003FF8C(&v21);
        if ( v20 )
          break;
        v10 = v23;
        if ( v23 == a3 )
          goto LABEL_6;
      }
      *(_QWORD *)(v8 + 8 * v11) = v7;
    }
LABEL_7:
    v16 = v22;
    *v22 = v10;
    *(_QWORD *)(v10 + 8) = v16;
  }
  return a3;
}
