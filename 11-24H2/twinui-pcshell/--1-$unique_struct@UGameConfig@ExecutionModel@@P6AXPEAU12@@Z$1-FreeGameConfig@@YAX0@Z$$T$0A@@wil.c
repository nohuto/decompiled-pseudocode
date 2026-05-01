/*
 * XREFs of ??1?$unique_struct@UGameConfig@ExecutionModel@@P6AXPEAU12@@Z$1?FreeGameConfig@@YAX0@Z$$T$0A@@wil@@QEAA@XZ @ 0x1802D0C28
 * Callers:
 *     _IsGameManager::UpdateGameConfigStoreFromKGL_::_1_::dtor$0_0 @ 0x1806D1EEB (_IsGameManager--UpdateGameConfigStoreFromKGL_--_1_--dtor$0_0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall wil::unique_struct<ExecutionModel::GameConfig,void (*)(ExecutionModel::GameConfig *),&void FreeGameConfig(ExecutionModel::GameConfig *),std::nullptr_t,0>::~unique_struct<ExecutionModel::GameConfig,void (*)(ExecutionModel::GameConfig *),&void FreeGameConfig(ExecutionModel::GameConfig *),std::nullptr_t,0>(
        LPVOID *a1)
{
  FreeGameConfig(a1);
}
