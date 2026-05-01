/*
 * XREFs of ?CheckPendingExternalResourceRequestsAsync@ResourceManager@ExecutionModel@@QEAAXXZ @ 0x1800663C0
 * Callers:
 *     ?ReleaseResourcesAndCheckPendingRequests@BaseResourceSet@ExecutionModel@@IEAAXXZ @ 0x180011B20 (-ReleaseResourcesAndCheckPendingRequests@BaseResourceSet@ExecutionModel@@IEAAXXZ.c)
 *     ?SetExternalResourcePriorities@ResourceSet@ExecutionModel@@QEAAJKQEAU_ResourceInfo@2@@Z @ 0x18008E094 (-SetExternalResourcePriorities@ResourceSet@ExecutionModel@@QEAAJKQEAU_ResourceInfo@2@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ExecutionModel::ResourceManager::CheckPendingExternalResourceRequestsAsync(
        ExecutionModel::ResourceManager *this)
{
  if ( (*((_BYTE *)this + 160) & 2) == 0 )
    TpPostWork(*((_QWORD *)this + 19));
}
