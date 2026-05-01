/*
 * XREFs of ?CreateResourceManager@ExecutionModel@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAVModernResourceEnforcer@@PEAPEAVResourceManager@1@@Z @ 0x1800864F8
 * Callers:
 *     ?RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800852F8 (-RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180060124 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180073978 (--2@YAPEAX_K@Z.c)
 *     ??0ResourceManager@ExecutionModel@@QEAA@XZ @ 0x18008623C (--0ResourceManager@ExecutionModel@@QEAA@XZ.c)
 *     ?CreatePendingRequestWorkItems@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x18008641C (-CreatePendingRequestWorkItems@ResourceManager@ExecutionModel@@QEAAJXZ.c)
 *     ?InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x1800868C4 (-InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A8010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ExecutionModel::CreateResourceManager(
        struct IUnknownVtbl *this,
        struct IUnknown **a2,
        struct ModernResourceEnforcer *a3,
        struct ExecutionModel::ResourceManager **a4)
{
  ExecutionModel::ResourceManager *v7; // rax
  unsigned int v8; // ebx
  struct IUnknown *v9; // rax
  ExecutionModel::ResourceManager *v10; // rdi
  int PendingRequestWorkItems; // esi

  v7 = (ExecutionModel::ResourceManager *)operator new(0xD0uLL);
  v8 = 0;
  if ( v7
    && (v9 = (struct IUnknown *)ExecutionModel::ResourceManager::ResourceManager(v7),
        (v10 = (ExecutionModel::ResourceManager *)v9) != 0LL) )
  {
    v9[16].lpVtbl = this;
    if ( a2 && a2[36] != &v9[1] )
      ATL::AtlComPtrAssign(a2 + 36, v9 + 1);
    PendingRequestWorkItems = ExecutionModel::ResourceManager::InitializePools(v10);
    if ( PendingRequestWorkItems < 0
      || (PendingRequestWorkItems = ExecutionModel::ResourceManager::CreatePendingRequestWorkItems(v10),
          PendingRequestWorkItems < 0) )
    {
      (*(void (__fastcall **)(ExecutionModel::ResourceManager *))(*(_QWORD *)v10 + 16LL))(v10);
      return (unsigned int)PendingRequestWorkItems;
    }
    else
    {
      *(_QWORD *)a3 = v10;
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v8;
}
