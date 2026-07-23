/*
 * XREFs of ?SmFeCheckPresent@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z @ 0x1402F6760
 * Callers:
 *     ?SmReadPickStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEAPEAU?$SMKM_STORE@USM_TRAITS@@@@2@Z @ 0x1402F6680 (-SmReadPickStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEAPEAU-$SMKM_STO.c)
 * Callees:
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x1402E84A0 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BA.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeCheckPresent(__int64 a1, unsigned int *a2, unsigned int *a3, int *a4)
{
  unsigned int v4; // ebx
  unsigned int v7; // edi
  int v8; // r15d
  unsigned int v9; // eax
  unsigned int v10; // r14d
  int v11; // esi
  __int64 *v12; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // r9
  __int64 v15; // rcx
  char v16; // al
  __int64 v18; // rax
  unsigned int v19; // [rsp+20h] [rbp-E0h]
  _BYTE *v21; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v22[2]; // [rsp+48h] [rbp-B8h] BYREF
  int v23; // [rsp+58h] [rbp-A8h]
  int v24; // [rsp+5Ch] [rbp-A4h]
  __int64 v25; // [rsp+60h] [rbp-A0h]
  _BYTE v26[136]; // [rsp+68h] [rbp-98h] BYREF

  v4 = *a2;
  memset_0(v26, 0, 0x80uLL);
  v25 = 1LL;
  v22[0] = 0LL;
  v22[1] = 0LL;
  v23 = 0;
  v7 = 0;
  v8 = 0;
  v21 = v26;
  v9 = *a3;
  v10 = 1024;
  v24 = 8;
  v19 = v9;
  v11 = 1024;
  B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
    (__int64 *)(a1 + 448),
    v4,
    (__int64)&v21);
  if ( v23 == -1 || !v23 )
    v12 = v22;
  else
    v12 = (__int64 *)&v21[16 * (v23 - 1)];
  v13 = v12[1] - 8;
  v14 = *v12;
  while ( v14 )
  {
    v13 += 8LL;
    if ( v13 >= v14 + 8 * ((unsigned __int64)(unsigned __int16)*(_DWORD *)v14 + 2) )
    {
      v18 = *(_QWORD *)(v14 + 8);
      if ( v18 )
      {
        v14 = *(_QWORD *)(v14 + 8);
        v13 = v18 + 16;
      }
      v15 = (v18 + 16) & -(__int64)(v18 != 0);
    }
    else
    {
      v15 = v13;
    }
    if ( !v15 || v4 < *(_DWORD *)v15 || (*(_BYTE *)(v15 + 7) & 1) != 0 )
      break;
    v16 = *(_BYTE *)(v15 + 6);
    if ( v16 != 3 )
    {
      if ( v16 != 1 || (*(_DWORD *)(a1 + 2000) & 4) == 0 )
        break;
      v8 = 1;
    }
    if ( v7 )
    {
      if ( v11 != *(unsigned __int16 *)(v15 + 4) )
        goto LABEL_17;
    }
    else
    {
      v11 = *(unsigned __int16 *)(v15 + 4);
    }
    if ( ++v7 >= v19 )
      break;
    ++v4;
  }
  if ( !v7 )
    return v10;
LABEL_17:
  *a3 = v7;
  v10 = v11;
  *a4 = v8;
  return v10;
}
