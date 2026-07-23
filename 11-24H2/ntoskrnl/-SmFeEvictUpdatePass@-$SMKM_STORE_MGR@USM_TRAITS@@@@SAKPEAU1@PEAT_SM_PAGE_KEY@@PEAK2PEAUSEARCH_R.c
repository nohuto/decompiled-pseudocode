/*
 * XREFs of ?SmFeEvictUpdatePass@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2PEAUSEARCH_RESULT@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@@Z @ 0x1402E9430
 * Callers:
 *     ?SmFeEvictInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z @ 0x1402E9110 (-SmFeEvictInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeEvictUpdatePass(
        __int64 a1,
        unsigned int *a2,
        int *a3,
        unsigned int *a4,
        __int64 a5)
{
  int v5; // r10d
  int v6; // r14d
  unsigned int v7; // ebx
  unsigned int v8; // ebp
  __int64 v9; // r12
  unsigned int v10; // r8d
  int v11; // eax
  unsigned int v12; // edi
  __int64 *v13; // rax
  __int64 v14; // r9
  __int64 v15; // rdx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rsi
  unsigned int v18; // eax
  unsigned int v19; // edx
  __int64 v20; // r8
  __int64 v21; // rcx
  unsigned int v22; // r15d
  __int64 v23; // rdx
  __int64 v24; // r12
  __int64 v26; // rcx
  int v29; // [rsp+80h] [rbp+8h]
  int v30; // [rsp+88h] [rbp+10h]
  __int64 i; // [rsp+90h] [rbp+18h]
  __int64 v33; // [rsp+A0h] [rbp+28h]

  v5 = *a3;
  v6 = 0;
  v7 = *a2;
  v8 = 0;
  v9 = a1;
  v10 = 1024;
  v11 = *(_DWORD *)(a5 + 24);
  v12 = v5 + *a2 - 1;
  v30 = v5;
  v29 = 1024;
  if ( v11 == -1 || !v11 )
    v13 = (__int64 *)(a5 + 8);
  else
    v13 = (__int64 *)(*(_QWORD *)a5 + 16LL * (unsigned int)(v11 - 1));
  v14 = *v13;
  v15 = v13[1] - 8;
  for ( i = *v13; ; v14 = i )
  {
    if ( !v14 )
      goto LABEL_39;
    v16 = v15 + 8;
    v33 = v16;
    if ( v16 >= v14 + 8 * ((unsigned __int64)(unsigned __int16)*(_DWORD *)v14 + 2) )
    {
      v26 = *(_QWORD *)(v14 + 8);
      if ( v26 )
      {
        i = *(_QWORD *)(v14 + 8);
        v33 = v26 + 16;
      }
      v17 = 0LL;
      if ( v26 )
        v17 = v26 + 16;
    }
    else
    {
      v17 = v16;
    }
    if ( !v17 )
      goto LABEL_39;
    v18 = *(_DWORD *)v17;
    if ( v7 < *(_DWORD *)v17 || (*(_BYTE *)(v17 + 7) & 1) != 0 )
      break;
    if ( v10 != 1024 && v10 != *(unsigned __int16 *)(v17 + 4) )
      goto LABEL_32;
    if ( *(_BYTE *)(v17 + 6) == 2 )
    {
      if ( v10 != 1024 )
        goto LABEL_32;
    }
    else
    {
      if ( v8 && v10 == 1024 )
        goto LABEL_32;
      if ( !v6 )
      {
        v19 = *(unsigned __int16 *)(v17 + 4);
        if ( v19 >= 0x400 )
          goto LABEL_31;
        v20 = *(_QWORD *)(v9 + 8 * ((unsigned __int64)*(unsigned __int16 *)(v17 + 4) >> 5));
        if ( !v20 )
          goto LABEL_30;
        v21 = v20 + 40LL * (v19 & 0x1F);
        if ( !v21 )
          goto LABEL_30;
        v22 = v19 | ((*(_WORD *)(v21 + 32) & 0x3F) << 10);
        v23 = *(_QWORD *)(v9 + 8 * ((unsigned __int64)(v19 & 0x3FF) >> 5));
        if ( !v23 )
          goto LABEL_30;
        v24 = v23 + 40LL * (*(_WORD *)(v17 + 4) & 0x1F);
        if ( !v24 || !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v24 + 8)) )
          goto LABEL_30;
        if ( (*(_WORD *)(v24 + 32) & 0x3F) != v22 >> 10 )
        {
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v24 + 8));
LABEL_30:
          v10 = v29;
LABEL_31:
          ++v8;
          goto LABEL_32;
        }
        if ( !*(_QWORD *)v24 )
          goto LABEL_30;
        v10 = *(unsigned __int16 *)(v17 + 4);
        v5 = v30;
        v9 = a1;
        v29 = v10;
      }
      *(_BYTE *)(v17 + 6) = 2;
      ++v6;
    }
    if ( ++v8 == v5 )
      goto LABEL_32;
    v15 = v33;
    ++v7;
  }
  if ( v12 < v18 )
  {
LABEL_39:
    v8 = v12 + v8 - v7 + 1;
    goto LABEL_32;
  }
  v8 = v18 + v8 - v7;
  if ( (*(_BYTE *)(v17 + 7) & 1) != 0 )
    ++v8;
LABEL_32:
  *a3 = v6;
  *a4 = v8;
  return v10;
}
