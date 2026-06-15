/*
 * XREFs of _SystemEffectDescriptor::UpdateEffectsInOverridingChain_::_1_::dtor$2 @ 0x18016137F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SystemEffectDescriptor::UpdateEffectsInOverridingChain_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((_DWORD *)(a2 + 64));
}
