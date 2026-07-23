/*
 * XREFs of ?BTreeFindLeafSiblingEx@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x140607F14
 * Callers:
 *     ?BTreeFindLeafSibling@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAU23@K@Z @ 0x14042CAAC (-BTreeFindLeafSibling@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST.c)
 * Callees:
 *     ?NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z @ 0x140379214 (-NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z.c)
 *     ?BTreeFindSeperatorIndexEntry@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAKPEAUSEARCH_RESULT@1@KPEAUPATH_ENTRY@1@@Z @ 0x1404360B0 (-BTreeFindSeperatorIndexEntry@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONT.c)
 *     ?NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x14045A5C8 (-NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 *     ?BTreeDescendToSibling@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAPEAPEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAUPATH_ENTRY@1@KPEAUSEARCH_RESULT@1@@Z @ 0x140607EB8 (-BTreeDescendToSibling@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@US.c)
 */

__int64 __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeFindLeafSiblingEx(
        __int64 a1,
        __int64 a2)
{
  struct B_TREE_NODE_HDR *v4; // rbx
  __int64 v5; // rdx
  void **v6; // rax
  __int64 *v7; // rax
  unsigned __int64 v8; // r8
  __int64 v9; // rax
  void **v10; // rdx
  unsigned __int64 v11; // rcx
  void **v12; // rax
  struct NP_CONTEXT::NP_CTX *v13; // rcx
  struct B_TREE_NODE_HDR **v14; // rdx
  __int64 v16[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0LL;
  *(_OWORD *)v16 = 0LL;
  if ( (unsigned int)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeFindSeperatorIndexEntry(
                       a2,
                       1,
                       (__int64)v16) )
  {
    v6 = (void **)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeDescendToSibling(
                    v16,
                    v5,
                    0LL);
    if ( **(_DWORD **)((a1 + 16) & -(__int64)(a1 != 0)) == -1 )
      v4 = (struct B_TREE_NODE_HDR *)*v6;
    else
      v4 = NP_CONTEXT::NpLeafRefInternal(
             (struct NP_CONTEXT **)((a1 + 16) & -(__int64)(a1 != 0)),
             v6,
             2 * (*(_BYTE *)(a2 + 32) & 1u));
    if ( v4 )
    {
      v7 = (__int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 2));
      v8 = v7[1];
      v9 = *v7;
      v10 = (void **)(v8 - 8);
      v11 = v9 + 16;
      v12 = (void **)(v9 + 8);
      if ( v8 <= v11 )
        v10 = v12;
      v13 = (struct NP_CONTEXT::NP_CTX *)((a1 + 16) & -(__int64)(a1 != 0));
      if ( **(_DWORD **)v13 != -1 )
        NP_CONTEXT::NpLeafDerefInternal(v13, v10);
      B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeDescendToSibling(
        v16,
        (__int64)v10,
        a2);
      v14 = (struct B_TREE_NODE_HDR **)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
      *v14 = v4;
      v14[1] = (struct B_TREE_NODE_HDR *)((char *)v4 + 16);
    }
    else
    {
      return -1LL;
    }
  }
  return (__int64)v4;
}
