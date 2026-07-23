/*
 * XREFs of ?StCompactRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z @ 0x14037AAF0
 * Callers:
 *     ?StDmReuseCurrentRegion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_CURRENT_REGION@1@@Z @ 0x1402F578C (-StDmReuseCurrentRegion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_CURRENT_REGION@1@.c)
 *     ?StDmCurrentRegionSet@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x1402F6914 (-StDmCurrentRegionSet@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StCompactionPerformEmergency@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x14048F854 (-StCompactionPerformEmergency@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StCompactionPerformInMem@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x1404F53C8 (-StCompactionPerformInMem@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 * Callees:
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1402F613C (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     SmPrepareForFatalHeapCorruption @ 0x14037A040 (SmPrepareForFatalHeapCorruption.c)
 *     ?BTreeIteratorCleanup@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAUITERATOR@1@PEAU1@@Z @ 0x14037A520 (-BTreeIteratorCleanup@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U.c)
 *     ?BTreeChangeKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAKPEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x14037A6A0 (-BTreeChangeKey@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REG.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x14037B540 (-BTreeIteratorFromSearchResult@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_C.c)
 *     ?BTreeInsert@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@PEAUSEARCH_RESULT@1@@Z @ 0x14037B970 (-BTreeInsert@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION.c)
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x14037D5F0 (-BTreeSearchKey@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REG.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14037DB30 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     ?BTreeDeleteEx@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14037E740 (-BTreeDeleteEx@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGI.c)
 *     ?StDmPageRecordUnprotect@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x140381180 (-StDmPageRecordUnprotect@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z.c)
 *     ExProtectPoolEx @ 0x140382168 (ExProtectPoolEx.c)
 *     wyhash @ 0x140382B78 (wyhash.c)
 *     ?BTreeFindLeafSibling@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAU23@K@Z @ 0x140441C88 (-BTreeFindLeafSibling@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     ?StDmCheckForCompaction@?$ST_STORE@USM_TRAITS@@@@SA?AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA_MGR@1@KPEAK@Z @ 0x1406094F4 (-StDmCheckForCompaction@-$ST_STORE@USM_TRAITS@@@@SA-AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
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
  __int64 v13; // r15
  int v14; // edi
  unsigned __int64 v15; // rdi
  __int64 v16; // r14
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  unsigned int v19; // edx
  int v20; // r9d
  __int64 v21; // r13
  unsigned int v22; // eax
  __int64 v23; // rcx
  int *v24; // r13
  int v25; // r9d
  int v26; // edx
  int v27; // r8d
  unsigned int v28; // r15d
  unsigned int v29; // r10d
  unsigned int v30; // r8d
  __int64 v31; // rcx
  _QWORD *v32; // rdi
  unsigned __int64 v33; // r9
  unsigned __int64 v34; // r10
  unsigned __int64 v35; // rdi
  unsigned __int64 v36; // rsi
  unsigned __int64 *v37; // rax
  unsigned __int64 v38; // rax
  unsigned __int64 *v39; // rdx
  int v40; // eax
  int v41; // esi
  __int64 v42; // rdi
  int v43; // eax
  unsigned int v44; // r8d
  unsigned __int64 v45; // rdx
  unsigned __int64 v46; // rdx
  unsigned int v47; // esi
  _WORD *v48; // r9
  unsigned int v49; // r8d
  unsigned __int16 v50; // r10
  __int64 v51; // rdx
  unsigned int v52; // eax
  unsigned int v53; // ecx
  __int64 v54; // rax
  unsigned int v55; // edx
  _WORD *v56; // r9
  unsigned __int16 v57; // r10
  __int64 v58; // rcx
  _DWORD *v59; // r8
  unsigned int v60; // eax
  unsigned int v61; // ecx
  _BYTE *v62; // rdx
  unsigned int v64; // eax
  unsigned int v65; // r8d
  void *v66; // rcx
  _DWORD **v67; // rax
  _DWORD **v68; // rax
  __int64 LeafSibling; // rax
  int v70; // eax
  __int64 v71; // rcx
  _BYTE *v72; // rdx
  int v73; // [rsp+30h] [rbp-D0h]
  int v74; // [rsp+34h] [rbp-CCh]
  unsigned int v75; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v76; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v77; // [rsp+50h] [rbp-B0h]
  ULONG_PTR BugCheckParameter4; // [rsp+58h] [rbp-A8h] BYREF
  _WORD *v79; // [rsp+60h] [rbp-A0h]
  __int64 v80; // [rsp+68h] [rbp-98h]
  __int64 v81; // [rsp+70h] [rbp-90h]
  _WORD *v82; // [rsp+78h] [rbp-88h]
  __int64 v83; // [rsp+80h] [rbp-80h]
  _QWORD v84[3]; // [rsp+90h] [rbp-70h] BYREF
  int v85; // [rsp+A8h] [rbp-58h]
  int v86; // [rsp+ACh] [rbp-54h]
  __int64 v87; // [rsp+B0h] [rbp-50h]
  char v88; // [rsp+B8h] [rbp-48h] BYREF

  v6 = a5;
  v81 = a2;
  v77 = a3;
  v80 = a4;
  memset_0(v84, 0, 0xA8uLL);
  v9 = *(_QWORD *)(a1 + 1416);
  v10 = 0;
  v74 = 0;
  v83 = 2LL * a3;
  v76 = 0LL;
  v11 = (_WORD *)(v9 + 2LL * a5);
  v82 = (_WORD *)(v9 + v83);
  v79 = v11;
  if ( (_WORD *)(v9 + v83) == v11 )
    v12 = 0;
  else
    v12 = *v11 & 0x1FFF;
  v73 = v12;
  ST_STORE<SM_TRAITS>::StDmPageRecordUnprotect(a1, *(_QWORD *)(a1 + 760));
  v13 = a1 + 88;
  if ( (*(_DWORD *)(a1 + 120) & 1) != 0 )
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
      a1 + 64,
      a1 + 88);
  *(_DWORD *)(a1 + 120) &= ~1u;
  **(_DWORD **)(a1 + 760) = a3 << *(_DWORD *)(a1 + 812);
  v14 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchKey(
          a1 + 64,
          *(unsigned int *)(a1 + 768),
          a1 + 88);
  if ( v14 != -1073741818 )
  {
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeIteratorFromSearchResult(
      a1 + 64,
      &v76,
      a1 + 88);
    LODWORD(v15) = v77;
    v16 = v76;
    while ( 1 )
    {
      if ( v10 )
      {
        **(_DWORD **)(a1 + 760) = (_DWORD)v15 << *(_DWORD *)(a1 + 812);
        v14 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchKey(
                a1 + 64,
                *(unsigned int *)(a1 + 768),
                v13);
        if ( v14 == -1073741818 )
          break;
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeIteratorCleanup(
          (__int64 *)&v76,
          (_QWORD *)(a1 + 64));
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeIteratorFromSearchResult(
          a1 + 64,
          &v76,
          v13);
        v16 = v76;
        LODWORD(v15) = v77;
      }
      if ( !v16 )
      {
LABEL_91:
        v14 = 0;
        break;
      }
      v17 = *((_QWORD *)&v76 + 1) + 4LL;
      v18 = (unsigned __int16)*(_DWORD *)v16 + 4LL;
      *((_QWORD *)&v76 + 1) = v17;
      if ( v17 >= v16 + 4 * v18 )
      {
        if ( a1 == -64 )
          v67 = 0LL;
        else
          v67 = (_DWORD **)(a1 + 80);
        if ( **v67 == -1 )
        {
          if ( a1 == -64 )
            v68 = 0LL;
          else
            v68 = (_DWORD **)(a1 + 80);
          if ( **v68 != -1 )
          {
            LeafSibling = 3358LL;
LABEL_105:
            v17 = LeafSibling + 16;
            *(_QWORD *)&v76 = LeafSibling;
            *((_QWORD *)&v76 + 1) = LeafSibling + 16;
            v16 = LeafSibling;
            goto LABEL_10;
          }
          LeafSibling = *(_QWORD *)(v16 + 8);
        }
        else
        {
          LeafSibling = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeFindLeafSibling(
                          a1 + 64,
                          v16);
          if ( LeafSibling == -1 )
          {
            v17 = -1LL;
            goto LABEL_10;
          }
        }
        if ( LeafSibling )
          goto LABEL_105;
        v17 = 0LL;
      }
LABEL_10:
      if ( v17 == -1LL )
        goto LABEL_126;
      if ( !v17 )
        goto LABEL_91;
      v19 = *(_DWORD *)v17;
      v20 = *(_DWORD *)(a1 + 808);
      v21 = *(_DWORD *)(a1 + 464) * (v19 & *(_DWORD *)(a1 + 460));
      v22 = v19 >> *(_DWORD *)(a1 + 456);
      _BitScanReverse((unsigned int *)&v23, v22);
      v75 = v19;
      LODWORD(BugCheckParameter4) = 0;
      v24 = (int *)(*(_QWORD *)(*(_QWORD *)(a1 + 8 * v23 + 192) + 16LL * ((1 << v23) ^ v22))
                  + *(unsigned int *)(a1 + 472)
                  + v21);
      v25 = *v24 & v20;
      if ( (unsigned int)*v24 >> *(_DWORD *)(a1 + 812) != (_DWORD)v15 )
        goto LABEL_91;
      v26 = 4096;
      v27 = *(_DWORD *)(a1 + 824);
      if ( (v24[1] & 0xFFF) != 0 )
        v26 = v24[1] & 0xFFF;
      v28 = (unsigned int)(v26 + v27 + 15) >> 4;
      v29 = v27 + (-*(_DWORD *)(*(_QWORD *)(a1 + 1400) + 8LL) & (v26 + *(_DWORD *)(*(_QWORD *)(a1 + 1400) + 8LL) - 1));
      if ( v6 != (_DWORD)v15 && v28 + (*v79 & 0x1FFF) > *(_DWORD *)(a1 + 816) )
      {
        v12 = 0;
        v79 = v82;
        v6 = v15;
        v80 = v81;
        v73 = 0;
        v74 = 0;
      }
      if ( v25 == v12 && (_DWORD)v15 == v6 )
        goto LABEL_71;
      if ( !v80 )
      {
        v14 = -1073741802;
        break;
      }
      memmove((void *)(v80 + (unsigned int)(16 * v12)), (const void *)(v81 + (unsigned int)(16 * v25)), v29);
      BugCheckParameter4 = 0LL;
      v30 = *(_DWORD *)(((unsigned __int64)v24 & 0xFFFFFFFFFFFFF000uLL) + 0x10);
      _BitScanReverse((unsigned int *)&v31, v30);
      v32 = (_QWORD *)(*(_QWORD *)(a1 + 8 * v31 + 192) + 16LL * (v30 ^ (1 << v31)));
      if ( *((_DWORD *)v32 + 3) )
      {
        v64 = wyhash(*v32, 4096LL, 0LL);
        v65 = *((_DWORD *)v32 + 3);
        v66 = (void *)*v32;
        if ( !v64 )
          v64 = 1;
        if ( v64 != v65 )
        {
          SmPrepareForFatalHeapCorruption(v66, (__int64)&BugCheckParameter4, v65, v64, (LONGLONG *)&BugCheckParameter4);
          KeBugCheckEx(0x1C7u, 0LL, *v32, *((unsigned int *)v32 + 3), BugCheckParameter4);
        }
        ExProtectPoolEx(v66, *v32, 4096LL, 4LL);
        *((_DWORD *)v32 + 3) = 0;
      }
      v33 = *(_QWORD *)(a1 + 2296);
      v34 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
      *(_QWORD *)(v33 + 96) = 10000000LL;
      *(_QWORD *)(v33 + 112) = v34;
      *(_QWORD *)(v33 + 104) = v34 + 300000000;
      if ( (*(_DWORD *)(v33 + 224) & 1) == 0 )
      {
        if ( !v34 )
          v34 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
        v35 = -1LL;
        v36 = -1LL;
        if ( v33 < v33 + 168 )
        {
          v37 = (unsigned __int64 *)(v33 + 8);
          do
          {
            if ( *v37 != -1LL )
            {
              v45 = v37[1];
              if ( v45 < v34 - *(_QWORD *)(v33 + 184) )
                v45 = v34 - *(_QWORD *)(v33 + 184);
              v46 = *(v37 - 1) + v45;
              if ( v46 < v35 )
                v35 = v46;
              if ( *v37 < v36 )
                v36 = *v37;
            }
            v37 += 3;
          }
          while ( (unsigned __int64)(v37 - 1) < v33 + 168 );
        }
        if ( v35 < v34 )
          v35 = v34;
        if ( v36 < v34 )
          v36 = v34;
        *(_QWORD *)(v33 + 168) = v36;
        if ( v36 == -1LL )
        {
          *(_QWORD *)(v33 + 176) = 0LL;
        }
        else
        {
          v38 = v35 - v34;
          if ( v36 < v35 )
            v38 = v36 - v34;
          *(_QWORD *)(v33 + 176) = v38;
          if ( !v38 )
            *(_QWORD *)(v33 + 176) = 1LL;
        }
        *(_QWORD *)(*(_QWORD *)(v33 - 6512) + 7448LL) = -*(_QWORD *)(v33 + 176);
      }
      v39 = (unsigned __int64 *)(a1 + 88);
      v40 = *(_DWORD *)(a1 + 112);
      v41 = v73 | (v6 << *(_DWORD *)(a1 + 812));
      if ( v40 == -1 || !v40 )
        v42 = a1 + 96;
      else
        v42 = *v39 + 16LL * (unsigned int)(v40 - 1);
      v16 = v76;
      if ( *(_QWORD *)v42 == (_QWORD)v76 )
      {
        *(_QWORD *)(v42 + 8) = *((_QWORD *)&v76 + 1);
      }
      else
      {
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
          a1 + 64,
          v39);
        v39 = (unsigned __int64 *)(a1 + 88);
        if ( *(_DWORD *)(a1 + 112) == -1 )
        {
          *(_OWORD *)v42 = v76;
        }
        else
        {
          B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchKey(
            a1 + 64,
            *(unsigned int *)(v16 + 16),
            a1 + 88);
          v70 = *(_DWORD *)(a1 + 112);
          v39 = (unsigned __int64 *)(a1 + 88);
          if ( v70 == -1 || !v70 )
            v71 = a1 + 96;
          else
            v71 = *v39 + 16LL * (unsigned int)(v70 - 1);
          *(_QWORD *)(v71 + 8) = *((_QWORD *)&v76 + 1);
        }
      }
      if ( v74 )
        goto LABEL_52;
      **(_DWORD **)(a1 + 760) = v41;
      v43 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeChangeKey(
              (_DWORD *)(a1 + 64),
              v39,
              *(_DWORD *)(a1 + 768));
      if ( !v43 )
      {
        v74 = 1;
        v39 = (unsigned __int64 *)(a1 + 88);
LABEL_52:
        **(_DWORD **)(a1 + 760) = *v24;
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeChangeKey(
          (_DWORD *)(a1 + 64),
          v39,
          *(_DWORD *)(a1 + 768));
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeIteratorCleanup(
          (__int64 *)&v76,
          (_QWORD *)(a1 + 64));
        *v24 = v41;
        v47 = v75;
        v84[1] = 0LL;
        v84[2] = 0LL;
        v87 = 0LL;
        v85 = 0;
        v76 = 0LL;
        v84[0] = &v88;
        v86 = 8;
        v14 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeInsert(
                a1 + 64,
                &v75,
                v84);
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
          a1 + 64,
          v84);
        if ( v14 < 0 )
        {
          *v24 = **(_DWORD **)(a1 + 760);
          B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeChangeKey(
            (_DWORD *)(a1 + 64),
            (unsigned __int64 *)(a1 + 88),
            v47);
          break;
        }
        v14 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchKey(
                a1 + 64,
                *(unsigned int *)(a1 + 768),
                a1 + 88);
        if ( v14 >= 0 )
          v14 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeDeleteEx(
                  a1 + 64,
                  a1 + 88);
        if ( v14 < 0 )
        {
          if ( v14 != -1073741818 )
            NT_ASSERT("(((NTSTATUS)(Status)) >= 0) || Status == ((NTSTATUS)0xC0000006L)");
          break;
        }
        v16 = v76;
        goto LABEL_57;
      }
      if ( v43 == -1 )
      {
LABEL_126:
        v14 = -1073741818;
        break;
      }
      v44 = v75;
      *v24 = v41;
      B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeChangeKey(
        (_DWORD *)(a1 + 64),
        (unsigned __int64 *)(a1 + 88),
        v44);
LABEL_57:
      v15 = v77;
      if ( v77 != v6 )
      {
        v48 = (_WORD *)(*(_QWORD *)(a1 + 1416) + v83);
        v49 = (unsigned __int16)*v48;
        v50 = v49 & 0x1FFF;
        if ( *(_BYTE *)(a1 + 776) )
          v51 = 0LL;
        else
          v51 = v49 >> 13;
        *v48 = v49 - v28;
        *(_DWORD *)(a1 + 8 * v51 + 2212) -= v28;
        if ( *(_DWORD *)(a1 + 16 * ((unsigned int)v51 + 102LL)) != (_DWORD)v15 )
        {
          v52 = (unsigned int)(*(_DWORD *)(a1 + 808) + 1) >> 1;
          v53 = *v48 & 0x1FFF;
          if ( v50 < v52 && v50 )
          {
            if ( v53 >= v52 || (*v48 & 0x1FFF) == 0 )
            {
              --*(_DWORD *)(a1 + 1472);
              *(_BYTE *)(*(_QWORD *)(a1 + 1464) + (v15 >> 3)) |= 1 << (v15 & 7);
            }
          }
          else if ( v53 < v52 && (*v48 & 0x1FFF) != 0 )
          {
            *(_BYTE *)(*(_QWORD *)(a1 + 1464) + (v15 >> 3)) &= ~(1 << (v15 & 7));
            ++*(_DWORD *)(a1 + 1472);
          }
        }
        v54 = *(_QWORD *)(a1 + 1416);
        v55 = *(unsigned __int16 *)(v54 + 2LL * v6);
        v56 = (_WORD *)(v54 + 2LL * v6);
        v57 = v55 & 0x1FFF;
        if ( *(_BYTE *)(a1 + 776) )
          v58 = 0LL;
        else
          v58 = v55 >> 13;
        *v56 = v55 + v28;
        v59 = (_DWORD *)(a1 + 16 * (v58 + 102));
        *(_DWORD *)(a1 + 8 * v58 + 2212) += v28;
        if ( *v59 != v6 )
        {
          v60 = (unsigned int)(*(_DWORD *)(a1 + 808) + 1) >> 1;
          v61 = *v56 & 0x1FFF;
          if ( v57 < v60 && v57 )
          {
            if ( v61 >= v60 || (*v56 & 0x1FFF) == 0 )
            {
              --*(_DWORD *)(a1 + 1472);
              v62 = (_BYTE *)(*(_QWORD *)(a1 + 1464) + ((unsigned __int64)v6 >> 3));
              *v62 |= 1 << (v6 & 7);
            }
          }
          else if ( v61 < v60 && (*v56 & 0x1FFF) != 0 )
          {
            v72 = (_BYTE *)(*(_QWORD *)(a1 + 1464) + ((unsigned __int64)v6 >> 3));
            *v72 &= ~(1 << (v6 & 7));
            ++*(_DWORD *)(a1 + 1472);
          }
        }
        if ( v28 )
        {
          if ( v6 == *v59 )
            v59[1] += v28;
        }
        else if ( (*v56 & 0x1FFF) == 0 && v6 != *v59 )
        {
          ST_STORE<SM_TRAITS>::StReleaseRegion(a1, v6);
        }
      }
      v12 = v73;
LABEL_71:
      v10 = v74;
      v12 += v28;
      v13 = a1 + 88;
      v73 = v12;
      if ( a6 )
      {
        if ( (unsigned int)ST_STORE<SM_TRAITS>::StDmCheckForCompaction(a1, 0LL, 0LL) != 2 )
        {
          v14 = -2147483634;
          break;
        }
        v13 = a1 + 88;
      }
    }
  }
  B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeIteratorCleanup(
    (__int64 *)&v76,
    (_QWORD *)(a1 + 64));
  return (unsigned int)v14;
}
