/*
 * XREFs of ?ResetAppRectClip@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1802465FC
 * Callers:
 *     ?HideView@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x180244530 (-HideView@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18003ED20 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?UndockedSearchAppExperienceManager_ResetAppRectClip_@SearchAppExperienceManagerTelemetry@@QEAAX_K@Z @ 0x1801D9034 (-UndockedSearchAppExperienceManager_ResetAppRectClip_@SearchAppExperienceManagerTelemetry@@QEAAX.c)
 *     ?get@?$static_lazy@VSearchAppExperienceManagerTelemetry@@@details@wil@@QEAAPEAVSearchAppExperienceManagerTelemetry@@P6AXXZ@Z @ 0x1802C1E04 (-get@-$static_lazy@VSearchAppExperienceManagerTelemetry@@@details@wil@@QEAAPEAVSearchAppExperien.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall UndockedSearchAppExperienceManager::ResetAppRectClip(
        UndockedSearchAppExperienceManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2)
{
  ExperienceManagerUtils *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rbx
  _DWORD *v6; // rcx
  SearchAppExperienceManagerTelemetry *v7; // rcx

  v3 = (ExperienceManagerUtils *)*((_QWORD *)this + 7);
  if ( v3 )
  {
    v5 = ExperienceManagerUtils::WindowFromViewWrapper(v3, a2);
    if ( v5 )
    {
      v6 = *(_DWORD **)(wil::details::static_lazy<SearchAppExperienceManagerTelemetry>::get(
                          v4,
                          _lambda_db4a2adff33d12a6f55c62cd979ac014_::_lambda_invoker_cdecl_)
                      + 8);
      if ( v6 )
      {
        if ( *v6 )
        {
          wil::details::static_lazy<SearchAppExperienceManagerTelemetry>::get(
            v6,
            _lambda_db4a2adff33d12a6f55c62cd979ac014_::_lambda_invoker_cdecl_);
          SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ResetAppRectClip_(v7, v5);
        }
      }
      (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 11) + 72LL))(*((_QWORD *)this + 11), v5);
    }
  }
}
