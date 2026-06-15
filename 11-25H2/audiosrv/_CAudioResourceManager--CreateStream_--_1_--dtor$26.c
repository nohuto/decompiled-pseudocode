/*
 * XREFs of _CAudioResourceManager::CreateStream_::_1_::dtor$26 @ 0x180164436
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioResourceManager::CreateStream_::_1_::dtor_26(__int64 a1, __int64 a2)
{
  std::unique_ptr<SaDeviceParams>::~unique_ptr<SaDeviceParams>((SaDeviceParams **)(a2 + 368));
}
