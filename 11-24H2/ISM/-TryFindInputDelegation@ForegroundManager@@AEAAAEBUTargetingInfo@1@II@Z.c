/*
 * XREFs of ?TryFindInputDelegation@ForegroundManager@@AEAAAEBUTargetingInfo@1@II@Z @ 0x1800263B8
 * Callers:
 *     ?UpdateForegroundTarget@ForegroundManager@@AEAAX_KIII_N@Z @ 0x180026224 (-UpdateForegroundTarget@ForegroundManager@@AEAAX_KIII_N@Z.c)
 * Callees:
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x180026554 (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 *     ??$_Try_emplace@AEBI$$V@?$_Hash@V?$_Umap_traits@IUTargetingInfo@ForegroundManager@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUTargetingInfo@ForegroundManager@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBIUTargetingInfo@ForegroundManager@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x180026734 (--$_Try_emplace@AEBI$$V@-$_Hash@V-$_Umap_traits@IUTargetingInfo@ForegroundManager@@V-$_Uhash_com.c)
 *     ?AreProcessIdsInSameCompositeApp@ForegroundManager@@AEAA_NAEAVViewHierarchyWithWindowManager@@II@Z @ 0x1800ACA6C (-AreProcessIdsInSameCompositeApp@ForegroundManager@@AEAA_NAEAVViewHierarchyWithWindowManager@@II.c)
 *     ?AreViewIdsInSameCompositeApp@ForegroundManager@@AEAA_NAEAVViewHierarchyWithWindowManager@@II@Z @ 0x1800ACB10 (-AreViewIdsInSameCompositeApp@ForegroundManager@@AEAA_NAEAVViewHierarchyWithWindowManager@@II@Z.c)
 */

const struct ForegroundManager::TargetingInfo *__fastcall ForegroundManager::TryFindInputDelegation(
        ForegroundManager *this,
        unsigned int a2,
        int a3)
{
  struct ViewHierarchyWithWindowManager *ViewHierarchy; // rax
  __int64 v5; // r9
  struct ViewHierarchyWithWindowManager *v6; // r14
  __int64 v7; // rdx
  unsigned __int64 i; // r8
  __int64 v9; // rcx
  __int64 **v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int v14; // r10d
  __int64 v15; // rax
  unsigned __int64 j; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 *k; // rbx
  __int64 **v22; // rdi
  char *v24; // rcx
  void *v25; // r8
  _BYTE v26[16]; // [rsp+20h] [rbp-10h] BYREF
  unsigned int v27; // [rsp+58h] [rbp+28h] BYREF
  ForegroundManager *v28; // [rsp+60h] [rbp+30h] BYREF

  LODWORD(v28) = a3;
  v27 = a2;
  ViewHierarchy = ISMStatics::GetViewHierarchy();
  v5 = 0xCBF29CE484222325uLL;
  v6 = ViewHierarchy;
  v7 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
  {
    v9 = *((unsigned __int8 *)&v27 + i);
    v7 = 0x100000001B3LL * (v9 ^ v7);
  }
  v10 = (__int64 **)*((_QWORD *)this + 20);
  v11 = v7 & *((_QWORD *)this + 25);
  v12 = *((_QWORD *)this + 22);
  v13 = 2 * v11;
  v14 = v27;
  v15 = *(_QWORD *)(v12 + 8 * v13 + 8);
  if ( (__int64 **)v15 == v10 )
  {
LABEL_7:
    v15 = 0LL;
  }
  else
  {
    while ( v27 != *(_DWORD *)(v15 + 16) )
    {
      if ( v15 == *(_QWORD *)(v12 + 8 * v13) )
        goto LABEL_7;
      v15 = *(_QWORD *)(v15 + 8);
    }
  }
  if ( v15 )
  {
    v24 = (char *)this + 152;
    v25 = &v27;
    return (const struct ForegroundManager::TargetingInfo *)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned int,ForegroundManager::TargetingInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,ForegroundManager::TargetingInfo>>,0>>::_Try_emplace<unsigned int const &,>(
                                                                          v24,
                                                                          v26,
                                                                          v25)
                                                           + 24LL);
  }
  for ( j = 0LL; j < 4; ++j )
  {
    v17 = *((unsigned __int8 *)&v28 + j);
    v5 = 0x100000001B3LL * (v17 ^ v5);
  }
  v18 = *((_QWORD *)this + 14);
  v19 = 2 * (v5 & *((_QWORD *)this + 17));
  v20 = *(_QWORD *)(v18 + 16 * (v5 & *((_QWORD *)this + 17)) + 8);
  if ( v20 == *((_QWORD *)this + 12) )
  {
LABEL_15:
    v20 = 0LL;
  }
  else
  {
    v19 = (unsigned int)v28;
    while ( (_DWORD)v28 != *(_DWORD *)(v20 + 16) )
    {
      if ( v20 == *(_QWORD *)(v18 + 16 * (v5 & *((_QWORD *)this + 17))) )
        goto LABEL_15;
      v20 = *(_QWORD *)(v20 + 8);
    }
  }
  if ( v20 )
  {
    v24 = (char *)this + 88;
    v25 = &v28;
    return (const struct ForegroundManager::TargetingInfo *)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned int,ForegroundManager::TargetingInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,ForegroundManager::TargetingInfo>>,0>>::_Try_emplace<unsigned int const &,>(
                                                                          v24,
                                                                          v26,
                                                                          v25)
                                                           + 24LL);
  }
  for ( k = *v10; k != (__int64 *)v10; k = (__int64 *)*k )
  {
    if ( (k[5] & 0x20) != 0 )
    {
      if ( ForegroundManager::AreViewIdsInSameCompositeApp((ForegroundManager *)v19, v6, v14, *((_DWORD *)k + 4)) )
        return (const struct ForegroundManager::TargetingInfo *)(k + 3);
      v14 = v27;
    }
  }
  v22 = (__int64 **)*((_QWORD *)this + 12);
  for ( k = *v22; k != (__int64 *)v22; k = (__int64 *)*k )
  {
    if ( (k[5] & 0x20) != 0
      && ForegroundManager::AreProcessIdsInSameCompositeApp(this, v6, (unsigned int)v28, *((_DWORD *)k + 4)) )
    {
      return (const struct ForegroundManager::TargetingInfo *)(k + 3);
    }
  }
  return (const struct ForegroundManager::TargetingInfo *)&ForegroundManager::TargetingInfo::EmptyTarget;
}
