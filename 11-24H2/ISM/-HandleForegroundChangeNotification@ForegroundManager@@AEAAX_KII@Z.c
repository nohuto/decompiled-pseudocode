/*
 * XREFs of ?HandleForegroundChangeNotification@ForegroundManager@@AEAAX_KII@Z @ 0x180026180
 * Callers:
 *     ?OnActivationObjectNotification@ForegroundManager@@AEAAXPEBU_tagActivationObjectNotification@@@Z @ 0x180022E3C (-OnActivationObjectNotification@ForegroundManager@@AEAAXPEBU_tagActivationObjectNotification@@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_e299dc0f19f00e2c7ccae28147d2a42e__void__MIT_INPUT_FOCUS_MESSAGE_const___::_Do_call @ 0x1800AEB80 (std--_Func_impl_no_alloc__lambda_e299dc0f19f00e2c7ccae28147d2a42e__void__MIT_INPUT__ea_1800AEB80.c)
 * Callees:
 *     ?UpdateForegroundTarget@ForegroundManager@@AEAAX_KIII_N@Z @ 0x180026224 (-UpdateForegroundTarget@ForegroundManager@@AEAAX_KIII_N@Z.c)
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x180026554 (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 *     ?GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z @ 0x180026598 (-GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall ForegroundManager::HandleForegroundChangeNotification(
        ForegroundManager *this,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned int a4)
{
  struct ViewHierarchyWithWindowManager *ViewHierarchy; // rax
  unsigned int ViewIdFromWindowId; // eax
  __int64 v10; // rcx

  *((_QWORD *)this + 27) = a2;
  *((_DWORD *)this + 56) = a3;
  *((_DWORD *)this + 57) = a4;
  if ( a3 )
  {
    ViewHierarchy = ISMStatics::GetViewHierarchy();
    ViewIdFromWindowId = ViewHelper::GetViewIdFromWindowId(ViewHierarchy, a2);
    ForegroundManager::UpdateForegroundTarget(this, a2, ViewIdFromWindowId, a3, a4, 0);
  }
  else
  {
    v10 = *((_QWORD *)this + 2);
    if ( v10 )
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD *)v10 + 24LL))(v10, 0LL, 0LL, 0LL, 0);
  }
}
