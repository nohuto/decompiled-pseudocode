/*
 * XREFs of ?GetSpatialFormatForAudioFormat@EffectPack@@AEAAJPEBUtWAVEFORMATEX@@PEAUSpatialAudioSettings@@@Z @ 0x18012C788
 * Callers:
 *     ?SetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@_N@Z @ 0x18012E98C (-SetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSpatialFormatForAudioFormat@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@PEAUSpatialAudioSettings@@@Z @ 0x180133E1C (-GetSpatialFormatForAudioFormat@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@PEAU.c)
 */

__int64 __fastcall EffectPack::GetSpatialFormatForAudioFormat(
        EffectPack *this,
        const struct tWAVEFORMATEX *a2,
        struct SpatialAudioSettings *a3)
{
  __int64 v3; // rdx
  int SpatialFormatForAudioFormat; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a2 )
  {
    v3 = 7296LL;
LABEL_3:
    SpatialFormatForAudioFormat = -2147467261;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)SpatialFormatForAudioFormat);
    return (unsigned int)SpatialFormatForAudioFormat;
  }
  if ( !a3 )
  {
    v3 = 7297LL;
    goto LABEL_3;
  }
  SpatialFormatForAudioFormat = CSpatialProperties::GetSpatialFormatForAudioFormat(
                                  (CSpatialProperties *)(*((_QWORD *)this + 198) + 448LL),
                                  this,
                                  a2,
                                  a3);
  if ( SpatialFormatForAudioFormat < 0 )
  {
    v3 = 7303LL;
    goto LABEL_4;
  }
  return 0LL;
}
