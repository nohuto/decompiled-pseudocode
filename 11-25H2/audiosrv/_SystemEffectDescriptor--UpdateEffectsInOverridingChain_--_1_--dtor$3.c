/*
 * XREFs of _SystemEffectDescriptor::UpdateEffectsInOverridingChain_::_1_::dtor$3 @ 0x1801613D9
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SystemEffectDescriptor::UpdateEffectsInOverridingChain_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((_DWORD *)(a2 + 48));
}
