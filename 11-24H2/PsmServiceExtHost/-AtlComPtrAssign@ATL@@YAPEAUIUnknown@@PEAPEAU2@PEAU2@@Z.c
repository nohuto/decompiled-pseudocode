/*
 * XREFs of ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800600A4
 * Callers:
 *     ?CreateResourceManager@ExecutionModel@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAVModernResourceEnforcer@@PEAPEAVResourceManager@1@@Z @ 0x180086958 (-CreateResourceManager@ExecutionModel@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAVModernResourceEnforcer@@P.c)
 *     ?InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x180086D24 (-InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ.c)
 *     ?SetMainPoolSizes@ResourceManager@ExecutionModel@@QEAAX_K@Z @ 0x1800872F4 (-SetMainPoolSizes@ResourceManager@ExecutionModel@@QEAAX_K@Z.c)
 *     ?RmpPolicyRevokeResourceSetsForAcquire@@YAXPEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@@Z @ 0x18008DF38 (-RmpPolicyRevokeResourceSetsForAcquire@@YAXPEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A9010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct IUnknown *__fastcall ATL::AtlComPtrAssign(struct IUnknown **a1, struct IUnknown *a2)
{
  if ( !a1 )
    return 0LL;
  if ( a2 )
    ((void (__fastcall *)(struct IUnknown *))a2->lpVtbl->AddRef)(a2);
  if ( *a1 )
    ((void (__fastcall *)(_QWORD))(*a1)->lpVtbl->Release)(*a1);
  *a1 = a2;
  return a2;
}
