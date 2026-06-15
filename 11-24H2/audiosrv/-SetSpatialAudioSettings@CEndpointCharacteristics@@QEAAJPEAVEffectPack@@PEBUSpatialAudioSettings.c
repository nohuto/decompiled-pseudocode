/*
 * XREFs of ?SetSpatialAudioSettings@CEndpointCharacteristics@@QEAAJPEAVEffectPack@@PEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@_N@Z @ 0x180138488
 * Callers:
 *     _lambda_32c34d17e9a23d2a6a4d348487551253_::operator() @ 0x180130C84 (_lambda_32c34d17e9a23d2a6a4d348487551253_--operator().c)
 *     ?SetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@_N@Z @ 0x180137A54 (-SetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MarkSystemEffectsForResolution@EffectPack@@QEAAXW4SED_RESOLVECALLBACKOPT@@@Z @ 0x180046E74 (-MarkSystemEffectsForResolution@EffectPack@@QEAAXW4SED_RESOLVECALLBACKOPT@@@Z.c)
 *     ?SetSpatialAudioSettings@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@PEAUSpatialAudioRelatedGlobalSettings@@_N@Z @ 0x18013EC20 (-SetSpatialAudioSettings@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUSpatialAudioSettings@@PEBU.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CEndpointCharacteristics::SetSpatialAudioSettings(
        CEndpointCharacteristics *this,
        struct EffectPack *a2,
        const struct SpatialAudioSettings *a3,
        const struct tWAVEFORMATEX *a4,
        bool a5)
{
  __int64 v9; // rdx
  int v10; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char v13; // [rsp+60h] [rbp+18h] BYREF

  if ( !a3 )
  {
    v9 = 7280LL;
LABEL_3:
    v10 = -2147467261;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v10);
    return (unsigned int)v10;
  }
  if ( !a4 )
  {
    v9 = 7281LL;
    goto LABEL_3;
  }
  if ( !*((_DWORD *)this + 59) )
  {
    v13 = 0;
    v10 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)g_policyConfigInternal + 48LL))(
            g_policyConfigInternal,
            &v13);
    if ( v10 < 0 )
    {
      v9 = 7288LL;
      goto LABEL_4;
    }
    CSpatialProperties::SetSpatialAudioSettings(
      (CEndpointCharacteristics *)((char *)this + 448),
      a2,
      a3,
      a4,
      (struct SpatialAudioRelatedGlobalSettings *)&v13,
      a5);
    EffectPack::MarkSystemEffectsForResolution((unsigned __int64 *)a2, 0xEu);
  }
  return 0LL;
}
