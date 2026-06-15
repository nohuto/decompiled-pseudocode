/*
 * XREFs of ?SetUpAudioEffectsWatcher@CAudioStream@@AEAAJXZ @ 0x1800CADF4
 * Callers:
 *     ?SetUpAudioEffectsChangedWnfState@CAudioStream@@AEAAJXZ @ 0x1800CAC64 (-SetUpAudioEffectsChangedWnfState@CAudioStream@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$make_wnf_subscription_nothrow@Uempty_wnf_state@details@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@K@Z @ 0x18008520C (--$make_wnf_subscription_nothrow@Uempty_wnf_state@details@wil@@@wil@@YA-AV-$unique_any_t@V-$uniq.c)
 *     ??1?$function@$$A6AXAEBW4BluetoothLEAudioSupportedState@Internal@Audio@Bluetooth@Microsoft@@@Z@wistd@@QEAA@XZ @ 0x18009F258 (--1-$function@$$A6AXAEBW4BluetoothLEAudioSupportedState@Internal@Audio@Bluetooth@Microsoft@@@Z@w.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800A105C (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@w.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     ?GetWatcher@AudioEffectsWatcherFactory@@YAJPEBGKHW4DiscoverySettings@@PEAPEAUIAudioEffectsWatcher@@@Z @ 0x1800B47C8 (-GetWatcher@AudioEffectsWatcherFactory@@YAJPEBGKHW4DiscoverySettings@@PEAPEAUIAudioEffectsWatche.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1800C1648 (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioStream::SetUpAudioEffectsWatcher(CAudioStream *this)
{
  unsigned int v2; // ebp
  struct IUnknown **v3; // r14
  __int64 v4; // rcx
  int v5; // edi
  int v6; // ebx
  __int64 *v7; // rax
  int Watcher; // eax
  unsigned int v9; // ebx
  __int64 v11; // rax
  wil::details **v12; // rax
  struct wil::details::wnf_subscription_state_base *v13; // rdx
  wil::details *v14; // [rsp+30h] [rbp-A8h] BYREF
  _BYTE v15[8]; // [rsp+38h] [rbp-A0h] BYREF
  _BYTE v16[8]; // [rsp+40h] [rbp-98h] BYREF
  _QWORD v17[14]; // [rsp+48h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]

  v2 = (((*((_DWORD *)this + 98) & 1) == 0) + 6) & 0xFFFFFFFD;
  if ( (*((_BYTE *)this + 392) & 2) == 0 )
    v2 = ((*((_DWORD *)this + 98) & 1) == 0) + 6;
  v3 = (struct IUnknown **)((char *)this + 376);
  v4 = *((_QWORD *)this + 47);
  *v3 = 0LL;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = *((unsigned __int8 *)this + 43);
  v6 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 48LL))((char *)this + 8);
  v7 = (__int64 *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 2) + 40LL))((char *)this + 16);
  Watcher = AudioEffectsWatcherFactory::GetWatcher(v7, v6, v5, v2, v3);
  v9 = Watcher;
  if ( Watcher >= 0 )
  {
    v17[0] = off_180171410;
    v17[1] = this;
    v17[13] = v17;
    v11 = ((__int64 (__fastcall *)(struct IUnknown *, _BYTE *))(*v3)->lpVtbl[1].Release)(*v3, v15);
    v12 = (wil::details **)wil::make_wnf_subscription_nothrow<wil::details::empty_wnf_state>(&v14, v11, (__int64)v16);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>>::operator=(
      (wil::details **)this + 48,
      v12);
    if ( v14 )
      wil::details::delete_wnf_subscription_state(v14, v13);
    wistd::function<void (enum Microsoft::Bluetooth::Audio::Internal::BluetoothLEAudioSupportedState const &)>::~function<void (enum Microsoft::Bluetooth::Audio::Internal::BluetoothLEAudioSupportedState const &)>((__int64)v16);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6A8,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)(unsigned int)Watcher);
    return v9;
  }
}
