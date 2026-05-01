/*
 * XREFs of _IsGameManager::UpdateGameConfigStoreFromKGL_::_1_::dtor$0 @ 0x1803E1021
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall IsGameManager::UpdateGameConfigStoreFromKGL_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  wil::unique_struct<ExecutionModel::GameConfig,void (*)(ExecutionModel::GameConfig *),&void FreeGameConfig(ExecutionModel::GameConfig *),std::nullptr_t,0>::~unique_struct<ExecutionModel::GameConfig,void (*)(ExecutionModel::GameConfig *),&void FreeGameConfig(ExecutionModel::GameConfig *),std::nullptr_t,0>((struct ExecutionModel::GameConfig *)(a2 + 96));
}
