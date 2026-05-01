/*
 * XREFs of ?HigherPriorityPending@BaseResourceSet@ExecutionModel@@AEAA_NKPEBU_ResourceInfo@2@W4Enum@Priority@2@@Z @ 0x18005BB60
 * Callers:
 *     ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo@2@W4Enum@Priority@2@KW45PendType@2@PEA_NW4_RM_ACQUIRE_PEND_POLICY@@PEAVExternalResourceSet@2@@Z @ 0x180011F20 (-AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo.c)
 *     ?CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJKPEAU_ResourceInfo@2@KW4Enum@Priority@2@W44PendType@2@PEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x18006B53C (-CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJKPEAU_ResourceInfo@2@KW4Enum@Pri.c)
 * Callees:
 *     <none>
 */

char __fastcall ExecutionModel::BaseResourceSet::HigherPriorityPending(__int64 a1, unsigned int a2, __int64 a3, int a4)
{
  _QWORD *v4; // rax
  _QWORD *v5; // r10
  __int64 v9; // r9
  __int64 i; // r8
  unsigned __int64 v12; // r11
  __int64 v13; // rcx

  v4 = *(_QWORD **)(a1 + 40);
  v5 = (_QWORD *)(a1 + 40);
  while ( v4 != v5 )
  {
    v9 = v4[2];
    if ( *(_DWORD *)(v9 + 1280) == 1 && *(_DWORD *)(v9 + 1288) < a4 )
    {
      for ( i = 0LL; (unsigned int)i < a2; i = (unsigned int)(i + 1) )
      {
        if ( *(_QWORD *)(a3 + 24 * i + 8) )
        {
          v12 = *(unsigned int *)(a3 + 24 * i);
          if ( *(_QWORD *)(v9 + 24LL * (int)v12 + 80) )
          {
            v13 = *(_QWORD *)(a1 + 1272);
            if ( !_bittest64(&v13, v12) )
              return 1;
          }
        }
      }
    }
    v4 = (_QWORD *)*v4;
  }
  return 0;
}
