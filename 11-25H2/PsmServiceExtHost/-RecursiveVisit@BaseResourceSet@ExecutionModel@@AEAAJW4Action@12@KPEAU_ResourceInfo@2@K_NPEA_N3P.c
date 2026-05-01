/*
 * XREFs of ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x18002BC84
 * Callers:
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJXZ @ 0x180010B10 (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJXZ.c)
 *     ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo@2@W4Enum@Priority@2@KW45PendType@2@PEA_NW4_RM_ACQUIRE_PEND_POLICY@@PEAVExternalResourceSet@2@@Z @ 0x180011FA0 (-AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo.c)
 *     ?CheckPoolResources@BaseResourceSet@ExecutionModel@@AEAAJKPEBU_ResourceInfo@2@K_NPEA_N2PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x18001280C (-CheckPoolResources@BaseResourceSet@ExecutionModel@@AEAAJKPEBU_ResourceInfo@2@K_NPEA_N2PEAV-$lis.c)
 *     ?CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ @ 0x1800129D0 (-CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ.c)
 *     ?CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x18002B8E4 (-CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 *     ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x18002BC84 (-RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3P.c)
 *     ?EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KPEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@PEA_N4@Z @ 0x18005E36C (-EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KPEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_.c)
 * Callees:
 *     ?remove@?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAA_KAEBV?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@Z @ 0x180011F10 (-remove@-$list@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VBaseRe.c)
 *     ??1?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@QEAA@XZ @ 0x180012EA8 (--1-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@QEAA@XZ.c)
 *     ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x18002BC84 (-RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3P.c)
 *     ??0?$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVBaseResourceSet@ExecutionModel@@@Z @ 0x180063E64 (--0-$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVBaseResourceSet@ExecutionModel@.c)
 *     ?push_front@?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAA_N$$QEAV?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@Z @ 0x18008E460 (-push_front@-$list@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VBa.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A8010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ExecutionModel::BaseResourceSet::RecursiveVisit(
        __int64 a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        char a6,
        _BYTE *a7,
        _BYTE *a8,
        _QWORD *a9,
        __int64 a10)
{
  _BYTE *v10; // r15
  bool v11; // zf
  int v12; // r10d
  __int64 v14; // r13
  char v15; // si
  unsigned int i; // ebp
  _QWORD *v17; // rbp
  unsigned int j; // edx
  __int64 result; // rax
  int *v20; // rbx
  __int64 v21; // r12
  char v22; // al
  __int64 v23; // r9
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 *v28; // rbx
  char v29; // bl
  unsigned int v31; // [rsp+A0h] [rbp+18h]
  __int64 v32; // [rsp+A8h] [rbp+20h]

  v32 = a4;
  v31 = a3;
  v10 = a8;
  v11 = *(_DWORD *)(a1 + 1280) == 2;
  v12 = a2;
  *a8 = 0;
  if ( v11 )
  {
    v14 = a10;
    v15 = 0;
    for ( i = 0; i < a3; ++i )
    {
      v20 = (int *)(a4 + 24LL * i);
      v21 = *v20;
      if ( (unsigned int)v21 <= 0x31 )
      {
        if ( *(_QWORD *)(a1 + 24 * (v21 + 3) + 8) )
        {
          if ( v20[4] < 101 )
          {
            if ( !a6
              || (v22 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 72LL))(
                          a1,
                          a4 + 24LL * i,
                          a5),
                  v12 = a2,
                  v22) )
            {
              v23 = *(_QWORD *)(a1 + 1272) & (1LL << v21);
              v24 = *(_QWORD *)(a1 + 24 * (v21 + 3) + 8);
              v25 = v24;
              if ( v24 >= *((_QWORD *)v20 + 1) )
                v25 = *((_QWORD *)v20 + 1);
              if ( v23 )
                v25 = *((_QWORD *)v20 + 1);
              if ( v12 )
              {
                if ( v12 != 1 )
                  __fastfail(0xC0000001);
                if ( !v23 )
                  *(_QWORD *)(a1 + 24 * (v21 + 3) + 8) = v24 - v25;
                v26 = 3 * (*v20 + 3LL);
                *(_OWORD *)(v14 + 8 * v26) = *(_OWORD *)v20;
                *(_QWORD *)(v14 + 8 * v26 + 16) = *((_QWORD *)v20 + 2);
              }
              else if ( *(_QWORD *)(a1 + 64) )
              {
                v15 = 1;
              }
              *((_QWORD *)v20 + 1) -= v25;
            }
            a4 = v32;
            a3 = v31;
          }
        }
        else if ( !*((_QWORD *)v20 + 1) && v12 == 1 )
        {
          *(_OWORD *)(v14 + 24 * (v21 + 3)) = *(_OWORD *)v20;
          *(_QWORD *)(v14 + 24 * (v21 + 3) + 16) = *((_QWORD *)v20 + 2);
        }
      }
    }
    v17 = a9;
    if ( v15 && a9 )
    {
      ATL::CComPtrBase<ExecutionModel::BaseResourceSet>::CComPtrBase<ExecutionModel::BaseResourceSet>(&a8, a1);
      utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::remove(
        v17,
        &a8);
      ATL::CComPtr<ExecutionModel::BaseResourceSet>::~CComPtr<ExecutionModel::BaseResourceSet>((__int64 *)&a8);
      ATL::CComPtrBase<ExecutionModel::BaseResourceSet>::CComPtrBase<ExecutionModel::BaseResourceSet>(&a8, a1);
      v29 = utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::push_front(
              v17,
              &a8);
      ATL::CComPtr<ExecutionModel::BaseResourceSet>::~CComPtr<ExecutionModel::BaseResourceSet>((__int64 *)&a8);
      if ( !v29 )
        return 2147500037LL;
      a3 = v31;
      a4 = v32;
      v12 = a2;
    }
    for ( j = 0; ; ++j )
    {
      if ( j >= a3 )
      {
        *v10 = 1;
        *a7 = 0;
        return 0LL;
      }
      if ( *(_QWORD *)(a4 + 24LL * j + 8) )
        break;
    }
    *a7 = 1;
    v27 = a1 + 40;
    while ( v27 != *(_QWORD *)(a1 + 40) )
    {
      v28 = (__int64 *)(v27 + 8);
      LOBYTE(a8) = 0;
      result = ExecutionModel::BaseResourceSet::RecursiveVisit(
                 *(_QWORD *)(*(_QWORD *)(v27 + 8) + 16LL),
                 v12,
                 a3,
                 a4,
                 a5,
                 a6,
                 (__int64)&a8,
                 (__int64)v10,
                 (__int64)v17,
                 v14);
      if ( (int)result < 0 )
        return result;
      if ( *v10 )
        break;
      v27 = *v28;
      a3 = v31;
      LODWORD(a4) = v32;
      v12 = a2;
    }
  }
  return 0LL;
}
