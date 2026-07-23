/*
 * XREFs of ?StDmpSinglePageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAXPEAU_ST_PAGE_LOCATION@1@@Z @ 0x1402F7E00
 * Callers:
 *     ?StDmPageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1402F7AB0 (-StDmPageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_S.c)
 *     ?StDmSinglePageRetrieveSync@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAX1K@Z @ 0x14060AA3C (-StDmSinglePageRetrieveSync@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAX1K@Z.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14029F5F0 (MmMapLockedPagesSpecifyCache.c)
 *     ?StDmIsCurrentRegion@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@K@Z @ 0x1402F6CE8 (-StDmIsCurrentRegion@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StDmFinishPageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_WORK_ITEM@1@J@Z @ 0x1402F8440 (-StDmFinishPageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@P.c)
 *     ?StDmSinglePageCopy@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD2PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x1402F8924 (-StDmSinglePageCopy@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD2PEAU_ST_PAGE_LOCATIO.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x1402F8C30 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     ?NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z @ 0x140379214 (-NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z.c)
 *     ?BTreeFindLeafSiblingEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x140379B6C (-BTreeFindLeafSiblingEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@.c)
 *     SmArrayGrow @ 0x14037A5B0 (SmArrayGrow.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14037CE90 (-BTreeSearchResultDeref@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@.c)
 *     ?SmStMapPhysicalRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x140608EEC (-SmStMapPhysicalRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmpSinglePageRetrieve(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r12
  __int64 v6; // r15
  BOOL v7; // edi
  int v8; // r10d
  __int64 v10; // rbp
  int v11; // eax
  __int64 v12; // rbx
  _DWORD *v13; // rdx
  _DWORD *v14; // r8
  _DWORD *v15; // r9
  __int64 result; // rax
  unsigned int v17; // ebx
  __int64 v18; // rdx
  int v19; // r11d
  __int64 v20; // rcx
  _QWORD *v21; // rsi
  char *v22; // r10
  unsigned int v23; // edx
  unsigned int v24; // eax
  void **v25; // rcx
  char *v26; // r8
  int v27; // eax
  __int64 v28; // r8
  unsigned int v29; // eax
  unsigned int v30; // r10d
  int v31; // ebx
  __int64 v32; // r11
  int v33; // r8d
  unsigned int v34; // eax
  __int64 v35; // rcx
  unsigned int *i; // rdx
  unsigned int v37; // eax
  __int64 v38; // rcx
  unsigned int v39; // r11d
  int v40; // ecx
  int v41; // r10d
  int v42; // r10d
  unsigned int v43; // r11d
  __int16 v44; // ax
  int v45; // ecx
  __int64 v46; // rcx
  int v47; // r8d
  int v48; // r10d
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // rsi
  struct _MDL *v51; // r10
  __int64 v52; // rbp
  unsigned int v53; // ebx
  unsigned __int64 v54; // r9
  _DWORD *v55; // r8
  __int64 LeafSibling; // rax
  unsigned int IsCurrentRegion; // eax
  int v58; // [rsp+70h] [rbp+8h]
  unsigned int v59; // [rsp+78h] [rbp+10h]

  v4 = a2[52];
  v6 = a4;
  v7 = *(_BYTE *)(a1 + 776) == 0;
  v8 = a3;
  v59 = a3 & 2 | 1;
  if ( (a3 & 2) != 0 )
  {
    i = *(unsigned int **)(v4 + 16);
    goto LABEL_52;
  }
  if ( (*(_BYTE *)(a1 + 2290) & 1) == 0 )
  {
    v10 = a2[53];
    if ( !*(_BYTE *)v4 || a2[55] != *(_QWORD *)(*(_QWORD *)(a1 + 800) + 6856LL) )
    {
      if ( (*(_DWORD *)(v10 + 32) & 1) == 0 )
        B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultDeref(
          a1,
          a2[53]);
      *(_DWORD *)(v10 + 32) |= 1u;
      v17 = *(_DWORD *)(v4 + 16);
      B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultDeref(
        a1,
        v10);
      if ( *(_DWORD *)(v10 + 24) == -1 )
      {
        v19 = 0;
        v21 = (_QWORD *)(v10 + 8);
        v58 = 0;
      }
      else
      {
        v19 = 1;
        v58 = 1;
        if ( *(_QWORD *)a1 )
          v20 = *(unsigned __int8 *)(*(_QWORD *)a1 + 2LL);
        else
          v20 = 0LL;
        if ( *(_DWORD *)(v10 + 28) < (unsigned int)v20 )
        {
          if ( !(unsigned int)SmArrayGrow(v20, v18, v10 + 28, v10) )
          {
            result = 3221225626LL;
            goto LABEL_11;
          }
          v19 = 1;
        }
        v21 = *(_QWORD **)v10;
      }
      v22 = *(char **)a1;
      if ( !*(_QWORD *)a1 )
      {
        if ( !v19 )
        {
          *v21 = 0LL;
          v21[1] = 0LL;
        }
        goto LABEL_10;
      }
      while ( 1 )
      {
        v23 = -1;
        v24 = (unsigned __int16)*(_DWORD *)v22;
        if ( HIBYTE(*(_DWORD *)v22) )
        {
          if ( (unsigned __int16)*(_DWORD *)v22 )
          {
            do
            {
              if ( *(_DWORD *)&v22[8 * ((v24 + v23) >> 1) + 16] < v17 )
                v23 = (v24 + v23) >> 1;
              else
                v24 = (v24 + v23) >> 1;
            }
            while ( v23 + 1 != v24 );
          }
        }
        else if ( (unsigned __int16)*(_DWORD *)v22 )
        {
          do
          {
            if ( *(_DWORD *)&v22[16 * ((v24 + v23) >> 1) + 16] > v17 )
              v24 = (v24 + v23) >> 1;
            else
              v23 = (v24 + v23) >> 1;
          }
          while ( v23 + 1 != v24 );
        }
        if ( v22[3] )
          break;
        if ( v19 )
        {
          *v21 = v22;
          v21[1] = &v22[16 * v24 + 16];
          v21 += 2;
        }
        if ( v24 )
          v25 = (void **)&v22[16 * v24 + 8];
        else
          v25 = (void **)(v22 + 8);
        if ( **(_DWORD **)(a1 + 16) == -1 || v22[2] != 2 )
        {
          v22 = (char *)*v25;
        }
        else
        {
          v22 = (char *)NP_CONTEXT::NpLeafRefInternal(
                          (struct NP_CONTEXT::NP_CTX *)(a1 + 16),
                          v25,
                          2 * (*(_BYTE *)(v10 + 32) & 1u));
          if ( !v22 )
            goto LABEL_85;
          v19 = v58;
        }
      }
      *v21 = v22;
      v26 = &v22[8 * v24 + 16];
      v21[1] = v26;
      if ( v19 )
        *(_DWORD *)(v10 + 24) = (((__int64)v21 - *(_QWORD *)v10) >> 4) + 1;
      if ( v24 >= (unsigned __int16)*(_DWORD *)v22 || *(_DWORD *)v26 != v17 )
        goto LABEL_10;
      a2[55] = *(_QWORD *)(*(_QWORD *)(a1 + 800) + 6856LL);
      v27 = *(_DWORD *)(v10 + 24);
      if ( v27 == -1 || !v27 )
        v28 = v10 + 8;
      else
        v28 = *(_QWORD *)v10 + 16LL * (unsigned int)(v27 - 1);
      v14 = *(_DWORD **)(v28 + 8);
LABEL_50:
      LODWORD(a4) = *(_DWORD *)(a1 + 456);
      v29 = v14[1];
      v30 = *(_DWORD *)(a1 + 460);
      v31 = *(_DWORD *)(a1 + 464);
      v32 = *(unsigned int *)(a1 + 472);
      v33 = v30 & v29;
      v34 = v29 >> a4;
      _BitScanReverse((unsigned int *)&v35, v34);
      for ( i = (unsigned int *)(v32
                               + *(_QWORD *)(*(_QWORD *)(a1 + 8 * v35 + 192) + 16LL * ((1 << v35) ^ v34))
                               + (unsigned int)(v31 * v33));
            *i == -1;
            i = (unsigned int *)(v32
                               + *(_QWORD *)(*(_QWORD *)(a1 + 8 * v38 + 192) + 16LL * ((1 << v38) ^ v37))
                               + (v30 & i[1]) * v31) )
      {
        v37 = i[1] >> a4;
        _BitScanReverse((unsigned int *)&v38, v37);
      }
LABEL_52:
      v39 = *i;
      v40 = *(_DWORD *)(a1 + 812);
      v41 = *(_DWORD *)(a1 + 808);
      *(_DWORD *)v6 = *i;
      v42 = v39 & v41;
      v43 = v39 >> v40;
      v44 = 4096;
      v45 = i[1] & 0xFFF;
      if ( v45 )
        v44 = v45;
      *(_WORD *)(v6 + 4) = v44;
      *(_WORD *)(v6 + 6) = (unsigned __int8)*(_WORD *)v4;
      if ( !*(_BYTE *)(a1 + 776) )
        *(_DWORD *)(v6 + 16) = i[2];
      if ( (*(_DWORD *)(a1 + 776) & 0x20000) != 0
        || (IsCurrentRegion = ST_STORE<SM_TRAITS>::StDmIsCurrentRegion(a1, v43), IsCurrentRegion == 8) )
      {
        v46 = *(_QWORD *)(a1 + 800);
        v47 = 129;
        v48 = 16 * v42;
        if ( *(_QWORD *)(v6 + 8) != 1LL )
          v47 = 1;
        if ( (*(_BYTE *)(v46 + 6837) & 4) != 0 )
          v49 = SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(v46, v43, v48, a4, v47);
        else
          v49 = SMKM_STORE<SM_TRAITS>::SmStMapPhysicalRegion(v46, v43, v48, a4, v47);
        v50 = v49;
        if ( v49 <= 4 )
        {
          result = 2147483662LL;
          if ( v50 != 1 )
            result = 3221225746LL;
          goto LABEL_11;
        }
        *(_DWORD *)(v6 + 20) |= 1u;
      }
      else
      {
        v50 = *(_QWORD *)(a1 + 16LL * IsCurrentRegion + 1640) + (unsigned int)(16 * v42);
      }
      v51 = *(struct _MDL **)(v4 + 8);
      v52 = a2[2];
      if ( a3 )
      {
        v53 = 4;
        if ( (v51->MdlFlags & 5) != 0 )
          v51 = (struct _MDL *)v51->MappedSystemVa;
        else
          v51 = (struct _MDL *)MmMapLockedPagesSpecifyCache(v51, 0, MmCached, 0LL, 0, 0x40000010u);
        if ( (*(_DWORD *)(a3 + 8) & 0x8000000) != 0 )
          v53 = 36;
      }
      else
      {
        v53 = 0;
      }
      if ( v51 )
      {
        *(_DWORD *)(v6 + 20) ^= ((unsigned __int8)*(_DWORD *)(v6 + 20) ^ (unsigned __int8)(v53 >> 1)) & 2;
        v54 = ((unsigned __int64)v51 + 4096 * (unsigned __int64)*(unsigned __int16 *)(v6 + 6)) | 1;
        if ( (v53 & 0x20) == 0 )
          v54 = (unsigned __int64)v51 + 4096 * (unsigned __int64)*(unsigned __int16 *)(v6 + 6);
        result = ST_STORE<SM_TRAITS>::StDmSinglePageCopy(a1, v52, v50 | v59, v54, v6, a2);
        if ( (int)result >= 0 )
        {
          if ( (_DWORD)result == 259 )
            return result;
          result = 0LL;
        }
      }
      else
      {
        result = 3221225626LL;
      }
      goto LABEL_11;
    }
    v11 = *(_DWORD *)(v10 + 24);
    if ( !v11 )
    {
LABEL_10:
      result = 3221226021LL;
LABEL_11:
      v8 = a3;
      goto LABEL_12;
    }
    v12 = *(_QWORD *)v10 + 16LL * (unsigned int)(v11 - 1);
    v13 = *(_DWORD **)v12;
    v14 = (_DWORD *)(*(_QWORD *)(v12 + 8) + 8LL);
    *(_QWORD *)(v12 + 8) = v14;
    v15 = &v13[2 * (unsigned __int16)*v13 + 4];
    if ( v14 >= v15 )
    {
      v55 = v13 + 4;
      if ( (unsigned __int16)*v13 )
        v55 = v15 - 2;
      *(_QWORD *)(v12 + 8) = v55;
      LeafSibling = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeFindLeafSiblingEx(
                      a1,
                      v10);
      if ( !LeafSibling )
        goto LABEL_10;
      if ( LeafSibling == -1 )
        goto LABEL_85;
      v14 = (_DWORD *)(LeafSibling + 16);
      *(_QWORD *)(v12 + 8) = LeafSibling + 16;
    }
    if ( v14 != (_DWORD *)-1LL )
    {
      if ( !v14 || *v14 != *(_DWORD *)(v4 + 16) )
        goto LABEL_10;
      goto LABEL_50;
    }
LABEL_85:
    result = 3221225478LL;
    goto LABEL_11;
  }
  result = 3221226722LL;
LABEL_12:
  if ( v7 )
    return ST_STORE<SM_TRAITS>::StDmFinishPageRetrieve(a1, v6, (_DWORD)a2, v8, result);
  return result;
}
