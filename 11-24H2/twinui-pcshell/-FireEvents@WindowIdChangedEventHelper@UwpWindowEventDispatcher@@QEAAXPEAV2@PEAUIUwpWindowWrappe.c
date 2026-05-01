/*
 * XREFs of ?FireEvents@WindowIdChangedEventHelper@UwpWindowEventDispatcher@@QEAAXPEAV2@PEAUIUwpWindowWrapperInternal@@@Z @ 0x18001C1A4
 * Callers:
 *     ?UwpWindowAdded@UwpWindowEventDispatcher@@UEAAJUUwpWindowContextId@UwpWindowLifecycleManagement@Shell@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x18001D870 (-UwpWindowAdded@UwpWindowEventDispatcher@@UEAAJUUwpWindowContextId@UwpWindowLifecycleManagement@.c)
 *     ?UwpWindowActivationRequested@UwpWindowEventDispatcher@@AEAAJPEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUIActivationRequestedEventArgs@WindowManagement@ApplicationModel@56@@Z @ 0x180020BD8 (-UwpWindowActivationRequested@UwpWindowEventDispatcher@@AEAAJPEAUIUwpWindowContext@UwpWindowLife.c)
 *     ?OnShellHookMessage@UwpWindowEventDispatcher@@UEAAJ_K_J@Z @ 0x180249290 (-OnShellHookMessage@UwpWindowEventDispatcher@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@VViewEventArgsForPropertyChanged@@@WRL@Microsoft@@IEAAKXZ @ 0x1800190F0 (-InternalRelease@-$ComPtr@VViewEventArgsForPropertyChanged@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForSelectTargetView@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180019600 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase.c)
 *     ??1?$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18001C8F0 (--1-$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?RaiseViewEventWithPropertySet@UwpWindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@PEAUIPropertySet@Collections@Foundation@6@VAgileGitPtr@@@Z @ 0x18002387C (-RaiseViewEventWithPropertySet@UwpWindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerIntero.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitializeOrThrow@VViewEventArgsForPropertyChanged@@AEAY0BC@$$CBG@wil@@YA?AV?$ComPtr@VViewEventArgsForPropertyChanged@@@WRL@Microsoft@@AEAY0BC@$$CBG@Z @ 0x18020D450 (--$MakeAndInitializeOrThrow@VViewEventArgsForPropertyChanged@@AEAY0BC@$$CBG@wil@@YA-AV-$ComPtr@V.c)
 *     ??$MakeAndInitializeOrThrow@VViewEventArgsForPropertyChanged@@AEAY0M@$$CBG@wil@@YA?AV?$ComPtr@VViewEventArgsForPropertyChanged@@@WRL@Microsoft@@AEAY0M@$$CBG@Z @ 0x1804164B8 (--$MakeAndInitializeOrThrow@VViewEventArgsForPropertyChanged@@AEAY0M@$$CBG@wil@@YA-AV-$ComPtr@VV.c)
 *     ??$MakeAndInitializeOrThrow@VViewEventArgsForPropertyChanged@@AEBQEBG@wil@@YA?AV?$ComPtr@VViewEventArgsForPropertyChanged@@@WRL@Microsoft@@AEBQEBG@Z @ 0x180416518 (--$MakeAndInitializeOrThrow@VViewEventArgsForPropertyChanged@@AEBQEBG@wil@@YA-AV-$ComPtr@VViewEv.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall UwpWindowEventDispatcher::WindowIdChangedEventHelper::FireEvents(
        UwpWindowEventDispatcher::WindowIdChangedEventHelper *this,
        struct UwpWindowEventDispatcher *a2,
        __int64 (__fastcall ***a3)(struct IUwpWindowWrapperInternal *, GUID *, __int64 *))
{
  __int64 (__fastcall **v5)(struct IUwpWindowWrapperInternal *, GUID *, __int64 *); // rax
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int *v18; // [rsp+20h] [rbp-30h]
  __int64 v19; // [rsp+30h] [rbp-20h] BYREF
  int v20[2]; // [rsp+38h] [rbp-18h] BYREF
  __int64 *v21; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v23; // [rsp+70h] [rbp+20h] BYREF
  __int64 v24; // [rsp+88h] [rbp+38h] BYREF

  *(_BYTE *)this = 0;
  if ( *((_QWORD *)this + 1) )
  {
    v5 = *a3;
    v24 = 0LL;
    v6 = (*v5)((struct IUwpWindowWrapperInternal *)a3, &GUID_79eaeb1a_4280_4be7_b345_9f7a790149f5, &v24);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x142,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v6,
        (int)v18);
    if ( *((_BYTE *)this + 28) )
    {
      v7 = *(_QWORD *)(*((_QWORD *)this + 1) + 24LL);
      v19 = v7;
      if ( v7 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
        v7 = v19;
      }
      v21 = &v19;
      v8 = v24;
      *(_QWORD *)v20 = v7;
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
      v18 = v20;
      UwpWindowEventDispatcher::RaiseViewEventWithPropertySet(a2, v8, 6LL);
      Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>(&v19);
      *((_BYTE *)this + 28) = 0;
    }
    v23 = 0LL;
    v9 = *((_QWORD *)this + 1);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
    if ( *(_QWORD *)(v9 + 24) )
    {
      v23 = 0LL;
      v10 = *(_QWORD *)(v9 + 24);
      if ( v10 )
        v11 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v10 + 24LL))(
                v10,
                &GUID_c1659867_0cf6_5f3b_99df_4f036280926c,
                &v23);
      else
        v11 = 0;
    }
    else
    {
      v23 = 0LL;
      v11 = -2147024809;
    }
    if ( v11 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x14B,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v11,
        (int)v18);
    if ( *((_BYTE *)this + 36) )
    {
      wil::MakeAndInitializeOrThrow<ViewEventArgsForPropertyChanged,unsigned short const (&)[12]>(v20);
      v15 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v23 + 24LL))(v23, v24, *(_QWORD *)v20);
      if ( v15 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x150,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
          (const char *)(unsigned int)v15,
          (int)v18);
      *((_BYTE *)this + 36) = 0;
      Microsoft::WRL::ComPtr<ViewEventArgsForPropertyChanged>::InternalRelease((__int64 *)v20);
    }
    if ( *((_BYTE *)this + 44) )
    {
      wil::MakeAndInitializeOrThrow<ViewEventArgsForPropertyChanged,unsigned short const (&)[18]>(&v19);
      v13 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v23 + 24LL))(v23, v24, v19);
      if ( v13 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x157,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
          (const char *)(unsigned int)v13,
          (int)v18);
      *((_BYTE *)this + 44) = 0;
      v14 = v19;
      if ( v19 )
      {
        v19 = 0LL;
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView>::Release(v14);
      }
    }
    if ( *((_BYTE *)this + 52) )
    {
      wil::MakeAndInitializeOrThrow<ViewEventArgsForPropertyChanged,unsigned short const * const &>(v20, off_18075D410);
      v16 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v23 + 24LL))(v23, v24, *(_QWORD *)v20);
      if ( v16 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x15E,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
          (const char *)(unsigned int)v16,
          (int)v18);
      *((_BYTE *)this + 52) = 0;
      Microsoft::WRL::ComPtr<ViewEventArgsForPropertyChanged>::InternalRelease((__int64 *)v20);
    }
    if ( *((_BYTE *)this + 60) )
    {
      wil::MakeAndInitializeOrThrow<ViewEventArgsForPropertyChanged,unsigned short const * const &>(v20, off_18075D418);
      v17 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v23 + 24LL))(v23, v24, *(_QWORD *)v20);
      if ( v17 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x165,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
          (const char *)(unsigned int)v17,
          (int)v18);
      *((_BYTE *)this + 60) = 0;
      Microsoft::WRL::ComPtr<ViewEventArgsForPropertyChanged>::InternalRelease((__int64 *)v20);
    }
    v12 = v23;
    if ( v23 )
    {
      v23 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    if ( v24 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  }
}
