/*
 * XREFs of ?ReleaseResourcesAndCheckPendingRequests@BaseResourceSet@ExecutionModel@@IEAAXXZ @ 0x180011B20
 * Callers:
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXXZ @ 0x1800106E0 (-PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXXZ.c)
 *     ?ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ @ 0x1800573E0 (-ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ.c)
 *     ?CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAX_NKW45PendType@2@5PEAU_RM_ACTIVITY_HOST@@PEA_NPEAPEAV12@@Z @ 0x18005CDC0 (-CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@KPEAU_ResourceInfo@.c)
 *     ?ReleaseResourcesInternal@BaseResourceSet@ExecutionModel@@UEAAJXZ @ 0x18008E850 (-ReleaseResourcesInternal@BaseResourceSet@ExecutionModel@@UEAAJXZ.c)
 * Callees:
 *     ??1?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@QEAA@XZ @ 0x180012E28 (--1-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@QEAA@XZ.c)
 *     ?CheckPendingExternalResourceRequestsAsync@ResourceManager@ExecutionModel@@QEAAXXZ @ 0x1800663C0 (-CheckPendingExternalResourceRequestsAsync@ResourceManager@ExecutionModel@@QEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180073888 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?ReplenishIoCounterPool@ResourceManager@ExecutionModel@@QEAAX_K@Z @ 0x180086F44 (-ReplenishIoCounterPool@ResourceManager@ExecutionModel@@QEAAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A9010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall ExecutionModel::BaseResourceSet::ReleaseResourcesAndCheckPendingRequests(
        ExecutionModel::BaseResourceSet *this)
{
  int v1; // eax
  int v3; // edi
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rsi
  ExecutionModel::BaseResourceSet **i; // rbx
  ExecutionModel::BaseResourceSet *v10; // rdi
  ExecutionModel::BaseResourceSet *v11; // rax
  __int64 v12; // rcx
  int v13; // eax

  v1 = *((_DWORD *)this + 320);
  if ( v1 )
  {
    if ( v1 == 2 )
    {
      v3 = 0;
      v4 = 1LL;
      v5 = 0LL;
      do
      {
        v6 = *(_QWORD *)((char *)this + v5 + 80);
        if ( v6 )
        {
          if ( (v4 & *((_QWORD *)this + 159)) == 0 )
          {
            if ( v3 == 2 )
              ExecutionModel::ResourceManager::ReplenishIoCounterPool(
                *((ExecutionModel::ResourceManager **)this + 3),
                *(_QWORD *)((char *)this + v5 + 80));
            else
              *(_QWORD *)(*((_QWORD *)this + 8) + v5 + 80) += v6;
          }
          *(_QWORD *)((char *)this + v5 + 80) = 0LL;
        }
        ++v3;
        v4 = __ROL8__(v4, 1);
        v5 += 24LL;
      }
      while ( v3 < 50 );
    }
    v7 = *((_QWORD *)this + 8);
    *((_DWORD *)this + 320) = 0;
    v8 = v7 + 40;
    (*(void (__fastcall **)(ExecutionModel::BaseResourceSet *))(*(_QWORD *)this + 8LL))(this);
    for ( i = *(ExecutionModel::BaseResourceSet ***)v8;
          i != (ExecutionModel::BaseResourceSet **)v8;
          i = (ExecutionModel::BaseResourceSet **)v10 )
    {
      v10 = *i;
      if ( i[2] == this )
      {
        v11 = i[1];
        *(_QWORD *)v11 = v10;
        *((_QWORD *)v10 + 1) = v11;
        ATL::CComPtr<ExecutionModel::BaseResourceSet>::~CComPtr<ExecutionModel::BaseResourceSet>(i + 2);
        operator delete(i);
        --*(_QWORD *)(v8 + 16);
      }
    }
    (*(void (__fastcall **)(ExecutionModel::BaseResourceSet *))(*(_QWORD *)this + 16LL))(this);
    v12 = *((_QWORD *)this + 3);
    if ( *((_DWORD *)this + 4) == 1 )
    {
      v13 = *(_DWORD *)(v12 + 160);
      if ( (v13 & 3) == 0 )
      {
        *(_DWORD *)(v12 + 160) = v13 | 1;
        TpPostWork(*(_QWORD *)(v12 + 144));
      }
    }
    else
    {
      ExecutionModel::ResourceManager::CheckPendingExternalResourceRequestsAsync((ExecutionModel::ResourceManager *)v12);
    }
  }
}
