/*
 * XREFs of sub_18009099C @ 0x18009099C
 * Callers:
 *     sub_18008D908 @ 0x18008D908 (sub_18008D908.c)
 * Callees:
 *     sub_1800137F8 @ 0x1800137F8 (sub_1800137F8.c)
 *     sub_18001E480 @ 0x18001E480 (sub_18001E480.c)
 *     sub_18003FD80 @ 0x18003FD80 (sub_18003FD80.c)
 *     sub_18008D574 @ 0x18008D574 (sub_18008D574.c)
 *     sub_18008DD0C @ 0x18008DD0C (sub_18008DD0C.c)
 */

unsigned __int64 __fastcall sub_18009099C(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rcx
  __int64 v3; // rbp
  unsigned __int64 v4; // rcx
  __int64 v5; // rbx
  _QWORD *v6; // rbx
  _QWORD *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r11
  __int64 v13; // r15
  __int64 v14; // r14
  _QWORD *v15; // rsi
  __int64 v16; // rcx
  _QWORD *v17; // r8
  _QWORD *v18; // rdx
  _QWORD *v19; // rcx
  _QWORD *v20; // rax
  _QWORD *v21; // r13
  __int64 v22; // r8
  _QWORD *v23; // rdx
  _QWORD *v24; // rcx
  _QWORD *v25; // rax
  _QWORD *v26; // rdx
  _QWORD *v27; // rcx
  _QWORD *v28; // rax
  __int64 v30; // [rsp+50h] [rbp+8h] BYREF

  HIDWORD(v30) = HIDWORD(a1);
  LODWORD(v30) = 0;
  _BitScanReverse64(&v2, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v2 )
    std::_Xlength_error("invalid hash bucket count");
  LODWORD(v30) = 0;
  v3 = qword_1801C8A58;
  _BitScanReverse64(&v4, (a2 - 1) | 1);
  v5 = 1LL << ((unsigned __int8)v4 + 1);
  sub_18003FD80((__int64)&qword_1801C8A68, 2 * v5, qword_1801C8A58);
  qword_1801C8A88 = v5;
  qword_1801C8A80 = v5 - 1;
  v6 = *(_QWORD **)qword_1801C8A58;
  v7 = *(_QWORD **)qword_1801C8A58;
  while ( v6 != (_QWORD *)v3 )
  {
    v7 = (_QWORD *)*v7;
    v8 = sub_1800137F8((__int64)(v6 + 2));
    v10 = sub_18001E480(v9, v8, v6[4]);
    v13 = qword_1801C8A68;
    v14 = 2 * (v12 & v10);
    if ( *(_QWORD *)(qword_1801C8A68 + 16 * (v12 & v10)) == v3 )
    {
      *(_QWORD *)(qword_1801C8A68 + 16 * (v12 & v10)) = v6;
LABEL_7:
      *(_QWORD *)(v13 + 8 * v14 + 8) = v6;
      goto LABEL_16;
    }
    v15 = *(_QWORD **)(qword_1801C8A68 + 16 * (v12 & v10) + 8);
    if ( !sub_18008D574(v11, (__int64)(v6 + 2), (__int64)(v15 + 2)) )
    {
      v17 = (_QWORD *)*v15;
      if ( (_QWORD *)*v15 != v6 )
      {
        v18 = (_QWORD *)v6[1];
        *v18 = v7;
        v19 = (_QWORD *)v7[1];
        *v19 = v17;
        v20 = (_QWORD *)v17[1];
        *v20 = v6;
        v17[1] = v19;
        v7[1] = v18;
        v6[1] = v20;
      }
      goto LABEL_7;
    }
    v21 = v15;
    while ( *(_QWORD **)(v13 + 8 * v14) != v21 )
    {
      v15 = (_QWORD *)v15[1];
      v21 = v15;
      if ( !sub_18008D574(v16, (__int64)(v6 + 2), (__int64)(v15 + 2)) )
      {
        v22 = *v15;
        v23 = (_QWORD *)v6[1];
        *v23 = v7;
        v24 = (_QWORD *)v7[1];
        *v24 = v22;
        v25 = *(_QWORD **)(v22 + 8);
        *v25 = v6;
        *(_QWORD *)(v22 + 8) = v24;
        v7[1] = v23;
        v6[1] = v25;
        goto LABEL_16;
      }
    }
    v26 = (_QWORD *)v6[1];
    *v26 = v7;
    v27 = (_QWORD *)v7[1];
    *v27 = v15;
    v28 = (_QWORD *)v15[1];
    *v28 = v6;
    v15[1] = v27;
    v7[1] = v26;
    v6[1] = v28;
    *(_QWORD *)(v13 + 8 * v14) = v6;
LABEL_16:
    v6 = v7;
  }
  v30 = 0LL;
  return sub_18008DD0C(&v30);
}
