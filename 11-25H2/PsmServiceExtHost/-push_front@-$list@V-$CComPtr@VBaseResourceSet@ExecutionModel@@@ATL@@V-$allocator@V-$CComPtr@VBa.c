/*
 * XREFs of ?push_front@?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAA_N$$QEAV?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@Z @ 0x18008E460
 * Callers:
 *     ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x18002BC84 (-RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3P.c)
 * Callees:
 *     ??0?$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVBaseResourceSet@ExecutionModel@@@Z @ 0x180063E64 (--0-$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVBaseResourceSet@ExecutionModel@.c)
 *     ??$_NewNode@U?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@?$_ContainerBase@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@IEAA?AU?$_UninitializedAllocation@V?$allocator@U?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@1@XZ @ 0x180065544 (--$_NewNode@U-$_DlistNode@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@-$_ContainerB.c)
 *     ??1?$_UninitializedAllocation@V?$allocator@U?$_DlistNode@UExternalResourceRequestMessage@ExternalResourceSet@ExecutionModel@@@utl@@@utl@@@utl@@QEAA@XZ @ 0x180068A68 (--1-$_UninitializedAllocation@V-$allocator@U-$_DlistNode@UExternalResourceRequestMessage@Externa.c)
 *     ??$_NewNodeCommit@U?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@?$_ContainerBase@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@IEAAPEAU?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@1@AEAU?$_UninitializedAllocation@V?$allocator@U?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@1@_N@Z @ 0x180071E7C (--$_NewNodeCommit@U-$_DlistNode@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@-$_Cont.c)
 */

bool __fastcall utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::push_front(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v2; // rdi
  __int64 v5; // rcx
  char v6; // r8
  _QWORD *v7; // rax
  _QWORD *v8; // rbx
  _QWORD *v9; // rcx
  _QWORD *v11; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  utl::_ContainerBase<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::_NewNode<utl::_DlistNode<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>(
    (__int64)a1,
    &v11);
  if ( v11 )
  {
    ATL::CComPtrBase<ExecutionModel::BaseResourceSet>::CComPtrBase<ExecutionModel::BaseResourceSet>(v11 + 2, *a2);
    v6 = 1;
  }
  else
  {
    v6 = 0;
  }
  v7 = (_QWORD *)utl::_ContainerBase<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::_NewNodeCommit<utl::_DlistNode<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>(
                   v5,
                   (__int64 *)&v11,
                   v6);
  v8 = 0LL;
  if ( v7 )
  {
    v9 = *(_QWORD **)(v2 + 8);
    v8 = v7;
    v7[1] = v9;
    *v7 = v2;
    *v9 = v7;
    *(_QWORD *)(v2 + 8) = v7;
    ++a1[2];
  }
  utl::_UninitializedAllocation<utl::allocator<utl::_DlistNode<ExecutionModel::ExternalResourceSet::ExternalResourceRequestMessage>>>::~_UninitializedAllocation<utl::allocator<utl::_DlistNode<ExecutionModel::ExternalResourceSet::ExternalResourceRequestMessage>>>((void **)&v11);
  return v8 != 0LL;
}
