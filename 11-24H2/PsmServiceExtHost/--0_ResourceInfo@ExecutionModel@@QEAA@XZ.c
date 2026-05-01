/*
 * XREFs of ??0_ResourceInfo@ExecutionModel@@QEAA@XZ @ 0x180012E00
 * Callers:
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJXZ @ 0x180010A90 (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJXZ.c)
 *     ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x180011730 (--0_ResourceSetInfo@ExecutionModel@@QEAA@XZ.c)
 *     ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo@2@W4Enum@Priority@2@KW45PendType@2@PEA_NW4_RM_ACQUIRE_PEND_POLICY@@PEAVExternalResourceSet@2@@Z @ 0x180011F20 (-AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo.c)
 *     ?CheckPoolResources@BaseResourceSet@ExecutionModel@@AEAAJKPEBU_ResourceInfo@2@K_NPEA_N2PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x18001278C (-CheckPoolResources@BaseResourceSet@ExecutionModel@@AEAAJKPEBU_ResourceInfo@2@K_NPEA_N2PEAV-$lis.c)
 *     ??0BaseResourceSet@ExecutionModel@@QEAA@XZ @ 0x1800128B8 (--0BaseResourceSet@ExecutionModel@@QEAA@XZ.c)
 *     ?CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ @ 0x180012950 (-CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ.c)
 *     ?EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KPEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@PEA_N4@Z @ 0x18005E2EC (-EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KPEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_.c)
 * Callees:
 *     <none>
 */

ExecutionModel::_ResourceInfo *__fastcall ExecutionModel::_ResourceInfo::_ResourceInfo(
        ExecutionModel::_ResourceInfo *this)
{
  ExecutionModel::_ResourceInfo *result; // rax

  *(_DWORD *)this = -1;
  result = this;
  *((_QWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 4) = 101;
  *((_WORD *)this + 10) = 0;
  return result;
}
