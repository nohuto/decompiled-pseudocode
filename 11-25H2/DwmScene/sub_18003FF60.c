/*
 * XREFs of sub_18003FF60 @ 0x18003FF60
 * Callers:
 *     sub_18003D16C @ 0x18003D16C (sub_18003D16C.c)
 * Callees:
 *     sub_18001E480 @ 0x18001E480 (sub_18001E480.c)
 *     sub_18003DA08 @ 0x18003DA08 (sub_18003DA08.c)
 *     sub_18003FD80 @ 0x18003FD80 (sub_18003FD80.c)
 */

unsigned __int64 __fastcall sub_18003FF60(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 **v7; // rcx
  _QWORD *v8; // r11
  _QWORD *v9; // rbx
  __int64 v10; // rax
  __int64 ***v11; // rdx
  __int64 v12; // r11
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 *v15; // rax
  __int64 *v16; // r10
  _QWORD *v17; // rdx
  _QWORD *v18; // rax
  __int64 **v19; // r10
  __int64 *v20; // r8
  _QWORD *v21; // rdx
  _QWORD *v22; // rax
  _QWORD *v23; // rdx
  __int64 *v24; // rax
  __int64 v26; // [rsp+38h] [rbp+10h] BYREF

  LODWORD(v26) = 0;
  _BitScanReverse64(&v3, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v3 )
    std::_Xlength_error("invalid hash bucket count");
  LODWORD(v26) = 0;
  v4 = a1[1];
  _BitScanReverse64(&v5, (a2 - 1) | 1);
  v6 = 1LL << ((unsigned __int8)v5 + 1);
  sub_18003FD80((__int64)(a1 + 3), 2 * v6, v4);
  a1[7] = v6;
  a1[6] = v6 - 1;
  v8 = *(_QWORD **)a1[1];
  v9 = v8;
  while ( v8 != (_QWORD *)v4 )
  {
    v9 = (_QWORD *)*v9;
    v10 = sub_18001E480((__int64)v7, (__int64)(v8 + 2), 8uLL);
    v13 = a1[3];
    v14 = 2 * (a1[6] & v10);
    if ( *(_QWORD *)(v13 + 16 * (a1[6] & v10)) == v4 )
    {
      *(_QWORD *)(v13 + 16 * (a1[6] & v10)) = v12;
LABEL_7:
      *(_QWORD *)(v13 + 8 * v14 + 8) = v12;
      goto LABEL_15;
    }
    v15 = *(__int64 **)(v13 + 16 * (a1[6] & v10) + 8);
    v7 = *v11;
    if ( *v11 == (__int64 **)v15[2] )
    {
      v16 = (__int64 *)*v15;
      if ( *v15 != v12 )
      {
        v17 = *(_QWORD **)(v12 + 8);
        *v17 = v9;
        v7 = (__int64 **)v9[1];
        *v7 = v16;
        v18 = (_QWORD *)v16[1];
        *v18 = v12;
        v16[1] = (__int64)v7;
        v9[1] = v17;
        *(_QWORD *)(v12 + 8) = v18;
      }
      goto LABEL_7;
    }
    while ( 1 )
    {
      v19 = (__int64 **)(v15 + 1);
      if ( *(__int64 **)(v13 + 8 * v14) == v15 )
        break;
      v15 = *v19;
      if ( v7 == (__int64 **)(*v19)[2] )
      {
        v20 = (__int64 *)*v15;
        v21 = *(_QWORD **)(v12 + 8);
        *v21 = v9;
        v7 = (__int64 **)v9[1];
        *v7 = v20;
        v22 = (_QWORD *)v20[1];
        *v22 = v12;
        v20[1] = (__int64)v7;
        v9[1] = v21;
        *(_QWORD *)(v12 + 8) = v22;
        goto LABEL_15;
      }
    }
    v23 = *(_QWORD **)(v12 + 8);
    *v23 = v9;
    v7 = (__int64 **)v9[1];
    *v7 = v15;
    v24 = *v19;
    *v24 = v12;
    *v19 = (__int64 *)v7;
    v9[1] = v23;
    *(_QWORD *)(v12 + 8) = v24;
    *(_QWORD *)(v13 + 8 * v14) = v12;
LABEL_15:
    v8 = v9;
  }
  v26 = 0LL;
  return sub_18003DA08(&v26);
}
