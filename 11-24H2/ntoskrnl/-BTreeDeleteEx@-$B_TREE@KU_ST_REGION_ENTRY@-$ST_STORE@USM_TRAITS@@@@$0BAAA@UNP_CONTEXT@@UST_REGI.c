/*
 * XREFs of ?BTreeDeleteEx@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14037E740
 * Callers:
 *     ?BTreeMergeNodes@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@PEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x140378870 (-BTreeMergeNodes@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_RE.c)
 *     ?StCompactRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z @ 0x14037AAF0 (-StCompactRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z.c)
 *     ?StDmpSinglePageInsert@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x14037BE70 (-StDmpSinglePageInsert@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_S.c)
 *     ?StDmPageRecordRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEAUSEARCH_RESULT@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@@Z @ 0x14037E050 (-StDmPageRecordRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEAUS.c)
 * Callees:
 *     ?BTreeMergeNodes@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@PEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x140378870 (-BTreeMergeNodes@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_RE.c)
 *     ?BTreeDeleteNode@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x140378A04 (-BTreeDeleteNode@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CON.c)
 *     ?NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z @ 0x140379214 (-NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z.c)
 *     ?BTreeRedistribute@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140453360 (-BTreeRedistribute@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_.c)
 *     ?NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x14045A5C8 (-NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeDeleteEx(
        __int64 a1,
        __int64 a2)
{
  void **v4; // rdi
  _DWORD *v5; // rbx
  __int64 v6; // rcx
  char *v7; // rax
  const void *v8; // rdx
  unsigned int v9; // r14d
  __int64 v10; // rcx
  __int64 v11; // rcx
  char *v12; // rbp
  _DWORD *v13; // rdx
  _QWORD *i; // rcx
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // r12
  unsigned int v18; // eax
  __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  void **v21; // rdx
  unsigned __int64 v22; // r12
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  char *v26; // rax
  _DWORD *v27; // rbp
  unsigned __int64 v28; // r14
  __int64 v29; // rdx

  v4 = (void **)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
  v5 = *v4;
  v6 = (unsigned __int16)*(_DWORD *)*v4;
  v7 = (char *)v4[1];
  if ( *((_BYTE *)*v4 + 3) )
  {
    v8 = v7 + 4;
    v9 = 510;
    v10 = 4 * v6 + 12;
  }
  else
  {
    v8 = v7 + 16;
    v10 = 16 * v6;
    v9 = 127;
  }
  v11 = v10 - (_QWORD)v7;
  v12 = (char *)v5 + v11;
  if ( (_DWORD *)((char *)v5 + v11) )
    memmove(v4[1], v8, (size_t)v5 + v11);
  --*(_WORD *)v5;
  if ( *((_BYTE *)v5 + 3) )
    --*(_QWORD *)(a1 + 8);
  if ( *(_DWORD **)a1 == v5 )
  {
    if ( !(unsigned __int16)*v5 && !*((_BYTE *)v5 + 3) )
    {
      memmove(v4, v4 + 2, 16LL * (unsigned int)(*(_DWORD *)(a2 + 28) - 1));
      --*(_DWORD *)(a2 + 24);
      if ( **(_DWORD **)(a1 + 16) == -1 || *((_BYTE *)v5 + 2) != 2 )
      {
        *(_QWORD *)a1 = *((_QWORD *)v5 + 1);
      }
      else
      {
        *(_QWORD *)a1 = NP_CONTEXT::NpLeafRefInternal((struct NP_CONTEXT **)(a1 + 16), (void **)v5 + 1, 1);
        if ( **(_DWORD **)(a1 + 16) != -1 )
          NP_CONTEXT::NpLeafDerefInternal((struct NP_CONTEXT::NP_CTX *)(a1 + 16), (void **)v5 + 1);
        if ( **(_DWORD **)(a1 + 16) != -1 )
          NP_CONTEXT::NpLeafDerefInternal((struct NP_CONTEXT::NP_CTX *)(a1 + 16), (void **)v5 + 1);
        v27 = *(_DWORD **)(a1 + 16);
        if ( *v27 != -1 )
        {
          if ( (v5[2] & 1) != 0 )
          {
            v28 = *((_QWORD *)v5 + 1) & 0xFFFFFFFFFFFFF000uLL;
            v29 = *(_QWORD *)(v28 + 8);
            if ( v29 && (v29 & 2) == 0 )
            {
              guard_dispatch_icall_no_overrides(a1 + 16, v29);
              *(_DWORD *)(v28 + 8) |= 2u;
              --v27[12];
            }
          }
          else
          {
            --v27[11];
            guard_dispatch_icall_no_overrides(a1 + 16, *((_QWORD *)v5 + 1));
          }
        }
      }
      B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDeleteNode(
        a1,
        (unsigned __int8 *)v5);
    }
    return 0LL;
  }
  else
  {
    if ( (unsigned __int16)*v5 < v9 )
    {
      v17 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeRedistribute(
              a1,
              a2);
      if ( !v17 )
        return 3221225478LL;
      v18 = (unsigned __int16)*v5;
      if ( v18 < v9 )
      {
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeMergeNodes(
          a1,
          a2,
          v17);
        v4 = (void **)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
        if ( (v17 & 1) != 0 )
        {
          v22 = v17 & 0xFFFFFFFFFFFFFFFEuLL;
          *v4 = (void *)v22;
          v23 = (unsigned __int16)*(_DWORD *)v22;
          if ( *(_BYTE *)(v22 + 3) )
            v24 = 4 * v23 + 16;
          else
            v24 = 16 * (v23 + 1);
          v4[1] = (void *)(v22 + v24 - (_QWORD)v12);
        }
      }
      else
      {
        if ( (v17 & 1) != 0 )
        {
          v25 = v18 - v9 + 1;
          v26 = (char *)v4[1];
          if ( *((_BYTE *)v5 + 3) )
            v4[1] = &v26[4 * v25];
          else
            v4[1] = &v26[16 * v25];
        }
        if ( *((_BYTE *)v5 + 3) )
        {
          v19 = (__int64)*(v4 - 2);
          v20 = (unsigned __int64)*(v4 - 1) + 32 * !(v17 & 1) - 16;
          if ( v20 > v19 + 16 )
            v21 = (void **)(v20 - 8);
          else
            v21 = (void **)(v19 + 8);
          if ( **(_DWORD **)(a1 + 16) != -1 )
            NP_CONTEXT::NpLeafDerefInternal((struct NP_CONTEXT::NP_CTX *)(a1 + 16), v21);
        }
      }
    }
    v13 = v4[1];
    if ( v13 == (_DWORD *)((char *)*v4 + 16) && *((_BYTE *)*v4 + 3) )
    {
      for ( i = (_QWORD *)(*(_QWORD *)a2 + 16 * (*(unsigned int *)(a2 + 24) - 2LL));
            (unsigned __int64)i >= *(_QWORD *)a2;
            i -= 2 )
      {
        v16 = i[1];
        if ( v16 > *i + 16LL )
        {
          *(_DWORD *)(v16 - 16) = *v13;
          return 0LL;
        }
      }
    }
    return 0LL;
  }
}
