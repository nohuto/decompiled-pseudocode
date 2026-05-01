/*
 * XREFs of ContextRmResourceHandle_rundown @ 0x180077C60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ContextRmResourceHandle_rundown(struct ExecutionModel::ResourceHandle__ *a1)
{
  return ExecutionModel::ResourceManager::RmReleaseResources(a1, a1);
}
