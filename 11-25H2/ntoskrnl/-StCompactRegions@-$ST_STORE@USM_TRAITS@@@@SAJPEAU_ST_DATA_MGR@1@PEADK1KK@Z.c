/*
 * XREFs of ?StCompactRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z @ 0x140398600
 * Callers:
 *     ?StDmReuseCurrentRegion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_CURRENT_REGION@1@@Z @ 0x140397E44 (-StDmReuseCurrentRegion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_CURRENT_REGION@1@.c)
 *     ?StDmCurrentRegionSet@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x140397EE4 (-StDmCurrentRegionSet@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StCompactionPerformEmergency@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x1404959DC (-StCompactionPerformEmergency@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StCompactionPerformInMem@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x1405FE778 (-StCompactionPerformInMem@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 * Callees:
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x140208384 (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x140393EA8 (-NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 *     SmPrepareForFatalHeapCorruption @ 0x140397098 (SmPrepareForFatalHeapCorruption.c)
 *     ?BTreeChangeKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAKPEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x1403981B0 (-BTreeChangeKey@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REG.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x140399068 (-BTreeIteratorFromSearchResult@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_C.c)
 *     ?BTreeIteratorCleanup@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAUITERATOR@1@PEAU1@@Z @ 0x140399140 (-BTreeIteratorCleanup@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U.c)
 *     ?BTreeInsert@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@PEAUSEARCH_RESULT@1@@Z @ 0x140399520 (-BTreeInsert@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION.c)
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x14039B1A0 (-BTreeSearchKey@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REG.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14039B6F0 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     ?BTreeDeleteEx@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14039C300 (-BTreeDeleteEx@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGI.c)
 *     ?StDmPageRecordUnprotect@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x14039ED20 (-StDmPageRecordUnprotect@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z.c)
 *     ExProtectPoolEx @ 0x14039FD08 (ExProtectPoolEx.c)
 *     wyhash @ 0x1403A0738 (wyhash.c)
 *     ?BTreeFindLeafSibling@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAU23@K@Z @ 0x14044BA54 (-BTreeFindLeafSibling@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     ?StDmCheckForCompaction@?$ST_STORE@USM_TRAITS@@@@SA?AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA_MGR@1@KPEAK@Z @ 0x1405FEE24 (-StDmCheckForCompaction@-$ST_STORE@USM_TRAITS@@@@SA-AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1406A89B0 (_alloca_probe.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StCompactRegions(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        int a6)
{
  unsigned int v6; // r12d
  __int64 v9; // rcx
  int v10; // r13d
  _WORD *v11; // rax
  int v12; // esi
  __int64 v13; // rdx
  __int64 v14; // r15
  int v15; // edi
  unsigned __int64 v16; // rdi
  __int64 v17; // r14
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  unsigned int v20; // edx
  int v21; // r9d
  __int64 v22; // r13
  unsigned int v23; // eax
  __int64 v24; // rcx
  int *v25; // r13
  int v26; // r9d
  int v27; // edx
  int v28; // r8d
  unsigned int v29; // r15d
  unsigned int v30; // r10d
  unsigned int v31; // r8d
  __int64 v32; // rcx
  _QWORD *v33; // rdi
  unsigned __int64 v34; // r9
  unsigned __int64 v35; // r10
  unsigned __int64 v36; // rdi
  unsigned __int64 v37; // rsi
  unsigned __int64 *v38; // rax
  unsigned __int64 v39; // rax
  unsigned __int64 *v40; // rdx
  int v41; // eax
  int v42; // esi
  __int64 v43; // rdi
  int v44; // eax
  unsigned int v45; // r8d
  unsigned int v46; // esi
  _WORD *v47; // r8
  unsigned int v48; // ecx
  unsigned __int16 v49; // r9
  __int64 v50; // rax
  unsigned int v51; // eax
  unsigned int v52; // ecx
  __int64 v53; // rax
  unsigned int v54; // edx
  _WORD *v55; // r9
  unsigned __int16 v56; // r10
  unsigned int v57; // ecx
  _DWORD *v58; // r8
  unsigned int v59; // eax
  unsigned int v60; // ecx
  _BYTE *v61; // rdx
  __int64 v62; // rsi
  _DWORD **v63; // rax
  unsigned int v65; // eax
  unsigned int v66; // r8d
  void *v67; // rcx
  _DWORD **v68; // rax
  _DWORD **v69; // rax
  __int64 LeafSibling; // rax
  _BYTE *v71; // rdx
  unsigned __int64 v72; // rdx
  unsigned __int64 v73; // rdx
  int v74; // eax
  __int64 v75; // rcx
  __int64 v76; // rax
  unsigned int v77; // r15d
  unsigned __int64 v78; // rax
  __int64 v79; // rcx
  unsigned __int64 v80; // rcx
  void *v81; // rsp
  __int64 v82; // rdx
  void *v83; // rsp
  __int64 v84; // rax
  unsigned __int64 v85; // r8
  unsigned __int64 v86; // rcx
  void **v87; // rax
  void **v88; // rbx
  int v89; // [rsp+30h] [rbp+0h] BYREF
  int v90; // [rsp+34h] [rbp+4h]
  _DWORD v91[2]; // [rsp+38h] [rbp+8h] BYREF
  __int128 v92; // [rsp+40h] [rbp+10h] BYREF
  unsigned int v93; // [rsp+50h] [rbp+20h]
  ULONG_PTR BugCheckParameter4; // [rsp+58h] [rbp+28h] BYREF
  _WORD *v95; // [rsp+60h] [rbp+30h]
  __int64 v96; // [rsp+68h] [rbp+38h]
  __int64 v97; // [rsp+70h] [rbp+40h]
  _WORD *v98; // [rsp+78h] [rbp+48h]
  __int64 v99; // [rsp+80h] [rbp+50h]
  int *v100; // [rsp+88h] [rbp+58h] BYREF
  __int128 v101; // [rsp+90h] [rbp+60h]
  int v102; // [rsp+A0h] [rbp+70h]
  unsigned int v103; // [rsp+A4h] [rbp+74h]
  __int64 v104; // [rsp+A8h] [rbp+78h]
  _QWORD v105[3]; // [rsp+B0h] [rbp+80h] BYREF
  int v106; // [rsp+C8h] [rbp+98h]
  int v107; // [rsp+CCh] [rbp+9Ch]
  __int64 v108; // [rsp+D0h] [rbp+A0h]
  char v109; // [rsp+D8h] [rbp+A8h] BYREF

  v6 = a5;
  v97 = a2;
  v93 = a3;
  v96 = a4;
  memset_0(v105, 0, 0xA8uLL);
  v9 = *(_QWORD *)(a1 + 1416);
  v90 = 0;
  v99 = 2LL * a3;
  v10 = 0;
  v92 = 0LL;
  v11 = (_WORD *)(v9 + 2LL * a5);
  v98 = (_WORD *)(v9 + v99);
  v95 = v11;
  if ( (_WORD *)(v9 + v99) == v11 )
    v12 = 0;
  else
    v12 = *v11 & 0x1FFF;
  v13 = *(_QWORD *)(a1 + 760);
  v89 = v12;
  ST_STORE<SM_TRAITS>::StDmPageRecordUnprotect(a1, v13);
  v14 = a1 + 88;
  if ( (*(_DWORD *)(a1 + 120) & 1) != 0 )
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
      a1 + 64,
      a1 + 88);
  *(_DWORD *)(a1 + 120) &= ~1u;
  **(_DWORD **)(a1 + 760) = a3 << *(_DWORD *)(a1 + 812);
  v15 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchKey(
          a1 + 64,
          *(unsigned int *)(a1 + 768),
          a1 + 88);
  if ( v15 == -1073741818 )
  {
LABEL_137:
    v17 = v92;
    goto LABEL_85;
  }
  B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeIteratorFromSearchResult(
    a1 + 64,
    &v92,
    a1 + 88);
  LODWORD(v16) = v93;
  v17 = v92;
  while ( 1 )
  {
    if ( v10 )
    {
      **(_DWORD **)(a1 + 760) = (_DWORD)v16 << *(_DWORD *)(a1 + 812);
      v15 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchKey(
              a1 + 64,
              *(unsigned int *)(a1 + 768),
              v14);
      if ( v15 == -1073741818 )
        goto LABEL_85;
      B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeIteratorCleanup(
        &v92,
        a1 + 64);
      B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeIteratorFromSearchResult(
        a1 + 64,
        &v92,
        v14);
      v17 = v92;
      LODWORD(v16) = v93;
    }
    if ( !v17 )
    {
LABEL_84:
      v15 = 0;
      goto LABEL_85;
    }
    v18 = *((_QWORD *)&v92 + 1) + 4LL;
    v19 = (unsigned __int16)*(_DWORD *)v17 + 4LL;
    *((_QWORD *)&v92 + 1) = v18;
    if ( v18 >= v17 + 4 * v19 )
    {
      if ( a1 == -64 )
        v68 = 0LL;
      else
        v68 = (_DWORD **)(a1 + 80);
      if ( **v68 == -1 )
      {
        if ( a1 == -64 )
          v69 = 0LL;
        else
          v69 = (_DWORD **)(a1 + 80);
        if ( **v69 != -1 )
        {
          v17 = 3358LL;
          *(_QWORD *)&v92 = 3358LL;
          v18 = 3374LL;
          *((_QWORD *)&v92 + 1) = 3374LL;
          goto LABEL_10;
        }
        LeafSibling = *(_QWORD *)(v17 + 8);
      }
      else
      {
        LeafSibling = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeFindLeafSibling(
                        a1 + 64,
                        v17);
        if ( LeafSibling == -1 )
        {
          v18 = -1LL;
          goto LABEL_10;
        }
      }
      if ( LeafSibling )
      {
        v18 = LeafSibling + 16;
        *(_QWORD *)&v92 = LeafSibling;
        *((_QWORD *)&v92 + 1) = LeafSibling + 16;
        v17 = LeafSibling;
      }
      else
      {
        v18 = 0LL;
      }
    }
LABEL_10:
    if ( v18 == -1LL )
      break;
    if ( !v18 )
      goto LABEL_84;
    v20 = *(_DWORD *)v18;
    v21 = *(_DWORD *)(a1 + 808);
    v22 = *(_DWORD *)(a1 + 464) * (v20 & *(_DWORD *)(a1 + 460));
    v23 = v20 >> *(_DWORD *)(a1 + 456);
    _BitScanReverse((unsigned int *)&v24, v23);
    v91[0] = v20;
    LODWORD(BugCheckParameter4) = 0;
    v25 = (int *)(*(_QWORD *)(*(_QWORD *)(a1 + 8 * v24 + 192) + 16LL * ((1 << v24) ^ v23))
                + *(unsigned int *)(a1 + 472)
                + v22);
    v26 = *v25 & v21;
    if ( (unsigned int)*v25 >> *(_DWORD *)(a1 + 812) != (_DWORD)v16 )
      goto LABEL_84;
    v27 = 4096;
    v28 = *(_DWORD *)(a1 + 824);
    if ( (v25[1] & 0xFFF) != 0 )
      v27 = v25[1] & 0xFFF;
    v29 = (unsigned int)(v27 + v28 + 15) >> 4;
    v30 = v28 + (-*(_DWORD *)(*(_QWORD *)(a1 + 1400) + 8LL) & (v27 + *(_DWORD *)(*(_QWORD *)(a1 + 1400) + 8LL) - 1));
    if ( v6 != (_DWORD)v16 && v29 + (*v95 & 0x1FFF) > *(_DWORD *)(a1 + 816) )
    {
      v6 = v16;
      v95 = v98;
      v96 = v97;
      v12 = 0;
      v89 = 0;
      v90 = 0;
    }
    if ( v26 == v12 && (_DWORD)v16 == v6 )
      goto LABEL_71;
    if ( !v96 )
    {
      v15 = -1073741802;
      goto LABEL_85;
    }
    memmove((void *)(v96 + (unsigned int)(16 * v12)), (const void *)(v97 + (unsigned int)(16 * v26)), v30);
    BugCheckParameter4 = 0LL;
    v31 = *(_DWORD *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFF000uLL) + 0x10);
    _BitScanReverse((unsigned int *)&v32, v31);
    v33 = (_QWORD *)(*(_QWORD *)(a1 + 8 * v32 + 192) + 16LL * (v31 ^ (1 << v32)));
    if ( *((_DWORD *)v33 + 3) )
    {
      v65 = wyhash(*v33, 4096LL, 0LL);
      v66 = *((_DWORD *)v33 + 3);
      v67 = (void *)*v33;
      if ( !v65 )
        v65 = 1;
      if ( v65 != v66 )
      {
        SmPrepareForFatalHeapCorruption(v67, (__int64)&BugCheckParameter4, v66, v65, (LONGLONG *)&BugCheckParameter4);
        KeBugCheckEx(0x1C7u, 0LL, *v33, *((unsigned int *)v33 + 3), BugCheckParameter4);
      }
      ExProtectPoolEx(v67, *v33, 4096LL, 4LL);
      *((_DWORD *)v33 + 3) = 0;
    }
    v34 = *(_QWORD *)(a1 + 2296);
    v35 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
    *(_QWORD *)(v34 + 96) = 10000000LL;
    *(_QWORD *)(v34 + 112) = v35;
    *(_QWORD *)(v34 + 104) = v35 + 300000000;
    if ( (*(_DWORD *)(v34 + 224) & 1) == 0 )
    {
      if ( !v35 )
        v35 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
      v36 = -1LL;
      v37 = -1LL;
      if ( v34 < v34 + 168 )
      {
        v38 = (unsigned __int64 *)(v34 + 8);
        do
        {
          if ( *v38 != -1LL )
          {
            v72 = v38[1];
            if ( v72 < v35 - *(_QWORD *)(v34 + 184) )
              v72 = v35 - *(_QWORD *)(v34 + 184);
            v73 = *(v38 - 1) + v72;
            if ( v73 < v36 )
              v36 = v73;
            if ( *v38 < v37 )
              v37 = *v38;
          }
          v38 += 3;
        }
        while ( (unsigned __int64)(v38 - 1) < v34 + 168 );
      }
      if ( v36 < v35 )
        v36 = v35;
      if ( v37 < v35 )
        v37 = v35;
      *(_QWORD *)(v34 + 168) = v37;
      if ( v37 == -1LL )
      {
        *(_QWORD *)(v34 + 176) = 0LL;
      }
      else
      {
        v39 = v36 - v35;
        if ( v37 < v36 )
          v39 = v37 - v35;
        *(_QWORD *)(v34 + 176) = v39;
        if ( !v39 )
          *(_QWORD *)(v34 + 176) = 1LL;
      }
      *(_QWORD *)(*(_QWORD *)(v34 - 6512) + 7448LL) = -*(_QWORD *)(v34 + 176);
    }
    v40 = (unsigned __int64 *)(a1 + 88);
    v41 = *(_DWORD *)(a1 + 112);
    v42 = v89 | (v6 << *(_DWORD *)(a1 + 812));
    if ( v41 == -1 || !v41 )
      v43 = a1 + 96;
    else
      v43 = *v40 + 16LL * (unsigned int)(v41 - 1);
    v17 = v92;
    if ( *(_QWORD *)v43 == (_QWORD)v92 )
    {
      *(_QWORD *)(v43 + 8) = *((_QWORD *)&v92 + 1);
    }
    else
    {
      B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
        a1 + 64,
        v40);
      v40 = (unsigned __int64 *)(a1 + 88);
      if ( *(_DWORD *)(a1 + 112) == -1 )
      {
        *(_OWORD *)v43 = v92;
      }
      else
      {
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchKey(
          a1 + 64,
          *(unsigned int *)(v17 + 16),
          a1 + 88);
        v74 = *(_DWORD *)(a1 + 112);
        v40 = (unsigned __int64 *)(a1 + 88);
        if ( v74 == -1 || !v74 )
          v75 = a1 + 96;
        else
          v75 = *v40 + 16LL * (unsigned int)(v74 - 1);
        *(_QWORD *)(v75 + 8) = *((_QWORD *)&v92 + 1);
      }
    }
    if ( v90 )
      goto LABEL_52;
    **(_DWORD **)(a1 + 760) = v42;
    v44 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeChangeKey(
            (_DWORD *)(a1 + 64),
            v40,
            *(_DWORD *)(a1 + 768));
    if ( !v44 )
    {
      v90 = 1;
      v40 = (unsigned __int64 *)(a1 + 88);
LABEL_52:
      **(_DWORD **)(a1 + 760) = *v25;
      B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeChangeKey(
        (_DWORD *)(a1 + 64),
        v40,
        *(_DWORD *)(a1 + 768));
      B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeIteratorCleanup(
        &v92,
        a1 + 64);
      *v25 = v42;
      v46 = v91[0];
      v105[1] = 0LL;
      v105[2] = 0LL;
      v108 = 0LL;
      v106 = 0;
      v92 = 0LL;
      v105[0] = &v109;
      v107 = 8;
      v15 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeInsert(
              a1 + 64,
              v91,
              v105);
      B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
        a1 + 64,
        v105);
      if ( v15 < 0 )
      {
        *v25 = **(_DWORD **)(a1 + 760);
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeChangeKey(
          (_DWORD *)(a1 + 64),
          (unsigned __int64 *)(a1 + 88),
          v46);
        goto LABEL_137;
      }
      v15 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchKey(
              a1 + 64,
              *(unsigned int *)(a1 + 768),
              a1 + 88);
      if ( v15 >= 0 )
        v15 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeDeleteEx(
                a1 + 64,
                a1 + 88);
      if ( v15 < 0 )
      {
        if ( v15 == -1073741818 )
          goto LABEL_137;
        __int2c();
      }
      v17 = v92;
      goto LABEL_57;
    }
    if ( v44 == -1 )
      break;
    v45 = v91[0];
    *v25 = v42;
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeChangeKey(
      (_DWORD *)(a1 + 64),
      (unsigned __int64 *)(a1 + 88),
      v45);
LABEL_57:
    v16 = v93;
    if ( v93 != v6 )
    {
      v47 = (_WORD *)(*(_QWORD *)(a1 + 1416) + v99);
      v48 = (unsigned __int16)*v47;
      v49 = v48 & 0x1FFF;
      if ( *(_BYTE *)(a1 + 776) )
        v50 = 0LL;
      else
        v50 = v48 >> 13;
      *v47 = v48 - v29;
      *(_DWORD *)(a1 + 8 * v50 + 2212) -= v29;
      if ( *(_DWORD *)(a1 + 16 * (v50 + 102)) != (_DWORD)v16 )
      {
        v51 = (unsigned int)(*(_DWORD *)(a1 + 808) + 1) >> 1;
        v52 = *v47 & 0x1FFF;
        if ( v49 < v51 && v49 )
        {
          if ( v52 >= v51 || (*v47 & 0x1FFF) == 0 )
          {
            --*(_DWORD *)(a1 + 1472);
            *(_BYTE *)(*(_QWORD *)(a1 + 1464) + (v16 >> 3)) |= 1 << (v16 & 7);
          }
        }
        else if ( v52 < v51 && (*v47 & 0x1FFF) != 0 )
        {
          *(_BYTE *)(*(_QWORD *)(a1 + 1464) + (v16 >> 3)) &= ~(1 << (v16 & 7));
          ++*(_DWORD *)(a1 + 1472);
        }
      }
      v53 = *(_QWORD *)(a1 + 1416);
      v54 = *(unsigned __int16 *)(v53 + 2LL * v6);
      v55 = (_WORD *)(v53 + 2LL * v6);
      v56 = v54 & 0x1FFF;
      if ( *(_BYTE *)(a1 + 776) )
        v57 = 0;
      else
        v57 = v54 >> 13;
      *v55 = v54 + v29;
      *(_DWORD *)(a1 + 8LL * v57 + 2212) += v29;
      v58 = (_DWORD *)(a1 + 16 * (v57 + 102LL));
      if ( *v58 != v6 )
      {
        v59 = (unsigned int)(*(_DWORD *)(a1 + 808) + 1) >> 1;
        v60 = *v55 & 0x1FFF;
        if ( v56 < v59 && v56 )
        {
          if ( v60 >= v59 || (*v55 & 0x1FFF) == 0 )
          {
            --*(_DWORD *)(a1 + 1472);
            v61 = (_BYTE *)(*(_QWORD *)(a1 + 1464) + ((unsigned __int64)v6 >> 3));
            *v61 |= 1 << (v6 & 7);
          }
        }
        else if ( v60 < v59 && (*v55 & 0x1FFF) != 0 )
        {
          v71 = (_BYTE *)(*(_QWORD *)(a1 + 1464) + ((unsigned __int64)v6 >> 3));
          *v71 &= ~(1 << (v6 & 7));
          ++*(_DWORD *)(a1 + 1472);
        }
      }
      if ( v29 )
      {
        if ( v6 == *v58 )
          v58[1] += v29;
      }
      else if ( (*v55 & 0x1FFF) == 0 && v6 != *v58 )
      {
        ST_STORE<SM_TRAITS>::StReleaseRegion(a1, v6);
      }
    }
    v12 = v89;
LABEL_71:
    v10 = v90;
    v12 += v29;
    v14 = a1 + 88;
    v89 = v12;
    if ( a6 )
    {
      if ( (unsigned int)ST_STORE<SM_TRAITS>::StDmCheckForCompaction(a1, 0LL, 0LL) != 2 )
      {
        v15 = -2147483634;
        goto LABEL_85;
      }
      v14 = a1 + 88;
    }
  }
  v15 = -1073741818;
LABEL_85:
  v62 = a1 + 64;
  v63 = (_DWORD **)(a1 + 80);
  if ( a1 == -64 )
    v63 = 0LL;
  if ( **v63 != -1 )
  {
    if ( v17 )
    {
      v76 = *(_QWORD *)v62;
      if ( v17 != *(_QWORD *)v62 )
      {
        v77 = 0;
        if ( v76 )
          v77 = *(unsigned __int8 *)(v76 + 2);
        v78 = 16LL * v77;
        v79 = v78 + 15;
        if ( v78 + 15 < v78 )
          v79 = 0xFFFFFFFFFFFFFF0LL;
        v80 = v79 & 0xFFFFFFFFFFFFFFF0uLL;
        v81 = alloca(v80);
        v82 = *(unsigned int *)(v17 + 16);
        v83 = alloca(v80);
        v104 = 1LL;
        v103 = v77;
        v101 = 0LL;
        v102 = 0;
        v100 = &v89;
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchKey(
          a1 + 64,
          v82,
          &v100);
        v84 = *((_QWORD *)&v89 + 2 * v77 - 4);
        v85 = *(_QWORD *)&v91[4 * v77 - 8];
        v86 = v84 + 16;
        v87 = (void **)(v84 + 8);
        v88 = (void **)(v85 - 8);
        if ( v85 <= v86 )
          v88 = v87;
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
          v62,
          &v100);
        if ( **(_DWORD **)(v62 + 16) != -1 )
          NP_CONTEXT::NpLeafDerefInternal((struct NP_CONTEXT::NP_CTX *)(v62 + 16), v88);
      }
    }
  }
  return (unsigned int)v15;
}
