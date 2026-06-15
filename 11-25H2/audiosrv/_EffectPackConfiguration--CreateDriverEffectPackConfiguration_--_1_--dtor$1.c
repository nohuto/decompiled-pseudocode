/*
 * XREFs of _EffectPackConfiguration::CreateDriverEffectPackConfiguration_::_1_::dtor$1 @ 0x180162168
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall EffectPackConfiguration::CreateDriverEffectPackConfiguration_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((_DWORD *)(a2 + 56));
}
