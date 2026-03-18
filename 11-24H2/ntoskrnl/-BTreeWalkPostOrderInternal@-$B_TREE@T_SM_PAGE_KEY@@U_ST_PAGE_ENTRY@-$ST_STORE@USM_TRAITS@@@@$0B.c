/*
 * XREFs of ?BTreeWalkPostOrderInternal@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU_SINGLE_LIST_ENTRY@@P6AJPEAX3PEA_K@Z3PEAPEAU23@@Z @ 0x140609B00
 * Callers:
 *     ?BTreeWalkPostOrderInternal@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU_SINGLE_LIST_ENTRY@@P6AJPEAX3PEA_K@Z3PEAPEAU23@@Z @ 0x140609B00 (-BTreeWalkPostOrderInternal@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0B.c)
 *     ?StNpEnumBTreeNodes@?$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@P6AJPEAX1PEA_K@Z1@Z @ 0x14060C5A0 (-StNpEnumBTreeNodes@-$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@P6AJPEAX1PEA_K@Z1@Z.c)
 * Callees:
 *     ?BTreeWalkPostOrderInternal@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU_SINGLE_LIST_ENTRY@@P6AJPEAX3PEA_K@Z3PEAPEAU23@@Z @ 0x140609B00 (-BTreeWalkPostOrderInternal@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0B.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 */

__int64 __fastcall B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeWalkPostOrderInternal(
        __int64 a1,
        const void *a2,
        _QWORD **a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  _QWORD *v6; // rdi
  _QWORD *v9; // rcx
  _QWORD *v10; // rsi
  int v11; // ecx
  _QWORD *v12; // r10
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // rbx
  __int64 v15; // r12
  _QWORD *v16; // r15
  _QWORD *v17; // r8
  _QWORD *v18; // r15
  _QWORD *v19; // rdx
  __int64 v21; // [rsp+78h] [rbp+20h]

  v21 = a4;
  v6 = *a3;
  if ( *a3 )
  {
    v9 = *a3;
    *a3 = (_QWORD *)*v6;
    v10 = v6;
    memmove(v9, a2, 0x1000uLL);
    a4 = v21;
  }
  else
  {
    v10 = a2;
  }
  if ( *((_BYTE *)v10 + 3) )
  {
    v11 = guard_dispatch_icall_no_overrides(v10, a5, a6, a4);
  }
  else
  {
    v12 = v10 + 2;
    v13 = (unsigned __int64)&v10[2 * (unsigned __int16)*(_DWORD *)v10 + 2];
    v14 = (unsigned __int64)(v10 + 2);
    if ( **(_DWORD **)((a1 + 16) & -(__int64)(a1 != 0)) == -1 || *((_BYTE *)v10 + 2) != 2 )
    {
      v15 = a5;
      v18 = v10 + 1;
      while ( v14 <= v13 )
      {
        v19 = v18;
        if ( v14 <= (unsigned __int64)v12 )
          v19 = v10 + 1;
        v11 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeWalkPostOrderInternal(
                a1,
                *v19,
                (_DWORD)a3,
                a4,
                a5,
                (__int64)v19);
        if ( v11 < 0 )
          goto LABEL_22;
        a4 = v21;
        v12 = v10 + 2;
        v14 += 16LL;
        v18 += 2;
      }
    }
    else
    {
      v15 = a5;
      v16 = v10 + 1;
      while ( v14 <= v13 )
      {
        v17 = v16;
        if ( v14 <= (unsigned __int64)v12 )
          v17 = v10 + 1;
        v11 = guard_dispatch_icall_no_overrides(0LL, a5, v17, a4);
        if ( v11 < 0 )
          goto LABEL_22;
        a4 = v21;
        v12 = v10 + 2;
        v14 += 16LL;
        v16 += 2;
      }
    }
    v11 = guard_dispatch_icall_no_overrides(v10, v15, a6, a4);
    if ( v11 >= 0 )
      v11 = 0;
  }
LABEL_22:
  if ( v6 )
  {
    *v6 = *a3;
    *a3 = v6;
  }
  return (unsigned int)v11;
}
