/*
 * XREFs of ?AposRegisteredAsLfxGfx@EffectPackConfiguration@@QEBA_NXZ @ 0x18003A90C
 * Callers:
 *     ?FixupProcessingModeSupport@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180038F98 (-FixupProcessingModeSupport@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ?DeriveEffectiveConnectorAndEffectPackCapabilities@EffectPack@@QEAAJXZ @ 0x1800A0DA4 (-DeriveEffectiveConnectorAndEffectPackCapabilities@EffectPack@@QEAAJXZ.c)
 *     ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBU_tlgProvider_t@@PEAUIEndpointResourceManagerProvider@@@Z @ 0x180136B84 (-RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJAEAV-$basic_string@GU-$char_traits@G@std@.c)
 * Callees:
 *     <none>
 */

char __fastcall EffectPackConfiguration::AposRegisteredAsLfxGfx(EffectPackConfiguration *this)
{
  char result; // al

  result = 0;
  if ( *((_DWORD *)this + 448) || *((_DWORD *)this + 452) )
    return 1;
  return result;
}
