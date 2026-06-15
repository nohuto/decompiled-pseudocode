/*
 * XREFs of ?GetConnectorProcessingModeCount@EffectPack@@QEAAIW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18006D26C
 * Callers:
 *     ?DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800357B0 (-DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 * Callees:
 *     ?GetSupportedConnectorModesInternal@EffectPack@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4FXEnablementConsideration@@W4SED_RESOLVEOPT@@@Z @ 0x1800313F0 (-GetSupportedConnectorModesInternal@EffectPack@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MID.c)
 */

__int64 __fastcall EffectPack::GetConnectorProcessingModeCount(EffectPack *this, __int64 a2)
{
  return *(unsigned int *)(EffectPack::GetSupportedConnectorModesInternal(this, a2, 0, 0) + 8);
}
