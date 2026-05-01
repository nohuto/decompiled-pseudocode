/*
 * XREFs of ?CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJKPEAU_ResourceInfo@2@KW4Enum@Priority@2@W44PendType@2@PEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x18006B75C
 * Callers:
 *     ?CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ @ 0x1800129D0 (-CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ.c)
 *     ?AvailabilityCheck@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@KPEAU_RM_HAM_ACTIVITY_HOST@@PEA_N@Z @ 0x18008DCE4 (-AvailabilityCheck@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResource.c)
 * Callees:
 *     ?CheckPoolResources@BaseResourceSet@ExecutionModel@@AEAAJKPEBU_ResourceInfo@2@K_NPEA_N2PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x18001280C (-CheckPoolResources@BaseResourceSet@ExecutionModel@@AEAAJKPEBU_ResourceInfo@2@K_NPEA_N2PEAV-$lis.c)
 *     ?HigherPriorityPending@BaseResourceSet@ExecutionModel@@AEAA_NKPEBU_ResourceInfo@2@W4Enum@Priority@2@@Z @ 0x18005BBE0 (-HigherPriorityPending@BaseResourceSet@ExecutionModel@@AEAA_NKPEBU_ResourceInfo@2@W4Enum@Priorit.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A8010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ExecutionModel::BaseResourceSet::CheckResourceAvailability(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        _BYTE *a7,
        _BYTE *a8,
        __int64 a9)
{
  __int64 result; // rax
  _BYTE *v14; // rax
  char v15; // bl
  char v16; // [rsp+40h] [rbp-18h] BYREF
  _BYTE v17[23]; // [rsp+41h] [rbp-17h] BYREF

  v17[0] = 0;
  v16 = 0;
  result = ExecutionModel::BaseResourceSet::CheckPoolResources(a1, a2, a3, a4, 1, (__int64)v17, (__int64)&v16, a9);
  if ( (int)result >= 0 )
  {
    if ( v16
      || a6 == 1
      && (ExecutionModel::BaseResourceSet::CheckPoolResources(a1, a2, a3, a4, 0, (__int64)v17, (__int64)&v16, 0LL), v16) )
    {
      v15 = v17[0];
      if ( !v17[0]
        && ((*(int (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 40LL))(a1, a2, a3) < 0
         || ExecutionModel::BaseResourceSet::HigherPriorityPending(a1, a2, a3, a5)) )
      {
        v15 = 1;
      }
      *a8 = 1;
      v14 = a7;
      if ( v15 )
      {
        *a7 = 1;
        return 0LL;
      }
    }
    else
    {
      *a8 = 0;
      v14 = a7;
    }
    *v14 = 0;
    return 0LL;
  }
  return result;
}
