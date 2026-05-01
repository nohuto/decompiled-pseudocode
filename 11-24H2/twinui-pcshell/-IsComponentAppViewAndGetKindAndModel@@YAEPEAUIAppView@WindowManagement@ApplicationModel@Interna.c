/*
 * XREFs of ?IsComponentAppViewAndGetKindAndModel@@YAEPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEAW4AppModelKind@2345@PEAPEAUIAppModel@2345@@Z @ 0x1804206D0
 * Callers:
 *     ?AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18041A090 (-AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs.c)
 *     ?AppViewActivationShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18041B3B0 (-AppViewActivationShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationShowRequestedE.c)
 *     ?AppViewConsolidateRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewRequestEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18041B8C0 (-AppViewConsolidateRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewRequestEventArgs@WindowMana.c)
 *     ?AppViewShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18041BCD0 (-AppViewShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewShowRequestedEventArgs@WindowManag.c)
 *     ?AppViewSwitchRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewSwitchRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18041C120 (-AppViewSwitchRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewSwitchRequestedEventArgs@WindowM.c)
 *     ?AppViewVisibilityChanged@WindowEventDispatcher@@UEAAJPEAUIAppViewVisibilityChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18041C9E0 (-AppViewVisibilityChanged@WindowEventDispatcher@@UEAAJPEAUIAppViewVisibilityChangedEventArgs@Win.c)
 *     ?WindowAdded@WindowEventDispatcher@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x180424F90 (-WindowAdded@WindowEventDispatcher@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$try_query_to@UIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@@@?$com_ptr_t@UIAppModel@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA_NPEAPEAUIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1801F60E0 (--$try_query_to@UIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@@@-$com_p.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall IsComponentAppViewAndGetKindAndModel(
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *a1,
        enum Windows::Internal::ApplicationModel::WindowManagement::AppModelKind *a2,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppModel **a3)
{
  __int64 v5; // rax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  char v9; // bl
  int v10; // eax
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppModel *v11; // rcx
  __int64 v13[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  char v15; // [rsp+50h] [rbp+20h] BYREF
  int v16; // [rsp+60h] [rbp+30h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppModel *v17; // [rsp+68h] [rbp+38h] BYREF

  if ( a3 )
    *a3 = 0LL;
  v5 = *(_QWORD *)a1;
  v17 = 0LL;
  v6 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *, struct Windows::Internal::ApplicationModel::WindowManagement::IAppModel **))(v5 + 56))(
         a1,
         &v17);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x195,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\common.h",
      (const char *)(unsigned int)v6,
      v13[0]);
  v16 = 0;
  v7 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppModel *, int *))(*(_QWORD *)v17 + 56LL))(
         v17,
         &v16);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x19B,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\common.h",
      (const char *)(unsigned int)v7,
      v13[0]);
  v8 = v16;
  if ( a2 )
    *(_DWORD *)a2 = v16;
  v9 = 0;
  v15 = 0;
  if ( v8 == 1 )
  {
    v13[0] = 0LL;
    if ( wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::IAppModel,wil::err_exception_policy>::try_query_to<Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModel>(
           &v17,
           (__int64)v13) )
    {
      v10 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v13[0] + 144LL))(v13[0], &v15);
      if ( v10 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1AC,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\common.h",
          (const char *)(unsigned int)v10);
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v13);
    v9 = v15;
  }
  if ( a3 )
  {
    v11 = v17;
    v17 = 0LL;
    *a3 = v11;
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v17);
  return v9;
}
