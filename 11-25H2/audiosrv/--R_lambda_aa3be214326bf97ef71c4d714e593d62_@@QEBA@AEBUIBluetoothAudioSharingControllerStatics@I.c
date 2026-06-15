/*
 * XREFs of ??R_lambda_aa3be214326bf97ef71c4d714e593d62_@@QEBA@AEBUIBluetoothAudioSharingControllerStatics@Internal@Interface@Audio@Bluetooth@Microsoft@winrt@@@Z @ 0x1800DFF1C
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_4d657e961041e624fe5d1ab9f4050edc_@@CA@AEBUIBluetoothAudioSharingParametersStatics@Internal@Interface@Audio@Bluetooth@Microsoft@winrt@@@Z @ 0x1800DDC50 (-_lambda_invoker_cdecl_@_lambda_4d657e961041e624fe5d1ab9f4050edc_@@CA@AEBUIBluetoothAudioSharing.c)
 *     _lambda_82b4d950fa5d9eeb82537f57bcb68a2f_::operator() @ 0x1800DFF80 (_lambda_82b4d950fa5d9eeb82537f57bcb68a2f_--operator().c)
 *     ?CreateDefault@BluetoothAudioSharingController@Internal@Interface@Audio@Bluetooth@Microsoft@winrt@@SA@XZ @ 0x1800E0B94 (-CreateDefault@BluetoothAudioSharingController@Internal@Interface@Audio@Bluetooth@Microsoft@winr.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1800E31B0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall _lambda_aa3be214326bf97ef71c4d714e593d62_::operator()(__int64 a1, _QWORD *a2, __int64 **a3)
{
  __int64 *v3; // rcx
  __int64 v5; // rax
  unsigned int v6; // eax
  int v8; // [rsp+28h] [rbp-20h] BYREF
  __int128 v9; // [rsp+30h] [rbp-18h]
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v11; // [rsp+58h] [rbp+10h] BYREF

  v11 = a2;
  v10 = a1;
  v3 = *a3;
  v10 = 0LL;
  v8 = 0;
  v5 = *v3;
  v9 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v5 + 48))(v3, &v10);
  winrt::check_hresult(&v11, v6, &v8);
  *a2 = v10;
  return a2;
}
