/*
 * XREFs of ?IsSWAPOFallbackSupported@EffectPack@@QEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180071684
 * Callers:
 *     ?UseSupportedConnectorMode@@YAJPEAUEndpointCharacteristicsDescriptor@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@HAEA_N@Z @ 0x1800815EC (-UseSupportedConnectorMode@@YAJPEAUEndpointCharacteristicsDescriptor@@KW4__MIDL___MIDL_itf_audio.c)
 * Callees:
 *     ?IsConnectorModeSupported@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4FXEnablementConsideration@@U_GUID@@@Z @ 0x180030D88 (-IsConnectorModeSupported@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_000.c)
 *     ??A?$span@VCAudioSignalProcessingModeArray@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_K@Z @ 0x18003AFBC (--A-$span@VCAudioSignalProcessingModeArray@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_.c)
 */

char __fastcall EffectPack::IsSWAPOFallbackSupported(EffectPack *this, unsigned int a2)
{
  char v4; // bl
  GUID v6; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0;
  if ( *(int *)(gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
                  (unsigned __int64 *)(*((_QWORD *)this + 196) + 2040LL),
                  (int)a2)
              + 8) > 0 )
  {
    v6 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    return (unsigned int)EffectPack::IsConnectorModeSupported(this, a2, 0, &v6) != 0;
  }
  return v4;
}
