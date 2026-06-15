/*
 * XREFs of _CAudioResourceManager::CreateStream_::_1_::dtor$10 @ 0x18016434C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioResourceManager::CreateStream_::_1_::dtor_10(__int64 a1, __int64 a2)
{
  std::unique_ptr<MODE_PARAMS>::~unique_ptr<MODE_PARAMS>((MODE_PARAMS **)(a2 + 304));
}
