/*
 * XREFs of ?FormFactor@CEndpointCharacteristics@@QEAA?AW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@XZ @ 0x180061E34
 * Callers:
 *     ?AddSpatialAudioProcessingSupportForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18005C46C (-AddSpatialAudioProcessingSupportForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?IsSPDIFEndpoint@CEndpointCharacteristics@@QEAA_NXZ @ 0x180135ABC (-IsSPDIFEndpoint@CEndpointCharacteristics@@QEAA_NXZ.c)
 *     ?EnumerateSpatialEncoders@CSpatialProperties@@AEAAIPEAVEffectPack@@AEBUSpatialAudioSettings@@W4SpatialRendererSelectionMode@@PEBUtWAVEFORMATEX@@3W4SpatialAudioPolicyFlags@@KPEAUSpatialAudioEncoderDescriptor@@PEAUTechIndexes@@@Z @ 0x18013B984 (-EnumerateSpatialEncoders@CSpatialProperties@@AEAAIPEAVEffectPack@@AEBUSpatialAudioSettings@@W4S.c)
 *     ?GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@2PEAUSpatialAudioRelatedGlobalSettings@@PEAUWAVEFORMATEXTENSIBLE@@PEA_N@Z @ 0x18013C03C (-GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUSpatialAudioSetting.c)
 *     ?GetFormFactor@AudioEndpointInfo@@UEAA?AW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@XZ @ 0x18013CAF0 (-GetFormFactor@AudioEndpointInfo@@UEAA-AW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@XZ.c)
 *     ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAJPEAVEffectPack@@_NPEBUtWAVEFORMATEX@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x18013F840 (-SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAJPEAVEffectPack@@_NPEBUtWAVEFORMATEX@@P.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CEndpointCharacteristics::FormFactor(CEndpointCharacteristics *this)
{
  __int64 v1; // rcx
  unsigned int v2; // ebx
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  v1 = *((_QWORD *)this + 9);
  v5 = 0LL;
  *(_OWORD *)pvar = 0LL;
  v2 = 10;
  if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v1 + 40LL))(
         v1,
         &PKEY_AudioEndpoint_FormFactor,
         pvar) >= 0
    && LOWORD(pvar[0]) == 19
    && LOWORD(pvar[1]) < 0xBu )
  {
    v2 = LOWORD(pvar[1]);
  }
  PropVariantClear(pvar);
  return v2;
}
