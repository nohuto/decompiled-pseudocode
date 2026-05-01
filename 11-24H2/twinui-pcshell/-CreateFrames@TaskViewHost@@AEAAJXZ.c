/*
 * XREFs of ?CreateFrames@TaskViewHost@@AEAAJXZ @ 0x18011CA9C
 * Callers:
 *     ?Show@TaskViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW_FLAGS@@@Z @ 0x18011BB10 (-Show@TaskViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW_FLAG.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180047190 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?AreVirtualDesktopsEnabled@@YA_NXZ @ 0x1801275D0 (-AreVirtualDesktopsEnabled@@YA_NXZ.c)
 *     ??DIterator@?$ObjectArrayAdapterImpl@UIApplicationViewChangeListener@@V?$ComPtr@UIApplicationViewChangeListener@@@WRL@Microsoft@@@details@@QEAA?AV?$ComPtr@UIApplicationViewChangeListener@@@WRL@Microsoft@@XZ @ 0x18017EBD0 (--DIterator@-$ObjectArrayAdapterImpl@UIApplicationViewChangeListener@@V-$ComPtr@UIApplicationVie.c)
 *     ??0?$ObjectArrayAdapterImpl@UIGameFocusEvents@@V?$ComPtr@UIGameFocusEvents@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x1801B3A74 (--0-$ObjectArrayAdapterImpl@UIGameFocusEvents@@V-$ComPtr@UIGameFocusEvents@@@WRL@Microsoft@@@det.c)
 *     ?CreateFrameForMonitor@TaskViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1801DD5E8 (-CreateFrameForMonitor@TaskViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?begin@?$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@details@@QEAA?AVIterator@12@XZ @ 0x1802A2724 (-begin@-$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft.c)
 *     ?end@?$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@details@@QEAA?AVIterator@12@XZ @ 0x1802A274C (-end@-$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x1802A27A4 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V-$ComPtr@UIImmersiveMon.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x1806846FC (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall TaskViewHost::CreateFrames(TaskViewHost *this)
{
  __int64 *v2; // rcx
  __int64 v3; // rax
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 (__fastcall ***v7)(_QWORD, void *, struct IImmersiveMonitor **); // rcx
  struct IImmersiveMonitor *v8; // rbx
  unsigned int v9; // eax
  int v10; // eax
  int v11; // esi
  int v12; // esi
  struct IImmersiveMonitor *v13; // rbx
  int FrameForMonitor; // eax
  __int64 v16[2]; // [rsp+20h] [rbp-40h] BYREF
  int v17; // [rsp+30h] [rbp-30h] BYREF
  __int64 v18[2]; // [rsp+38h] [rbp-28h] BYREF
  int v19; // [rsp+48h] [rbp-18h] BYREF
  __int128 v20; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  struct IImmersiveMonitor *v22; // [rsp+90h] [rbp+30h] BYREF
  __int64 v23; // [rsp+98h] [rbp+38h] BYREF
  struct IImmersiveMonitor *v24; // [rsp+A0h] [rbp+40h] BYREF

  v23 = 0LL;
  v2 = (__int64 *)*((_QWORD *)this + 29);
  v3 = *v2;
  v23 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v3 + 112))(v2, &v23);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 596LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\taskviewhost.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_29;
  }
  if ( AreVirtualDesktopsEnabled() )
  {
    v7 = (__int64 (__fastcall ***)(_QWORD, void *, struct IImmersiveMonitor **))*((_QWORD *)this + 22);
    if ( v7 )
    {
      v24 = 0LL;
      v19 = 0;
      v20 = 0LL;
      v9 = (**v7)(v7, &winrt::impl::guid_v<IDesktopVirtualDesktopDataSource>, &v24);
      winrt::check_hresult(&v22, v9, &v19);
      v8 = v24;
      v22 = v24;
    }
    else
    {
      v22 = 0LL;
      v8 = 0LL;
    }
    v10 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v8 + 24LL))(v8);
    v11 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x25C,
        (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\taskviewhost.cpp",
        (const char *)(unsigned int)v10);
      if ( v8 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v22);
      v5 = v11;
      goto LABEL_29;
    }
    if ( v8 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v22);
  }
  if ( *((_QWORD *)this + 41) == *((_QWORD *)this + 40) )
    MicrosoftTelemetryAssertTriggeredNoArgs();
  v12 = 0;
  v4 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v23 + 24LL))(v23, (char *)this + 744);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 613LL;
    goto LABEL_17;
  }
  details::ObjectArrayAdapterImpl<IGameFocusEvents,Microsoft::WRL::ComPtr<IGameFocusEvents>>::ObjectArrayAdapterImpl<IGameFocusEvents,Microsoft::WRL::ComPtr<IGameFocusEvents>>(
    v16,
    v23);
  details::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>::begin(v16, &v17);
  details::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>::end(v16, &v19);
  while ( 1 )
  {
    if ( v17 == v19 && v18[1] == *((_QWORD *)&v20 + 1) )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v20);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v18);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v16);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v23);
      return 0LL;
    }
    details::ObjectArrayAdapterImpl<IApplicationViewChangeListener,Microsoft::WRL::ComPtr<IApplicationViewChangeListener>>::Iterator::operator*(
      &v17,
      &v24);
    LODWORD(v22) = 0;
    v13 = v24;
    if ( (*(int (__fastcall **)(struct IImmersiveMonitor *, struct IImmersiveMonitor **))(*(_QWORD *)v24 + 48LL))(
           v24,
           &v22) >= 0 )
    {
      if ( (_DWORD)v22 )
      {
        FrameForMonitor = TaskViewHost::CreateFrameForMonitor(this, v13);
        v5 = FrameForMonitor;
        if ( FrameForMonitor < 0 )
          break;
      }
    }
    if ( (unsigned int)++v12 <= *((_DWORD *)this + 186) )
      MicrosoftTelemetryAssertTriggeredNoArgs();
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v24);
    ++v17;
    details::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>::Iterator::GetCurrentObject(&v17);
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x26B,
    (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\taskviewhost.cpp",
    (const char *)(unsigned int)FrameForMonitor);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v24);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v20);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v18);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v16);
LABEL_29:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v23);
  return v5;
}
