/*
 * XREFs of ??1?$unique_ptr@UIGameConfigStore@ExecutionModel@@Uop_GameConfigStoredeleter@IsGameManager@@@std@@QEAA@XZ @ 0x1802CE830
 * Callers:
 *     ??1IsGameManager@@UEAA@XZ @ 0x18010AAE0 (--1IsGameManager@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::unique_ptr<ExecutionModel::IGameConfigStore,IsGameManager::op_GameConfigStoredeleter>::~unique_ptr<ExecutionModel::IGameConfigStore,IsGameManager::op_GameConfigStoredeleter>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return FreeGameConfigStoreClient();
  return result;
}
