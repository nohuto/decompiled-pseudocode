/*
 * XREFs of ?QueryInterface@ResourceManager@ExecutionModel@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180086E00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ExecutionModel::ResourceManager::QueryInterface(__int64 a1)
{
  return ExecutionModel::BaseResourceSet::OnAccessLost((ExecutionModel::BaseResourceSet *)(a1 - 8));
}
