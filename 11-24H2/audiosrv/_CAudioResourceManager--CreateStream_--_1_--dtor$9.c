/*
 * XREFs of _CAudioResourceManager::CreateStream_::_1_::dtor$9 @ 0x18016D76C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioResourceManager::CreateStream_::_1_::dtor_9(__int64 a1, __int64 a2)
{
  std::unique_ptr<StreamGroupParams>::~unique_ptr<StreamGroupParams>((StreamGroupParams **)(a2 + 336));
}
