/*
 * XREFs of _EffectPack::PublishProcessingModeTelemetry_::_1_::dtor$0 @ 0x180171957
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall EffectPack::PublishProcessingModeTelemetry_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((_DWORD *)(a2 + 120));
}
