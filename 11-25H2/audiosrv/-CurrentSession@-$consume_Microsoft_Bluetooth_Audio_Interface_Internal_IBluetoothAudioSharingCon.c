/*
 * XREFs of ?CurrentSession@?$consume_Microsoft_Bluetooth_Audio_Interface_Internal_IBluetoothAudioSharingController@UIBluetoothAudioSharingController@Internal@Interface@Audio@Bluetooth@Microsoft@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800E0C0C
 * Callers:
 *     _lambda_23a707cc6c78406526adb642245a01c2_::operator() @ 0x1800DFBE8 (_lambda_23a707cc6c78406526adb642245a01c2_--operator().c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1800E31B0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::consume_Microsoft_Bluetooth_Audio_Interface_Internal_IBluetoothAudioSharingController<winrt::Microsoft::Bluetooth::Audio::Interface::Internal::IBluetoothAudioSharingController>::CurrentSession(
        __int64 **a1,
        _QWORD *a2)
{
  __int64 *v2; // rcx
  __int64 v4; // rax
  unsigned int v5; // eax
  int v7; // [rsp+28h] [rbp-20h] BYREF
  __int128 v8; // [rsp+30h] [rbp-18h]
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v10; // [rsp+58h] [rbp+10h] BYREF

  v10 = a2;
  v2 = *a1;
  v9 = 0LL;
  v7 = 0;
  v4 = *v2;
  v8 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v4 + 64))(v2, &v9);
  winrt::check_hresult(&v10, v5, &v7);
  *a2 = v9;
  return a2;
}
