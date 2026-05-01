/*
 * XREFs of ??0?$list@UExternalResourceRequestMessage@ExternalResourceSet@ExecutionModel@@V?$allocator@UExternalResourceRequestMessage@ExternalResourceSet@ExecutionModel@@@utl@@@utl@@QEAA@XZ @ 0x180012E4C
 * Callers:
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJXZ @ 0x180010A90 (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJXZ.c)
 *     ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo@2@W4Enum@Priority@2@KW45PendType@2@PEA_NW4_RM_ACQUIRE_PEND_POLICY@@PEAVExternalResourceSet@2@@Z @ 0x180011F20 (-AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo.c)
 *     ?ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z @ 0x180012350 (-ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z.c)
 *     ??0BaseResourceSet@ExecutionModel@@QEAA@XZ @ 0x1800128B8 (--0BaseResourceSet@ExecutionModel@@QEAA@XZ.c)
 *     ?CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ @ 0x180012950 (-CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ.c)
 *     ??0ExternalResourceSet@ExecutionModel@@AEAA@XZ @ 0x18005CFF8 (--0ExternalResourceSet@ExecutionModel@@AEAA@XZ.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall utl::list<ExecutionModel::ExternalResourceSet::ExternalResourceRequestMessage,utl::allocator<ExecutionModel::ExternalResourceSet::ExternalResourceRequestMessage>>::list<ExecutionModel::ExternalResourceSet::ExternalResourceRequestMessage,utl::allocator<ExecutionModel::ExternalResourceSet::ExternalResourceRequestMessage>>(
        _QWORD *a1)
{
  _QWORD *result; // rax

  *a1 = a1;
  result = a1;
  a1[1] = a1;
  a1[2] = 0LL;
  return result;
}
