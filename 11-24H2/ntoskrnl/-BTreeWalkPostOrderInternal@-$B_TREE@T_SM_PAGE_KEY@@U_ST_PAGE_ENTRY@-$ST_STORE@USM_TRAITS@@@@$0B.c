/*
 * XREFs of ?BTreeWalkPostOrderInternal@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU_SINGLE_LIST_ENTRY@@P6AJPEAX3PEA_K@Z3PEAPEAU23@@Z @ 0x1406080B8
 * Callers:
 *     ?BTreeWalkPostOrderInternal@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU_SINGLE_LIST_ENTRY@@P6AJPEAX3PEA_K@Z3PEAPEAU23@@Z @ 0x1406080B8 (-BTreeWalkPostOrderInternal@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0B.c)
 *     ?StNpEnumBTreeNodes@?$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@P6AJPEAX1PEA_K@Z1@Z @ 0x14060AB60 (-StNpEnumBTreeNodes@-$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@P6AJPEAX1PEA_K@Z1@Z.c)
 * Callees:
 *     ?BTreeWalkPostOrderInternal@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU_SINGLE_LIST_ENTRY@@P6AJPEAX3PEA_K@Z3PEAPEAU23@@Z @ 0x1406080B8 (-BTreeWalkPostOrderInternal@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0B.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeWalkPostOrderInternal(
        __int64 a1,
        const void *a2,
        _QWORD **a3,
        int a4,
        __int64 a5)
{
  _QWORD *v5; // rdi
  _QWORD *v8; // rcx
  _QWORD *v9; // rsi
  int v10; // ecx
  _QWORD *v11; // r10
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // rbx
  __int64 v14; // r12
  _QWORD *v15; // r15
  _QWORD *v16; // r15
  _QWORD *v17; // rdx
  int v19; // [rsp+78h] [rbp+20h]

  v19 = a4;
  v5 = *a3;
  if ( *a3 )
  {
    v8 = *a3;
    *a3 = (_QWORD *)*v5;
    v9 = v5;
    memmove(v8, a2, 0x1000uLL);
    a4 = v19;
  }
  else
  {
    v9 = a2;
  }
  if ( *((_BYTE *)v9 + 3) )
  {
    v10 = guard_dispatch_icall_no_overrides(v9, a5);
  }
  else
  {
    v11 = v9 + 2;
    v12 = (unsigned __int64)&v9[2 * (unsigned __int16)*(_DWORD *)v9 + 2];
    v13 = (unsigned __int64)(v9 + 2);
    if ( **(_DWORD **)((a1 + 16) & -(__int64)(a1 != 0)) == -1 || *((_BYTE *)v9 + 2) != 2 )
    {
      v14 = a5;
      v16 = v9 + 1;
      while ( v13 <= v12 )
      {
        v17 = v16;
        if ( v13 <= (unsigned __int64)v11 )
          v17 = v9 + 1;
        v10 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeWalkPostOrderInternal(
                a1,
                *v17,
                (_DWORD)a3,
                a4,
                a5,
                (__int64)v17);
        if ( v10 < 0 )
          goto LABEL_20;
        a4 = v19;
        v11 = v9 + 2;
        v13 += 16LL;
        v16 += 2;
      }
    }
    else
    {
      v14 = a5;
      v15 = v9 + 1;
      while ( v13 <= v12 )
      {
        v10 = guard_dispatch_icall_no_overrides(0LL, a5);
        if ( v10 < 0 )
          goto LABEL_20;
        v13 += 16LL;
        v15 += 2;
      }
    }
    v10 = guard_dispatch_icall_no_overrides(v9, v14);
    if ( v10 >= 0 )
      v10 = 0;
  }
LABEL_20:
  if ( v5 )
  {
    *v5 = *a3;
    *a3 = v5;
  }
  return (unsigned int)v10;
}
