/*
 * XREFs of ??$?4U?$default_delete@UStreamGroupParams@@@std@@$0A@@?$unique_ptr@UStreamGroupParams@@U?$default_delete@UStreamGroupParams@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180088B88
 * Callers:
 *     ?DeriveStreamGroupParametersForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SYSTEM_AUDIO_STREAM_TYPE@@_JU_GUID@@4_N5PEBUtWAVEFORMATEX@@PEBUMODE_PARAMS@@PEAUIAudioStreamInfo@@AEAV?$unique_ptr@UStreamGroupParams@@U?$default_delete@UStreamGroupParams@@@std@@@std@@@Z @ 0x1800A12DC (-DeriveStreamGroupParametersForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL.c)
 * Callees:
 *     ??R?$default_delete@UStreamGroupParams@@@std@@QEBAXPEAUStreamGroupParams@@@Z @ 0x180027218 (--R-$default_delete@UStreamGroupParams@@@std@@QEBAXPEAUStreamGroupParams@@@Z.c)
 */

StreamGroupParams **__fastcall std::unique_ptr<StreamGroupParams>::operator=<std::default_delete<StreamGroupParams>,0>(
        StreamGroupParams **a1,
        StreamGroupParams **a2)
{
  StreamGroupParams *v2; // rax
  StreamGroupParams *v4; // rdx

  v2 = *a2;
  *a2 = 0LL;
  v4 = *a1;
  *a1 = v2;
  if ( v4 )
    std::default_delete<StreamGroupParams>::operator()((__int64)a1, v4);
  return a1;
}
