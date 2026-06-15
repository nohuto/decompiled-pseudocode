/*
 * XREFs of ?AddMultiple@CAudioSignalProcessingModeArray@@QEAAJIPEBU_GUID@@@Z @ 0x18003A68C
 * Callers:
 *     ?CreateEffectChain@SystemEffectChainDescriptor@@KAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@I1AEAV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@Z @ 0x18003A494 (-CreateEffectChain@SystemEffectChainDescriptor@@KAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GU.c)
 *     ?CreateDriverEffectPackConfiguration@EffectPackConfiguration@@SAJPEAUIPropertyStore@@0AEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@@Z @ 0x180050468 (-CreateDriverEffectPackConfiguration@EffectPackConfiguration@@SAJPEAUIPropertyStore@@0AEAV-$shar.c)
 *     ?AddSpatialAudioProcessingSupportForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18005C46C (-AddSpatialAudioProcessingSupportForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?CopyCapabilitiesFromEndpoint@EffectPack@@AEAAJXZ @ 0x18008C1D4 (-CopyCapabilitiesFromEndpoint@EffectPack@@AEAAJXZ.c)
 *     ?DiscoverConnectorCapabilities@CEndpointCharacteristics@@AEAAJXZ @ 0x1801339EC (-DiscoverConnectorCapabilities@CEndpointCharacteristics@@AEAAJXZ.c)
 * Callees:
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x18003A868 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 */

__int64 __fastcall CAudioSignalProcessingModeArray::AddMultiple(
        CAudioSignalProcessingModeArray *this,
        unsigned int a2,
        const struct _GUID *a3)
{
  unsigned int i; // ebx

  for ( i = 0; i < a2; ++i )
  {
    if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(this, &a3[i]) )
      return 2147942414LL;
  }
  return 0LL;
}
