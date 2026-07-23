/*
 * XREFs of ?BTreeRedistribute@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1402E9F28
 * Callers:
 *     ?BTreeInsertEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAT_SM_PAGE_KEY@@@Z @ 0x1402E7840 (-BTreeInsertEx@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 *     ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1402E8290 (-BTreeDeleteEx@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeRedistribute(
        _DWORD *a1,
        __int64 a2)
{
  __int64 v2; // r10
  __int64 v3; // rcx
  unsigned int v4; // r15d
  _DWORD *v5; // r9
  _DWORD *v6; // rdx
  _DWORD *v7; // rsi
  unsigned int v8; // r8d
  __int64 *v9; // rax
  _QWORD *v10; // rcx
  __int64 v11; // rax
  _DWORD *v12; // r12
  _DWORD *v13; // r10
  unsigned int v14; // r9d
  unsigned int v15; // edx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  _DWORD *v18; // r8
  unsigned int v19; // edi
  _DWORD *v20; // rbx
  _DWORD *v21; // r14
  unsigned int v22; // r11d
  __int64 v23; // rax
  bool v24; // zf
  int v25; // r9d
  _DWORD *v26; // rbp
  _DWORD *v27; // r13
  char *v28; // r13
  char *v29; // rbp
  unsigned int v30; // r8d
  int v32; // edx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // [rsp+20h] [rbp-58h]
  _DWORD *v36; // [rsp+80h] [rbp+8h] BYREF
  _DWORD *v37; // [rsp+88h] [rbp+10h] BYREF
  _DWORD *v38; // [rsp+90h] [rbp+18h]
  __int64 v39; // [rsp+98h] [rbp+20h]

  v36 = a1;
  v2 = 1LL;
  v3 = *(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1);
  v4 = 16;
  v5 = *(_DWORD **)v3;
  v6 = *(_DWORD **)(v3 - 16);
  v7 = *(_DWORD **)(v3 - 8);
  v8 = (unsigned __int8)-(*(_BYTE *)(*(_QWORD *)v3 + 3LL) != 0) + 255;
  if ( v7 == &v6[4 * (unsigned __int16)*v6 + 4] )
  {
    v7 -= 4;
    v9 = (__int64 *)(v7 - 2);
    if ( v7 <= v6 + 4 )
      v9 = (__int64 *)(v6 + 2);
    v10 = &v37;
    v36 = v5;
  }
  else
  {
    v37 = *(_DWORD **)v3;
    v9 = (__int64 *)(v7 + 2);
    v10 = &v36;
    v2 = 0LL;
  }
  v11 = *v9;
  *v10 = v11;
  v12 = v36;
  v35 = v11 | v2;
  v13 = v37;
  v14 = (unsigned __int16)*v36;
  v15 = (unsigned __int16)*v37;
  v16 = v15 + v14;
  if ( v15 + v14 >= v8 && v16 < 2 * v8 - 1 )
  {
    v17 = v16 >> 1;
    v18 = v37;
    if ( v15 > v14 )
    {
      v20 = v37;
      v22 = 0;
      v38 = v37;
      v19 = v15 - v17;
      v21 = v36;
    }
    else
    {
      v38 = v37;
      v19 = v17 - v15;
      v20 = v36;
      v21 = v37;
      v22 = v15;
    }
    LODWORD(v36) = v22;
    v23 = v14 < v15 ? v17 : 0;
    v24 = *((_BYTE *)v20 + 3) == 0;
    v25 = v23;
    v39 = v23;
    if ( v24 )
    {
      v18 = v38;
      v26 = &v20[4 * v23];
      v27 = &v21[4 * v22];
    }
    else
    {
      v4 = 8;
      v26 = &v20[2 * v23];
      v27 = &v21[2 * v22];
    }
    v28 = (char *)(v27 + 4);
    v29 = (char *)(v26 + 4);
    if ( v20 == v18 )
    {
      memmove(&v28[v4 * v19], v28, v4 * (unsigned __int16)*v21);
      v13 = v37;
      v22 = (unsigned int)v36;
      v25 = v39;
    }
    if ( *((_BYTE *)v20 + 3) )
    {
      v30 = v19;
    }
    else
    {
      v32 = *v7;
      if ( v20 == v13 )
      {
        v34 = 2LL * (v19 - 1);
        v21[2 * v34 + 4] = v32;
        *(_QWORD *)&v21[2 * v34 + 6] = *((_QWORD *)v21 + 1);
      }
      else
      {
        v33 = 2LL * v22;
        v21[2 * v33 + 4] = v32;
        *(_QWORD *)&v21[2 * v33 + 6] = *((_QWORD *)v20 + 1);
        v28 += v4;
      }
      if ( v20 == v13 )
      {
        *v7 = v20[4 * v25 + 4];
        *((_QWORD *)v21 + 1) = *(_QWORD *)&v20[4 * v25 + 6];
        v29 += v4;
      }
      else
      {
        *v7 = v20[4 * v19];
        *((_QWORD *)v20 + 1) = *(_QWORD *)&v20[4 * v19 + 2];
      }
      v30 = v19 - 1;
    }
    memmove(v28, v29, v4 * v30);
    *(_WORD *)v21 += v19;
    *(_WORD *)v20 -= v19;
    if ( v20 == v12 )
      memmove(v29, &v29[v4 * v19], v4 * (unsigned __int16)*v20);
    if ( *((_BYTE *)v12 + 3) )
      *v7 = v12[4];
  }
  return v35;
}
