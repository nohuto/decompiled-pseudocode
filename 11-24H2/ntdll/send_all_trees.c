/*
 * XREFs of send_all_trees @ 0x180154F04
 * Callers:
 *     _tr_flush_block @ 0x180153E80 (_tr_flush_block.c)
 * Callees:
 *     send_tree @ 0x180155198 (send_tree.c)
 */

__int64 __fastcall send_all_trees(__int64 a1, int a2, int a3, unsigned int a4)
{
  __int64 v5; // rsi
  int v6; // ecx
  unsigned __int16 v8; // r9
  __int16 v10; // r11
  _DWORD *v11; // r10
  __int64 *v12; // rdi
  __int64 v13; // rdx
  __int16 v14; // ax
  __int64 v15; // rcx
  __int16 v16; // ax
  __int16 v17; // ax
  int v18; // edx
  __int16 v19; // r9
  unsigned __int16 v20; // r8
  char v21; // cl
  __int64 v22; // rdx
  __int16 v23; // ax
  __int64 v24; // rcx
  __int16 v25; // ax
  __int16 v26; // ax
  int v27; // r11d
  __int16 v28; // r8
  unsigned __int16 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int16 v32; // ax
  __int16 v33; // ax
  int v34; // edx
  __int16 v35; // r9
  unsigned __int8 *v36; // r11
  __int64 v37; // rbp
  __int64 v38; // rax
  char v39; // cl
  unsigned __int16 v40; // r8
  __int64 v41; // rdx
  __int16 v42; // ax
  __int64 v43; // rcx
  __int16 v44; // ax
  __int16 v45; // ax
  int v46; // esi

  v5 = a4;
  v6 = *(_DWORD *)(a1 + 5984);
  v8 = a2 - 257;
  v10 = *(_WORD *)(a1 + 5980);
  v11 = (_DWORD *)(a1 + 40);
  v12 = (__int64 *)(a1 + 16);
  if ( v6 <= 11 )
  {
    v18 = v6 + 5;
    *(_DWORD *)(a1 + 5984) = v6 + 5;
    v19 = v10 | (v8 << v6);
  }
  else
  {
    v13 = (unsigned int)*v11;
    v14 = v8 << v6;
    v15 = *v12;
    v16 = v10 | v14;
    *(_WORD *)(a1 + 5980) = v16;
    *(_BYTE *)(v13 + v15) = v16;
    *(_BYTE *)((unsigned int)++*v11 + *v12) = *(_BYTE *)(a1 + 5981);
    v17 = *(_WORD *)(a1 + 5984);
    *(_DWORD *)(a1 + 5984) -= 11;
    ++*v11;
    v18 = *(_DWORD *)(a1 + 5984);
    v19 = v8 >> (16 - v17);
  }
  v20 = a3 - 1;
  v21 = v18;
  if ( v18 <= 11 )
  {
    v27 = v18 + 5;
    *(_DWORD *)(a1 + 5984) = v18 + 5;
    v28 = v19 | (v20 << v18);
  }
  else
  {
    v22 = (unsigned int)*v11;
    v23 = v20 << v21;
    v24 = *v12;
    v25 = v19 | v23;
    *(_WORD *)(a1 + 5980) = v25;
    *(_BYTE *)(v22 + v24) = v25;
    *(_BYTE *)((unsigned int)++*v11 + *v12) = *(_BYTE *)(a1 + 5981);
    v26 = *(_WORD *)(a1 + 5984);
    *(_DWORD *)(a1 + 5984) -= 11;
    ++*v11;
    v27 = *(_DWORD *)(a1 + 5984);
    v28 = v20 >> (16 - v26);
  }
  v29 = v5 - 4;
  if ( v27 <= 12 )
  {
    v34 = v27 + 4;
    *(_DWORD *)(a1 + 5984) = v27 + 4;
    v35 = v28 | (v29 << v27);
  }
  else
  {
    v30 = (unsigned int)*v11;
    v31 = *v12;
    v32 = v28 | (v29 << v27);
    *(_WORD *)(a1 + 5980) = v32;
    *(_BYTE *)(v30 + v31) = v32;
    *(_BYTE *)((unsigned int)++*v11 + *v12) = *(_BYTE *)(a1 + 5981);
    v33 = *(_WORD *)(a1 + 5984);
    *(_DWORD *)(a1 + 5984) -= 12;
    ++*v11;
    v34 = *(_DWORD *)(a1 + 5984);
    v35 = v29 >> (16 - v33);
  }
  *(_WORD *)(a1 + 5980) = v35;
  if ( (int)v5 > 0 )
  {
    v36 = byte_180199058;
    v37 = v5;
    do
    {
      v38 = *v36;
      v39 = v34;
      if ( v34 <= 13 )
      {
        v46 = v34 + 3;
        v35 |= *(_WORD *)(a1 + 4 * v38 + 2806) << v34;
        *(_DWORD *)(a1 + 5984) = v34 + 3;
      }
      else
      {
        v40 = *(_WORD *)(a1 + 4 * v38 + 2806);
        v41 = (unsigned int)*v11;
        v42 = v40 << v39;
        v43 = *v12;
        v44 = v35 | v42;
        *(_WORD *)(a1 + 5980) = v44;
        *(_BYTE *)(v41 + v43) = v44;
        *(_BYTE *)((unsigned int)++*v11 + *v12) = *(_BYTE *)(a1 + 5981);
        v45 = *(_WORD *)(a1 + 5984);
        *(_DWORD *)(a1 + 5984) -= 13;
        ++*v11;
        v46 = *(_DWORD *)(a1 + 5984);
        v35 = v40 >> (16 - v45);
      }
      ++v36;
      *(_WORD *)(a1 + 5980) = v35;
      v34 = v46;
      --v37;
    }
    while ( v37 );
  }
  send_tree(a1, a1 + 268, (unsigned int)(a2 - 1));
  return send_tree(a1, a1 + 2560, (unsigned int)(a3 - 1));
}
