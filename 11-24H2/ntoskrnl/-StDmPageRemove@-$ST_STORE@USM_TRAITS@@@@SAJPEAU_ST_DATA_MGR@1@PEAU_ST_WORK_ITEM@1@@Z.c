/*
 * XREFs of ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14037F670
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14022F290 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmRegionEvict@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKK@Z @ 0x14060A5C8 (-StDmRegionEvict@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKK@.c)
 *     ?StNpLeafDelete@?$ST_STORE@USM_TRAITS@@@@SAXPEAUNP_CTX@NP_CONTEXT@@_K@Z @ 0x14060ABE0 (-StNpLeafDelete@-$ST_STORE@USM_TRAITS@@@@SAXPEAUNP_CTX@NP_CONTEXT@@_K@Z.c)
 * Callees:
 *     ?SmStReleaseStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1402F97E8 (-SmStReleaseStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1402F9860 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z @ 0x140379214 (-NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z.c)
 *     SmPrepareForFatalHeapCorruption @ 0x14037A040 (SmPrepareForFatalHeapCorruption.c)
 *     SmArrayGrow @ 0x14037A5B0 (SmArrayGrow.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x14037CC80 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONT.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14037CE90 (-BTreeSearchResultDeref@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14037DB30 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     ?StDmPageRecordRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEAUSEARCH_RESULT@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@@Z @ 0x14037E050 (-StDmPageRecordRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEAUS.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x140380680 (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@.c)
 *     ?BTreeIteratorCleanup@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAUITERATOR@1@PEAU1@@Z @ 0x140380750 (-BTreeIteratorCleanup@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UN.c)
 *     ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1403807E0 (-BTreeDeleteEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTE.c)
 *     SmEtwEnabled @ 0x140380D60 (SmEtwEnabled.c)
 *     ?StLazyWorkMgrQueueWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE@1@KK@Z @ 0x140380DD0 (-StLazyWorkMgrQueueWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE.c)
 *     SmHpChunkFree @ 0x140380F50 (SmHpChunkFree.c)
 *     ?StDmPageRecordUnprotect@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x140381180 (-StDmPageRecordUnprotect@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z.c)
 *     SmHpUnprotectListNeighbors @ 0x140381E34 (SmHpUnprotectListNeighbors.c)
 *     SmHpBufferProtectEx @ 0x140382050 (SmHpBufferProtectEx.c)
 *     ExProtectPoolEx @ 0x140382168 (ExProtectPoolEx.c)
 *     wyhash @ 0x140382B78 (wyhash.c)
 *     ?BTreeFindLeafSibling@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAU23@K@Z @ 0x140427A94 (-BTreeFindLeafSibling@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UN.c)
 *     ?NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x14045A5C8 (-NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 *     SmHpBufferCleanup @ 0x140487B60 (SmHpBufferCleanup.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     ?StDmCheckForCompaction@?$ST_STORE@USM_TRAITS@@@@SA?AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA_MGR@1@KPEAK@Z @ 0x1406094F4 (-StDmCheckForCompaction@-$ST_STORE@USM_TRAITS@@@@SA-AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA.c)
 *     SmEtwLogStoreOp @ 0x14060BB34 (SmEtwLogStoreOp.c)
 *     ?SmEvictKeys@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KPEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x14060C95C (-SmEvictKeys@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KPEAU-$SMKM_STORE@USM_TRA.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1406B4C20 (_alloca_probe.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmPageRemove(_DWORD *a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rax
  int v4; // ecx
  __int64 v5; // r14
  __int64 v6; // r9
  unsigned int v7; // ebx
  __int64 v8; // rdx
  int v9; // esi
  unsigned int v10; // ecx
  struct NP_CONTEXT **v11; // rdi
  struct NP_CONTEXT *v12; // r10
  unsigned int v13; // edx
  __int64 v14; // rax
  void **v15; // rcx
  unsigned __int64 v16; // r9
  __int64 v17; // r14
  unsigned __int64 v18; // rsi
  __int64 v19; // rax
  unsigned int v20; // ebx
  unsigned int v21; // edi
  unsigned int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // r15
  unsigned __int64 v25; // r15
  unsigned int v26; // r13d
  unsigned int v27; // r8d
  __int64 v28; // rcx
  _QWORD *v29; // rdi
  unsigned __int64 v30; // r10
  unsigned __int64 v31; // r8
  unsigned __int64 v32; // r11
  unsigned __int64 v33; // rdi
  unsigned __int64 *v34; // rdx
  unsigned __int64 v35; // rax
  int v36; // eax
  __int64 v37; // rdi
  __int64 v38; // rsi
  int v39; // eax
  int v40; // edi
  unsigned int v41; // ecx
  struct NP_CONTEXT **v42; // r14
  int v43; // edx
  unsigned int v44; // ecx
  _QWORD *v45; // rdi
  char *v46; // rsi
  int v47; // ecx
  unsigned int v48; // ebx
  int v49; // eax
  char v50; // cl
  __int64 v51; // rdx
  __int64 v52; // r8
  char v53; // cl
  __int64 v54; // r9
  unsigned __int64 v56; // rcx
  unsigned __int64 v57; // rcx
  void **v58; // rcx
  unsigned int v59; // r9d
  unsigned int v60; // r10d
  int v61; // eax
  int v62; // r12d
  unsigned int v63; // r14d
  unsigned int v64; // r13d
  int v65; // ebx
  unsigned int v66; // eax
  unsigned int v67; // ecx
  _DWORD *v68; // r8
  bool v69; // zf
  char *v70; // rdx
  unsigned int v71; // edx
  int v72; // r11d
  int v73; // eax
  int v74; // edi
  int v75; // eax
  __int64 v76; // rsi
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r9
  __int64 v80; // rdx
  __int64 v81; // rdx
  unsigned int v82; // eax
  _DWORD *v83; // rsi
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // rdi
  unsigned int v87; // eax
  int v88; // r15d
  unsigned int v89; // eax
  int v90; // r14d
  int v91; // ecx
  unsigned int v92; // esi
  _DWORD *v93; // rcx
  unsigned int v94; // eax
  unsigned int v95; // eax
  __int64 v96; // r15
  __int64 v97; // rcx
  int v98; // eax
  __int64 v99; // rcx
  unsigned int v100; // eax
  __int64 v101; // rdx
  unsigned int v102; // r8d
  __int64 LeafSibling; // rax
  _QWORD *v104; // r13
  __int64 v105; // rcx
  _QWORD *v106; // rax
  _QWORD *v107; // r15
  _QWORD *v108; // rax
  int v109; // ebx
  unsigned int v110; // r12d
  unsigned int v111; // r14d
  int v112; // eax
  __int64 v113; // r13
  int v114; // esi
  unsigned int v115; // eax
  unsigned int v116; // ecx
  _DWORD *v117; // r8
  struct NP_CONTEXT *v118; // rax
  unsigned int v119; // esi
  unsigned __int64 v120; // rax
  __int64 v121; // rcx
  unsigned __int64 v122; // rcx
  void *v123; // rsp
  unsigned int v124; // edx
  void *v125; // rsp
  __int64 v126; // rax
  unsigned __int64 v127; // r8
  unsigned __int64 v128; // rcx
  void **v129; // rax
  void **v130; // rbx
  int v131; // [rsp+40h] [rbp+0h] BYREF
  int v132; // [rsp+44h] [rbp+4h]
  unsigned int v133; // [rsp+48h] [rbp+8h]
  unsigned int v134; // [rsp+4Ch] [rbp+Ch] BYREF
  _DWORD *v135; // [rsp+50h] [rbp+10h]
  unsigned int v136; // [rsp+58h] [rbp+18h]
  __int128 v137; // [rsp+60h] [rbp+20h] BYREF
  unsigned int v138; // [rsp+70h] [rbp+30h]
  ULONG_PTR BugCheckParameter4; // [rsp+78h] [rbp+38h] BYREF
  _QWORD *v140; // [rsp+80h] [rbp+40h]
  struct B_TREE_NODE_HDR *v141; // [rsp+88h] [rbp+48h]
  unsigned int v142; // [rsp+90h] [rbp+50h]
  unsigned __int64 v143; // [rsp+98h] [rbp+58h]
  __int64 v144; // [rsp+A0h] [rbp+60h]
  char *v145; // [rsp+A8h] [rbp+68h]
  __int64 v146; // [rsp+B0h] [rbp+70h]
  __int64 v147; // [rsp+B8h] [rbp+78h]
  __int64 v148; // [rsp+C0h] [rbp+80h]
  int *v149; // [rsp+C8h] [rbp+88h] BYREF
  __int128 v150; // [rsp+D0h] [rbp+90h]
  int v151; // [rsp+E0h] [rbp+A0h]
  unsigned int v152; // [rsp+E4h] [rbp+A4h]
  __int64 v153; // [rsp+E8h] [rbp+A8h]

  v2 = (__int64)a1;
  v135 = a1;
  v146 = a2;
  v137 = 0LL;
  v3 = SmEtwEnabled(0LL);
  v4 = *(_DWORD *)(v2 + 56);
  v5 = v2 + 24;
  v147 = v3;
  v142 = *(_DWORD *)(v6 + 12) + *(_DWORD *)(v6 + 8) - 1;
  if ( (v4 & 1) != 0 )
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultDeref(
      (struct NP_CONTEXT **)v2,
      v2 + 24);
  *(_DWORD *)(v2 + 56) &= ~1u;
  if ( (*(_DWORD *)(v2 + 120) & 1) != 0 )
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
      (struct B_TREE_NODE_HDR **)(v2 + 64),
      v2 + 88);
  *(_DWORD *)(v2 + 120) &= ~1u;
  v136 = 0;
  v134 = 0;
  while ( 1 )
  {
    v7 = *(_DWORD *)(v146 + 8);
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultDeref(
      (struct NP_CONTEXT **)v2,
      v5);
    if ( *(_DWORD *)(v5 + 24) == -1 )
    {
      v9 = 0;
      v11 = (struct NP_CONTEXT **)(v5 + 8);
    }
    else
    {
      v9 = 1;
      v10 = 0;
      if ( *(_QWORD *)v2 )
        v10 = *(unsigned __int8 *)(*(_QWORD *)v2 + 2LL);
      if ( *(_DWORD *)(v5 + 28) < v10
        && !(unsigned int)SmArrayGrow(v10, v8, (unsigned int *)(v5 + 28), (const void **)v5) )
      {
        goto LABEL_33;
      }
      v11 = *(struct NP_CONTEXT ***)v5;
    }
    v12 = *(struct NP_CONTEXT **)v2;
    if ( *(_QWORD *)v2 )
    {
      while ( 1 )
      {
        v13 = -1;
        v14 = (unsigned __int16)*(_DWORD *)v12;
        if ( HIBYTE(*(_DWORD *)v12) )
        {
          if ( (unsigned __int16)*(_DWORD *)v12 )
          {
            do
            {
              if ( *((_DWORD *)v12 + 2 * (((unsigned int)v14 + v13) >> 1) + 4) < v7 )
                v13 = ((unsigned int)v14 + v13) >> 1;
              else
                v14 = ((unsigned int)v14 + v13) >> 1;
            }
            while ( v13 + 1 != (_DWORD)v14 );
          }
        }
        else if ( (unsigned __int16)*(_DWORD *)v12 )
        {
          do
          {
            if ( *((_DWORD *)v12 + 4 * (((unsigned int)v14 + v13) >> 1) + 4) > v7 )
              v14 = ((unsigned int)v14 + v13) >> 1;
            else
              v13 = ((unsigned int)v14 + v13) >> 1;
          }
          while ( v13 + 1 != (_DWORD)v14 );
        }
        if ( *((_BYTE *)v12 + 3) )
          break;
        if ( v9 )
        {
          *v11 = v12;
          v11[1] = (struct NP_CONTEXT *)((char *)v12 + 16 * (unsigned int)v14 + 16);
          v11 += 2;
        }
        if ( (_DWORD)v14 )
          v15 = (void **)((char *)v12 + 16 * (unsigned int)(v14 - 1) + 24);
        else
          v15 = (void **)((char *)v12 + 8);
        if ( **(_DWORD **)(v2 + 16) == -1 || *((_BYTE *)v12 + 2) != 2 )
        {
          v12 = (struct NP_CONTEXT *)*v15;
        }
        else
        {
          v12 = NP_CONTEXT::NpLeafRefInternal((struct NP_CONTEXT **)(v2 + 16), v15, 2 * (*(_BYTE *)(v5 + 32) & 1u));
          if ( !v12 )
          {
            v17 = v137;
            v40 = -1073741818;
            goto LABEL_91;
          }
        }
      }
      *v11 = v12;
      v11[1] = (struct NP_CONTEXT *)((char *)v12 + 8 * v14 + 16);
      if ( v9 )
        *(_DWORD *)(v5 + 24) = (((__int64)v11 - *(_QWORD *)v5) >> 4) + 1;
    }
    else if ( !v9 )
    {
      *v11 = 0LL;
      v11[1] = 0LL;
    }
LABEL_33:
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
      v2,
      &v137,
      v5);
    v17 = v137;
    if ( !(_QWORD)v137 )
      break;
    v18 = *((_QWORD *)&v137 + 1) + 8LL;
    v19 = (unsigned __int16)*(_DWORD *)v137 + 2LL;
    *((_QWORD *)&v137 + 1) = v18;
    if ( v18 >= (__int64)v137 + 8 * v19 )
    {
      if ( **(_DWORD **)(v2 + 16) == -1 )
      {
        LeafSibling = *(_QWORD *)(v137 + 8);
      }
      else
      {
        LeafSibling = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeFindLeafSibling(
                        v2,
                        v137);
        if ( LeafSibling == -1 )
        {
          v18 = -1LL;
          goto LABEL_35;
        }
      }
      if ( LeafSibling )
      {
        v18 = LeafSibling + 16;
        *(_QWORD *)&v137 = LeafSibling;
        *((_QWORD *)&v137 + 1) = LeafSibling + 16;
        v17 = LeafSibling;
      }
      else
      {
        v18 = 0LL;
      }
    }
LABEL_35:
    if ( v18 == -1LL )
    {
      v40 = -1073741818;
      goto LABEL_91;
    }
    if ( !v18 )
      break;
    v20 = *(_DWORD *)v18;
    v138 = v20;
    if ( v142 < v20 )
      break;
    v21 = *(_DWORD *)(v18 + 4);
    v22 = v21 >> *(_DWORD *)(v2 + 456);
    _BitScanReverse((unsigned int *)&v23, v22);
    v24 = *(_DWORD *)(v2 + 464) * (v21 & *(_DWORD *)(v2 + 460));
    v132 = 0;
    v25 = *(_QWORD *)(*(_QWORD *)(v2 + 192 + 8 * v23) + 16LL * ((1 << v23) ^ v22)) + *(unsigned int *)(v2 + 472) + v24;
    v143 = v25;
    if ( *(_DWORD *)v25 == -1 )
    {
      do
      {
        v21 = *(_DWORD *)(v25 + 4);
        ST_STORE<SM_TRAITS>::StDmPageRecordUnprotect(v2, v25);
        SmHpChunkFree(v2 + 192, v25);
        --*(_DWORD *)(v2 + 2280);
        v95 = v21 >> *(_DWORD *)(v2 + 456);
        v96 = *(_DWORD *)(v2 + 464) * (v21 & *(_DWORD *)(v2 + 460));
        _BitScanReverse((unsigned int *)&v97, v95);
        v132 = 0;
        v25 = *(_QWORD *)(*(_QWORD *)(v2 + 192 + 8 * v97) + 16LL * ((1 << v97) ^ v95))
            + *(unsigned int *)(v2 + 472)
            + v96;
      }
      while ( *(_DWORD *)v25 == -1 );
      v20 = v138;
      v143 = v25;
    }
    v26 = *(_DWORD *)(v18 + 4);
    v133 = v26;
    if ( v26 != v21 )
    {
      *(_DWORD *)(v18 + 4) = v21;
      v26 = v21;
      v133 = v21;
    }
    BugCheckParameter4 = 0LL;
    v27 = *(_DWORD *)((v25 & 0xFFFFFFFFFFFFF000uLL) + 0x10);
    _BitScanReverse((unsigned int *)&v28, v27);
    v29 = (_QWORD *)(*(_QWORD *)(v2 + 8 * v28 + 192) + 16LL * (v27 ^ (1 << v28)));
    if ( *((_DWORD *)v29 + 3) )
    {
      v100 = wyhash(*v29, 4096LL, 0LL);
      v102 = *((_DWORD *)v29 + 3);
      if ( !v100 )
        v100 = 1;
      if ( v100 != v102 )
      {
        SmPrepareForFatalHeapCorruption((void *)*v29, v101, v102, v100, (LONGLONG *)&BugCheckParameter4);
        KeBugCheckEx(0x1C7u, 0LL, *v29, *((unsigned int *)v29 + 3), BugCheckParameter4);
      }
      ExProtectPoolEx(*v29, *v29, 4096LL, 4LL);
      *((_DWORD *)v29 + 3) = 0;
    }
    v30 = *(_QWORD *)(v2 + 2296);
    v31 = 0xFFFFF78000000008uLL;
    v32 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
    *(_QWORD *)(v30 + 96) = 10000000LL;
    *(_QWORD *)(v30 + 112) = v32;
    *(_QWORD *)(v30 + 104) = v32 + 300000000;
    if ( (*(_DWORD *)(v30 + 224) & 1) == 0 )
    {
      if ( !v32 )
        v32 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
      v33 = -1LL;
      v31 = -1LL;
      if ( v30 < v30 + 168 )
      {
        v34 = (unsigned __int64 *)(v30 + 8);
        do
        {
          v16 = *v34;
          if ( *v34 != -1LL )
          {
            v56 = v34[1];
            if ( v56 < v32 - *(_QWORD *)(v30 + 184) )
              v56 = v32 - *(_QWORD *)(v30 + 184);
            v57 = *(v34 - 1) + v56;
            if ( v57 < v31 )
              v31 = v57;
            if ( v16 < v33 )
              v33 = *v34;
          }
          v34 += 3;
        }
        while ( (unsigned __int64)(v34 - 1) < v30 + 168 );
      }
      if ( v31 < v32 )
        v31 = v32;
      if ( v33 < v32 )
        v33 = v32;
      *(_QWORD *)(v30 + 168) = v33;
      if ( v33 == -1LL )
      {
        *(_QWORD *)(v30 + 176) = 0LL;
      }
      else
      {
        v35 = v31 - v32;
        if ( v33 < v31 )
          v35 = v33 - v32;
        *(_QWORD *)(v30 + 176) = v35;
        if ( !v35 )
          *(_QWORD *)(v30 + 176) = 1LL;
      }
      *(_QWORD *)(*(_QWORD *)(v30 - 6512) + 7448LL) = -*(_QWORD *)(v30 + 176);
    }
    if ( v147 )
      SmEtwLogStoreOp(v147, 1, v18, v16, *(_DWORD *)v25, v2, 0, 0);
    v36 = *(_DWORD *)(v2 + 48);
    v5 = v2 + 24;
    if ( v36 == -1 || !v36 )
      v37 = v2 + 32;
    else
      v37 = *(_QWORD *)v5 + 16LL * (unsigned int)(v36 - 1);
    v38 = v137;
    if ( *(_QWORD *)v37 == (_QWORD)v137 )
    {
      *(_QWORD *)(v37 + 8) = *((_QWORD *)&v137 + 1);
    }
    else
    {
      B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultDeref(
        (struct NP_CONTEXT **)v2,
        v2 + 24);
      if ( *(_DWORD *)(v2 + 48) == -1 )
      {
        *(_OWORD *)v37 = v137;
      }
      else
      {
        B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
          (struct NP_CONTEXT **)v2,
          *(_DWORD *)(v38 + 16),
          v2 + 24);
        v98 = *(_DWORD *)(v2 + 48);
        if ( v98 == -1 || !v98 )
          v99 = v2 + 32;
        else
          v99 = *(_QWORD *)v5 + 16LL * (unsigned int)(v98 - 1);
        *(_QWORD *)(v99 + 8) = *((_QWORD *)&v137 + 1);
      }
    }
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorCleanup(
      &v137,
      v2,
      v31);
    v137 = 0LL;
    v39 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDeleteEx(
            v2,
            v2 + 24);
    v40 = v39;
    if ( v39 < 0 )
    {
      if ( v39 != -1073741818 )
      {
        __int2c();
        v17 = v137;
        goto LABEL_91;
      }
      goto LABEL_209;
    }
    if ( !*(_BYTE *)(v2 + 776) )
    {
      v41 = *(_DWORD *)(v25 + 4);
      if ( !(v41 >> 12) )
        __int2c();
      *(_DWORD *)(v25 + 4) = v41 & 0xFFF | (((v41 >> 12) - 1) << 12);
      if ( ((v41 >> 12) - 1) << 12 )
        continue;
    }
    v42 = (struct NP_CONTEXT **)(v2 + 64);
    BugCheckParameter4 = v2 + 64;
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
      (struct B_TREE_NODE_HDR **)(v2 + 64),
      v2 + 88);
    if ( *(_DWORD *)(v2 + 112) == -1 )
    {
      v43 = 0;
      v45 = (_QWORD *)(v2 + 96);
      v132 = 0;
    }
    else
    {
      v43 = 1;
      v132 = 1;
      if ( *v42 )
        v44 = *((unsigned __int8 *)*v42 + 2);
      else
        v44 = 0;
      if ( *(_DWORD *)(v2 + 116) < v44 )
      {
        if ( !(unsigned int)SmArrayGrow(v44, 1LL, (unsigned int *)(v2 + 116), (const void **)(v2 + 88)) )
        {
          v47 = -1073741670;
          v40 = -1073741670;
          goto LABEL_141;
        }
        v43 = v132;
      }
      v45 = *(_QWORD **)(v2 + 88);
    }
    v46 = (char *)*v42;
    v140 = v45;
    v141 = (struct B_TREE_NODE_HDR *)v46;
    if ( !v46 )
    {
      if ( !v43 )
      {
        *v45 = 0LL;
        v45[1] = 0LL;
      }
      goto LABEL_79;
    }
LABEL_109:
    v59 = (unsigned __int16)*(_DWORD *)v46;
    v60 = -1;
    v61 = HIBYTE(*(_DWORD *)v46);
    v145 = v46 + 16;
    if ( (_BYTE)v61 )
    {
      if ( v59 )
      {
        v62 = *(_DWORD *)(v2 + 456);
        v63 = v26 >> v62;
        v64 = v135[115];
        v148 = (unsigned int)v135[118];
        v65 = v135[116];
        v144 = v65 * (v133 & v64);
        do
        {
          v131 = 0;
          v66 = *(_DWORD *)&v145[4 * ((v59 + v60) >> 1)] >> v62;
          _BitScanReverse(&v67, v66);
          v68 = (_DWORD *)(v148
                         + *(_QWORD *)(*(_QWORD *)&v135[2 * v67 + 48] + 16LL * (v66 ^ (1 << v67)))
                         + v65 * (v64 & *(_DWORD *)&v145[4 * ((v59 + v60) >> 1)]));
          _BitScanReverse(&v67, v63);
          if ( *v68 >= *(_DWORD *)(v148
                                 + *(_QWORD *)(*(_QWORD *)&v135[2 * v67 + 48] + 16LL * (v63 ^ (1 << v67)))
                                 + (unsigned int)v144) )
            v59 = (v59 + v60) >> 1;
          else
            v60 = (v59 + v60) >> 1;
        }
        while ( v60 + 1 != v59 );
        goto LABEL_100;
      }
    }
    else if ( v59 )
    {
      v109 = *(_DWORD *)(v2 + 456);
      v110 = v26 >> v109;
      v111 = v135[115];
      v112 = v26 & v111;
      v113 = (unsigned int)v135[118];
      v114 = v135[116];
      v144 = (unsigned int)(v114 * v112);
      do
      {
        v131 = 0;
        v115 = *(_DWORD *)&v145[16 * ((v59 + v60) >> 1)] >> v109;
        _BitScanReverse(&v116, v115);
        v117 = (_DWORD *)(v113
                        + *(_QWORD *)(*(_QWORD *)&v135[2 * v116 + 48] + 16LL * (v115 ^ (1 << v116)))
                        + v114 * (*(_DWORD *)&v145[16 * ((v59 + v60) >> 1)] & v111));
        _BitScanReverse(&v116, v110);
        if ( *v117 > *(_DWORD *)(v113
                               + *(_QWORD *)(*(_QWORD *)&v135[2 * v116 + 48] + 16LL * (v110 ^ (1 << v116)))
                               + (unsigned int)v144) )
          v59 = (v59 + v60) >> 1;
        else
          v60 = (v59 + v60) >> 1;
      }
      while ( v60 + 1 != v59 );
LABEL_100:
      v2 = (__int64)v135;
      v42 = (struct NP_CONTEXT **)BugCheckParameter4;
      v25 = v143;
      v46 = (char *)v141;
      v45 = v140;
      v20 = v138;
    }
    if ( v46[3] )
    {
      *v45 = v46;
      v69 = v132 == 0;
      v70 = &v46[4 * v59 + 16];
      v45[1] = v70;
      if ( !v69 )
        *(_DWORD *)(v2 + 112) = (((__int64)v45 - *(_QWORD *)(v2 + 88)) >> 4) + 1;
      if ( v59 < (unsigned __int16)*(_DWORD *)v46 )
      {
        v71 = *(_DWORD *)v70;
        v72 = *(_DWORD *)(v2 + 464);
        v73 = *(_DWORD *)(v2 + 460);
        v74 = v133 & v73;
        v75 = v71 & v73;
        v76 = *(unsigned int *)(v2 + 472);
        v77 = v71 >> *(_DWORD *)(v2 + 456);
        _BitScanReverse((unsigned int *)&v78, v77);
        v79 = (unsigned int)(v72 * v75)
            + *(_QWORD *)(*(_QWORD *)(v2 + 8 * v78 + 192) + 16 * (v77 ^ (unsigned int)(1 << v78)));
        v80 = v133 >> *(_DWORD *)(v2 + 456);
        _BitScanReverse((unsigned int *)&v78, v80);
        v81 = (unsigned int)(v72 * v74)
            + *(_QWORD *)(*(_QWORD *)(v2 + 8 * v78 + 192) + 16 * (v80 ^ (unsigned int)(1 << v78)));
        v82 = *(_DWORD *)(v79 + v76);
        if ( v82 >= *(_DWORD *)(v81 + v76) && v82 <= *(_DWORD *)(v81 + v76) )
        {
          v40 = ST_STORE<SM_TRAITS>::StDmPageRecordRemove(v2, v25, v2 + 88);
          if ( v40 >= 0 )
          {
            v83 = (_DWORD *)(v2 + 192);
            v84 = *(unsigned int *)((v25 & 0xFFFFFFFFFFFFF000uLL) + 0x10);
            _BitScanReverse((unsigned int *)&v85, v84);
            v86 = *(_QWORD *)(v2 + 192 + 8 * v85) + 16 * (v84 ^ (unsigned int)(1 << v85));
            *(_WORD *)v25 = *(_WORD *)(v86 + 8);
            v87 = *(unsigned __int16 *)(v86 + 10);
            *(_WORD *)(v86 + 8) = v25 - *(_WORD *)v86;
            if ( (_WORD)v87 )
            {
              v85 = *(unsigned __int8 *)(v2 + 744);
              v88 = v87 >> v85;
            }
            else
            {
              v88 = -1;
            }
            *(_WORD *)(v86 + 10) = v87 + 1;
            ++*(_DWORD *)(v2 + 752);
            v89 = *(unsigned __int16 *)(v86 + 10);
            if ( (_WORD)v89 )
            {
              v85 = *(unsigned __int8 *)(v2 + 744);
              v90 = v89 >> v85;
            }
            else
            {
              v90 = -1;
            }
            if ( v88 == v90 )
            {
LABEL_128:
              v91 = *(unsigned __int16 *)(v86 + 10);
              if ( v91 == v83[137] && (unsigned int)(v83[140] - v91) >= v83[139] )
                SmHpBufferCleanup(v83);
              --v83[141];
              v5 = v2 + 24;
              if ( (*(_DWORD *)(v146 + 16) & 1) != 0 )
              {
                v92 = v136;
                if ( v136 && v20 - v134 != v136 )
                {
                  SMKM_STORE<SM_TRAITS>::SmStReleaseStoreLockExclusive(*(_QWORD *)(v2 + 800));
                  SMKM_STORE_MGR<SM_TRAITS>::SmEvictKeys(*(_QWORD *)(*(_QWORD *)(v2 + 800) + 7576LL), &v134, v92);
                  SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(*(_QWORD *)(v2 + 800));
                  v92 = 0;
                  v136 = 0;
                }
                v93 = *(_DWORD **)(v2 + 2304);
                if ( !*v93 || (v5 = v2 + 24, *v93 == 3) && (v5 = v2 + 24, v20 < v93[1]) )
                {
                  v94 = v134;
                  v5 = v2 + 24;
                  if ( !v92 )
                    v94 = v20;
                  v136 = v92 + 1;
                  v134 = v94;
                }
              }
              continue;
            }
            SmHpBufferProtectEx(v85, v86, 1LL, 0LL);
            v104 = *(_QWORD **)v86;
            if ( v88 < 0 )
            {
LABEL_168:
              if ( v90 < 0 )
              {
                v2 = (__int64)v135;
                v104[1] = v104;
                *v104 = v104;
                goto LABEL_128;
              }
              v107 = &v83[4 * v90 + 72];
              if ( (_QWORD *)*v107 == v107 )
                *(_DWORD *)(v2 + 476) ^= 1 << v90;
              else
                SmHpUnprotectListNeighbors(v83, &v83[4 * v90 + 72], 0LL);
              v108 = (_QWORD *)v107[1];
              if ( (_QWORD *)*v108 == v107 )
              {
                v2 = (__int64)v135;
                *v104 = v107;
                v104[1] = v108;
                *v108 = v104;
                v107[1] = v104;
                goto LABEL_128;
              }
            }
            else
            {
              SmHpUnprotectListNeighbors(v2 + 192, &v83[4 * v88 + 72], *(_QWORD *)v86);
              v105 = *v104;
              v106 = (_QWORD *)v104[1];
              if ( *(_QWORD **)(*v104 + 8LL) == v104 && (_QWORD *)*v106 == v104 )
              {
                *v106 = v105;
                *(_QWORD *)(v105 + 8) = v106;
                if ( *(_DWORD **)&v83[4 * v88 + 72] == &v83[4 * v88 + 72] )
                  *(_DWORD *)(v2 + 476) ^= 1 << v88;
                goto LABEL_168;
              }
            }
            __fastfail(3u);
          }
LABEL_209:
          v17 = v137;
          goto LABEL_91;
        }
      }
LABEL_79:
      v5 = v2 + 24;
      v40 = -1073741275;
      v47 = -1073741275;
      if ( **(int **)(v2 + 2304) >= 2 )
        continue;
LABEL_141:
      __int2c();
      if ( v47 == -1073741275 )
      {
        v5 = v2 + 24;
        continue;
      }
      goto LABEL_209;
    }
    if ( v132 )
    {
      *v45 = v46;
      v45[1] = &v46[16 * v59 + 16];
      v45 += 2;
      v140 = v45;
    }
    if ( v59 )
      v58 = (void **)&v46[16 * v59 + 8];
    else
      v58 = (void **)(v46 + 8);
    if ( *(_DWORD *)v42[2] == -1 || v46[2] != 2 )
    {
      v46 = (char *)*v58;
      v141 = (struct B_TREE_NODE_HDR *)*v58;
    }
    else
    {
      v141 = NP_CONTEXT::NpLeafRefInternal(v42 + 2, v58, 2 * (*(_BYTE *)(v2 + 120) & 1u));
      v46 = (char *)v141;
      if ( !v141 )
      {
        v17 = v137;
        v40 = -1073741818;
        goto LABEL_91;
      }
    }
    v26 = v133;
    goto LABEL_109;
  }
  v48 = v136;
  if ( v136 )
  {
    SMKM_STORE<SM_TRAITS>::SmStReleaseStoreLockExclusive(*(_QWORD *)(v2 + 800));
    SMKM_STORE_MGR<SM_TRAITS>::SmEvictKeys(*(_QWORD *)(*(_QWORD *)(v2 + 800) + 7576LL), &v134, v48);
    SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(*(_QWORD *)(v2 + 800));
  }
  if ( !*(_BYTE *)(v2 + 776) && (*(_BYTE *)(v2 + 2288) & 3) != 3 )
  {
    v49 = ST_STORE<SM_TRAITS>::StDmCheckForCompaction(v2, 0LL, 0LL);
    if ( v49 )
    {
      v50 = *(_BYTE *)(v2 + 2288);
      v51 = (*(_DWORD *)(v2 + 832) >> 1) & 1;
      if ( v49 == 1 )
      {
        v53 = v50 & 0xFC | 1;
        v52 = 30LL;
        if ( *(_BYTE *)(v2 + 776) )
          v52 = 400LL;
        v54 = 4294967294LL;
      }
      else
      {
        v52 = 0LL;
        v53 = v50 & 0xFC | 2;
        v54 = 0LL;
      }
      *(_BYTE *)(v2 + 2288) = v53;
      ST_STORE<SM_TRAITS>::StLazyWorkMgrQueueWork(*(_QWORD *)(v2 + 2296), v51, v52, v54);
    }
  }
  v40 = 0;
LABEL_91:
  if ( **(_DWORD **)(v2 + 16) != -1 )
  {
    if ( v17 )
    {
      v118 = *(struct NP_CONTEXT **)v2;
      if ( v17 != *(_QWORD *)v2 )
      {
        v119 = 0;
        if ( v118 )
          v119 = *((unsigned __int8 *)v118 + 2);
        v120 = 16LL * v119;
        v121 = v120 + 15;
        if ( v120 + 15 < v120 )
          v121 = 0xFFFFFFFFFFFFFF0LL;
        v122 = v121 & 0xFFFFFFFFFFFFFFF0uLL;
        v123 = alloca(v122);
        v124 = *(_DWORD *)(v17 + 16);
        v125 = alloca(v122);
        v153 = 1LL;
        v151 = 0;
        v152 = v119;
        v150 = 0LL;
        v149 = &v131;
        B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
          (struct NP_CONTEXT **)v2,
          v124,
          (__int64)&v149);
        v126 = *((_QWORD *)&v131 + 2 * v119 - 4);
        v127 = *((_QWORD *)&v133 + 2 * v119 - 4);
        v128 = v126 + 16;
        v129 = (void **)(v126 + 8);
        v130 = (void **)(v127 - 8);
        if ( v127 <= v128 )
          v130 = v129;
        B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultDeref(
          (struct NP_CONTEXT **)v2,
          (__int64)&v149);
        if ( **(_DWORD **)(v2 + 16) != -1 )
          NP_CONTEXT::NpLeafDerefInternal((struct NP_CONTEXT::NP_CTX *)(v2 + 16), v130);
      }
    }
  }
  return (unsigned int)v40;
}
