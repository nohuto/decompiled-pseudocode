/*
 * XREFs of ?UwpWindowActivationRequested@UwpWindowEventDispatcher@@UEAAJPEAUIUwpWindowActivationRequestedEventArgs@UwpWindowLifecycleManagement@Shell@Internal@Windows@@@Z @ 0x1801A7180
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?UwpWindowActivationRequested@UwpWindowEventDispatcher@@AEAAJPEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUIActivationRequestedEventArgs@WindowManagement@ApplicationModel@56@@Z @ 0x180020BD8 (-UwpWindowActivationRequested@UwpWindowEventDispatcher@@AEAAJPEAUIUwpWindowContext@UwpWindowLife.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall UwpWindowEventDispatcher::UwpWindowActivationRequested(
        std::_Ref_count_base ***this,
        struct Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowActivationRequestedEventArgs *a2)
{
  __int64 (__fastcall *v4)(struct Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowActivationRequestedEventArgs *, struct Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowContext **); // rbx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 (__fastcall *v7)(struct Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowActivationRequestedEventArgs *, struct Windows::Internal::ApplicationModel::WindowManagement::IActivationRequestedEventArgs **); // rbx
  int v8; // eax
  struct Windows::Internal::ApplicationModel::WindowManagement::IActivationRequestedEventArgs *v9; // rcx
  struct Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowContext *v10; // rcx
  struct Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowContext *v12; // rcx
  __int64 v13; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  struct Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowContext *v15; // [rsp+48h] [rbp+28h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::IActivationRequestedEventArgs *v16; // [rsp+50h] [rbp+30h] BYREF

  v15 = 0LL;
  v4 = *(__int64 (__fastcall **)(struct Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowActivationRequestedEventArgs *, struct Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowContext **))(*(_QWORD *)a2 + 56LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v15);
  v5 = v4(a2, &v15);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x334,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
      (const char *)(unsigned int)v5);
    v12 = v15;
    if ( v15 )
    {
      v15 = 0LL;
      (*(void (__fastcall **)(struct Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowContext *))(*(_QWORD *)v12 + 16LL))(v12);
    }
    return v6;
  }
  v16 = 0LL;
  v7 = *(__int64 (__fastcall **)(struct Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowActivationRequestedEventArgs *, struct Windows::Internal::ApplicationModel::WindowManagement::IActivationRequestedEventArgs **))(*(_QWORD *)a2 + 48LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
  v8 = v7(a2, &v16);
  v6 = v8;
  if ( v8 < 0 )
  {
    v13 = 823LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
      (const char *)(unsigned int)v8);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v15);
    return v6;
  }
  v8 = UwpWindowEventDispatcher::UwpWindowActivationRequested(this - 2, v15, v16);
  v6 = v8;
  if ( v8 < 0 )
  {
    v13 = 825LL;
    goto LABEL_14;
  }
  v9 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IActivationRequestedEventArgs *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(struct Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowContext *))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return 0LL;
}
