/*
 * XREFs of ??$call@P6A?AUBluetoothAudioSharingController@Internal@Interface@Audio@Bluetooth@Microsoft@winrt@@AEBUIBluetoothAudioSharingControllerStatics@234567@@Z@?$factory_cache_entry@UBluetoothAudioSharingController@Internal@Interface@Audio@Bluetooth@Microsoft@winrt@@UIBluetoothAudioSharingControllerStatics@234567@@impl@winrt@@QEAA?A_P$$QEAP6A?AUBluetoothAudioSharingController@Internal@Interface@Audio@Bluetooth@Microsoft@2@AEBUIBluetoothAudioSharingControllerStatics@456782@@Z@Z @ 0x1800DE508
 * Callers:
 *     ?CreateDefault@BluetoothAudioSharingController@Internal@Interface@Audio@Bluetooth@Microsoft@winrt@@SA@XZ @ 0x1800E0B94 (-CreateDefault@BluetoothAudioSharingController@Internal@Interface@Audio@Bluetooth@Microsoft@winr.c)
 * Callees:
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1800ABEA9 (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ??$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@AEBUguid@1@PEAPEAX@Z @ 0x1800DE840 (--$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA-AUhresult@1@AEBUhstring@param@1@AEBUg.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800DF40C (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     ??1?$IVectorView@Uguid@winrt@@@Collections@Foundation@Windows@winrt@@QEAA@XZ @ 0x1800DF5F8 (--1-$IVectorView@Uguid@winrt@@@Collections@Foundation@Windows@winrt@@QEAA@XZ.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1800E31B0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800E422C (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Microsoft::Bluetooth::Audio::Interface::Internal::BluetoothAudioSharingController,winrt::Microsoft::Bluetooth::Audio::Interface::Internal::IBluetoothAudioSharingControllerStatics>::call<winrt::Microsoft::Bluetooth::Audio::Interface::Internal::BluetoothAudioSharingController (*)(winrt::Microsoft::Bluetooth::Audio::Interface::Internal::IBluetoothAudioSharingControllerStatics const &)>(
        __int64 a1,
        __int64 a2,
        void (__fastcall **a3)(__int64, __int64 *))
{
  void (__fastcall ***v6)(_QWORD, _QWORD, _QWORD); // [rsp+28h] [rbp-29h] BYREF
  void (__fastcall ***v7)(_QWORD, __int64 *, __int64 *); // [rsp+30h] [rbp-21h] BYREF
  __int64 v8; // [rsp+38h] [rbp-19h] BYREF
  __int64 v9; // [rsp+40h] [rbp-11h] BYREF
  _QWORD v10[3]; // [rsp+50h] [rbp-1h] BYREF
  int v11; // [rsp+68h] [rbp+17h] BYREF
  __int128 v12; // [rsp+70h] [rbp+1Fh]
  _BYTE v13[40]; // [rsp+80h] [rbp+2Fh] BYREF
  __int64 v14; // [rsp+B8h] [rbp+67h] BYREF
  char v15; // [rsp+D0h] [rbp+7Fh] BYREF

  v14 = a1;
  v10[0] = L"Microsoft.Bluetooth.Audio.Interface.Internal.BluetoothAudioSharingController";
  v10[1] = 76LL;
  winrt::param::hstring::hstring(v13, v10);
  v7 = 0LL;
  v11 = 0;
  v12 = 0LL;
  winrt::impl::get_runtime_activation_factory_impl<0>(
    &v14,
    v13,
    &winrt::impl::guid_v<winrt::Microsoft::Bluetooth::Audio::Interface::Internal::IBluetoothAudioSharingControllerStatics>,
    &v7);
  winrt::check_hresult(&v15, (unsigned int)v14, &v11);
  v6 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v7;
  if ( v7 && (v8 = 0LL, (**v7)(v7, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v8), (v9 = v8) != 0) )
  {
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v9);
    v10[2] = &qword_1801CFAF8;
    _InterlockedIncrement64(&qword_1801CFAF8);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Microsoft::Bluetooth::Audio::Interface::Internal::BluetoothAudioSharingController,winrt::Microsoft::Bluetooth::Audio::Interface::Internal::IBluetoothAudioSharingControllerStatics>,
            (signed __int64)v6,
            0LL) )
    {
      v6 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &ListEntry);
    }
    (*a3)(
      a2,
      &winrt::impl::factory_cache_entry_v<winrt::Microsoft::Bluetooth::Audio::Interface::Internal::BluetoothAudioSharingController,winrt::Microsoft::Bluetooth::Audio::Interface::Internal::IBluetoothAudioSharingControllerStatics>);
    _InterlockedDecrement64(&qword_1801CFAF8);
  }
  else
  {
    (*a3)(a2, (__int64 *)&v6);
  }
  winrt::Windows::Foundation::Collections::IVectorView<winrt::guid>::~IVectorView<winrt::guid>(&v6);
  return a2;
}
