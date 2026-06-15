/*
 * XREFs of _CAudioResourceManager::CreateStream_::_1_::dtor$23 @ 0x18016D80E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioResourceManager::CreateStream_::_1_::dtor_23(__int64 a1, __int64 a2)
{
  wil::details::out_param_t<std::unique_ptr<SaDeviceParams>>::~out_param_t<std::unique_ptr<SaDeviceParams>>(a2 + 936);
}
