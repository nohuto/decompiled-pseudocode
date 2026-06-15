/*
 * XREFs of ??1?$IVectorView@Uguid@winrt@@@Collections@Foundation@Windows@winrt@@QEAA@XZ @ 0x1800DF5F8
 * Callers:
 *     ??$call@P6A?AUBluetoothAudioSharingController@Internal@Interface@Audio@Bluetooth@Microsoft@winrt@@AEBUIBluetoothAudioSharingControllerStatics@234567@@Z@?$factory_cache_entry@UBluetoothAudioSharingController@Internal@Interface@Audio@Bluetooth@Microsoft@winrt@@UIBluetoothAudioSharingControllerStatics@234567@@impl@winrt@@QEAA?A_P$$QEAP6A?AUBluetoothAudioSharingController@Internal@Interface@Audio@Bluetooth@Microsoft@2@AEBUIBluetoothAudioSharingControllerStatics@456782@@Z@Z @ 0x1800DE508 (--$call@P6A-AUBluetoothAudioSharingController@Internal@Interface@Audio@Bluetooth@Microsoft@winrt.c)
 *     ??$call@P6A?AUBluetoothAudioSharingParameters@Internal@Interface@Audio@Bluetooth@Microsoft@winrt@@AEBUIBluetoothAudioSharingParametersStatics@234567@@Z@?$factory_cache_entry@UBluetoothAudioSharingParameters@Internal@Interface@Audio@Bluetooth@Microsoft@winrt@@UIBluetoothAudioSharingParametersStatics@234567@@impl@winrt@@QEAA?A_P$$QEAP6A?AUBluetoothAudioSharingParameters@Internal@Interface@Audio@Bluetooth@Microsoft@2@AEBUIBluetoothAudioSharingParametersStatics@456782@@Z@Z @ 0x1800DE658 (--$call@P6A-AUBluetoothAudioSharingParameters@Internal@Interface@Audio@Bluetooth@Microsoft@winrt.c)
 *     ??1?$vector_view@Uguid@winrt@@@param@winrt@@QEAA@XZ @ 0x1800DF654 (--1-$vector_view@Uguid@winrt@@@param@winrt@@QEAA@XZ.c)
 *     ??1BluetoothAudioSharingParameters@Internal@Interface@Audio@Bluetooth@Microsoft@winrt@@QEAA@XZ @ 0x1800DF678 (--1BluetoothAudioSharingParameters@Internal@Interface@Audio@Bluetooth@Microsoft@winrt@@QEAA@XZ.c)
 *     _lambda_23a707cc6c78406526adb642245a01c2_::operator() @ 0x1800DFBE8 (_lambda_23a707cc6c78406526adb642245a01c2_--operator().c)
 *     _lambda_82b4d950fa5d9eeb82537f57bcb68a2f_::operator() @ 0x1800DFF80 (_lambda_82b4d950fa5d9eeb82537f57bcb68a2f_--operator().c)
 *     ?First@?$produce@U?$scoped_input_vector_view@Uguid@winrt@@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uguid@winrt@@@std@@@std@@@std@@@impl@winrt@@U?$IIterable@Uguid@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1800E0D80 (-First@-$produce@U-$scoped_input_vector_view@Uguid@winrt@@V-$_Vector_const_iterator@V-$_Vector_v.c)
 *     _winrt::impl::factory_cache_entry_winrt::Microsoft::Bluetooth::Audio::Interface::Internal::BluetoothAudioSharingParameters_winrt::Microsoft::Bluetooth::Audio::Interface::Internal::IBluetoothAudioSharingParametersStatics_::call_winrt::Microsoft::Bluetooth::Audio::Interface::Internal::BluetoothAudioSharingParameters_(__cdecl_)(winrt::Microsoft::Bluetooth::Audio::Interface::Internal::IBluetoothAudioSharingParametersStatics_const_&)__::_1_::dtor$0 @ 0x180165620 (_winrt--impl--factory_cache_entry_winrt--Microsoft--Bluetooth--Audio--Interface--Internal--Bluet.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800E422C (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 */

__int64 __fastcall winrt::Windows::Foundation::Collections::IVectorView<winrt::guid>::~IVectorView<winrt::guid>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(a1);
  return result;
}
