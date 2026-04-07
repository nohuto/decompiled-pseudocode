/*
 * XREFs of ?QueryInterface@?$implements@UTransitionManager@implementation@Transitions@Udwm@winrt@@U1345@UIRotationTransitionManager@Private@345@UIWindowStateTransitionManager@7345@UIAnimationsTransitionManager@7345@UITransitionManagerNativePrivate@34@@winrt@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180016B70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z @ 0x1800EE42C (-make_marshaler@impl@winrt@@YAHPEAUtype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z.c)
 *     ?make_weak_ref@?$root_implements@U?$key_value_pair@U?$IKeyValuePair@Uhstring@winrt@@N@Collections@Foundation@Windows@winrt@@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@N@Collections@Foundation@Windows@3@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x1800EE494 (-make_weak_ref@-$root_implements@U-$key_value_pair@U-$IKeyValuePair@Uhstring@winrt@@N@Collection.c)
 */

__int64 __fastcall winrt::implements<winrt::Udwm::Transitions::implementation::TransitionManager,winrt::Udwm::Transitions::TransitionManager,winrt::Udwm::Transitions::Private::IRotationTransitionManager,winrt::Udwm::Transitions::Private::IWindowStateTransitionManager,winrt::Udwm::Transitions::Private::IAnimationsTransitionManager,Udwm::Transitions::ITransitionManagerNativePrivate>::QueryInterface(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  volatile signed __int64 *v3; // rbx
  unsigned int v4; // edi
  __int64 v5; // rax
  __int64 v8; // rax
  signed __int64 v9; // rax
  signed __int64 v10; // rtt
  __int64 v12; // rax
  signed __int64 v13; // rtt
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  signed __int64 v17; // rtt
  __int64 v18; // rax
  signed __int64 v19; // rtt
  __int64 v20; // rax
  __int64 weak_ref; // rax

  v3 = (volatile signed __int64 *)(a1 + 40);
  v4 = 0;
  v5 = 0LL;
  if ( a1 != -40 )
    v5 = a1;
  v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v5 + 40) + 48LL))(v5 + 40);
  *a3 = v8;
  if ( v8 )
  {
    v9 = *((_QWORD *)v3 + 1);
    while ( v9 >= 0 )
    {
      v10 = v9;
      v9 = _InterlockedCompareExchange64(v3 + 1, v9 + 1, v9);
      if ( v10 == v9 )
        return 0LL;
    }
  }
  else
  {
    v12 = *a2 - winrt::impl::guid_v<winrt::impl::IAgileObject>;
    if ( *a2 == winrt::impl::guid_v<winrt::impl::IAgileObject> )
      v12 = a2[1] + 0x6FA470359B110040LL;
    if ( v12 )
    {
      v14 = *a2 - winrt::impl::guid_v<winrt::impl::IMarshal>;
      if ( *a2 == winrt::impl::guid_v<winrt::impl::IMarshal> )
        v14 = a2[1] - 0x46000000000000C0LL;
      if ( !v14 )
      {
        v15 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*v3 + 24))(v3);
        return winrt::impl::make_marshaler(v15, a3);
      }
      v16 = *a2 - winrt::impl::guid_v<winrt::Windows::Foundation::IInspectable>;
      if ( *a2 == winrt::impl::guid_v<winrt::Windows::Foundation::IInspectable> )
        v16 = a2[1] + 0x6FE1EF9A5528A564LL;
      if ( v16 )
      {
        v18 = *a2 - winrt::impl::guid_v<winrt::Windows::Foundation::IUnknown>;
        if ( *a2 == winrt::impl::guid_v<winrt::Windows::Foundation::IUnknown> )
          v18 = a2[1] - 0x46000000000000C0LL;
        if ( v18 )
        {
          v20 = *a2 - winrt::impl::guid_v<winrt::impl::IWeakReferenceSource>;
          if ( *a2 == winrt::impl::guid_v<winrt::impl::IWeakReferenceSource> )
            v20 = a2[1] - 0x46000000000000C0LL;
          if ( v20 )
            return (**(__int64 (__fastcall ***)(volatile signed __int64 *, _QWORD *, __int64 *))v3)(v3, a2, a3);
          weak_ref = winrt::impl::root_implements<winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,double>>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,double>>::make_weak_ref(v3);
          *a3 = weak_ref;
          if ( !weak_ref )
            return (unsigned int)-2147024882;
          return v4;
        }
        *a3 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*v3 + 24))(v3);
        v9 = *((_QWORD *)v3 + 1);
        while ( v9 >= 0 )
        {
          v19 = v9;
          v9 = _InterlockedCompareExchange64(v3 + 1, v9 + 1, v9);
          if ( v19 == v9 )
            return 0LL;
        }
      }
      else
      {
        *a3 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*v3 + 56))(v3);
        v9 = *((_QWORD *)v3 + 1);
        while ( v9 >= 0 )
        {
          v17 = v9;
          v9 = _InterlockedCompareExchange64(v3 + 1, v9 + 1, v9);
          if ( v17 == v9 )
            return 0LL;
        }
      }
    }
    else
    {
      *a3 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*v3 + 24))(v3);
      v9 = *((_QWORD *)v3 + 1);
      while ( v9 >= 0 )
      {
        v13 = v9;
        v9 = _InterlockedCompareExchange64(v3 + 1, v9 + 1, v9);
        if ( v13 == v9 )
          return 0LL;
      }
    }
  }
  _InterlockedExchangeAdd((volatile signed __int32 *)(2 * v9 + 24), 1u);
  return 0LL;
}
