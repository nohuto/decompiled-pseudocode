/*
 * XREFs of ?make_weak_ref@?$root_implements@U?$key_value_pair@U?$IKeyValuePair@Uhstring@winrt@@N@Collections@Foundation@Windows@winrt@@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@N@Collections@Foundation@Windows@3@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x1800EE494
 * Callers:
 *     ?QueryInterface@?$implements@UTransitionManager@implementation@Transitions@Udwm@winrt@@U1345@UIRotationTransitionManager@Private@345@UIWindowStateTransitionManager@7345@UIAnimationsTransitionManager@7345@UITransitionManagerNativePrivate@34@@winrt@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180016B70 (-QueryInterface@-$implements@UTransitionManager@implementation@Transitions@Udwm@winrt@@U1345@UIR.c)
 *     ?query_interface@?$root_implements@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@U1345@UIUserResizeVisualNative@34@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800EE798 (-query_interface@-$root_implements@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@U134.c)
 *     ?query_interface@?$root_implements@UScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@U13456@UIScreenRotationResponsiveTransitionHandler@3456@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800F6A68 (-query_interface@-$root_implements@UScreenRotationResponsiveTransitionHandler@implementation@Pri.c)
 *     ??$get_weak@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@@?$root_implements@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@U13456@UIBitmapManager@45@@impl@winrt@@IEAA?AU?$weak_ref@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@@2@XZ @ 0x1800F7000 (--$get_weak@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@@.c)
 *     ?query_interface@?$root_implements@UTransitionState@implementation@Transitions@Udwm@winrt@@U1345@UITransitionStateNative@34@UITransitionStateNativePrivate@34@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800FFC7C (-query_interface@-$root_implements@UTransitionState@implementation@Transitions@Udwm@winrt@@U1345.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$weak_ref@$00$00@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800EEC70 (-unconditional_release_ref@-$com_ptr@U-$weak_ref@$00$00@impl@winrt@@@winrt@@AEAAXXZ.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,double>>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,double>>::make_weak_ref(
        volatile signed __int64 *a1)
{
  signed __int64 v2; // rbx
  __int64 result; // rax
  unsigned __int64 v4; // rdi
  __int64 v5; // rax
  unsigned __int64 v6; // rdi
  bool v7; // zf
  __int64 v8; // rax
  __int64 v9; // rbx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)a1 + 1);
  if ( v2 >= 0 )
  {
    result = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
               WPF::g_pProcessHeap,
               32LL);
    v4 = result;
    if ( result )
    {
      v5 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 24))(a1);
      _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
      *(_QWORD *)(v4 + 8) = &winrt::impl::weak_source<1,1>::`vftable';
      *(_QWORD *)v4 = &winrt::impl::weak_ref<1,1>::`vftable';
      *(_QWORD *)(v4 + 16) = v5;
      *(_DWORD *)(v4 + 24) = v2;
      *(_DWORD *)(v4 + 28) = 1;
      v11 = v4;
      v6 = (v4 >> 1) | 0x8000000000000000uLL;
      while ( 1 )
      {
        v8 = _InterlockedCompareExchange64(a1 + 1, v6, v2);
        v7 = v2 == v8;
        v2 = v8;
        if ( v7 )
          break;
        if ( v8 < 0 )
        {
          v9 = 2 * v8 + 8;
          winrt::com_ptr<winrt::impl::weak_ref<1,1>>::unconditional_release_ref(
            &v11,
            (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(2 * v8 + 24), 1u));
          return v9;
        }
        _InterlockedExchange((volatile __int32 *)(v11 + 24), v8);
      }
      v10 = v11;
      _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 24), 1u);
      return v10 + 8;
    }
  }
  else
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)(2 * v2 + 24), 1u);
    return 2 * v2 + 8;
  }
  return result;
}
