/*
 * XREFs of ?StDmpSinglePageInsert@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x14037BE70
 * Callers:
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x14023016C (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_W.c)
 * Callees:
 *     ?NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z @ 0x140379214 (-NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z.c)
 *     SmArrayGrow @ 0x14037A5B0 (SmArrayGrow.c)
 *     ?BTreeInsertEx@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAK@Z @ 0x14037B620 (-BTreeInsertEx@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_E.c)
 *     ?BTreeInsertEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAT_SM_PAGE_KEY@@@Z @ 0x14037C920 (-BTreeInsertEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTE.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14037CE90 (-BTreeSearchResultDeref@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@.c)
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x14037CF90 (-BTreeSearchKey@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14037D4F0 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14037DB30 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     ?BTreeInsertEx@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAK@Z @ 0x14037DCD0 (-BTreeInsertEx@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGI.c)
 *     ?BTreeDeleteEx@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14037E740 (-BTreeDeleteEx@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGI.c)
 *     ?BTreeDeleteEx@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14037EA00 (-BTreeDeleteEx@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_E.c)
 *     ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1403807E0 (-BTreeDeleteEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTE.c)
 *     SmEtwLogStoreOp @ 0x14060BB34 (SmEtwLogStoreOp.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmpSinglePageInsert(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v3; // eax
  unsigned __int64 v4; // rsi
  __int64 v6; // rbp
  int v7; // ecx
  unsigned int v8; // edi
  unsigned int v9; // r12d
  __int64 v10; // rdx
  char v11; // bl
  int v12; // r15d
  unsigned int v13; // ecx
  struct B_TREE_NODE_HDR **v14; // rsi
  struct B_TREE_NODE_HDR *v15; // r10
  unsigned int v16; // edx
  __int64 v17; // rax
  void **v18; // rcx
  __int64 result; // rax
  unsigned int v20; // edx
  unsigned int v21; // edx
  __int64 v22; // r13
  struct NP_CONTEXT **v23; // r14
  struct NP_CONTEXT *v24; // rax
  int v25; // edx
  unsigned int v26; // ecx
  _QWORD *v27; // rsi
  char *v28; // rdi
  char *v29; // rdx
  unsigned int v30; // r10d
  unsigned int v31; // r11d
  int v32; // eax
  unsigned int v33; // r14d
  int v34; // r15d
  unsigned int v35; // r12d
  int v36; // r13d
  unsigned int v37; // r14d
  __int64 v38; // rdi
  unsigned int v39; // r8d
  __int64 v40; // rcx
  _DWORD *v41; // r8
  void **v42; // rdx
  char *v43; // rdx
  unsigned int v44; // r15d
  unsigned int v45; // esi
  int v46; // r9d
  unsigned int v47; // eax
  __int64 v48; // rcx
  unsigned int v49; // r10d
  __int64 v50; // r8
  __int64 v51; // rdx
  unsigned int v52; // eax
  unsigned int *v53; // rax
  unsigned int v54; // ecx
  int v55; // edi
  int v56; // eax
  unsigned int v57; // r14d
  unsigned __int64 v58; // rsi
  __int64 Pool2; // rax
  void *v60; // r15
  size_t v61; // rdi
  _DWORD *v62; // rdi
  int v63; // r9d
  __int64 v64; // r10
  __int64 v65; // rax
  unsigned int v66; // edx
  _WORD *v67; // r11
  unsigned __int16 v68; // bx
  unsigned int v69; // r9d
  __int64 v70; // rcx
  _DWORD *v71; // r8
  unsigned int v72; // eax
  unsigned int v73; // ecx
  int v74; // eax
  _BYTE *v75; // rdx
  _BYTE *v76; // rdx
  int v77; // r12d
  unsigned int v78; // r13d
  __int64 v79; // r15
  unsigned int v80; // r14d
  int v81; // esi
  unsigned int v82; // eax
  __int64 v83; // rcx
  _DWORD *v84; // r8
  int v85; // eax
  unsigned int v86; // [rsp+40h] [rbp-A8h]
  int v87; // [rsp+50h] [rbp-98h]
  unsigned int v88; // [rsp+54h] [rbp-94h] BYREF
  _DWORD *v89; // [rsp+58h] [rbp-90h]
  _QWORD *v90; // [rsp+60h] [rbp-88h]
  unsigned __int64 v91; // [rsp+68h] [rbp-80h] BYREF
  struct B_TREE_NODE_HDR *v92; // [rsp+70h] [rbp-78h]
  unsigned __int64 v93; // [rsp+78h] [rbp-70h]
  __int64 v94; // [rsp+80h] [rbp-68h]
  __int64 v95; // [rsp+88h] [rbp-60h]
  __int64 v96; // [rsp+90h] [rbp-58h]
  struct NP_CONTEXT **v97; // [rsp+98h] [rbp-50h]
  _BYTE *v98; // [rsp+A0h] [rbp-48h]

  v3 = *(_DWORD *)(a1 + 56);
  v4 = (unsigned __int64)a3;
  v89 = a3;
  v98 = (_BYTE *)a2;
  v6 = a1;
  v94 = a1;
  if ( (v3 & 1) != 0 )
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultDeref(
      a1,
      a1 + 24);
  *(_DWORD *)(v6 + 56) &= ~1u;
  if ( (*(_DWORD *)(v6 + 120) & 1) != 0 )
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
      v6 + 64,
      v6 + 88);
  *(_DWORD *)(v6 + 120) &= ~1u;
  if ( (*(_DWORD *)(v6 + 184) & 1) != 0 )
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
      v6 + 128,
      v6 + 152);
  *(_DWORD *)(v6 + 184) &= ~1u;
  v7 = *(_DWORD *)(v6 + 472);
  v8 = *(_DWORD *)(a2 + 16);
  v91 = 0LL;
  v9 = ((unsigned int)v4 - ((v4 & 0xFFFFF000) + v7)) / *(_DWORD *)(v6 + 464)
     + (*(_DWORD *)((v4 & 0xFFFFFFFFFFFFF000uLL) + 0x10) << *(_DWORD *)(v6 + 456));
  v91 = __PAIR64__(v9, v8);
  v86 = v9;
  B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultDeref(
    v6,
    v6 + 24);
  v11 = 1;
  if ( *(_DWORD *)(v6 + 48) == -1 )
  {
    v12 = 0;
    v14 = (struct B_TREE_NODE_HDR **)(v6 + 32);
    goto LABEL_12;
  }
  v12 = 1;
  v13 = 0;
  if ( *(_QWORD *)v6 )
    v13 = *(unsigned __int8 *)(*(_QWORD *)v6 + 2LL);
  if ( *(_DWORD *)(v6 + 52) >= v13
    || (unsigned int)SmArrayGrow(v13, v10, (unsigned int *)(v6 + 52), (const void **)(v6 + 24)) )
  {
    v14 = *(struct B_TREE_NODE_HDR ***)(v6 + 24);
LABEL_12:
    v15 = *(struct B_TREE_NODE_HDR **)v6;
    if ( *(_QWORD *)v6 )
    {
      while ( 1 )
      {
        v16 = -1;
        v17 = (unsigned __int16)*(_DWORD *)v15;
        if ( HIBYTE(*(_DWORD *)v15) )
        {
          if ( (unsigned __int16)*(_DWORD *)v15 )
          {
            do
            {
              if ( *((_DWORD *)v15 + 2 * (((unsigned int)v17 + v16) >> 1) + 4) < v8 )
                v16 = ((unsigned int)v17 + v16) >> 1;
              else
                v17 = ((unsigned int)v17 + v16) >> 1;
            }
            while ( v16 + 1 != (_DWORD)v17 );
          }
        }
        else if ( (unsigned __int16)*(_DWORD *)v15 )
        {
          do
          {
            if ( *((_DWORD *)v15 + 4 * (((unsigned int)v17 + v16) >> 1) + 4) > v8 )
              v17 = ((unsigned int)v17 + v16) >> 1;
            else
              v16 = ((unsigned int)v17 + v16) >> 1;
          }
          while ( v16 + 1 != (_DWORD)v17 );
        }
        if ( *((_BYTE *)v15 + 3) )
          break;
        if ( v12 )
        {
          *v14 = v15;
          v14[1] = (struct B_TREE_NODE_HDR *)((char *)v15 + 16 * (unsigned int)v17 + 16);
          v14 += 2;
        }
        if ( (_DWORD)v17 )
          v18 = (void **)((char *)v15 + 16 * (unsigned int)(v17 - 1) + 24);
        else
          v18 = (void **)((char *)v15 + 8);
        if ( **(_DWORD **)(v6 + 16) == -1 || *((_BYTE *)v15 + 2) != 2 )
        {
          v15 = (struct B_TREE_NODE_HDR *)*v18;
        }
        else
        {
          v15 = NP_CONTEXT::NpLeafRefInternal((struct NP_CONTEXT **)(v6 + 16), v18, 2 * (*(_BYTE *)(v6 + 56) & 1u));
          if ( !v15 )
            goto LABEL_34;
        }
      }
      *v14 = v15;
      v14[1] = (struct B_TREE_NODE_HDR *)((char *)v15 + 8 * v17 + 16);
      if ( v12 )
        *(_DWORD *)(v6 + 48) = (((__int64)v14 - *(_QWORD *)(v6 + 24)) >> 4) + 1;
    }
    else if ( !v12 )
    {
      *v14 = 0LL;
      v14[1] = 0LL;
    }
LABEL_34:
    v4 = (unsigned __int64)v89;
  }
  result = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeInsertEx(
             v6,
             v6 + 24,
             &v91);
  if ( (int)result < 0 )
    return result;
  if ( !*(_BYTE *)(v6 + 776) )
  {
    v20 = (*(_DWORD *)(v4 + 4) + 4096) ^ (*(_DWORD *)(v4 + 4) ^ (*(_DWORD *)(v4 + 4) + 4096)) & 0xFFF;
    *(_DWORD *)(v4 + 4) = v20;
    v21 = v20 >> 12;
    if ( v21 > 1 )
      return 0LL;
    if ( !v21 )
      __int2c();
  }
  v22 = v6 + 88;
  v88 = v9;
  v23 = (struct NP_CONTEXT **)(v6 + 64);
  v96 = v6 + 88;
  v97 = (struct NP_CONTEXT **)(v6 + 64);
  B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
    v6 + 64,
    v6 + 88);
  if ( *(_DWORD *)(v6 + 112) == -1 )
  {
    v25 = 0;
    v27 = (_QWORD *)(v6 + 96);
    v87 = 0;
  }
  else
  {
    v24 = *v23;
    v25 = 1;
    v87 = 1;
    if ( *v23 )
      LODWORD(v24) = *((unsigned __int8 *)v24 + 2);
    v26 = *(_DWORD *)(v6 + 116);
    if ( v26 < (unsigned int)v24 )
    {
      v57 = 2 * v26;
      if ( 2 * v26 < 8 )
        v57 = 8;
      if ( (unsigned int)v24 >= v57 && (v57 = (_DWORD)v24 + 8, (int)v24 + 8 < (unsigned int)v24)
        || (v58 = 16LL * v57, v58 > 0xFFFFFFFF)
        || (Pool2 = ExAllocatePool2(0x40uLL, (unsigned int)v58, 0x72416D73u), (v60 = (void *)Pool2) == 0LL) )
      {
        v55 = -1073741670;
        goto LABEL_68;
      }
      v61 = (unsigned int)(16 * *(_DWORD *)(v6 + 116));
      memset_0((void *)(v61 + Pool2), 0, (unsigned int)(v58 - v61));
      if ( (_DWORD)v61 )
      {
        memmove(v60, *(const void **)v22, v61);
        ExFreePoolWithTag(*(PVOID *)v22, 0);
      }
      v25 = 1;
      *(_QWORD *)v22 = v60;
      *(_DWORD *)(v6 + 116) = v57;
      v23 = (struct NP_CONTEXT **)(v6 + 64);
    }
    v27 = *(_QWORD **)v22;
  }
  v28 = (char *)*v23;
  v90 = v27;
  v92 = (struct B_TREE_NODE_HDR *)v28;
  if ( !v28 )
  {
    v44 = v9;
    if ( !v25 )
    {
      *v27 = 0LL;
      v27[1] = 0LL;
    }
    goto LABEL_89;
  }
  while ( 1 )
  {
    v29 = v28 + 16;
    v30 = (unsigned __int16)*(_DWORD *)v28;
    v31 = -1;
    v32 = HIBYTE(*(_DWORD *)v28);
    v93 = (unsigned __int64)(v28 + 16);
    if ( (_BYTE)v32 )
    {
      if ( !v30 )
        goto LABEL_54;
      v33 = v9;
      v34 = *(_DWORD *)(v6 + 456);
      v35 = *(_DWORD *)(v6 + 460);
      v36 = *(_DWORD *)(v6 + 464);
      v37 = v33 >> v34;
      v38 = *(unsigned int *)(v6 + 472);
      v95 = (v86 & v35) * v36;
      do
      {
        v39 = *(_DWORD *)&v29[4 * ((v30 + v31) >> 1)] >> v34;
        _BitScanReverse((unsigned int *)&v40, v39);
        v41 = (_DWORD *)(v38
                       + *(_QWORD *)(*(_QWORD *)(v94 + 8 * v40 + 192) + 16LL * (v39 ^ (1 << v40)))
                       + v36 * (*(_DWORD *)&v29[4 * ((v30 + v31) >> 1)] & v35));
        _BitScanReverse((unsigned int *)&v40, v37);
        if ( *v41 >= *(_DWORD *)(v95 + v38 + *(_QWORD *)(*(_QWORD *)(v94 + 8 * v40 + 192) + 16LL * (v37 ^ (1 << v40)))) )
          v30 = (v30 + v31) >> 1;
        else
          v31 = (v30 + v31) >> 1;
        v29 = (char *)v93;
      }
      while ( v31 + 1 != v30 );
      v28 = (char *)v92;
      v6 = v94;
      v22 = v96;
      v23 = v97;
      goto LABEL_53;
    }
    if ( v30 )
    {
      v77 = *(_DWORD *)(v6 + 456);
      v78 = *(_DWORD *)(v6 + 460);
      v79 = *(unsigned int *)(v6 + 472);
      v80 = v86 >> v77;
      v81 = *(_DWORD *)(v6 + 464);
      v93 = (v86 & v78) * v81;
      do
      {
        v82 = *(_DWORD *)&v29[16 * ((v30 + v31) >> 1)] >> v77;
        _BitScanReverse((unsigned int *)&v83, v82);
        v84 = (_DWORD *)(v79
                       + *(_QWORD *)(*(_QWORD *)(v6 + 8 * v83 + 192) + 16LL * ((1 << v83) ^ v82))
                       + v81 * (v78 & *(_DWORD *)&v29[16 * ((v30 + v31) >> 1)]));
        _BitScanReverse((unsigned int *)&v83, v80);
        if ( *v84 > *(_DWORD *)(v93 + v79 + *(_QWORD *)(*(_QWORD *)(v6 + 8 * v83 + 192) + 16LL * (v80 ^ (1 << v83)))) )
          v30 = (v30 + v31) >> 1;
        else
          v31 = (v30 + v31) >> 1;
        v29 = v28 + 16;
      }
      while ( v31 + 1 != v30 );
      v22 = v6 + 88;
      v23 = (struct NP_CONTEXT **)(v6 + 64);
LABEL_53:
      v27 = v90;
    }
LABEL_54:
    if ( v28[3] )
      break;
    if ( v87 )
    {
      *v27 = v28;
      v27[1] = &v28[16 * v30 + 16];
      v27 += 2;
      v90 = v27;
    }
    if ( v30 )
      v42 = (void **)&v28[16 * v30 + 8];
    else
      v42 = (void **)(v28 + 8);
    if ( *(_DWORD *)v23[2] == -1 || v28[2] != 2 )
    {
      v28 = (char *)*v42;
      v9 = v86;
      v92 = (struct B_TREE_NODE_HDR *)*v42;
    }
    else
    {
      v92 = NP_CONTEXT::NpLeafRefInternal(v23 + 2, v42, 2 * (*(_BYTE *)(v22 + 32) & 1u));
      v28 = (char *)v92;
      if ( !v92 )
      {
        v55 = -1073741818;
        goto LABEL_68;
      }
      v9 = v86;
    }
  }
  *v27 = v28;
  v43 = &v28[4 * v30 + 16];
  v27[1] = v43;
  if ( v87 )
    *(_DWORD *)(v22 + 24) = (((__int64)v27 - *(_QWORD *)v22) >> 4) + 1;
  v44 = v86;
  if ( v30 < (unsigned __int16)*(_DWORD *)v28 )
  {
    v45 = *(_DWORD *)(v6 + 460);
    v46 = *(_DWORD *)(v6 + 464);
    v47 = *(_DWORD *)v43 >> *(_DWORD *)(v6 + 456);
    _BitScanReverse((unsigned int *)&v48, v47);
    v49 = v46 * (v45 & *(_DWORD *)v43);
    v50 = *(unsigned int *)(v6 + 472);
    v51 = *(_QWORD *)(*(_QWORD *)(v6 + 8 * v48 + 192) + 16LL * ((1 << v48) ^ v47));
    v52 = v86 >> *(_DWORD *)(v6 + 456);
    _BitScanReverse((unsigned int *)&v48, v52);
    v53 = (unsigned int *)(v50
                         + *(_QWORD *)(*(_QWORD *)(v6 + 8 * v48 + 192) + 16LL * ((1 << v48) ^ v52))
                         + v46 * (v86 & v45));
    v54 = *(_DWORD *)(v50 + v51 + v49);
    if ( v54 >= *v53 && v54 <= *v53 )
    {
      v55 = -1073741484;
      goto LABEL_68;
    }
  }
LABEL_89:
  v55 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeInsertEx(
          v23,
          v22,
          &v88);
  if ( v55 < 0 )
    goto LABEL_68;
  v11 = 3;
  if ( (*(_DWORD *)(v6 + 776) & 0x100000) == 0 )
    goto LABEL_91;
  v88 = v44;
  v74 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchKey(
          v6 + 128,
          v44,
          v6 + 152);
  if ( v74 != -1073741275 )
  {
    if ( v74 >= 0 )
      v74 = -1073741484;
    v55 = v74;
LABEL_68:
    v56 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDeleteEx(
            v6,
            v6 + 24);
    if ( v56 < 0 )
    {
      if ( v56 != -1073741818 )
        __int2c();
      v55 = v56;
    }
    if ( (v11 & 2) != 0 )
    {
      v85 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeDeleteEx(
              v6 + 64,
              v6 + 88);
      if ( v85 < 0 )
      {
        if ( v85 != -1073741818 )
          __int2c();
        return (unsigned int)v85;
      }
    }
    return (unsigned int)v55;
  }
  v55 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeInsertEx(
          (__int64 *)(v6 + 128),
          v6 + 152,
          &v88);
  if ( v55 < 0 )
    goto LABEL_68;
LABEL_91:
  v62 = v89;
  v63 = 4096;
  v64 = (unsigned int)(*v89 >> *(_DWORD *)(v6 + 812));
  if ( (v89[1] & 0xFFF) != 0 )
    v63 = v89[1] & 0xFFF;
  v65 = *(_QWORD *)(v6 + 1416);
  v66 = *(unsigned __int16 *)(v65 + 2 * v64);
  v67 = (_WORD *)(v65 + 2 * v64);
  v68 = v66 & 0x1FFF;
  v69 = (unsigned int)(*(_DWORD *)(v6 + 824) + v63 + 15) >> 4;
  if ( *(_BYTE *)(v6 + 776) )
    v70 = 0LL;
  else
    v70 = v66 >> 13;
  *v67 = v66 + v69;
  v71 = (_DWORD *)(v6 + 16 * (v70 + 102));
  *(_DWORD *)(v6 + 8 * v70 + 2212) += v69;
  if ( (_DWORD)v64 == *v71 )
    goto LABEL_99;
  v72 = (unsigned int)(*(_DWORD *)(v6 + 808) + 1) >> 1;
  v73 = *v67 & 0x1FFF;
  if ( v68 < v72 && v68 )
  {
    if ( v73 >= v72 || (*v67 & 0x1FFF) == 0 )
    {
      --*(_DWORD *)(v6 + 1472);
      v75 = (_BYTE *)(*(_QWORD *)(v6 + 1464) + ((unsigned __int64)(unsigned int)v64 >> 3));
      *v75 |= 1 << (v64 & 7);
    }
  }
  else if ( v73 < v72 && (*v67 & 0x1FFF) != 0 )
  {
    v76 = (_BYTE *)(*(_QWORD *)(v6 + 1464) + ((unsigned __int64)(unsigned int)v64 >> 3));
    *v76 &= ~(1 << (v64 & 7));
    ++*(_DWORD *)(v6 + 1472);
  }
  if ( (_DWORD)v64 == *v71 )
LABEL_99:
    v71[1] += v69;
  if ( (dword_140E2891C & 0x10) != 0 )
    SmEtwLogStoreOp((unsigned int)&qword_140E28910, 0, (unsigned int)&v91, v69, *v62, v6, *((_BYTE *)v62 + 4), *v98 & 7);
  return 0LL;
}
