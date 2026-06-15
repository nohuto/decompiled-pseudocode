/*
 * XREFs of _CAudioResourceManager::CreateStream_::_1_::dtor$30 @ 0x18016D87A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioResourceManager::CreateStream_::_1_::dtor_30(__int64 a1, __int64 a2)
{
  std::unique_ptr<SaDeviceParams>::~unique_ptr<SaDeviceParams>((SaDeviceParams **)(a2 + 440));
}
