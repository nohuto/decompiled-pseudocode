/*
 * XREFs of ?BTreeInsertEx@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAK@Z @ 0x14039B890
 * Callers:
 *     ?BTreeSplitChild@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140394F28 (-BTreeSplitChild@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_RE.c)
 *     ?BTreeInsert@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@PEAUSEARCH_RESULT@1@@Z @ 0x140399520 (-BTreeInsert@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION.c)
 *     ?StDmpSinglePageInsert@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x140399A20 (-StDmpSinglePageInsert@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_S.c)
 * Callees:
 *     ?NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x140393EA8 (-NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 *     ?BTreeSplitChild@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140394F28 (-BTreeSplitChild@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_RE.c)
 *     ?NpNodeAllocate@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@KK@Z @ 0x14039790C (-NpNodeAllocate@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@KK@Z.c)
 *     SmArrayGrow @ 0x1403980C8 (SmArrayGrow.c)
 *     ?BTreeRedistribute@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14045F0E0 (-BTreeRedistribute@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
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
  char *v11; // rax
  char *v12; // rbp
  char **v13; // r14
  char *v14; // rsi
  unsigned int v15; // ebp
  int v16; // ecx
  char *v17; // rbx
  int v18; // eax
  __int64 v20; // rax
  __int64 v21; // r15
  __int64 v22; // rax
  unsigned __int64 v23; // r10
  __int64 v24; // r8
  unsigned __int64 v25; // r9
  int v26; // ecx
  int v27; // edx
  __int64 v28; // rcx
  int v29; // eax
  int v30; // edx
  __int64 v31; // rax
  void **v32; // rdx
  __int64 v33; // rax
  unsigned __int64 v34; // rcx
  void **v35; // rax
  bool v36; // cc
  struct NP_CONTEXT::NP_CTX *v37; // rcx
  __int64 v38; // rax
  char *v39; // r8
  int v40; // r15d
  __int64 v41; // rdx
  void **v42; // rdx
  struct NP_CONTEXT::NP_CTX *v43; // rcx
  int v44; // r15d

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
    v13 = (char **)(*(_QWORD *)a2 + 16LL * (unsigned int)(v8 - 1));
  }
  else
  {
    v10 = (struct NP_CONTEXT::NP_CTX *)(a1 + 2);
    if ( !a1 )
      v10 = 0LL;
    v11 = (char *)NP_CONTEXT::NpNodeAllocate(v10, a2, 1);
    v12 = v11;
    if ( !v11 )
    {
      *a1 = 0LL;
      return 3221225626LL;
    }
    memset_0(v11, 0, 0x1000uLL);
    *((_WORD *)v12 + 1) = 257;
    *a1 = (__int64)v12;
    v13 = *(char ***)a2;
    *v13 = v12;
    v13[1] = (char *)(*a1 + 16);
    *v9 = *(_DWORD *)(a2 + 24) + 1;
  }
  v14 = *v13;
  v15 = 1020;
  v16 = *(_DWORD *)*v13;
  if ( !(*v13)[3] )
    v15 = 255;
  if ( (unsigned __int16)v16 < v15 )
    goto LABEL_12;
  v20 = v13[1] - v14 - 16;
  v21 = v20 >> 2;
  v22 = v20 >> 4;
  if ( !HIBYTE(v16) )
    LODWORD(v21) = v22;
  if ( v14 == (char *)*a1 )
  {
    v23 = 0LL;
    v24 = 0LL;
    v25 = 0LL;
  }
  else
  {
    v38 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeRedistribute(
            a1,
            a2);
    v25 = (unsigned __int64)*(v13 - 1);
    v24 = v38;
    v23 = v25 + 32LL * ((v38 & 1) == 0) - 16;
  }
  v26 = HIBYTE(*(_DWORD *)v14);
  v27 = (unsigned __int16)*(_DWORD *)v14;
  if ( v27 >= v15 )
  {
    if ( v24 && (_BYTE)v26 )
    {
      v41 = (__int64)*(v13 - 2);
      if ( v23 <= v41 + 16 )
        v42 = (void **)(v41 + 8);
      else
        v42 = (void **)(v23 - 8);
      v43 = (struct NP_CONTEXT::NP_CTX *)(a1 + 2);
      if ( !a1 )
        v43 = 0LL;
      if ( **(_DWORD **)v43 != -1 )
        NP_CONTEXT::NpLeafDerefInternal(v43, v42);
    }
    v28 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSplitChild(
            a1,
            a2);
    if ( v28 )
    {
      v29 = *(_DWORD *)v14;
      v13 = (char **)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
      v25 = (unsigned __int64)*(v13 - 1);
      if ( (int)v21 > (unsigned __int16)*(_DWORD *)v14 )
      {
        v44 = v21 - (unsigned __int16)*(_DWORD *)v14;
        *(v13 - 1) = (char *)(v25 + 16);
        v14 = (char *)v28;
        v30 = v44 - 1;
        if ( HIBYTE(v29) )
          v30 = v44;
        goto LABEL_33;
      }
      v25 += 16LL;
      goto LABEL_32;
    }
    return 3221225626LL;
  }
  if ( (v24 & 1) == 0 )
  {
    if ( (int)v21 > v27 )
    {
      v40 = v21 - v27;
      *(v13 - 1) = (char *)v23;
      v14 = (char *)v24;
      v30 = v40 - 1;
      if ( (_BYTE)v26 )
        v30 = v40;
      goto LABEL_33;
    }
    v25 = v23;
LABEL_32:
    v30 = v21;
    goto LABEL_33;
  }
  v39 = (char *)(v24 & 0xFFFFFFFFFFFFFFFEuLL);
  v30 = v21 + v27 - v15;
  if ( (_BYTE)v26 )
  {
    if ( v30 <= 0 )
    {
      v14 = v39;
      v30 += (unsigned __int16)*(_DWORD *)v39;
      goto LABEL_63;
    }
  }
  else if ( v30 < 0 )
  {
    v14 = v39;
    v30 += (unsigned __int16)*(_DWORD *)v39 + 1;
    goto LABEL_63;
  }
  if ( v14 != v39 )
  {
    v25 = v23;
    goto LABEL_33;
  }
LABEL_63:
  *(v13 - 1) = (char *)v23;
LABEL_33:
  *v13 = v14;
  v31 = v30;
  if ( v14[3] )
  {
    v32 = (void **)(v25 - 8);
    v13[1] = &v14[4 * v31 + 16];
    v33 = (__int64)*(v13 - 2);
    v34 = v33 + 16;
    v35 = (void **)(v33 + 8);
    v36 = v25 <= v34;
    v37 = (struct NP_CONTEXT::NP_CTX *)(a1 + 2);
    if ( v36 )
      v32 = v35;
    if ( !a1 )
      v37 = 0LL;
    if ( **(_DWORD **)v37 != -1 )
      NP_CONTEXT::NpLeafDerefInternal(v37, v32);
  }
  else
  {
    v13[1] = &v14[16 * v30 + 16];
  }
LABEL_12:
  v17 = v13[1];
  v18 = *(_DWORD *)v14;
  if ( v14[3] )
  {
    memmove(v17 + 4, v17, (size_t)&v14[4LL * (unsigned __int16)v18 + 16 - (_QWORD)v17]);
    *(_DWORD *)v17 = *a3;
    ++a1[1];
  }
  else
  {
    memmove(v17 + 16, v17, (size_t)&v14[16 * ((unsigned __int16)v18 + 1LL) - (_QWORD)v17]);
    *(_OWORD *)v17 = *(_OWORD *)a3;
  }
  ++*(_WORD *)v14;
  return 0LL;
}
