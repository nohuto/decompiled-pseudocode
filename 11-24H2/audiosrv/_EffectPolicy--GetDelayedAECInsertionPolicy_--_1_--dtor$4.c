/*
 * XREFs of _EffectPolicy::GetDelayedAECInsertionPolicy_::_1_::dtor$4 @ 0x18016ACB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall EffectPolicy::GetDelayedAECInsertionPolicy_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((_DWORD *)(a2 + 144));
}
