/*
 * XREFs of _lambda_23a707cc6c78406526adb642245a01c2_::operator() @ 0x1800DFBE8
 * Callers:
 *     ?DeactivateMulticastSession@BluetoothBroadcastProvider@@UEAAJAEBU_GUID@@@Z @ 0x1800E0C70 (-DeactivateMulticastSession@BluetoothBroadcastProvider@@UEAAJAEBU_GUID@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_56664216@@@details@wil@@QEAA_NXZ @ 0x1800DD974 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_56664216@@@details@wil@@QEAA_NXZ.c)
 *     ??1?$IVectorView@Uguid@winrt@@@Collections@Foundation@Windows@winrt@@QEAA@XZ @ 0x1800DF5F8 (--1-$IVectorView@Uguid@winrt@@@Collections@Foundation@Windows@winrt@@QEAA@XZ.c)
 *     ?CreateDefault@BluetoothAudioSharingController@Internal@Interface@Audio@Bluetooth@Microsoft@winrt@@SA@XZ @ 0x1800E0B94 (-CreateDefault@BluetoothAudioSharingController@Internal@Interface@Audio@Bluetooth@Microsoft@winr.c)
 *     ?CurrentSession@?$consume_Microsoft_Bluetooth_Audio_Interface_Internal_IBluetoothAudioSharingController@UIBluetoothAudioSharingController@Internal@Interface@Audio@Bluetooth@Microsoft@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800E0C0C (-CurrentSession@-$consume_Microsoft_Bluetooth_Audio_Interface_Internal_IBluetoothAudioSharingCon.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1800E31B0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
__int64 __fastcall lambda_23a707cc6c78406526adb642245a01c2_::operator()(_DWORD **a1)
{
  HRESULT v3; // eax
  unsigned int v4; // ebx
  _DWORD *v5; // r10
  char v6; // r9
  __int16 v7; // r8
  __int16 v8; // dx
  unsigned int v9; // eax
  HRESULT v10; // eax
  unsigned int v11; // ebx
  unsigned int v12; // eax
  int v13; // [rsp+40h] [rbp-68h] BYREF
  IUnknown *v14; // [rsp+48h] [rbp-60h] BYREF
  IUnknown *pProxy; // [rsp+50h] [rbp-58h] BYREF
  int v16; // [rsp+58h] [rbp-50h] BYREF
  __int128 v17; // [rsp+60h] [rbp-48h]
  __int128 v18; // [rsp+70h] [rbp-38h]
  __int128 v19; // [rsp+80h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_56664216>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_56664216>::GetImpl'::`2'::impl) )
  {
    winrt::Microsoft::Bluetooth::Audio::Interface::Internal::BluetoothAudioSharingController::CreateDefault();
    v3 = CoSetProxyBlanket(pProxy, 0xFFFFFFFF, 0, 0LL, 0, 3u, 0LL, 0);
    v4 = v3;
    if ( v3 >= 0 )
    {
      winrt::impl::consume_Microsoft_Bluetooth_Audio_Interface_Internal_IBluetoothAudioSharingController<winrt::Microsoft::Bluetooth::Audio::Interface::Internal::IBluetoothAudioSharingController>::CurrentSession(
        &pProxy,
        &v14);
      if ( v14 )
      {
        v5 = *a1;
        v6 = *((_BYTE *)*a1 + 8);
        v7 = *((_WORD *)*a1 + 3);
        v8 = *((_WORD *)*a1 + 2);
        LODWORD(v18) = **a1;
        WORD2(v18) = v8;
        WORD3(v18) = v7;
        BYTE8(v18) = v6;
        *(_DWORD *)((char *)&v18 + 9) = *(_DWORD *)((char *)v5 + 9);
        *(_WORD *)((char *)&v18 + 13) = *(_WORD *)((char *)v5 + 13);
        HIBYTE(v18) = *((_BYTE *)v5 + 15);
        v19 = 0LL;
        v16 = 0;
        v17 = 0LL;
        v9 = ((__int64 (__fastcall *)(IUnknown *, __int128 *))v14->lpVtbl[2].Release)(v14, &v19);
        winrt::check_hresult(&v13, v9, &v16);
        if ( v19 == v18 )
        {
          v10 = CoSetProxyBlanket(v14, 0xFFFFFFFF, 0, 0LL, 0, 3u, 0LL, 0);
          v11 = v10;
          if ( v10 >= 0 )
          {
            v16 = 0;
            v17 = 0LL;
            v12 = ((__int64 (__fastcall *)(IUnknown *))v14->lpVtbl[3].QueryInterface)(v14);
            winrt::check_hresult(&v13, v12, &v16);
            winrt::Windows::Foundation::Collections::IVectorView<winrt::guid>::~IVectorView<winrt::guid>(&v14);
            winrt::Windows::Foundation::Collections::IVectorView<winrt::guid>::~IVectorView<winrt::guid>(&pProxy);
            return 0LL;
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x176,
              (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btbroadcastprovider.cpp",
              (const char *)(unsigned int)v10);
            winrt::Windows::Foundation::Collections::IVectorView<winrt::guid>::~IVectorView<winrt::guid>(&v14);
            winrt::Windows::Foundation::Collections::IVectorView<winrt::guid>::~IVectorView<winrt::guid>(&pProxy);
            return v11;
          }
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x16D,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btbroadcastprovider.cpp",
            (const char *)0x80070057LL);
          winrt::Windows::Foundation::Collections::IVectorView<winrt::guid>::~IVectorView<winrt::guid>(&v14);
          winrt::Windows::Foundation::Collections::IVectorView<winrt::guid>::~IVectorView<winrt::guid>(&pProxy);
          return 2147942487LL;
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x16C,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btbroadcastprovider.cpp",
          (const char *)0x80070057LL);
        winrt::Windows::Foundation::Collections::IVectorView<winrt::guid>::~IVectorView<winrt::guid>(&v14);
        winrt::Windows::Foundation::Collections::IVectorView<winrt::guid>::~IVectorView<winrt::guid>(&pProxy);
        return 2147942487LL;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x169,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btbroadcastprovider.cpp",
        (const char *)(unsigned int)v3);
      winrt::Windows::Foundation::Collections::IVectorView<winrt::guid>::~IVectorView<winrt::guid>(&pProxy);
      return v4;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15F,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btbroadcastprovider.cpp",
      (const char *)0x80004001LL);
    return 2147500033LL;
  }
}
