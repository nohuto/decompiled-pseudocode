/*
 * XREFs of ?_StartActivationTimeoutPolicy@SearchAppExperienceManager@@AEAAJXZ @ 0x1803AD374
 * Callers:
 *     ?_OnViewCreated@SearchAppExperienceManager@@AEAAJXZ @ 0x1803ACA54 (-_OnViewCreated@SearchAppExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x1800B3FB8 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802916C8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??$_GetViewWrapperAs@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@SearchAppExperienceManager@@AEAAJAEAV?$ComPtr@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Z @ 0x1803AA5F0 (--$_GetViewWrapperAs@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@SearchAp.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SearchAppExperienceManager::_StartActivationTimeoutPolicy(SearchAppExperienceManager *this)
{
  struct _TP_TIMER **v2; // rbx
  struct _TP_TIMER *ThreadpoolTimer; // rax
  const char *v4; // r9
  int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF
  struct _FILETIME pftDueTime; // [rsp+38h] [rbp+10h] BYREF

  pftDueTime = (struct _FILETIME)-1200000000LL;
  v2 = (struct _TP_TIMER **)((char *)this + 464);
  ThreadpoolTimer = CreateThreadpoolTimer(
                      (PTP_TIMER_CALLBACK)lambda_28679c782842d195cae8ac06fc3af96d_::_lambda_invoker_cdecl_,
                      (PVOID)*((unsigned int *)this + 114),
                      0LL);
  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
    v2,
    ThreadpoolTimer);
  if ( !*v2 )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x511,
             (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
             v4);
  SetThreadpoolTimer(*v2, &pftDueTime, 0, 0);
  v10 = 0LL;
  v6 = SearchAppExperienceManager::_GetViewWrapperAs<Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies>(
         (__int64)this,
         &v10);
  v7 = retaddr;
  if ( v6 < 0 )
  {
    v8 = 1301LL;
LABEL_7:
    wil::details::in1diag3::_Log_Hr(
      v7,
      (void *)v8,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_8;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 88LL))(v10, 1LL);
  v7 = retaddr;
  if ( v6 < 0 )
  {
    v8 = 1303LL;
    goto LABEL_7;
  }
LABEL_8:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v10);
  return 0LL;
}
