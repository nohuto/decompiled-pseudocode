/*
 * XREFs of sub_180098EFC @ 0x180098EFC
 * Callers:
 *     sub_180099188 @ 0x180099188 (sub_180099188.c)
 * Callees:
 *     sub_180098CC8 @ 0x180098CC8 (sub_180098CC8.c)
 */

_QWORD *__fastcall sub_180098EFC(_QWORD *a1, unsigned __int64 a2, _QWORD *a3)
{
  _QWORD *v6; // rbx
  _QWORD *v7; // rdx
  __int64 v8; // rax
  char v9; // cl
  _QWORD *v10; // r10
  char v11; // r8
  char v12; // al
  char v13; // cl
  char v14; // r8
  char v15; // al
  _QWORD *v16; // r8
  _QWORD *v17; // r9
  char v18; // cl
  char v19; // al
  __int64 v20; // rax
  __int64 v21; // rcx
  bool v22; // zf
  _QWORD *v23; // r10
  char v24; // cl
  char v25; // r11
  char v26; // al
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 *v35; // r10
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rcx
  _QWORD *result; // rax

  v6 = (_QWORD *)(a2 + 16 * ((__int64)((__int64)a3 - a2) >> 5));
  sub_180098CC8(a2, (__int64)v6, (__int64)(a3 - 2));
  v7 = v6 + 2;
  if ( a2 < (unsigned __int64)v6 )
  {
    v8 = *v6;
    do
    {
      v9 = *(_BYTE *)(v8 + 88);
      v10 = v6 - 2;
      v11 = *(_BYTE *)(*(v6 - 2) + 88LL);
      v12 = v11;
      if ( v11 == v9 )
        v12 = 0;
      if ( v12 )
        break;
      v8 = *(v6 - 2);
      if ( v9 != v11 )
      {
        if ( v9 )
          break;
      }
      v6 -= 2;
    }
    while ( a2 < (unsigned __int64)v10 );
  }
  if ( v7 < a3 )
  {
    v13 = *(_BYTE *)(*v6 + 88LL);
    do
    {
      v14 = *(_BYTE *)(*v7 + 88LL);
      v15 = v14;
      if ( v14 == v13 )
        v15 = 0;
      if ( v15 || v13 != v14 && v13 )
        break;
      v7 += 2;
    }
    while ( v7 < a3 );
  }
  v16 = v7;
  v17 = v6;
  while ( 2 )
  {
    while ( v16 < a3 )
    {
      v18 = *(_BYTE *)(*v6 + 88LL);
      v19 = *(_BYTE *)(*v16 + 88LL);
      if ( v19 != v18 )
      {
        if ( v18 )
          goto LABEL_24;
        if ( v19 )
          break;
      }
      if ( v7 != v16 )
      {
        v20 = *v7;
        *v7 = *v16;
        *v16 = v20;
        v21 = v7[1];
        v7[1] = v16[1];
        v16[1] = v21;
      }
      v7 += 2;
LABEL_24:
      v16 += 2;
    }
    v22 = v17 == (_QWORD *)a2;
    if ( (unsigned __int64)v17 <= a2 )
      goto LABEL_37;
    v23 = v17 - 2;
    while ( 2 )
    {
      v24 = *(_BYTE *)(*v6 + 88LL);
      v25 = *(_BYTE *)(*v23 + 88LL);
      v26 = v25;
      if ( v25 == v24 )
        v26 = 0;
      if ( v26 )
      {
LABEL_35:
        v17 -= 2;
        v23 -= 2;
        if ( a2 >= (unsigned __int64)v17 )
          goto LABEL_36;
        continue;
      }
      break;
    }
    if ( v24 == v25 || !v24 )
    {
      v6 -= 2;
      if ( v6 != v23 )
      {
        v27 = *v6;
        *v6 = *v23;
        *v23 = v27;
        v28 = v6[1];
        v6[1] = v23[1];
        v23[1] = v28;
      }
      goto LABEL_35;
    }
LABEL_36:
    v22 = v17 == (_QWORD *)a2;
LABEL_37:
    if ( !v22 )
    {
      v17 -= 2;
      if ( v16 != a3 )
      {
        v42 = *v16;
        *v16 = *v17;
        v43 = v17[1];
        *v17 = v42;
        v44 = v16[1];
        v16[1] = v43;
        v17[1] = v44;
        goto LABEL_24;
      }
      v6 -= 2;
      v35 = v6 + 1;
      if ( v17 != v6 )
      {
        v36 = *v17;
        *v17 = *v6;
        v37 = *v35;
        *v6 = v36;
        v38 = v17[1];
        v17[1] = v37;
        *v35 = v38;
      }
      v39 = *v6;
      v7 -= 2;
      *v6 = *v7;
      v40 = v7[1];
      *v7 = v39;
      v41 = *v35;
      *v35 = v40;
      v7[1] = v41;
      continue;
    }
    break;
  }
  if ( v16 != a3 )
  {
    if ( v7 != v16 )
    {
      v29 = *v6;
      *v6 = *v7;
      v30 = v7[1];
      *v7 = v29;
      v31 = v6[1];
      v6[1] = v30;
      v7[1] = v31;
    }
    v32 = *v6;
    v7 += 2;
    *v6 = *v16;
    v33 = v16[1];
    *v16 = v32;
    v34 = v6[1];
    v6[1] = v33;
    v6 += 2;
    v16[1] = v34;
    goto LABEL_24;
  }
  result = a1;
  *a1 = v6;
  a1[1] = v7;
  return result;
}
