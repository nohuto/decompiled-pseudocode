/*
 * XREFs of _tr_flush_block @ 0x180153E80
 * Callers:
 *     deflate_fast @ 0x180151240 (deflate_fast.c)
 *     deflate_huff @ 0x18015179C (deflate_huff.c)
 *     deflate_rle @ 0x18015190C (deflate_rle.c)
 *     deflate_slow @ 0x180151BF0 (deflate_slow.c)
 * Callees:
 *     _tr_stored_block @ 0x180154148 (_tr_stored_block.c)
 *     bi_windup @ 0x1801542D8 (bi_windup.c)
 *     build_tree @ 0x180154338 (build_tree.c)
 *     compress_block @ 0x18015457C (compress_block.c)
 *     detect_data_type @ 0x180154970 (detect_data_type.c)
 *     init_block @ 0x180154CB8 (init_block.c)
 *     scan_tree @ 0x180154DE8 (scan_tree.c)
 *     send_all_trees @ 0x180154F04 (send_all_trees.c)
 */

__int64 __fastcall tr_flush_block(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v5; // esi
  __int64 v8; // r9
  int v9; // eax
  __int64 v10; // r10
  __int64 v11; // r8
  __int64 v12; // r9
  void *v13; // r14
  void *v14; // r15
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 i; // rcx
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // r8d
  int v23; // edx
  bool v24; // zf
  char v25; // cl
  __int16 v26; // r9
  unsigned __int16 v27; // r8
  __int64 v28; // rdx
  __int16 v29; // ax
  __int64 v30; // rcx
  __int16 v31; // ax
  __int16 v32; // ax
  __int16 v33; // r8
  void *v34; // rdx
  void *v35; // r8
  __int16 v36; // r10
  unsigned __int16 v37; // r8
  __int64 v38; // rdx
  __int16 v39; // ax
  __int64 v40; // rcx
  __int16 v41; // ax
  __int16 v42; // ax
  __int16 v43; // r8
  __int64 result; // rax

  v5 = a3;
  v8 = 0LL;
  if ( *(int *)(a1 + 252) <= 0 )
  {
    v21 = a3 + 5;
    v14 = (void *)(a1 + 2560);
    v13 = (void *)(a1 + 268);
LABEL_11:
    v22 = v21;
    goto LABEL_12;
  }
  if ( *(_DWORD *)(*(_QWORD *)a1 + 72LL) == 2 )
  {
    v9 = detect_data_type(a1, a2, a3, 0LL);
    *(_DWORD *)(v10 + 72) = v9;
  }
  build_tree(a1, a1 + 2960, a3, v8);
  build_tree(a1, a1 + 2984, v11, v12);
  v13 = (void *)(a1 + 268);
  scan_tree(a1, a1 + 268, *(unsigned int *)(a1 + 2968));
  v14 = (void *)(a1 + 2560);
  scan_tree(v15, a1 + 2560, *(unsigned int *)(a1 + 2992));
  build_tree(v16, a1 + 3008, v17, v18);
  LODWORD(v8) = 18;
  for ( i = 18LL; i >= 3; --i )
  {
    if ( *(_WORD *)(a1 + 4LL * byte_180199058[i] + 2806) )
      break;
    LODWORD(v8) = v8 - 1;
  }
  v20 = *(_DWORD *)(a1 + 5968) + 10;
  *(_DWORD *)(a1 + 5964) += v8 + 2 * v8 + 17;
  v21 = v20 >> 3;
  v22 = (unsigned int)(*(_DWORD *)(a1 + 5964) + 10) >> 3;
  if ( v21 <= v22 || *(_DWORD *)(a1 + 256) == 4 )
    goto LABEL_11;
LABEL_12:
  if ( v5 + 4 <= v22 && a2 )
  {
    tr_stored_block(a1, a2, v5, a4);
  }
  else
  {
    v23 = *(_DWORD *)(a1 + 5984);
    v24 = v21 == v22;
    v25 = v23;
    if ( v24 )
    {
      v26 = *(_WORD *)(a1 + 5980);
      v27 = a4 + 2;
      if ( v23 <= 13 )
      {
        *(_DWORD *)(a1 + 5984) = v23 + 3;
        v33 = v26 | (v27 << v23);
      }
      else
      {
        v28 = *(unsigned int *)(a1 + 40);
        v29 = v27 << v25;
        v30 = *(_QWORD *)(a1 + 16);
        v31 = v26 | v29;
        *(_WORD *)(a1 + 5980) = v31;
        *(_BYTE *)(v28 + v30) = v31;
        *(_BYTE *)((unsigned int)++*(_DWORD *)(a1 + 40) + *(_QWORD *)(a1 + 16)) = *(_BYTE *)(a1 + 5981);
        v32 = *(_WORD *)(a1 + 5984);
        ++*(_DWORD *)(a1 + 40);
        *(_DWORD *)(a1 + 5984) -= 13;
        v33 = v27 >> (16 - v32);
      }
      *(_WORD *)(a1 + 5980) = v33;
      v34 = &unk_180199070;
      v35 = &unk_180198D90;
    }
    else
    {
      v36 = *(_WORD *)(a1 + 5980);
      v37 = a4 + 4;
      if ( v23 <= 13 )
      {
        *(_DWORD *)(a1 + 5984) = v23 + 3;
        v43 = v36 | (v37 << v23);
      }
      else
      {
        v38 = *(unsigned int *)(a1 + 40);
        v39 = v37 << v25;
        v40 = *(_QWORD *)(a1 + 16);
        v41 = v36 | v39;
        *(_WORD *)(a1 + 5980) = v41;
        *(_BYTE *)(v38 + v40) = v41;
        *(_BYTE *)((unsigned int)++*(_DWORD *)(a1 + 40) + *(_QWORD *)(a1 + 16)) = *(_BYTE *)(a1 + 5981);
        v42 = *(_WORD *)(a1 + 5984);
        ++*(_DWORD *)(a1 + 40);
        *(_DWORD *)(a1 + 5984) -= 13;
        v43 = v37 >> (16 - v42);
      }
      *(_WORD *)(a1 + 5980) = v43;
      send_all_trees(
        a1,
        (unsigned int)(*(_DWORD *)(a1 + 2968) + 1),
        (unsigned int)(*(_DWORD *)(a1 + 2992) + 1),
        (unsigned int)(v8 + 1));
      v35 = v14;
      v34 = v13;
    }
    compress_block(a1, v34, v35);
  }
  result = init_block(a1);
  if ( a4 )
    return bi_windup();
  return result;
}
