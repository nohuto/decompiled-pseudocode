/*
 * XREFs of _lambda_9137dbba075d897e82b5fd8c66242eba_::operator() @ 0x180129718
 * Callers:
 *     wil::details::lambda_call__lambda_9137dbba075d897e82b5fd8c66242eba___::_lambda_call__lambda_9137dbba075d897e82b5fd8c66242eba___ @ 0x180128728 (wil--details--lambda_call__lambda_9137dbba075d897e82b5fd8c66242eba___--_lambda_call__lambda_9137.c)
 *     ?SetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@_N@Z @ 0x18012E98C (-SetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 * Callees:
 *     ?UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180087A70 (-UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B279C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetDeviceFormatHwAudioEngine@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x18012F164 (-SetDeviceFormatHwAudioEngine@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?SetSpatialAudioSettings@CEndpointCharacteristics@@QEAAJPEAVEffectPack@@PEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@_N@Z @ 0x18012F3C0 (-SetSpatialAudioSettings@CEndpointCharacteristics@@QEAAJPEAVEffectPack@@PEBUSpatialAudioSettings.c)
 */

__int64 __fastcall lambda_9137dbba075d897e82b5fd8c66242eba_::operator()(__int64 a1)
{
  int v2; // eax
  int updated; // eax
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = CEndpointCharacteristics::SetSpatialAudioSettings(
         *(CEndpointCharacteristics **)(*(_QWORD *)a1 + 1584LL),
         *(struct EffectPack **)a1,
         **(const struct SpatialAudioSettings ***)(a1 + 8),
         **(const struct tWAVEFORMATEX ***)(a1 + 16),
         0);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      8878LL,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v2);
  updated = CEndpointCharacteristics::UpdateDeviceFormatEPProperty(
              *(CEndpointCharacteristics **)(*(_QWORD *)a1 + 1584LL),
              0,
              0,
              **(const struct tWAVEFORMATEX ***)(a1 + 16));
  if ( updated < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      8879LL,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)updated);
  if ( **(_DWORD **)(a1 + 24) )
  {
    v4 = CEndpointCharacteristics::SetDeviceFormatHwAudioEngine(
           *(CEndpointCharacteristics **)(*(_QWORD *)a1 + 1584LL),
           **(const struct tWAVEFORMATEX ***)(a1 + 16));
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        8884LL,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v4);
  }
  return CEndpointCharacteristics::ClearMixFormatCache(*(_QWORD *)(*(_QWORD *)a1 + 1584LL), 0);
}
