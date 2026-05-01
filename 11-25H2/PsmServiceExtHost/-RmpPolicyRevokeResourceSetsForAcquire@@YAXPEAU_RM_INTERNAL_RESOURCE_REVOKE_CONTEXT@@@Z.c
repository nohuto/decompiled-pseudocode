/*
 * XREFs of ?RmpPolicyRevokeResourceSetsForAcquire@@YAXPEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@@Z @ 0x18008DAD8
 * Callers:
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJXZ @ 0x180010B10 (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJXZ.c)
 *     ?ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z @ 0x1800123D0 (-ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z.c)
 * Callees:
 *     ??1?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@QEAA@XZ @ 0x180012EA8 (--1-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@QEAA@XZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180060124 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?RmpPolicyReclaimHostList@@YAXPEAU_RM_POLICY_WORK_BUFFER@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x18006CA20 (-RmpPolicyReclaimHostList@@YAXPEAU_RM_POLICY_WORK_BUFFER@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REAS.c)
 *     ?RequestStop@HAM_ACTIVITY_RM_CONTEXT@@QEAAX_K@Z @ 0x180083C20 (-RequestStop@HAM_ACTIVITY_RM_CONTEXT@@QEAAX_K@Z.c)
 */

void __fastcall RmpPolicyRevokeResourceSetsForAcquire(struct _RM_INTERNAL_RESOURCE_REVOKE_CONTEXT *a1)
{
  _QWORD *v1; // r14
  _QWORD *v3; // rbx
  struct IUnknown *v4; // rdi
  struct IUnknown *v5; // rax
  struct IUnknown *v6; // rdx
  __int64 v7; // rcx
  struct IUnknown *v8; // [rsp+30h] [rbp+8h] BYREF

  v1 = (_QWORD *)*((_QWORD *)a1 + 1);
  v3 = (_QWORD *)*v1;
  if ( (_QWORD *)*v1 != v1 )
  {
    v4 = 0LL;
    v8 = 0LL;
    v5 = 0LL;
    while ( v3 != v1 )
    {
      v6 = (struct IUnknown *)v3[2];
      if ( v5 != v6 )
      {
        ATL::AtlComPtrAssign(&v8, v6);
        v4 = v8;
      }
      HAM_ACTIVITY_RM_CONTEXT::RequestStop((HAM_ACTIVITY_RM_CONTEXT *)v4[214].lpVtbl, (__int64)v4[215].lpVtbl);
      v3 = (_QWORD *)*v3;
      v5 = v4;
    }
    ATL::CComPtr<ExecutionModel::BaseResourceSet>::~CComPtr<ExecutionModel::BaseResourceSet>((__int64 *)&v8);
  }
  v7 = *((_QWORD *)a1 + 3);
  if ( *(_DWORD *)(v7 + 40) )
    RmpPolicyReclaimHostList(v7, *((_DWORD *)a1 + 9), *(_DWORD *)(*(_QWORD *)a1 + 32LL), 0LL);
}
