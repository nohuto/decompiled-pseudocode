/*
 * XREFs of deflate_rle @ 0x18015190C
 * Callers:
 *     deflate @ 0x180150D7C (deflate.c)
 * Callees:
 *     fill_window @ 0x1801526B0 (fill_window.c)
 *     flush_pending @ 0x180152A18 (flush_pending.c)
 *     _tr_flush_block @ 0x180153E80 (_tr_flush_block.c)
 */

__int64 __fastcall deflate_rle(__int64 *a1)
{
  __int64 v1; // rdi
  _DWORD *v2; // rsi
  unsigned int v4; // eax
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // rdx
  char v8; // cl
  _BYTE *v9; // rax
  unsigned __int64 v10; // r9
  _BYTE *v11; // rdx
  _BYTE *v12; // rdx
  _BYTE *v13; // rdx
  unsigned int v14; // ecx
  unsigned int v15; // eax
  unsigned __int8 v16; // dl
  int v17; // ecx
  int v18; // r8d
  int v19; // r8d
  __int64 v20; // rdx
  __int64 v21; // r8
  unsigned int v22; // eax
  int v23; // r8d
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v28; // eax
  __int64 v29; // rcx

  v1 = 0LL;
  v2 = (_DWORD *)a1 + 57;
  while ( 1 )
  {
    v4 = *((_DWORD *)a1 + 59);
    if ( v4 <= 0x102 )
    {
      fill_window(a1);
      v4 = *((_DWORD *)a1 + 59);
      if ( !v4 )
        break;
    }
    *((_DWORD *)a1 + 54) = 0;
    if ( v4 < 3 )
      goto LABEL_23;
    v5 = *((unsigned int *)a1 + 57);
    if ( !(_DWORD)v5 )
      goto LABEL_23;
    v6 = a1[20];
    v7 = (unsigned int)v5;
    v8 = *(_BYTE *)(v6 + v5 - 1);
    if ( v8 != *(_BYTE *)(v6 + v5) )
      goto LABEL_23;
    if ( v8 != *(_BYTE *)(v6 + v5 + 1) )
      goto LABEL_23;
    v9 = (_BYTE *)((unsigned int)v5 + v6 + 2);
    if ( v8 != *v9 )
      goto LABEL_23;
    v10 = v7 + v6 + 258;
    do
    {
      if ( v8 != *++v9 )
        break;
      if ( v8 != *++v9 )
        break;
      v11 = v9 + 1;
      LODWORD(v9) = (_DWORD)v9 + 1;
      if ( v8 != *v11 )
        break;
      LODWORD(v9) = (_DWORD)v11 + 1;
      if ( v8 != v11[1] )
        break;
      v12 = v11 + 2;
      LODWORD(v9) = (_DWORD)v12;
      if ( v8 != *v12 )
        break;
      LODWORD(v9) = (_DWORD)v12 + 1;
      if ( v8 != v12[1] )
        break;
      v13 = v12 + 2;
      LODWORD(v9) = (_DWORD)v13;
      if ( v8 != *v13 )
        break;
      v9 = v13 + 1;
      if ( v8 != v13[1] )
        break;
    }
    while ( (unsigned __int64)v9 < v10 );
    v14 = *((_DWORD *)a1 + 59);
    v15 = (_DWORD)v9 - v10 + 258;
    *((_DWORD *)a1 + 54) = v15;
    if ( v15 > v14 )
    {
      *((_DWORD *)a1 + 54) = v14;
      v15 = v14;
    }
    if ( v15 >= 3 )
    {
      v2 = (_DWORD *)a1 + 57;
      v16 = *((_BYTE *)a1 + 216) - 3;
      *(_BYTE *)((unsigned int)(*((_DWORD *)a1 + 1489))++ + a1[743]) = 1;
      *(_BYTE *)((unsigned int)(*((_DWORD *)a1 + 1489))++ + a1[743]) = 0;
      *(_BYTE *)((unsigned int)(*((_DWORD *)a1 + 1489))++ + a1[743]) = v16;
      ++*((_WORD *)a1 + 2 * length_code[v16] + 648);
      ++*((_WORD *)a1 + 1280);
      v17 = *((_DWORD *)a1 + 54);
      v18 = *((_DWORD *)a1 + 57);
      *((_DWORD *)a1 + 59) -= v17;
      v19 = v17 + v18;
      *((_DWORD *)a1 + 54) = 0;
      *((_DWORD *)a1 + 57) = v19;
    }
    else
    {
LABEL_23:
      v20 = 2LL;
      v21 = *(unsigned __int8 *)(*((unsigned int *)a1 + 57) + a1[20]);
      do
      {
        *(_BYTE *)(*((unsigned int *)a1 + 1489) + a1[743]) = 0;
        v22 = *((_DWORD *)a1 + 1489) + 1;
        *((_DWORD *)a1 + 1489) = v22;
        --v20;
      }
      while ( v20 );
      v2 = (_DWORD *)a1 + 57;
      *(_BYTE *)(v22 + a1[743]) = v21;
      ++*((_DWORD *)a1 + 1489);
      ++*((_WORD *)a1 + 2 * v21 + 134);
      v23 = *((_DWORD *)a1 + 57);
      --*((_DWORD *)a1 + 59);
      v19 = v23 + 1;
      *((_DWORD *)a1 + 57) = v19;
    }
    if ( *((_DWORD *)a1 + 1489) == *((_DWORD *)a1 + 1490) )
    {
      v24 = *((_DWORD *)a1 + 53);
      v25 = v24 < 0 ? 0LL : a1[20] + (unsigned int)v24;
      tr_flush_block(a1, v25, (unsigned int)(v19 - v24), 0LL);
      v26 = *a1;
      *((_DWORD *)a1 + 53) = *v2;
      flush_pending(v26);
      if ( !*(_DWORD *)(*a1 + 24) )
        return 0LL;
    }
  }
  v28 = *((_DWORD *)a1 + 53);
  *((_DWORD *)a1 + 1494) = 0;
  if ( v28 >= 0 )
    v1 = a1[20] + (unsigned int)v28;
  tr_flush_block(a1, v1, (unsigned int)(*v2 - v28), 1LL);
  v29 = *a1;
  *((_DWORD *)a1 + 53) = *v2;
  flush_pending(v29);
  return (unsigned int)(*(_DWORD *)(*a1 + 24) != 0) + 2;
}
