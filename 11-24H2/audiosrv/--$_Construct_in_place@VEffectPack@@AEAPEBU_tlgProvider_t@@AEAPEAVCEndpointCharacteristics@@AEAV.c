/*
 * XREFs of ??$_Construct_in_place@VEffectPack@@AEAPEBU_tlgProvider_t@@AEAPEAVCEndpointCharacteristics@@AEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@@std@@YAXAEAVEffectPack@@AEAPEBU_tlgProvider_t@@AEAPEAVCEndpointCharacteristics@@AEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@0@@Z @ 0x1800A2568
 * Callers:
 *     ?CreateInstanceFromConfiguration@EffectPack@@SAJAEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@PEAVCEndpointCharacteristics@@PEBU_tlgProvider_t@@AEAV?$shared_ptr@VEffectPack@@@3@@Z @ 0x1800509F8 (-CreateInstanceFromConfiguration@EffectPack@@SAJAEAV-$shared_ptr@$$CBUEffectPackConfiguration@@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Construct_in_place<EffectPack,_tlgProvider_t const * &,CEndpointCharacteristics * &,std::shared_ptr<EffectPackConfiguration const> &>(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        __int64 a4)
{
  return EffectPack::EffectPack(a1, *a2, *a3, a4);
}
