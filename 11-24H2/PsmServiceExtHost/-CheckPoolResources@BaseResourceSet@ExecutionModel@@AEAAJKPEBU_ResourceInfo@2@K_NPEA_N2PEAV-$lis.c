/*
 * XREFs of ?CheckPoolResources@BaseResourceSet@ExecutionModel@@AEAAJKPEBU_ResourceInfo@2@K_NPEA_N2PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x18001278C
 * Callers:
 *     ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo@2@W4Enum@Priority@2@KW45PendType@2@PEA_NW4_RM_ACQUIRE_PEND_POLICY@@PEAVExternalResourceSet@2@@Z @ 0x180011F20 (-AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo.c)
 *     ?CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJKPEAU_ResourceInfo@2@KW4Enum@Priority@2@W44PendType@2@PEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x18006B53C (-CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJKPEAU_ResourceInfo@2@KW4Enum@Pri.c)
 * Callees:
 *     ??0_ResourceInfo@ExecutionModel@@QEAA@XZ @ 0x180012E00 (--0_ResourceInfo@ExecutionModel@@QEAA@XZ.c)
 *     ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x18002BC04 (-RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3P.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180073888 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x180073894 (--_U@YAPEAX_K@Z.c)
 */

__int64 __fastcall ExecutionModel::BaseResourceSet::CheckPoolResources(
        int a1,
        unsigned int a2,
        __int64 a3,
        int a4,
        char a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // r12
  __int64 v9; // r15
  _QWORD *v12; // rax
  unsigned int v13; // edi
  _QWORD *v14; // rsi
  __int64 v15; // rbx
  ExecutionModel::_ResourceInfo *v16; // rbp
  _QWORD *v17; // rax
  __int64 v18; // r14
  __int64 v19; // xmm0_8
  int v20; // ebx

  v8 = a2;
  v9 = a2;
  v12 = operator new[](saturated_mul(a2, 0x18uLL));
  v13 = 0;
  v14 = v12;
  if ( v12 )
  {
    v15 = (unsigned int)v8;
    v16 = (ExecutionModel::_ResourceInfo *)v12;
    if ( v8 )
    {
      do
      {
        ExecutionModel::_ResourceInfo::_ResourceInfo(v16);
        v16 = (ExecutionModel::_ResourceInfo *)((char *)v16 + 24);
        --v15;
      }
      while ( v15 );
    }
    if ( (_DWORD)v8 )
    {
      v17 = v14;
      v18 = a3 - (_QWORD)v14;
      do
      {
        v19 = *(_QWORD *)((char *)v17 + v18 + 16);
        *(_OWORD *)v17 = *(_OWORD *)((char *)v17 + v18);
        v17[2] = v19;
        v17 += 3;
        --v9;
      }
      while ( v9 );
    }
    v20 = ExecutionModel::BaseResourceSet::RecursiveVisit(a1, 0, v8, (_DWORD)v14, a4, a5, a6, a7, a8, 0LL);
    operator delete(v14);
    if ( v20 < 0 )
      return (unsigned int)v20;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v13;
}
