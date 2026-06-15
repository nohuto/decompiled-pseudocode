/*
 * XREFs of _lambda_82b4d950fa5d9eeb82537f57bcb68a2f_::operator() @ 0x1800DFF80
 * Callers:
 *     ?ActivateMulticastSession@BluetoothBroadcastProvider@@UEAAJAEAV?$vector@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEBU_GUID@@@Z @ 0x1800E06A0 (-ActivateMulticastSession@BluetoothBroadcastProvider@@UEAAJAEAV-$vector@V-$com_ptr_t@VCEndpointC.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_56664216@@@details@wil@@QEAA_NXZ @ 0x1800DD974 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_56664216@@@details@wil@@QEAA_NXZ.c)
 *     ??$_Emplace_reallocate@Uguid@winrt@@@?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@AEAAPEAUguid@winrt@@QEAU23@$$QEAU23@@Z @ 0x1800DDFF0 (--$_Emplace_reallocate@Uguid@winrt@@@-$vector@Uguid@winrt@@V-$allocator@Uguid@winrt@@@std@@@std@.c)
 *     ??$call@P6A?AUBluetoothAudioSharingParameters@Internal@Interface@Audio@Bluetooth@Microsoft@winrt@@AEBUIBluetoothAudioSharingParametersStatics@234567@@Z@?$factory_cache_entry@UBluetoothAudioSharingParameters@Internal@Interface@Audio@Bluetooth@Microsoft@winrt@@UIBluetoothAudioSharingParametersStatics@234567@@impl@winrt@@QEAA?A_P$$QEAP6A?AUBluetoothAudioSharingParameters@Internal@Interface@Audio@Bluetooth@Microsoft@2@AEBUIBluetoothAudioSharingParametersStatics@456782@@Z@Z @ 0x1800DE658 (--$call@P6A-AUBluetoothAudioSharingParameters@Internal@Interface@Audio@Bluetooth@Microsoft@winrt.c)
 *     ??$make_scoped_input_vector_view@Uguid@winrt@@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uguid@winrt@@@std@@@std@@@std@@@impl@winrt@@YA?A_PV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uguid@winrt@@@std@@@std@@@std@@0@Z @ 0x1800DEAD8 (--$make_scoped_input_vector_view@Uguid@winrt@@V-$_Vector_const_iterator@V-$_Vector_val@U-$_Simpl.c)
 *     ??1?$IVectorView@Uguid@winrt@@@Collections@Foundation@Windows@winrt@@QEAA@XZ @ 0x1800DF5F8 (--1-$IVectorView@Uguid@winrt@@@Collections@Foundation@Windows@winrt@@QEAA@XZ.c)
 *     ??1?$vector_view@Uguid@winrt@@@param@winrt@@QEAA@XZ @ 0x1800DF654 (--1-$vector_view@Uguid@winrt@@@param@winrt@@QEAA@XZ.c)
 *     ??R_lambda_aa3be214326bf97ef71c4d714e593d62_@@QEBA@AEBUIBluetoothAudioSharingControllerStatics@Internal@Interface@Audio@Bluetooth@Microsoft@winrt@@@Z @ 0x1800DFF1C (--R_lambda_aa3be214326bf97ef71c4d714e593d62_@@QEBA@AEBUIBluetoothAudioSharingControllerStatics@I.c)
 *     ?CreateDefault@BluetoothAudioSharingController@Internal@Interface@Audio@Bluetooth@Microsoft@winrt@@SA@XZ @ 0x1800E0B94 (-CreateDefault@BluetoothAudioSharingController@Internal@Interface@Audio@Bluetooth@Microsoft@winr.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1800E31B0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ?GetPropertyStoreProperty@CEndpointCharacteristics@@QEAAJAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x18012C770 (-GetPropertyStoreProperty@CEndpointCharacteristics@@QEAAJAEBU_tagpropertykey@@PEAUtagPROPVARIANT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5 #try_helpers=1
__int64 __fastcall lambda_82b4d950fa5d9eeb82537f57bcb68a2f_::operator()(__int64 a1)
{
  CEndpointCharacteristics **v2; // rbx
  CEndpointCharacteristics **v3; // r14
  int PropertyStoreProperty; // eax
  unsigned int v5; // edi
  __int64 v7; // r10
  char v8; // r8
  __int16 v9; // dx
  __int16 v10; // cx
  _BYTE *v11; // rdx
  HRESULT v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // ebx
  __int64 v15; // r9
  CHAR v16; // r8
  PROPVAR_PAD3 v17; // dx
  PROPVAR_PAD2 v18; // cx
  unsigned int v19; // eax
  unsigned int v20; // eax
  IUnknown *v21; // rbx
  HRESULT v22; // eax
  unsigned int v23; // ebx
  IUnknown *v24; // [rsp+40h] [rbp-78h] BYREF
  __int64 v25; // [rsp+48h] [rbp-70h] BYREF
  IUnknown *pProxy; // [rsp+50h] [rbp-68h] BYREF
  _QWORD v27[3]; // [rsp+58h] [rbp-60h] BYREF
  struct tagPROPVARIANT pvar; // [rsp+70h] [rbp-48h] BYREF
  _BYTE v29[24]; // [rsp+90h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v2 = **(CEndpointCharacteristics ****)a1;
  v3 = *(CEndpointCharacteristics ***)(*(_QWORD *)a1 + 8LL);
  while ( v2 != v3 )
  {
    memset(&pvar, 0, sizeof(pvar));
    PropertyStoreProperty = CEndpointCharacteristics::GetPropertyStoreProperty(*v2, &PKEY_Device_ContainerId, &pvar);
    v5 = PropertyStoreProperty;
    if ( PropertyStoreProperty < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x124,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btbroadcastprovider.cpp",
        (const char *)(unsigned int)PropertyStoreProperty);
      PropVariantClear((PROPVARIANT *)&pvar);
      return v5;
    }
    if ( pvar.vt != 72 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x125,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btbroadcastprovider.cpp",
        (const char *)0x8000FFFFLL);
      PropVariantClear((PROPVARIANT *)&pvar);
      return 2147549183LL;
    }
    v7 = *(_QWORD *)(a1 + 8);
    v8 = *(_BYTE *)(pvar.hVal.QuadPart + 8);
    v9 = *(_WORD *)(pvar.hVal.QuadPart + 6);
    v10 = *(_WORD *)(pvar.hVal.QuadPart + 4);
    *(_DWORD *)v29 = *pvar.plVal;
    *(_WORD *)&v29[4] = v10;
    *(_WORD *)&v29[6] = v9;
    v29[8] = v8;
    *(_DWORD *)&v29[9] = *(_DWORD *)(pvar.hVal.QuadPart + 9);
    *(_WORD *)&v29[13] = *(_WORD *)(pvar.hVal.QuadPart + 13);
    v29[15] = *(_BYTE *)(pvar.hVal.QuadPart + 15);
    v11 = *(_BYTE **)(v7 + 8);
    if ( v11 == *(_BYTE **)(v7 + 16) )
    {
      std::vector<winrt::guid>::_Emplace_reallocate<winrt::guid>((const void **)v7, v11, v29);
    }
    else
    {
      *(_OWORD *)v11 = *(_OWORD *)v29;
      *(_QWORD *)(v7 + 8) += 16LL;
    }
    PropVariantClear((PROPVARIANT *)&pvar);
    ++v2;
  }
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_56664216>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_56664216>::GetImpl'::`2'::impl) )
  {
    winrt::Microsoft::Bluetooth::Audio::Interface::Internal::BluetoothAudioSharingController::CreateDefault();
    v12 = CoSetProxyBlanket(pProxy, 0xFFFFFFFF, 0, 0LL, 0, 3u, 0LL, 0);
    v14 = v12;
    if ( v12 >= 0 )
    {
      v27[1] = &qword_1801CFAD8;
      _InterlockedIncrement64(&qword_1801CFAD8);
      if ( winrt::impl::factory_cache_entry_v<winrt::Microsoft::Bluetooth::Audio::Interface::Internal::BluetoothAudioSharingParameters,winrt::Microsoft::Bluetooth::Audio::Interface::Internal::IBluetoothAudioSharingParametersStatics> )
      {
        _lambda_aa3be214326bf97ef71c4d714e593d62_::operator()(
          v13,
          &v25,
          (__int64 **)&winrt::impl::factory_cache_entry_v<winrt::Microsoft::Bluetooth::Audio::Interface::Internal::BluetoothAudioSharingParameters,winrt::Microsoft::Bluetooth::Audio::Interface::Internal::IBluetoothAudioSharingParametersStatics>);
        _InterlockedDecrement64(&qword_1801CFAD8);
      }
      else
      {
        _InterlockedDecrement64(&qword_1801CFAD8);
        *(_QWORD *)v29 = _lambda_4d657e961041e624fe5d1ab9f4050edc_::_lambda_invoker_cdecl_;
        winrt::impl::factory_cache_entry<winrt::Microsoft::Bluetooth::Audio::Interface::Internal::BluetoothAudioSharingParameters,winrt::Microsoft::Bluetooth::Audio::Interface::Internal::IBluetoothAudioSharingParametersStatics>::call<winrt::Microsoft::Bluetooth::Audio::Interface::Internal::BluetoothAudioSharingParameters (*)(winrt::Microsoft::Bluetooth::Audio::Interface::Internal::IBluetoothAudioSharingParametersStatics const &)>(
          v13,
          (__int64)&v25,
          (void (__fastcall **)(__int64, __int64 *))v29);
      }
      v15 = *(_QWORD *)(a1 + 16);
      v16 = *(_BYTE *)(v15 + 8);
      v17 = *(_WORD *)(v15 + 6);
      v18 = *(_WORD *)(v15 + 4);
      *(_DWORD *)&pvar.vt = *(_DWORD *)v15;
      pvar.wReserved2 = v18;
      pvar.wReserved3 = v17;
      pvar.cVal = v16;
      *(ULONG *)((char *)&pvar.decVal.Lo32 + 1) = *(_DWORD *)(v15 + 9);
      *(_WORD *)((char *)&pvar.decVal.Lo64 + 5) = *(_WORD *)(v15 + 13);
      HIBYTE(pvar.decVal.Lo64) = *(_BYTE *)(v15 + 15);
      *(_DWORD *)v29 = 0;
      *(_OWORD *)&v29[8] = 0LL;
      v19 = (*(__int64 (__fastcall **)(__int64, struct tagPROPVARIANT *))(*(_QWORD *)v25 + 56LL))(v25, &pvar);
      winrt::check_hresult(&v24, v19, v29);
      winrt::impl::make_scoped_input_vector_view<winrt::guid,std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<winrt::guid>>>>(
        (__int64 *)&pvar,
        **(_QWORD **)(a1 + 8),
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL));
      *((_BYTE *)&pvar.decVal + 16) = 1;
      v24 = 0LL;
      *(_DWORD *)v29 = 0;
      *(_OWORD *)&v29[8] = 0LL;
      v20 = ((__int64 (__fastcall *)(IUnknown *, __int64, _QWORD, IUnknown **))pProxy->lpVtbl[3].QueryInterface)(
              pProxy,
              v25,
              *(_QWORD *)&pvar.vt,
              &v24);
      winrt::check_hresult(v27, v20, v29);
      v21 = v24;
      v27[0] = v24;
      winrt::param::vector_view<winrt::guid>::~vector_view<winrt::guid>(&pvar);
      v22 = CoSetProxyBlanket(v21, 0xFFFFFFFF, 0, 0LL, 0, 3u, 0LL, 0);
      v23 = v22;
      if ( v22 >= 0 )
      {
        winrt::Windows::Foundation::Collections::IVectorView<winrt::guid>::~IVectorView<winrt::guid>(v27);
        winrt::Windows::Foundation::Collections::IVectorView<winrt::guid>::~IVectorView<winrt::guid>(&v25);
        winrt::Windows::Foundation::Collections::IVectorView<winrt::guid>::~IVectorView<winrt::guid>(&pProxy);
        return 0LL;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x140,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btbroadcastprovider.cpp",
          (const char *)(unsigned int)v22);
        winrt::Windows::Foundation::Collections::IVectorView<winrt::guid>::~IVectorView<winrt::guid>(v27);
        winrt::Windows::Foundation::Collections::IVectorView<winrt::guid>::~IVectorView<winrt::guid>(&v25);
        winrt::Windows::Foundation::Collections::IVectorView<winrt::guid>::~IVectorView<winrt::guid>(&pProxy);
        return v23;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x133,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btbroadcastprovider.cpp",
        (const char *)(unsigned int)v12);
      winrt::Windows::Foundation::Collections::IVectorView<winrt::guid>::~IVectorView<winrt::guid>(&pProxy);
      return v14;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x129,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btbroadcastprovider.cpp",
      (const char *)0x80004001LL);
    return 2147500033LL;
  }
}
