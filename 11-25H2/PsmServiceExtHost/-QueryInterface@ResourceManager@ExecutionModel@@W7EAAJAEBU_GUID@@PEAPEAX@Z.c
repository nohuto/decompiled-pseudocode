/*
 * XREFs of ?QueryInterface@ResourceManager@ExecutionModel@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800869A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ExecutionModel::ResourceManager::QueryInterface(__int64 a1)
{
  return ExecutionModel::BaseResourceSet::OnAccessLost((ExecutionModel::BaseResourceSet *)(a1 - 8));
}
