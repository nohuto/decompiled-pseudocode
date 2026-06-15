/*
 * XREFs of ?HardwareLoopbackEnabled@EffectPack@@QEAAHXZ @ 0x180033658
 * Callers:
 *     ?GetConnectorTypeForStream@@YA?AW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUEndpointCharacteristicsDescriptor@@KW4_AUDCLNT_SHAREMODE@@HPEBUtWAVEFORMATEX@@PEAUIProcessSubmixProxy@@@Z @ 0x1800A0070 (-GetConnectorTypeForStream@@YA-AW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUEndp.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_J_NPEAUIStreamGroupProxy@@PEAPEAUIBridgeStreamInstanceProxy@@@Z @ 0x1800B809C (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_J_NPEAUIStreamGroupProxy@@PEAPEAU.c)
 *     ?RestoreDisplacedPrimaryProfileStreamGroups@CBtAudioResourceManagerBase@@IEAAJXZ @ 0x1800E0B04 (-RestoreDisplacedPrimaryProfileStreamGroups@CBtAudioResourceManagerBase@@IEAAJXZ.c)
 *     ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBU_tlgProvider_t@@PEAUIEndpointResourceManagerProvider@@@Z @ 0x180136B84 (-RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJAEAV-$basic_string@GU-$char_traits@G@std@.c)
 * Callees:
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x180019F4C (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18002F15C (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x1800313A0 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?GetSupportedConnectorModesInternal@EffectPack@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4FXEnablementConsideration@@W4SED_RESOLVEOPT@@@Z @ 0x1800313F0 (-GetSupportedConnectorModesInternal@EffectPack@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MID.c)
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_53e50f4d36d820af02fa3fa8c2905d02___ @ 0x180031A80 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_53e50f4d36d820af02fa3fa8c2905d02___.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18003A750 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall EffectPack::HardwareLoopbackEnabled(EffectPack *this)
{
  __int64 SupportedConnectorModesInternal; // rcx
  __int64 v4; // rcx
  GUID v5; // xmm0
  bool v6; // di
  void *v7; // rcx
  void *v8; // rbx
  __int64 v9; // rcx
  LPVOID v10; // [rsp+38h] [rbp-11h] BYREF
  char v11; // [rsp+40h] [rbp-9h]
  PROPVARIANT pvar[2]; // [rsp+48h] [rbp-1h] BYREF
  __int64 v13; // [rsp+58h] [rbp+Fh]
  __m256i v14; // [rsp+60h] [rbp+17h]
  __m256i v15; // [rsp+80h] [rbp+37h] BYREF
  LPVOID pv; // [rsp+B0h] [rbp+67h] BYREF

  *(_OWORD *)pvar = 0LL;
  v13 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**(_QWORD **)(*((_QWORD *)this + 198) + 72LL) + 40LL))(
         *(_QWORD *)(*((_QWORD *)this + 198) + 72LL),
         &PKEY_Endpoint_HWAudioEngine_Loopback_ConnectorId,
         pvar) < 0
    || LOWORD(pvar[0]) != 19 )
  {
    goto LABEL_3;
  }
  pv = 0LL;
  v10 = 0LL;
  v11 = 1;
  SupportedConnectorModesInternal = EffectPack::GetSupportedConnectorModesInternal(this, 0LL, 0, 1);
  if ( *(_DWORD *)(SupportedConnectorModesInternal + 8) )
  {
    if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                         SupportedConnectorModesInternal,
                         &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) == -1 )
    {
      if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                           v4,
                           &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) == -1 )
        v5 = *(GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v9, 0LL);
      else
        v5 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    }
    else
    {
      v5 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    }
  }
  else
  {
    v5 = GUID_00000000_0000_0000_0000_000000000000;
  }
  v14.m256i_i64[0] = (__int64)this;
  v14.m256i_i32[2] = 0;
  *(GUID *)((char *)&v14.m256i_u64[1] + 4) = v5;
  v15 = v14;
  v6 = (int)CEndpointCharacteristics::GetDeviceFormatInternal__lambda_53e50f4d36d820af02fa3fa8c2905d02___(
              *((CEndpointCharacteristics **)this + 198),
              0,
              0,
              eHostProcessConnector,
              (__int64)&v15,
              &v10) >= 0;
  if ( v11 )
  {
    v7 = pv;
    pv = v10;
    if ( v7 )
      CoTaskMemFree(v7);
  }
  v8 = pv;
  if ( v6 && (unsigned int)ValidateUncompressedWaveFormatEx((const struct tWAVEFORMATEX *)pv) == 1 )
  {
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      &pv,
      0LL);
LABEL_3:
    PropVariantClear(pvar);
    return 0LL;
  }
  pv = 0LL;
  if ( v8 )
    CoTaskMemFree(v8);
  PropVariantClear(pvar);
  return 1LL;
}
