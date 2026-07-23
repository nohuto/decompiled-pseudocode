/*
 * XREFs of ?BTreeFindSeperatorIndexEntry@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAKPEAUSEARCH_RESULT@1@KPEAUPATH_ENTRY@1@@Z @ 0x1404360B0
 * Callers:
 *     ?BTreeFindLeafSiblingEx@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x140607F14 (-BTreeFindLeafSiblingEx@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeFindSeperatorIndexEntry(
        __int64 a1,
        int a2,
        __int64 a3)
{
  unsigned __int64 i; // rax
  __int128 v5; // xmm0
  __int64 result; // rax
  unsigned __int64 v7; // r8

  for ( i = *(_QWORD *)a1 + 16 * (*(unsigned int *)(a1 + 24) - 2LL); i >= *(_QWORD *)a1; i -= 16LL )
  {
    if ( a2 )
    {
      if ( *(_QWORD *)(i + 8) < *(_QWORD *)i + 16 * ((unsigned __int64)(unsigned __int16)**(_DWORD **)i + 1) )
      {
        v5 = *(_OWORD *)i;
        result = 1LL;
        *(_OWORD *)a3 = v5;
        return result;
      }
    }
    else
    {
      v7 = *(_QWORD *)(i + 8);
      if ( v7 > *(_QWORD *)i + 16LL )
      {
        *(_QWORD *)a3 = *(_QWORD *)i;
        *(_QWORD *)(a3 + 8) = v7 - 16;
        return 1LL;
      }
    }
  }
  return 0LL;
}
