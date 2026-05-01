/*
 * XREFs of ??1UwpWindowEventDispatcher@@UEAA@XZ @ 0x180427924
 * Callers:
 *     ??_EUwpWindowEventDispatcher@@UEAAPEAXI@Z @ 0x180428084 (--_EUwpWindowEventDispatcher@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x18001D4DC (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@UGameMruItem@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@UGameMruItem@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@UGameMruItem@@@std@@@0@@Z @ 0x180048B80 (--$_Destroy_range@V-$allocator@V-$shared_ptr@UGameMruItem@@@std@@@std@@@std@@YAXPEAV-$shared_ptr.c)
 *     ??1?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x18005D41C (--1-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@w.c)
 *     ??$_Destroy_range@V?$allocator@UPendingActivationResumeData@UwpWindowEventDispatcher@@@std@@@std@@YAXPEAUPendingActivationResumeData@UwpWindowEventDispatcher@@QEAU12@AEAV?$allocator@UPendingActivationResumeData@UwpWindowEventDispatcher@@@0@@Z @ 0x18009B8B4 (--$_Destroy_range@V-$allocator@UPendingActivationResumeData@UwpWindowEventDispatcher@@@std@@@std.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@UwpWindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@PEAX@std@@@std@@@?$_List_node@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@UwpWindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@UwpWindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@PEAX@std@@@1@PEAU01@@Z @ 0x180212220 (--$_Free_non_head@V-$allocator@U-$_List_node@V-$com_ptr_t@V-$CRefCountedObject@UPen_ea_180212220.c)
 */

void __fastcall UwpWindowEventDispatcher::~UwpWindowEventDispatcher(UwpWindowEventDispatcher *this)
{
  __int64 v2; // rcx
  char *v3; // rcx
  __int64 v4; // rcx
  __int64 *v5; // rcx
  __int64 *v6; // rcx
  std::_Ref_count_base *v7; // rcx

  std::_List_node<wil::com_ptr_t<CRefCountedObject<UwpWindowEventDispatcher::PendingActivationData>,wil::err_exception_policy>,void *>::_Free_non_head<std::allocator<std::_List_node<wil::com_ptr_t<CRefCountedObject<UwpWindowEventDispatcher::PendingActivationData>,wil::err_exception_policy>,void *>>>(
    (__int64)this,
    *((_QWORD *)this + 70));
  std::_Deallocate<16,0>(*((void **)this + 70), (const struct std::nothrow_t *)0x18);
  std::_List_node<wil::com_ptr_t<CRefCountedObject<UwpWindowEventDispatcher::PendingActivationData>,wil::err_exception_policy>,void *>::_Free_non_head<std::allocator<std::_List_node<wil::com_ptr_t<CRefCountedObject<UwpWindowEventDispatcher::PendingActivationData>,wil::err_exception_policy>,void *>>>(
    v2,
    *((_QWORD *)this + 68));
  std::_Deallocate<16,0>(*((void **)this + 68), (const struct std::nothrow_t *)0x18);
  v3 = (char *)*((_QWORD *)this + 65);
  if ( v3 )
  {
    std::_Destroy_range<std::allocator<UwpWindowEventDispatcher::PendingActivationResumeData>>(
      v3,
      *((char **)this + 66));
    std::_Deallocate<16,0>(
      *((void **)this + 65),
      (const struct std::nothrow_t *)((*((_QWORD *)this + 67) - *((_QWORD *)this + 65)) & 0xFFFFFFFFFFFFFFE0uLL));
    *((_QWORD *)this + 65) = 0LL;
    *((_QWORD *)this + 66) = 0LL;
    *((_QWORD *)this + 67) = 0LL;
  }
  wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)this + 62);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 59);
  v4 = *((_QWORD *)this + 55);
  if ( v4 )
  {
    std::_Destroy_range<std::allocator<std::shared_ptr<GameMruItem>>>(v4, *((_QWORD *)this + 56));
    std::_Deallocate<16,0>(
      *((void **)this + 55),
      (const struct std::nothrow_t *)((*((_QWORD *)this + 57) - *((_QWORD *)this + 55)) & 0xFFFFFFFFFFFFFFF0uLL));
    *((_QWORD *)this + 55) = 0LL;
    *((_QWORD *)this + 56) = 0LL;
    *((_QWORD *)this + 57) = 0LL;
  }
  v5 = (__int64 *)*((_QWORD *)this + 51);
  if ( v5 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>>>(
      v5,
      *((__int64 **)this + 52));
    std::_Deallocate<16,0>(
      *((void **)this + 51),
      (const struct std::nothrow_t *)((*((_QWORD *)this + 53) - *((_QWORD *)this + 51)) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 51) = 0LL;
    *((_QWORD *)this + 52) = 0LL;
    *((_QWORD *)this + 53) = 0LL;
  }
  v6 = (__int64 *)*((_QWORD *)this + 48);
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>>>(
      v6,
      *((__int64 **)this + 49));
    std::_Deallocate<16,0>(
      *((void **)this + 48),
      (const struct std::nothrow_t *)((*((_QWORD *)this + 50) - *((_QWORD *)this + 48)) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 48) = 0LL;
    *((_QWORD *)this + 49) = 0LL;
    *((_QWORD *)this + 50) = 0LL;
  }
  v7 = (std::_Ref_count_base *)*((_QWORD *)this + 47);
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 45);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 44);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 43);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 42);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 41);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 40);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 39);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 38);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 37);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 36);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::ViewManagerInterop::IViewEventDispatcher,IUwpWindowEventDispatcherInternal,Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewEventDispatcherDesktopExtension,IViewEventDispatcherCrashRecovery,IWindowDispatcherConnectedStandby,Microsoft::WRL::Implements<Windows::Internal::Shell::ViewManagerInterop::IForegroundManager,Windows::Internal::Shell::ViewManagerInterop::IViewEventDispatcherCrashRecovery>,IViewManagerControl,IImmersiveShellHookNotification,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,IPrivilegedOperationsConsumer,IImmersiveSessionIdleNotification,Windows::Internal::Shell::Popups::IPopupClientBroker,INtUserViewWrapperCollection,Windows::Internal::Shell::ViewManagerInterop::IWindowEventDispatcherHostTermination>,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::ViewManagerInterop::IViewEventDispatcher,IUwpWindowEventDispatcherInternal,Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewEventDispatcherDesktopExtension,IViewEventDispatcherCrashRecovery,IWindowDispatcherConnectedStandby,Microsoft::WRL::Implements<Windows::Internal::Shell::ViewManagerInterop::IForegroundManager,Windows::Internal::Shell::ViewManagerInterop::IViewEventDispatcherCrashRecovery>,IViewManagerControl,IImmersiveShellHookNotification,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,IPrivilegedOperationsConsumer,IImmersiveSessionIdleNotification,Windows::Internal::Shell::Popups::IPopupClientBroker,INtUserViewWrapperCollection,Windows::Internal::Shell::ViewManagerInterop::IWindowEventDispatcherHostTermination>,Microsoft::WRL::FtmBase>((__int64)this);
}
