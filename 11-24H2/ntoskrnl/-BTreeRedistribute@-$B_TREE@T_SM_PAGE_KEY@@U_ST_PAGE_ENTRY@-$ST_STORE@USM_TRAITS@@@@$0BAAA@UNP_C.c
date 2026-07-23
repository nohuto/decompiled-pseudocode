/*
 * XREFs of ?BTreeRedistribute@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14044DBE4
 * Callers:
 *     ?BTreeInsertEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAT_SM_PAGE_KEY@@@Z @ 0x14037C920 (-BTreeInsertEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTE.c)
 *     ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1403807E0 (-BTreeDeleteEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTE.c)
 * Callees:
 *     ?NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z @ 0x140379214 (-NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

unsigned __int64 __fastcall B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeRedistribute(
        __int64 a1,
        __int64 a2)
{
  int v2; // r8d
  __int64 v3; // r12
  __int64 v4; // r8
  unsigned int v5; // r15d
  __int64 v6; // r10
  _DWORD *v7; // r14
  unsigned int v8; // edi
  void **v9; // r9
  void **v10; // rbx
  unsigned __int64 result; // rax
  _DWORD *v12; // r9
  _DWORD *v13; // r12
  unsigned int v14; // edx
  unsigned int v15; // r8d
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  _DWORD *v18; // r10
  _DWORD *v19; // rbx
  unsigned int v20; // edi
  _DWORD *v21; // rsi
  unsigned int v22; // r11d
  __int64 v23; // rax
  bool v24; // zf
  int v25; // r8d
  _DWORD *v26; // rbp
  _DWORD *v27; // r13
  char *v28; // r13
  char *v29; // rbp
  unsigned int v30; // r8d
  int v31; // edx
  __int64 v32; // rcx
  __int64 v33; // rcx
  struct NP_CONTEXT **v34; // rcx
  _DWORD *v35; // [rsp+70h] [rbp+8h] BYREF
  _DWORD *v36; // [rsp+78h] [rbp+10h] BYREF
  struct B_TREE_NODE_HDR *v37; // [rsp+80h] [rbp+18h]
  __int64 v38; // [rsp+88h] [rbp+20h]

  v2 = *(_DWORD *)(a2 + 24);
  v36 = 0LL;
  v3 = 1LL;
  v35 = 0LL;
  v4 = *(_QWORD *)a2 + 16LL * (unsigned int)(v2 - 1);
  v5 = 16;
  v6 = *(_QWORD *)(v4 - 16);
  v7 = *(_DWORD **)(v4 - 8);
  v8 = (unsigned __int8)-(*(_BYTE *)(*(_QWORD *)v4 + 3LL) != 0) + 255;
  if ( v7 == (_DWORD *)(v6 + 16 * ((unsigned __int16)*(_DWORD *)v6 + 1LL)) )
  {
    v7 -= 4;
    v9 = (void **)(v7 - 2);
    if ( (unsigned __int64)v7 <= v6 + 16 )
      v9 = (void **)(v6 + 8);
    v10 = (void **)&v36;
    v35 = *(_DWORD **)v4;
  }
  else
  {
    v36 = *(_DWORD **)v4;
    v9 = (void **)(v7 + 2);
    v10 = (void **)&v35;
    v3 = 0LL;
  }
  if ( **(_DWORD **)((a1 + 16) & -(__int64)(a1 != 0)) == -1 || *(_BYTE *)(v6 + 2) != 2 )
  {
    result = (unsigned __int64)*v9;
    *v10 = *v9;
  }
  else
  {
    v34 = (struct NP_CONTEXT **)((a1 + 16) & -(__int64)(a1 != 0));
    if ( *(_DWORD *)*v34 == -1 )
      result = (unsigned __int64)*v9;
    else
      result = (unsigned __int64)NP_CONTEXT::NpLeafRefInternal(v34, v9, 0);
    *v10 = (void *)result;
    if ( !result )
      return result;
  }
  v12 = v36;
  v37 = (struct B_TREE_NODE_HDR *)(result | v3);
  v13 = v35;
  v14 = (unsigned __int16)*v36;
  v15 = (unsigned __int16)*v35;
  v16 = v14 + v15;
  if ( v14 + v15 < v8 || v16 >= 2 * v8 - 1 )
    return (unsigned __int64)v37;
  v17 = v16 >> 1;
  v18 = v36;
  if ( v14 > v15 )
  {
    v22 = 0;
    v20 = v14 - v17;
    v19 = v36;
    v21 = v35;
  }
  else
  {
    v19 = v35;
    v20 = v17 - v14;
    v21 = v36;
    v22 = (unsigned __int16)*v36;
  }
  LODWORD(v35) = v22;
  v23 = v15 < v14 ? v17 : 0;
  v24 = *((_BYTE *)v19 + 3) == 0;
  v25 = v23;
  v38 = v23;
  if ( v24 )
  {
    v18 = v36;
    v26 = &v19[4 * v23];
    v27 = &v21[4 * v22];
  }
  else
  {
    v5 = 8;
    v26 = &v19[2 * v23];
    v27 = &v21[2 * v22];
  }
  v28 = (char *)(v27 + 4);
  v29 = (char *)(v26 + 4);
  if ( v19 == v18 )
  {
    memmove(&v28[v5 * v20], v28, v5 * (unsigned __int16)*v21);
    v12 = v36;
    v22 = (unsigned int)v35;
    v25 = v38;
  }
  if ( *((_BYTE *)v19 + 3) )
  {
    v30 = v20;
  }
  else
  {
    v31 = *v7;
    if ( v19 == v12 )
    {
      v33 = 2LL * (v20 - 1);
      v21[2 * v33 + 4] = v31;
      *(_QWORD *)&v21[2 * v33 + 6] = *((_QWORD *)v21 + 1);
    }
    else
    {
      v32 = 2LL * v22;
      v21[2 * v32 + 4] = v31;
      *(_QWORD *)&v21[2 * v32 + 6] = *((_QWORD *)v19 + 1);
      v28 += v5;
    }
    if ( v19 == v12 )
    {
      *v7 = v19[4 * v25 + 4];
      *((_QWORD *)v21 + 1) = *(_QWORD *)&v19[4 * v25 + 6];
      v29 += v5;
    }
    else
    {
      *v7 = v19[4 * v20];
      *((_QWORD *)v19 + 1) = *(_QWORD *)&v19[4 * v20 + 2];
    }
    v30 = v20 - 1;
  }
  memmove(v28, v29, v5 * v30);
  *(_WORD *)v21 += v20;
  *(_WORD *)v19 -= v20;
  if ( v19 == v13 )
    memmove(v29, &v29[v5 * v20], v5 * (unsigned __int16)*v19);
  result = (unsigned __int64)v37;
  if ( *((_BYTE *)v13 + 3) )
    *v7 = v13[4];
  return result;
}
