/*
 * XREFs of ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140385D30
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140279D00 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmRegionEvict@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKK@Z @ 0x14060C008 (-StDmRegionEvict@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKK@.c)
 *     ?StNpLeafDelete@?$ST_STORE@USM_TRAITS@@@@SAXPEAUNP_CTX@NP_CONTEXT@@_K@Z @ 0x14060C620 (-StNpLeafDelete@-$ST_STORE@USM_TRAITS@@@@SAXPEAUNP_CTX@NP_CONTEXT@@_K@Z.c)
 * Callees:
 *     ?NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z @ 0x14037F8D4 (-NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z.c)
 *     SmPrepareForFatalHeapCorruption @ 0x140380700 (SmPrepareForFatalHeapCorruption.c)
 *     SmArrayGrow @ 0x140380C70 (SmArrayGrow.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x140383340 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONT.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140383550 (-BTreeSearchResultDeref@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1403841F0 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     ?StDmPageRecordRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEAUSEARCH_RESULT@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@@Z @ 0x140384710 (-StDmPageRecordRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEAUS.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x140386D40 (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@.c)
 *     ?BTreeIteratorCleanup@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAUITERATOR@1@PEAU1@@Z @ 0x140386E10 (-BTreeIteratorCleanup@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UN.c)
 *     ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140386EA0 (-BTreeDeleteEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTE.c)
 *     SmEtwEnabled @ 0x140387420 (SmEtwEnabled.c)
 *     ?StLazyWorkMgrQueueWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE@1@KK@Z @ 0x140387490 (-StLazyWorkMgrQueueWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE.c)
 *     SmHpChunkFree @ 0x140387610 (SmHpChunkFree.c)
 *     ?StDmPageRecordUnprotect@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x140387840 (-StDmPageRecordUnprotect@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z.c)
 *     SmHpUnprotectListNeighbors @ 0x1403884F4 (SmHpUnprotectListNeighbors.c)
 *     SmHpBufferProtectEx @ 0x140388710 (SmHpBufferProtectEx.c)
 *     ExProtectPoolEx @ 0x140388828 (ExProtectPoolEx.c)
 *     wyhash @ 0x140389238 (wyhash.c)
 *     ?SmStReleaseStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14039C4E8 (-SmStReleaseStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14039C560 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?BTreeFindLeafSibling@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAU23@K@Z @ 0x140434814 (-BTreeFindLeafSibling@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UN.c)
 *     ?NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x140463D20 (-NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 *     SmHpBufferCleanup @ 0x14048CE40 (SmHpBufferCleanup.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     ?StDmCheckForCompaction@?$ST_STORE@USM_TRAITS@@@@SA?AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA_MGR@1@KPEAK@Z @ 0x14060AF34 (-StDmCheckForCompaction@-$ST_STORE@USM_TRAITS@@@@SA-AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA.c)
 *     SmEtwLogStoreOp @ 0x14060D574 (SmEtwLogStoreOp.c)
 *     ?SmEvictKeys@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KPEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x14060E39C (-SmEvictKeys@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KPEAU-$SMKM_STORE@USM_TRA.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1406B3C80 (_alloca_probe.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmPageRemove(_DWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r12
  __int64 v4; // rax
  int v5; // ecx
  __int64 v6; // r14
  __int64 v7; // r9
  unsigned int v8; // ebx
  __int64 v9; // rdx
  int v10; // esi
  unsigned int v11; // ecx
  struct NP_CONTEXT **v12; // rdi
  struct NP_CONTEXT *v13; // r10
  unsigned int v14; // edx
  __int64 v15; // rax
  void **v16; // rcx
  unsigned __int64 v17; // r9
  __int64 v18; // r14
  unsigned __int64 v19; // rsi
  __int64 v20; // rax
  unsigned int v21; // ebx
  unsigned int v22; // edi
  unsigned int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // r15
  unsigned __int64 v26; // r15
  unsigned int v27; // r13d
  unsigned int v28; // r8d
  __int64 v29; // rcx
  _QWORD *v30; // rdi
  unsigned __int64 v31; // r10
  unsigned __int64 v32; // r8
  unsigned __int64 v33; // r11
  unsigned __int64 v34; // rdi
  unsigned __int64 *v35; // rdx
  unsigned __int64 v36; // rax
  int v37; // eax
  __int64 v38; // rdi
  __int64 v39; // rsi
  int v40; // eax
  int v41; // edi
  unsigned int v42; // ecx
  struct NP_CONTEXT **v43; // r14
  int v44; // edx
  unsigned int v45; // ecx
  _QWORD *v46; // rdi
  char *v47; // rsi
  int v48; // ecx
  unsigned int v49; // ebx
  int v50; // eax
  char v51; // cl
  __int64 v52; // rdx
  __int64 v53; // r8
  char v54; // cl
  __int64 v55; // r9
  unsigned __int64 v57; // rcx
  unsigned __int64 v58; // rcx
  void **v59; // rcx
  unsigned int v60; // r9d
  unsigned int v61; // r10d
  int v62; // eax
  int v63; // r12d
  unsigned int v64; // r14d
  unsigned int v65; // r13d
  int v66; // ebx
  unsigned int v67; // eax
  unsigned int v68; // ecx
  _DWORD *v69; // r8
  bool v70; // zf
  char *v71; // rdx
  unsigned int v72; // edx
  int v73; // r11d
  int v74; // eax
  int v75; // edi
  int v76; // eax
  __int64 v77; // rsi
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r9
  __int64 v81; // rdx
  __int64 v82; // rdx
  unsigned int v83; // eax
  _DWORD *v84; // rsi
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // rdi
  unsigned int v88; // eax
  int v89; // r15d
  unsigned int v90; // eax
  int v91; // r14d
  int v92; // ecx
  unsigned int v93; // esi
  _DWORD *v94; // rcx
  unsigned int v95; // eax
  unsigned int v96; // eax
  __int64 v97; // r15
  __int64 v98; // rcx
  int v99; // eax
  __int64 v100; // rcx
  unsigned int v101; // eax
  __int64 v102; // rdx
  unsigned int v103; // r8d
  __int64 LeafSibling; // rax
  _QWORD *v105; // r13
  __int64 v106; // rcx
  _QWORD *v107; // rax
  _QWORD *v108; // r15
  _QWORD *v109; // rax
  int v110; // ebx
  unsigned int v111; // r12d
  unsigned int v112; // r14d
  int v113; // eax
  __int64 v114; // r13
  int v115; // esi
  unsigned int v116; // eax
  unsigned int v117; // ecx
  _DWORD *v118; // r8
  struct NP_CONTEXT *v119; // rax
  unsigned int v120; // esi
  unsigned __int64 v121; // rax
  __int64 v122; // rcx
  unsigned __int64 v123; // rcx
  void *v124; // rsp
  unsigned int v125; // edx
  void *v126; // rsp
  __int64 v127; // rax
  unsigned __int64 v128; // r8
  unsigned __int64 v129; // rcx
  void **v130; // rax
  void **v131; // rbx
  int v132; // [rsp+40h] [rbp+0h] BYREF
  int v133; // [rsp+44h] [rbp+4h]
  unsigned int v134; // [rsp+48h] [rbp+8h]
  unsigned int v135; // [rsp+4Ch] [rbp+Ch] BYREF
  _DWORD *v136; // [rsp+50h] [rbp+10h]
  unsigned int v137; // [rsp+58h] [rbp+18h]
  __int128 v138; // [rsp+60h] [rbp+20h] BYREF
  unsigned int v139; // [rsp+70h] [rbp+30h]
  ULONG_PTR BugCheckParameter4; // [rsp+78h] [rbp+38h] BYREF
  _QWORD *v141; // [rsp+80h] [rbp+40h]
  struct B_TREE_NODE_HDR *v142; // [rsp+88h] [rbp+48h]
  unsigned int v143; // [rsp+90h] [rbp+50h]
  unsigned __int64 v144; // [rsp+98h] [rbp+58h]
  __int64 v145; // [rsp+A0h] [rbp+60h]
  char *v146; // [rsp+A8h] [rbp+68h]
  __int64 v147; // [rsp+B0h] [rbp+70h]
  __int64 v148; // [rsp+B8h] [rbp+78h]
  __int64 v149; // [rsp+C0h] [rbp+80h]
  int *v150; // [rsp+C8h] [rbp+88h] BYREF
  __int128 v151; // [rsp+D0h] [rbp+90h]
  int v152; // [rsp+E0h] [rbp+A0h]
  unsigned int v153; // [rsp+E4h] [rbp+A4h]
  __int64 v154; // [rsp+E8h] [rbp+A8h]

  v3 = (__int64)a1;
  v136 = a1;
  v147 = a2;
  v138 = 0LL;
  v4 = SmEtwEnabled(0LL, a2, a3, a2);
  v5 = *(_DWORD *)(v3 + 56);
  v6 = v3 + 24;
  v148 = v4;
  v143 = *(_DWORD *)(v7 + 12) + *(_DWORD *)(v7 + 8) - 1;
  if ( (v5 & 1) != 0 )
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultDeref(
      (struct NP_CONTEXT **)v3,
      v3 + 24);
  *(_DWORD *)(v3 + 56) &= ~1u;
  if ( (*(_DWORD *)(v3 + 120) & 1) != 0 )
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
      (struct B_TREE_NODE_HDR **)(v3 + 64),
      v3 + 88);
  *(_DWORD *)(v3 + 120) &= ~1u;
  v137 = 0;
  v135 = 0;
  while ( 1 )
  {
    v8 = *(_DWORD *)(v147 + 8);
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultDeref(
      (struct NP_CONTEXT **)v3,
      v6);
    if ( *(_DWORD *)(v6 + 24) == -1 )
    {
      v10 = 0;
      v12 = (struct NP_CONTEXT **)(v6 + 8);
    }
    else
    {
      v10 = 1;
      v11 = 0;
      if ( *(_QWORD *)v3 )
        v11 = *(unsigned __int8 *)(*(_QWORD *)v3 + 2LL);
      if ( *(_DWORD *)(v6 + 28) < v11
        && !(unsigned int)SmArrayGrow(v11, v9, (unsigned int *)(v6 + 28), (const void **)v6) )
      {
        goto LABEL_33;
      }
      v12 = *(struct NP_CONTEXT ***)v6;
    }
    v13 = *(struct NP_CONTEXT **)v3;
    if ( *(_QWORD *)v3 )
    {
      while ( 1 )
      {
        v14 = -1;
        v15 = (unsigned __int16)*(_DWORD *)v13;
        if ( HIBYTE(*(_DWORD *)v13) )
        {
          if ( (unsigned __int16)*(_DWORD *)v13 )
          {
            do
            {
              if ( *((_DWORD *)v13 + 2 * (((unsigned int)v15 + v14) >> 1) + 4) < v8 )
                v14 = ((unsigned int)v15 + v14) >> 1;
              else
                v15 = ((unsigned int)v15 + v14) >> 1;
            }
            while ( v14 + 1 != (_DWORD)v15 );
          }
        }
        else if ( (unsigned __int16)*(_DWORD *)v13 )
        {
          do
          {
            if ( *((_DWORD *)v13 + 4 * (((unsigned int)v15 + v14) >> 1) + 4) > v8 )
              v15 = ((unsigned int)v15 + v14) >> 1;
            else
              v14 = ((unsigned int)v15 + v14) >> 1;
          }
          while ( v14 + 1 != (_DWORD)v15 );
        }
        if ( *((_BYTE *)v13 + 3) )
          break;
        if ( v10 )
        {
          *v12 = v13;
          v12[1] = (struct NP_CONTEXT *)((char *)v13 + 16 * (unsigned int)v15 + 16);
          v12 += 2;
        }
        if ( (_DWORD)v15 )
          v16 = (void **)((char *)v13 + 16 * (unsigned int)(v15 - 1) + 24);
        else
          v16 = (void **)((char *)v13 + 8);
        if ( **(_DWORD **)(v3 + 16) == -1 || *((_BYTE *)v13 + 2) != 2 )
        {
          v13 = (struct NP_CONTEXT *)*v16;
        }
        else
        {
          v13 = NP_CONTEXT::NpLeafRefInternal((struct NP_CONTEXT **)(v3 + 16), v16, 2 * (*(_BYTE *)(v6 + 32) & 1u));
          if ( !v13 )
          {
            v18 = v138;
            v41 = -1073741818;
            goto LABEL_91;
          }
        }
      }
      *v12 = v13;
      v12[1] = (struct NP_CONTEXT *)((char *)v13 + 8 * v15 + 16);
      if ( v10 )
        *(_DWORD *)(v6 + 24) = (((__int64)v12 - *(_QWORD *)v6) >> 4) + 1;
    }
    else if ( !v10 )
    {
      *v12 = 0LL;
      v12[1] = 0LL;
    }
LABEL_33:
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
      v3,
      &v138,
      v6);
    v18 = v138;
    if ( !(_QWORD)v138 )
      break;
    v19 = *((_QWORD *)&v138 + 1) + 8LL;
    v20 = (unsigned __int16)*(_DWORD *)v138 + 2LL;
    *((_QWORD *)&v138 + 1) = v19;
    if ( v19 >= (__int64)v138 + 8 * v20 )
    {
      if ( **(_DWORD **)(v3 + 16) == -1 )
      {
        LeafSibling = *(_QWORD *)(v138 + 8);
      }
      else
      {
        LeafSibling = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeFindLeafSibling(
                        v3,
                        v138);
        if ( LeafSibling == -1 )
        {
          v19 = -1LL;
          goto LABEL_35;
        }
      }
      if ( LeafSibling )
      {
        v19 = LeafSibling + 16;
        *(_QWORD *)&v138 = LeafSibling;
        *((_QWORD *)&v138 + 1) = LeafSibling + 16;
        v18 = LeafSibling;
      }
      else
      {
        v19 = 0LL;
      }
    }
LABEL_35:
    if ( v19 == -1LL )
    {
      v41 = -1073741818;
      goto LABEL_91;
    }
    if ( !v19 )
      break;
    v21 = *(_DWORD *)v19;
    v139 = v21;
    if ( v143 < v21 )
      break;
    v22 = *(_DWORD *)(v19 + 4);
    v23 = v22 >> *(_DWORD *)(v3 + 456);
    _BitScanReverse((unsigned int *)&v24, v23);
    v25 = *(_DWORD *)(v3 + 464) * (v22 & *(_DWORD *)(v3 + 460));
    v133 = 0;
    v26 = *(_QWORD *)(*(_QWORD *)(v3 + 192 + 8 * v24) + 16LL * ((1 << v24) ^ v23)) + *(unsigned int *)(v3 + 472) + v25;
    v144 = v26;
    if ( *(_DWORD *)v26 == -1 )
    {
      do
      {
        v22 = *(_DWORD *)(v26 + 4);
        ST_STORE<SM_TRAITS>::StDmPageRecordUnprotect(v3, v26);
        SmHpChunkFree(v3 + 192, v26);
        --*(_DWORD *)(v3 + 2280);
        v96 = v22 >> *(_DWORD *)(v3 + 456);
        v97 = *(_DWORD *)(v3 + 464) * (v22 & *(_DWORD *)(v3 + 460));
        _BitScanReverse((unsigned int *)&v98, v96);
        v133 = 0;
        v26 = *(_QWORD *)(*(_QWORD *)(v3 + 192 + 8 * v98) + 16LL * ((1 << v98) ^ v96))
            + *(unsigned int *)(v3 + 472)
            + v97;
      }
      while ( *(_DWORD *)v26 == -1 );
      v21 = v139;
      v144 = v26;
    }
    v27 = *(_DWORD *)(v19 + 4);
    v134 = v27;
    if ( v27 != v22 )
    {
      *(_DWORD *)(v19 + 4) = v22;
      v27 = v22;
      v134 = v22;
    }
    BugCheckParameter4 = 0LL;
    v28 = *(_DWORD *)((v26 & 0xFFFFFFFFFFFFF000uLL) + 0x10);
    _BitScanReverse((unsigned int *)&v29, v28);
    v30 = (_QWORD *)(*(_QWORD *)(v3 + 8 * v29 + 192) + 16LL * (v28 ^ (1 << v29)));
    if ( *((_DWORD *)v30 + 3) )
    {
      v101 = wyhash(*v30, 4096LL, 0LL);
      v103 = *((_DWORD *)v30 + 3);
      if ( !v101 )
        v101 = 1;
      if ( v101 != v103 )
      {
        SmPrepareForFatalHeapCorruption((void *)*v30, v102, v103, v101, (LONGLONG *)&BugCheckParameter4);
        KeBugCheckEx(0x1C7u, 0LL, *v30, *((unsigned int *)v30 + 3), BugCheckParameter4);
      }
      ExProtectPoolEx(*v30, *v30, 4096LL, 4LL);
      *((_DWORD *)v30 + 3) = 0;
    }
    v31 = *(_QWORD *)(v3 + 2296);
    v32 = 0xFFFFF78000000008uLL;
    v33 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
    *(_QWORD *)(v31 + 96) = 10000000LL;
    *(_QWORD *)(v31 + 112) = v33;
    *(_QWORD *)(v31 + 104) = v33 + 300000000;
    if ( (*(_DWORD *)(v31 + 224) & 1) == 0 )
    {
      if ( !v33 )
        v33 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
      v34 = -1LL;
      v32 = -1LL;
      if ( v31 < v31 + 168 )
      {
        v35 = (unsigned __int64 *)(v31 + 8);
        do
        {
          v17 = *v35;
          if ( *v35 != -1LL )
          {
            v57 = v35[1];
            if ( v57 < v33 - *(_QWORD *)(v31 + 184) )
              v57 = v33 - *(_QWORD *)(v31 + 184);
            v58 = *(v35 - 1) + v57;
            if ( v58 < v32 )
              v32 = v58;
            if ( v17 < v34 )
              v34 = *v35;
          }
          v35 += 3;
        }
        while ( (unsigned __int64)(v35 - 1) < v31 + 168 );
      }
      if ( v32 < v33 )
        v32 = v33;
      if ( v34 < v33 )
        v34 = v33;
      *(_QWORD *)(v31 + 168) = v34;
      if ( v34 == -1LL )
      {
        *(_QWORD *)(v31 + 176) = 0LL;
      }
      else
      {
        v36 = v32 - v33;
        if ( v34 < v32 )
          v36 = v34 - v33;
        *(_QWORD *)(v31 + 176) = v36;
        if ( !v36 )
          *(_QWORD *)(v31 + 176) = 1LL;
      }
      *(_QWORD *)(*(_QWORD *)(v31 - 6512) + 7448LL) = -*(_QWORD *)(v31 + 176);
    }
    if ( v148 )
      SmEtwLogStoreOp(v148, 1, v19, v17, *(_DWORD *)v26, v3, 0, 0);
    v37 = *(_DWORD *)(v3 + 48);
    v6 = v3 + 24;
    if ( v37 == -1 || !v37 )
      v38 = v3 + 32;
    else
      v38 = *(_QWORD *)v6 + 16LL * (unsigned int)(v37 - 1);
    v39 = v138;
    if ( *(_QWORD *)v38 == (_QWORD)v138 )
    {
      *(_QWORD *)(v38 + 8) = *((_QWORD *)&v138 + 1);
    }
    else
    {
      B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultDeref(
        (struct NP_CONTEXT **)v3,
        v3 + 24);
      if ( *(_DWORD *)(v3 + 48) == -1 )
      {
        *(_OWORD *)v38 = v138;
      }
      else
      {
        B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
          (struct NP_CONTEXT **)v3,
          *(_DWORD *)(v39 + 16),
          v3 + 24);
        v99 = *(_DWORD *)(v3 + 48);
        if ( v99 == -1 || !v99 )
          v100 = v3 + 32;
        else
          v100 = *(_QWORD *)v6 + 16LL * (unsigned int)(v99 - 1);
        *(_QWORD *)(v100 + 8) = *((_QWORD *)&v138 + 1);
      }
    }
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorCleanup(
      &v138,
      v3,
      v32);
    v138 = 0LL;
    v40 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDeleteEx(
            v3,
            v3 + 24);
    v41 = v40;
    if ( v40 < 0 )
    {
      if ( v40 != -1073741818 )
      {
        __int2c();
        v18 = v138;
        goto LABEL_91;
      }
      goto LABEL_209;
    }
    if ( !*(_BYTE *)(v3 + 776) )
    {
      v42 = *(_DWORD *)(v26 + 4);
      if ( !(v42 >> 12) )
        __int2c();
      *(_DWORD *)(v26 + 4) = v42 & 0xFFF | (((v42 >> 12) - 1) << 12);
      if ( ((v42 >> 12) - 1) << 12 )
        continue;
    }
    v43 = (struct NP_CONTEXT **)(v3 + 64);
    BugCheckParameter4 = v3 + 64;
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
      (struct B_TREE_NODE_HDR **)(v3 + 64),
      v3 + 88);
    if ( *(_DWORD *)(v3 + 112) == -1 )
    {
      v44 = 0;
      v46 = (_QWORD *)(v3 + 96);
      v133 = 0;
    }
    else
    {
      v44 = 1;
      v133 = 1;
      if ( *v43 )
        v45 = *((unsigned __int8 *)*v43 + 2);
      else
        v45 = 0;
      if ( *(_DWORD *)(v3 + 116) < v45 )
      {
        if ( !(unsigned int)SmArrayGrow(v45, 1LL, (unsigned int *)(v3 + 116), (const void **)(v3 + 88)) )
        {
          v48 = -1073741670;
          v41 = -1073741670;
          goto LABEL_141;
        }
        v44 = v133;
      }
      v46 = *(_QWORD **)(v3 + 88);
    }
    v47 = (char *)*v43;
    v141 = v46;
    v142 = (struct B_TREE_NODE_HDR *)v47;
    if ( !v47 )
    {
      if ( !v44 )
      {
        *v46 = 0LL;
        v46[1] = 0LL;
      }
      goto LABEL_79;
    }
LABEL_109:
    v60 = (unsigned __int16)*(_DWORD *)v47;
    v61 = -1;
    v62 = HIBYTE(*(_DWORD *)v47);
    v146 = v47 + 16;
    if ( (_BYTE)v62 )
    {
      if ( v60 )
      {
        v63 = *(_DWORD *)(v3 + 456);
        v64 = v27 >> v63;
        v65 = v136[115];
        v149 = (unsigned int)v136[118];
        v66 = v136[116];
        v145 = v66 * (v134 & v65);
        do
        {
          v132 = 0;
          v67 = *(_DWORD *)&v146[4 * ((v60 + v61) >> 1)] >> v63;
          _BitScanReverse(&v68, v67);
          v69 = (_DWORD *)(v149
                         + *(_QWORD *)(*(_QWORD *)&v136[2 * v68 + 48] + 16LL * (v67 ^ (1 << v68)))
                         + v66 * (v65 & *(_DWORD *)&v146[4 * ((v60 + v61) >> 1)]));
          _BitScanReverse(&v68, v64);
          if ( *v69 >= *(_DWORD *)(v149
                                 + *(_QWORD *)(*(_QWORD *)&v136[2 * v68 + 48] + 16LL * (v64 ^ (1 << v68)))
                                 + (unsigned int)v145) )
            v60 = (v60 + v61) >> 1;
          else
            v61 = (v60 + v61) >> 1;
        }
        while ( v61 + 1 != v60 );
        goto LABEL_100;
      }
    }
    else if ( v60 )
    {
      v110 = *(_DWORD *)(v3 + 456);
      v111 = v27 >> v110;
      v112 = v136[115];
      v113 = v27 & v112;
      v114 = (unsigned int)v136[118];
      v115 = v136[116];
      v145 = (unsigned int)(v115 * v113);
      do
      {
        v132 = 0;
        v116 = *(_DWORD *)&v146[16 * ((v60 + v61) >> 1)] >> v110;
        _BitScanReverse(&v117, v116);
        v118 = (_DWORD *)(v114
                        + *(_QWORD *)(*(_QWORD *)&v136[2 * v117 + 48] + 16LL * (v116 ^ (1 << v117)))
                        + v115 * (*(_DWORD *)&v146[16 * ((v60 + v61) >> 1)] & v112));
        _BitScanReverse(&v117, v111);
        if ( *v118 > *(_DWORD *)(v114
                               + *(_QWORD *)(*(_QWORD *)&v136[2 * v117 + 48] + 16LL * (v111 ^ (1 << v117)))
                               + (unsigned int)v145) )
          v60 = (v60 + v61) >> 1;
        else
          v61 = (v60 + v61) >> 1;
      }
      while ( v61 + 1 != v60 );
LABEL_100:
      v3 = (__int64)v136;
      v43 = (struct NP_CONTEXT **)BugCheckParameter4;
      v26 = v144;
      v47 = (char *)v142;
      v46 = v141;
      v21 = v139;
    }
    if ( v47[3] )
    {
      *v46 = v47;
      v70 = v133 == 0;
      v71 = &v47[4 * v60 + 16];
      v46[1] = v71;
      if ( !v70 )
        *(_DWORD *)(v3 + 112) = (((__int64)v46 - *(_QWORD *)(v3 + 88)) >> 4) + 1;
      if ( v60 < (unsigned __int16)*(_DWORD *)v47 )
      {
        v72 = *(_DWORD *)v71;
        v73 = *(_DWORD *)(v3 + 464);
        v74 = *(_DWORD *)(v3 + 460);
        v75 = v134 & v74;
        v76 = v72 & v74;
        v77 = *(unsigned int *)(v3 + 472);
        v78 = v72 >> *(_DWORD *)(v3 + 456);
        _BitScanReverse((unsigned int *)&v79, v78);
        v80 = (unsigned int)(v73 * v76)
            + *(_QWORD *)(*(_QWORD *)(v3 + 8 * v79 + 192) + 16 * (v78 ^ (unsigned int)(1 << v79)));
        v81 = v134 >> *(_DWORD *)(v3 + 456);
        _BitScanReverse((unsigned int *)&v79, v81);
        v82 = (unsigned int)(v73 * v75)
            + *(_QWORD *)(*(_QWORD *)(v3 + 8 * v79 + 192) + 16 * (v81 ^ (unsigned int)(1 << v79)));
        v83 = *(_DWORD *)(v80 + v77);
        if ( v83 >= *(_DWORD *)(v82 + v77) && v83 <= *(_DWORD *)(v82 + v77) )
        {
          v41 = ST_STORE<SM_TRAITS>::StDmPageRecordRemove(v3, v26, v3 + 88);
          if ( v41 >= 0 )
          {
            v84 = (_DWORD *)(v3 + 192);
            v85 = *(unsigned int *)((v26 & 0xFFFFFFFFFFFFF000uLL) + 0x10);
            _BitScanReverse((unsigned int *)&v86, v85);
            v87 = *(_QWORD *)(v3 + 192 + 8 * v86) + 16 * (v85 ^ (unsigned int)(1 << v86));
            *(_WORD *)v26 = *(_WORD *)(v87 + 8);
            v88 = *(unsigned __int16 *)(v87 + 10);
            *(_WORD *)(v87 + 8) = v26 - *(_WORD *)v87;
            if ( (_WORD)v88 )
            {
              v86 = *(unsigned __int8 *)(v3 + 744);
              v89 = v88 >> v86;
            }
            else
            {
              v89 = -1;
            }
            *(_WORD *)(v87 + 10) = v88 + 1;
            ++*(_DWORD *)(v3 + 752);
            v90 = *(unsigned __int16 *)(v87 + 10);
            if ( (_WORD)v90 )
            {
              v86 = *(unsigned __int8 *)(v3 + 744);
              v91 = v90 >> v86;
            }
            else
            {
              v91 = -1;
            }
            if ( v89 == v91 )
            {
LABEL_128:
              v92 = *(unsigned __int16 *)(v87 + 10);
              if ( v92 == v84[137] && (unsigned int)(v84[140] - v92) >= v84[139] )
                SmHpBufferCleanup(v84);
              --v84[141];
              v6 = v3 + 24;
              if ( (*(_DWORD *)(v147 + 16) & 1) != 0 )
              {
                v93 = v137;
                if ( v137 && v21 - v135 != v137 )
                {
                  SMKM_STORE<SM_TRAITS>::SmStReleaseStoreLockExclusive(*(_QWORD *)(v3 + 800));
                  SMKM_STORE_MGR<SM_TRAITS>::SmEvictKeys(*(_QWORD *)(*(_QWORD *)(v3 + 800) + 7576LL), &v135, v93);
                  SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(*(_QWORD *)(v3 + 800));
                  v93 = 0;
                  v137 = 0;
                }
                v94 = *(_DWORD **)(v3 + 2304);
                if ( !*v94 || (v6 = v3 + 24, *v94 == 3) && (v6 = v3 + 24, v21 < v94[1]) )
                {
                  v95 = v135;
                  v6 = v3 + 24;
                  if ( !v93 )
                    v95 = v21;
                  v137 = v93 + 1;
                  v135 = v95;
                }
              }
              continue;
            }
            SmHpBufferProtectEx(v86, v87, 1LL, 0LL);
            v105 = *(_QWORD **)v87;
            if ( v89 < 0 )
            {
LABEL_168:
              if ( v91 < 0 )
              {
                v3 = (__int64)v136;
                v105[1] = v105;
                *v105 = v105;
                goto LABEL_128;
              }
              v108 = &v84[4 * v91 + 72];
              if ( (_QWORD *)*v108 == v108 )
                *(_DWORD *)(v3 + 476) ^= 1 << v91;
              else
                SmHpUnprotectListNeighbors(v84, &v84[4 * v91 + 72], 0LL);
              v109 = (_QWORD *)v108[1];
              if ( (_QWORD *)*v109 == v108 )
              {
                v3 = (__int64)v136;
                *v105 = v108;
                v105[1] = v109;
                *v109 = v105;
                v108[1] = v105;
                goto LABEL_128;
              }
            }
            else
            {
              SmHpUnprotectListNeighbors(v3 + 192, &v84[4 * v89 + 72], *(_QWORD *)v87);
              v106 = *v105;
              v107 = (_QWORD *)v105[1];
              if ( *(_QWORD **)(*v105 + 8LL) == v105 && (_QWORD *)*v107 == v105 )
              {
                *v107 = v106;
                *(_QWORD *)(v106 + 8) = v107;
                if ( *(_DWORD **)&v84[4 * v89 + 72] == &v84[4 * v89 + 72] )
                  *(_DWORD *)(v3 + 476) ^= 1 << v89;
                goto LABEL_168;
              }
            }
            __fastfail(3u);
          }
LABEL_209:
          v18 = v138;
          goto LABEL_91;
        }
      }
LABEL_79:
      v6 = v3 + 24;
      v41 = -1073741275;
      v48 = -1073741275;
      if ( **(int **)(v3 + 2304) >= 2 )
        continue;
LABEL_141:
      __int2c();
      if ( v48 == -1073741275 )
      {
        v6 = v3 + 24;
        continue;
      }
      goto LABEL_209;
    }
    if ( v133 )
    {
      *v46 = v47;
      v46[1] = &v47[16 * v60 + 16];
      v46 += 2;
      v141 = v46;
    }
    if ( v60 )
      v59 = (void **)&v47[16 * v60 + 8];
    else
      v59 = (void **)(v47 + 8);
    if ( *(_DWORD *)v43[2] == -1 || v47[2] != 2 )
    {
      v47 = (char *)*v59;
      v142 = (struct B_TREE_NODE_HDR *)*v59;
    }
    else
    {
      v142 = NP_CONTEXT::NpLeafRefInternal(v43 + 2, v59, 2 * (*(_BYTE *)(v3 + 120) & 1u));
      v47 = (char *)v142;
      if ( !v142 )
      {
        v18 = v138;
        v41 = -1073741818;
        goto LABEL_91;
      }
    }
    v27 = v134;
    goto LABEL_109;
  }
  v49 = v137;
  if ( v137 )
  {
    SMKM_STORE<SM_TRAITS>::SmStReleaseStoreLockExclusive(*(_QWORD *)(v3 + 800));
    SMKM_STORE_MGR<SM_TRAITS>::SmEvictKeys(*(_QWORD *)(*(_QWORD *)(v3 + 800) + 7576LL), &v135, v49);
    SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(*(_QWORD *)(v3 + 800));
  }
  if ( !*(_BYTE *)(v3 + 776) && (*(_BYTE *)(v3 + 2288) & 3) != 3 )
  {
    v50 = ST_STORE<SM_TRAITS>::StDmCheckForCompaction(v3, 0LL, 0LL);
    if ( v50 )
    {
      v51 = *(_BYTE *)(v3 + 2288);
      v52 = (*(_DWORD *)(v3 + 832) >> 1) & 1;
      if ( v50 == 1 )
      {
        v54 = v51 & 0xFC | 1;
        v53 = 30LL;
        if ( *(_BYTE *)(v3 + 776) )
          v53 = 400LL;
        v55 = 4294967294LL;
      }
      else
      {
        v53 = 0LL;
        v54 = v51 & 0xFC | 2;
        v55 = 0LL;
      }
      *(_BYTE *)(v3 + 2288) = v54;
      ST_STORE<SM_TRAITS>::StLazyWorkMgrQueueWork(*(_QWORD *)(v3 + 2296), v52, v53, v55);
    }
  }
  v41 = 0;
LABEL_91:
  if ( **(_DWORD **)(v3 + 16) != -1 )
  {
    if ( v18 )
    {
      v119 = *(struct NP_CONTEXT **)v3;
      if ( v18 != *(_QWORD *)v3 )
      {
        v120 = 0;
        if ( v119 )
          v120 = *((unsigned __int8 *)v119 + 2);
        v121 = 16LL * v120;
        v122 = v121 + 15;
        if ( v121 + 15 < v121 )
          v122 = 0xFFFFFFFFFFFFFF0LL;
        v123 = v122 & 0xFFFFFFFFFFFFFFF0uLL;
        v124 = alloca(v123);
        v125 = *(_DWORD *)(v18 + 16);
        v126 = alloca(v123);
        v154 = 1LL;
        v152 = 0;
        v153 = v120;
        v151 = 0LL;
        v150 = &v132;
        B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
          (struct NP_CONTEXT **)v3,
          v125,
          (__int64)&v150);
        v127 = *((_QWORD *)&v132 + 2 * v120 - 4);
        v128 = *((_QWORD *)&v134 + 2 * v120 - 4);
        v129 = v127 + 16;
        v130 = (void **)(v127 + 8);
        v131 = (void **)(v128 - 8);
        if ( v128 <= v129 )
          v131 = v130;
        B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultDeref(
          (struct NP_CONTEXT **)v3,
          (__int64)&v150);
        if ( **(_DWORD **)(v3 + 16) != -1 )
          NP_CONTEXT::NpLeafDerefInternal((struct NP_CONTEXT::NP_CTX *)(v3 + 16), v131);
      }
    }
  }
  return (unsigned int)v41;
}
