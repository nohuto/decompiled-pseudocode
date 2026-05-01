/*
 * XREFs of ?InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x1800868C4
 * Callers:
 *     ?CreateResourceManager@ExecutionModel@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAVModernResourceEnforcer@@PEAPEAVResourceManager@1@@Z @ 0x1800864F8 (-CreateResourceManager@ExecutionModel@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAVModernResourceEnforcer@@P.c)
 * Callees:
 *     ??0BaseResourceSet@ExecutionModel@@QEAA@XZ @ 0x180012938 (--0BaseResourceSet@ExecutionModel@@QEAA@XZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180060124 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180073978 (--2@YAPEAX_K@Z.c)
 *     ?RmpGetIoPoolSize@@YAKPEA_K@Z @ 0x180085C44 (-RmpGetIoPoolSize@@YAKPEA_K@Z.c)
 *     ?Attach@?$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@QEAAXPEAVBaseResourceSet@ExecutionModel@@@Z @ 0x1800863E0 (-Attach@-$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@QEAAXPEAVBaseResourceSet@ExecutionM.c)
 *     ?InitResourcesFromRegisteredDlls@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x180086668 (-InitResourcesFromRegisteredDlls@ResourceManager@ExecutionModel@@QEAAJXZ.c)
 *     ?SetMainPoolSizes@ResourceManager@ExecutionModel@@QEAAX_K@Z @ 0x180086E94 (-SetMainPoolSizes@ResourceManager@ExecutionModel@@QEAAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A8010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::InitializePools(struct IUnknown **this)
{
  __int64 *v1; // rdi
  ExecutionModel::BaseResourceSet *v3; // rax
  __int64 result; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0LL;
  v1 = (__int64 *)(this + 4);
  v3 = (ExecutionModel::BaseResourceSet *)operator new(0x510uLL);
  if ( v3 )
    v3 = ExecutionModel::BaseResourceSet::BaseResourceSet(v3);
  ATL::CComPtrBase<ExecutionModel::BaseResourceSet>::Attach(v1, (__int64)v3);
  if ( !*v1 )
    return 2147942414LL;
  result = RmpGetIoPoolSize(&v6);
  if ( (_DWORD)result )
  {
    if ( (int)result > 0 )
      return (unsigned __int16)result | 0x80070000;
  }
  else
  {
    v5 = v6;
    *(_DWORD *)(*v1 + 1280) = 2;
    *(_DWORD *)(*v1 + 16) = 1;
    *(_QWORD *)(*v1 + 24) = this;
    ExecutionModel::ResourceManager::SetMainPoolSizes((ExecutionModel::ResourceManager *)this, v5);
    if ( this[3] )
      ATL::AtlComPtrAssign(this + 3, 0LL);
    result = ExecutionModel::ResourceManager::InitResourcesFromRegisteredDlls((ExecutionModel::ResourceManager *)this);
    if ( (int)result >= 0 )
    {
      ((void (__fastcall *)(struct IUnknown **, __int64, __int64))(*this)[3].lpVtbl)(this, 27LL, 0xFFFFFFFFLL);
      return 0LL;
    }
  }
  return result;
}
