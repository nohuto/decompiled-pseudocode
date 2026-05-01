/*
 * XREFs of ?clear@?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAAXXZ @ 0x180011EBC
 * Callers:
 *     ?RmpPolicyInitializeRevokeContext@@YAXPEAU_RM_PARTITION@@PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAVResourceSet@ExecutionModel@@PEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@@Z @ 0x180010384 (-RmpPolicyInitializeRevokeContext@@YAXPEAU_RM_PARTITION@@PEAV-$list@V-$CComPtr@VBaseResourceSet@.c)
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJXZ @ 0x180010B10 (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJXZ.c)
 *     ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo@2@W4Enum@Priority@2@KW45PendType@2@PEA_NW4_RM_ACQUIRE_PEND_POLICY@@PEAVExternalResourceSet@2@@Z @ 0x180011FA0 (-AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo.c)
 *     ?CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ @ 0x1800129D0 (-CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ.c)
 *     ?EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KPEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@PEA_N4@Z @ 0x18005E36C (-EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KPEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_.c)
 *     ??1ResourceSet@ExecutionModel@@UEAA@XZ @ 0x180060978 (--1ResourceSet@ExecutionModel@@UEAA@XZ.c)
 *     ??1ExternalResourceSet@ExecutionModel@@EEAA@XZ @ 0x180069C78 (--1ExternalResourceSet@ExecutionModel@@EEAA@XZ.c)
 *     ??_EBaseResourceSet@ExecutionModel@@UEAAPEAXI@Z @ 0x18008E340 (--_EBaseResourceSet@ExecutionModel@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@QEAA@XZ @ 0x180012EA8 (--1-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800739B8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::clear(
        __int64 a1)
{
  __int64 *v2; // rdi
  __int64 *v3; // rdx
  __int64 v4; // rax

  while ( 1 )
  {
    v2 = *(__int64 **)a1;
    if ( *(_QWORD *)a1 == a1 )
      break;
    v3 = (__int64 *)v2[1];
    v4 = *v2;
    *v3 = *v2;
    *(_QWORD *)(v4 + 8) = v3;
    ATL::CComPtr<ExecutionModel::BaseResourceSet>::~CComPtr<ExecutionModel::BaseResourceSet>(v2 + 2);
    operator delete(v2);
  }
  *(_QWORD *)(a1 + 16) = 0LL;
}
