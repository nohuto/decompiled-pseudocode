/*
 * XREFs of ?BTreeInsertEx@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAK@Z @ 0x14037DCD0
 * Callers:
 *     ?BTreeSplitChild@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140378164 (-BTreeSplitChild@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_RE.c)
 *     ?BTreeInsert@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@PEAUSEARCH_RESULT@1@@Z @ 0x14037B970 (-BTreeInsert@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION.c)
 *     ?StDmpSinglePageInsert@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x14037BE70 (-StDmpSinglePageInsert@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_S.c)
 * Callees:
 *     ?BTreeSplitChild@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140378164 (-BTreeSplitChild@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_RE.c)
 *     ?NpNodeAllocate@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@KK@Z @ 0x14037A19C (-NpNodeAllocate@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@KK@Z.c)
 *     SmArrayGrow @ 0x14037A5B0 (SmArrayGrow.c)
 *     ?BTreeRedistribute@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140453360 (-BTreeRedistribute@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_.c)
 *     ?NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x14045A5C8 (-NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeInsertEx(
        __int64 *a1,
        __int64 a2,
        _DWORD *a3)
{
  __int64 v3; // rax
  unsigned int v7; // ecx
  int v8; // ebp
  _DWORD *v9; // r15
  struct NP_CONTEXT::NP_CTX *v10; // rcx
  _WORD *v11; // rax
  _WORD *v12; // rbp
  _QWORD *v13; // r14
  _DWORD *v14; // rsi
  unsigned int v15; // ebp
  _DWORD *v16; // rbx
  int v17; // eax
  __int64 v19; // rax
  __int64 v20; // r15
  __int64 v21; // rax
  unsigned __int64 v22; // r10
  __int64 v23; // r8
  unsigned __int64 v24; // r9
  int v25; // ecx
  int v26; // edx
  __int64 v27; // rcx
  int v28; // eax
  int v29; // r15d
  int v30; // edx
  __int64 v31; // rax
  _DWORD *v32; // r8
  __int64 v33; // rax
  void **v34; // rdx
  __int64 v35; // rax
  unsigned __int64 v36; // rcx
  void **v37; // rax
  bool v38; // cc
  struct NP_CONTEXT::NP_CTX *v39; // rcx
  __int64 v40; // rdx
  void **v41; // rdx
  struct NP_CONTEXT::NP_CTX *v42; // rcx
  int v43; // r15d

  v3 = *a1;
  v7 = 0;
  if ( v3 )
    v7 = *(unsigned __int8 *)(v3 + 2);
  v8 = *(_DWORD *)(a2 + 24);
  v9 = (_DWORD *)(a2 + 24);
  if ( *(_DWORD *)(a2 + 28) <= v7 )
  {
    if ( !(unsigned int)SmArrayGrow(v7, a2, (unsigned int *)(a2 + 28), (const void **)a2) )
      return 3221225626LL;
    v9 = (_DWORD *)(a2 + 24);
  }
  if ( v8 )
  {
    v13 = (_QWORD *)(*(_QWORD *)a2 + 16LL * (unsigned int)(v8 - 1));
  }
  else
  {
    v10 = (struct NP_CONTEXT::NP_CTX *)(a1 + 2);
    if ( !a1 )
      v10 = 0LL;
    v11 = NP_CONTEXT::NpNodeAllocate(v10, a2, 1);
    v12 = v11;
    if ( !v11 )
    {
      *a1 = 0LL;
      return 3221225626LL;
    }
    memset_0(v11, 0, 0x1000uLL);
    v12[1] = 257;
    *a1 = (__int64)v12;
    v13 = *(_QWORD **)a2;
    *v13 = v12;
    v13[1] = *a1 + 16;
    *v9 = *(_DWORD *)(a2 + 24) + 1;
  }
  v14 = (_DWORD *)*v13;
  if ( *(_BYTE *)(*v13 + 3LL) )
    v15 = 1020;
  else
    v15 = 255;
  if ( (unsigned __int16)*v14 >= v15 )
  {
    v19 = v13[1] - (_QWORD)v14 - 16LL;
    v20 = v19 >> 2;
    v21 = v19 >> 4;
    if ( !HIBYTE(*v14) )
      LODWORD(v20) = v21;
    if ( v14 == (_DWORD *)*a1 )
    {
      v22 = 0LL;
      v23 = 0LL;
      v24 = 0LL;
    }
    else
    {
      v31 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeRedistribute(
              a1,
              a2);
      v24 = *(v13 - 1);
      v23 = v31;
      v22 = v24 + 32LL * ((v31 & 1) == 0) - 16;
    }
    v25 = HIBYTE(*v14);
    v26 = (unsigned __int16)*v14;
    if ( v26 >= v15 )
    {
      if ( v23 && (_BYTE)v25 )
      {
        v40 = *(v13 - 2);
        if ( v22 <= v40 + 16 )
          v41 = (void **)(v40 + 8);
        else
          v41 = (void **)(v22 - 8);
        v42 = (struct NP_CONTEXT::NP_CTX *)(a1 + 2);
        if ( !a1 )
          v42 = 0LL;
        if ( **(_DWORD **)v42 != -1 )
          NP_CONTEXT::NpLeafDerefInternal(v42, v41);
      }
      v27 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSplitChild(
              a1,
              a2);
      if ( v27 )
      {
        v28 = *v14;
        v13 = (_QWORD *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
        v24 = *(v13 - 1);
        if ( (int)v20 > (unsigned __int16)*v14 )
        {
          v29 = v20 - (unsigned __int16)*v14;
          *(v13 - 1) = v24 + 16;
          v14 = (_DWORD *)v27;
          v30 = v29 - 1;
          if ( HIBYTE(v28) )
            v30 = v29;
          goto LABEL_37;
        }
        v24 += 16LL;
        goto LABEL_46;
      }
      return 3221225626LL;
    }
    if ( (v23 & 1) == 0 )
    {
      if ( (int)v20 > v26 )
      {
        v43 = v20 - v26;
        *(v13 - 1) = v22;
        v14 = (_DWORD *)v23;
        v30 = v43 - 1;
        if ( (_BYTE)v25 )
          v30 = v43;
        goto LABEL_37;
      }
      v24 = v22;
LABEL_46:
      v30 = v20;
      goto LABEL_37;
    }
    v32 = (_DWORD *)(v23 & 0xFFFFFFFFFFFFFFFEuLL);
    v30 = v20 + v26 - v15;
    if ( (_BYTE)v25 )
    {
      if ( v30 > 0 )
        goto LABEL_35;
      v14 = v32;
      v30 += (unsigned __int16)*v32;
    }
    else
    {
      if ( v30 >= 0 )
      {
LABEL_35:
        if ( v14 != v32 )
        {
          v24 = v22;
          goto LABEL_37;
        }
        goto LABEL_64;
      }
      v14 = v32;
      v30 += (unsigned __int16)*v32 + 1;
    }
LABEL_64:
    *(v13 - 1) = v22;
LABEL_37:
    *v13 = v14;
    v33 = v30;
    if ( *((_BYTE *)v14 + 3) )
    {
      v34 = (void **)(v24 - 8);
      v13[1] = &v14[v33 + 4];
      v35 = *(v13 - 2);
      v36 = v35 + 16;
      v37 = (void **)(v35 + 8);
      v38 = v24 <= v36;
      v39 = (struct NP_CONTEXT::NP_CTX *)(a1 + 2);
      if ( v38 )
        v34 = v37;
      if ( !a1 )
        v39 = 0LL;
      if ( **(_DWORD **)v39 != -1 )
        NP_CONTEXT::NpLeafDerefInternal(v39, v34);
    }
    else
    {
      v13[1] = &v14[4 * v30 + 4];
    }
  }
  v16 = (_DWORD *)v13[1];
  v17 = *v14;
  if ( *((_BYTE *)v14 + 3) )
  {
    memmove(v16 + 1, v16, (size_t)v14 + 4LL * (unsigned __int16)v17 + 16 - (_QWORD)v16);
    *v16 = *a3;
    ++a1[1];
  }
  else
  {
    memmove(v16 + 4, v16, (size_t)v14 + 16 * ((unsigned __int16)v17 + 1LL) - (_QWORD)v16);
    *(_OWORD *)v16 = *(_OWORD *)a3;
  }
  ++*(_WORD *)v14;
  return 0LL;
}
