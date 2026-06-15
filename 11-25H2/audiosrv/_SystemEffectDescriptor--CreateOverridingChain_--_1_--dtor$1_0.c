/*
 * XREFs of _SystemEffectDescriptor::CreateOverridingChain_::_1_::dtor$1_0 @ 0x1801613C7
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SystemEffectDescriptor::CreateOverridingChain_::_1_::dtor_1_0(__int64 a1, __int64 a2)
{
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((_DWORD *)(a2 + 72));
}
