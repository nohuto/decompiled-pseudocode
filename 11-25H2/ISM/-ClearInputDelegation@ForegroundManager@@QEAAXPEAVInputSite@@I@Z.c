/*
 * XREFs of ?ClearInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@I@Z @ 0x180072A14
 * Callers:
 *     ?OnRemovedFromInputSite@InputDelegationInputObjectProxy@@UEAAXXZ @ 0x180087DA0 (-OnRemovedFromInputSite@InputDelegationInputObjectProxy@@UEAAXXZ.c)
 * Callees:
 *     ?UpdateForegroundTarget@ForegroundManager@@AEAAX_KIII_N@Z @ 0x180025C64 (-UpdateForegroundTarget@ForegroundManager@@AEAAX_KIII_N@Z.c)
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x180025F94 (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 *     ?GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z @ 0x180025FD8 (-GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z.c)
 *     ?value@?$optional@_K@std@@QEGAAAEA_KXZ @ 0x180063AD0 (-value@-$optional@_K@std@@QEGAAAEA_KXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x18009B5DC (-_Throw_bad_optional_access@std@@YAXXZ.c)
 *     ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUTargetingInfo@ForegroundManager@@@std@@@std@@@std@@@std@@$0A@@?$_Hash@V?$_Umap_traits@IUTargetingInfo@ForegroundManager@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUTargetingInfo@ForegroundManager@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUTargetingInfo@ForegroundManager@@@std@@@std@@@std@@@1@V21@@Z @ 0x1800AD950 (--$erase@V-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBIUTargetingInfo@Foregr.c)
 */

void __fastcall ForegroundManager::ClearInputDelegation(
        ForegroundManager *this,
        struct InputSite *a2,
        char a3,
        const char *a4)
{
  __int64 v6; // r8
  __int64 i; // rcx
  _QWORD *v8; // rax
  _QWORD *j; // rbx
  unsigned int v10; // edi
  unsigned int v11; // ebx
  unsigned __int64 v12; // rsi
  struct ViewHierarchyWithWindowManager *ViewHierarchy; // rax
  unsigned int ViewIdFromWindowId; // eax
  __int64 v15; // [rsp+30h] [rbp-18h] BYREF
  char v16; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char v18; // [rsp+58h] [rbp+10h] BYREF

  if ( !a2 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x2D0,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
      a4);
  v6 = *((_QWORD *)a2 + 3);
  for ( i = *((_QWORD *)a2 + 2); i != v6 && *(_DWORD *)i != 1; i += 16LL )
    ;
  v16 = 0;
  if ( i != v6 )
  {
    v15 = *(_QWORD *)(i + 8);
    v8 = (_QWORD *)*((_QWORD *)this + 20);
    v16 = 1;
    while ( 1 )
    {
      v8 = (_QWORD *)*v8;
      if ( v8 == *((_QWORD **)this + 20) )
        break;
      if ( v8[3] == v15 )
        v8 = (_QWORD *)std::_Hash<std::_Umap_traits<unsigned int,ForegroundManager::TargetingInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,ForegroundManager::TargetingInfo>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,ForegroundManager::TargetingInfo>>>>,0>(
                         (char *)this + 152,
                         &v18,
                         v8);
    }
    j = (_QWORD *)*((_QWORD *)this + 12);
LABEL_8:
    for ( j = (_QWORD *)*j;
          j != *((_QWORD **)this + 12);
          std::_Hash<std::_Umap_traits<unsigned int,ForegroundManager::TargetingInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,ForegroundManager::TargetingInfo>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,ForegroundManager::TargetingInfo>>>>,0>(
            (char *)this + 88,
            &v18,
            j) )
    {
      if ( j[3] != *(_QWORD *)std::optional<unsigned __int64>::value((__int64)&v15) )
        goto LABEL_8;
    }
  }
  if ( (a3 & 0xE) != 0 && (a3 & 1) == 0 )
  {
    v10 = *((_DWORD *)this + 56);
    v11 = *((_DWORD *)this + 57);
    v12 = *((_QWORD *)this + 27);
    ViewHierarchy = ISMStatics::GetViewHierarchy();
    ViewIdFromWindowId = ViewHelper::GetViewIdFromWindowId(ViewHierarchy, v12);
    ForegroundManager::UpdateForegroundTarget(this, v12, ViewIdFromWindowId, v10, v11, 0);
  }
}
