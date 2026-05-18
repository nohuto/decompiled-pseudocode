/*
 * XREFs of sub_180068250 @ 0x180068250
 * Callers:
 *     sub_180068420 @ 0x180068420 (sub_180068420.c)
 * Callees:
 *     sub_1800131AC @ 0x1800131AC (sub_1800131AC.c)
 *     sub_18001E5E0 @ 0x18001E5E0 (sub_18001E5E0.c)
 *     sub_18003FEE0 @ 0x18003FEE0 (sub_18003FEE0.c)
 *     sub_18005C69C @ 0x18005C69C (sub_18005C69C.c)
 *     sub_18005ED18 @ 0x18005ED18 (sub_18005ED18.c)
 */

__int64 __fastcall sub_180068250(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // r12
  __int64 *v5; // rdi
  unsigned __int64 v6; // rcx
  __int64 v7; // rbx
  _QWORD *v8; // rbx
  _QWORD *v9; // r11
  __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r11
  __int64 v16; // rbp
  __int64 v17; // rsi
  _QWORD *v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // r11
  __int64 v21; // r8
  _QWORD *v22; // rdx
  _QWORD *v23; // rcx
  _QWORD *v24; // rax
  _QWORD *v25; // r14
  __int64 v26; // r8
  _QWORD *v27; // rdx
  _QWORD *v28; // rcx
  _QWORD *v29; // rax
  _QWORD *v30; // rdx
  _QWORD *v31; // rcx
  _QWORD *v32; // rax
  __int64 v34; // [rsp+58h] [rbp+10h] BYREF

  LODWORD(v34) = 0;
  _BitScanReverse64(&v3, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v3 )
    std::_Xlength_error("invalid hash bucket count");
  LODWORD(v34) = 0;
  v4 = a1[1];
  v5 = a1 + 3;
  _BitScanReverse64(&v6, (a2 - 1) | 1);
  v7 = 1LL << ((unsigned __int8)v6 + 1);
  sub_18003FEE0((__int64)(a1 + 3), 2 * v7, v4);
  a1[7] = v7;
  a1[6] = v7 - 1;
  v8 = *(_QWORD **)a1[1];
  while ( 1 )
  {
    v9 = v8;
    if ( v8 == (_QWORD *)v4 )
      break;
    v8 = (_QWORD *)*v8;
    v10 = (__int64)(v9 + 2);
    v11 = sub_1800131AC((__int64)(v9 + 2));
    v13 = sub_18001E5E0(v12, v11, 2LL * *(_QWORD *)(v10 + 16));
    v16 = *v5;
    v17 = 2 * (a1[6] & v13);
    if ( *(_QWORD *)(*v5 + 16 * (a1[6] & v13)) == v4 )
    {
      *(_QWORD *)(v16 + 16 * (a1[6] & v13)) = v15;
      *(_QWORD *)(v16 + 8 * v17 + 8) = v15;
    }
    else
    {
      v18 = *(_QWORD **)(v16 + 16 * (a1[6] & v13) + 8);
      if ( sub_18005C69C(v14, v10, (__int64)(v18 + 2)) )
      {
        v25 = v18;
        while ( *(_QWORD **)(v16 + 8 * v17) != v25 )
        {
          v18 = (_QWORD *)v18[1];
          v25 = v18;
          if ( !sub_18005C69C(v19, v10, (__int64)(v18 + 2)) )
          {
            v26 = *v18;
            v27 = *(_QWORD **)(v20 + 8);
            *v27 = v8;
            v28 = (_QWORD *)v8[1];
            *v28 = v26;
            v29 = *(_QWORD **)(v26 + 8);
            *v29 = v20;
            *(_QWORD *)(v26 + 8) = v28;
            v8[1] = v27;
            *(_QWORD *)(v20 + 8) = v29;
            goto LABEL_16;
          }
        }
        v30 = *(_QWORD **)(v20 + 8);
        *v30 = v8;
        v31 = (_QWORD *)v8[1];
        *v31 = v18;
        v32 = (_QWORD *)v18[1];
        *v32 = v20;
        v18[1] = v31;
        v8[1] = v30;
        *(_QWORD *)(v20 + 8) = v32;
        *(_QWORD *)(v16 + 8 * v17) = v20;
      }
      else
      {
        v21 = *v18;
        if ( *v18 != v20 )
        {
          v22 = *(_QWORD **)(v20 + 8);
          *v22 = v8;
          v23 = (_QWORD *)v8[1];
          *v23 = v21;
          v24 = *(_QWORD **)(v21 + 8);
          *v24 = v20;
          *(_QWORD *)(v21 + 8) = v23;
          v8[1] = v22;
          *(_QWORD *)(v20 + 8) = v24;
        }
        *(_QWORD *)(v16 + 8 * v17 + 8) = v20;
      }
LABEL_16:
      v5 = a1 + 3;
    }
  }
  v34 = 0LL;
  return sub_18005ED18(&v34);
}
