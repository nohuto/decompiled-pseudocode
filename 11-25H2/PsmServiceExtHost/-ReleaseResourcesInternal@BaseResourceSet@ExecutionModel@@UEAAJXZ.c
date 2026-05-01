/*
 * XREFs of ?ReleaseResourcesInternal@BaseResourceSet@ExecutionModel@@UEAAJXZ @ 0x18008E3F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResourcesAndCheckPendingRequests@BaseResourceSet@ExecutionModel@@IEAAXXZ @ 0x180011BA0 (-ReleaseResourcesAndCheckPendingRequests@BaseResourceSet@ExecutionModel@@IEAAXXZ.c)
 */

__int64 __fastcall ExecutionModel::BaseResourceSet::ReleaseResourcesInternal(ExecutionModel::BaseResourceSet *this)
{
  ExecutionModel::BaseResourceSet::ReleaseResourcesAndCheckPendingRequests(this);
  return 0LL;
}
