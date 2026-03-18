/*
 * XREFs of ?DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1400B820C
 * Callers:
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1400B84A0 (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x140028730 (--3@YAXPEAX@Z.c)
 *     ?GetNumPde@CVirtualAddressAllocator@@QEBAIPEAVVIDMM_PAGE_DIRECTORY@@@Z @ 0x140037870 (-GetNumPde@CVirtualAddressAllocator@@QEBAIPEAVVIDMM_PAGE_DIRECTORY@@@Z.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14004D130 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14004D3B4 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1400B84A0 (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAUVIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1400B85FC (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAUVIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DE.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1400B8AEC (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1400B9124 (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1400B9620 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 */

void __fastcall VIDMM_PAGE_DIRECTORY::DestroyPageDirectoryObjects(
        VIDMM_PAGE_DIRECTORY *this,
        PRKPROCESS **a2,
        unsigned __int64 a3)
{
  __int64 v6; // r15
  PRKPROCESS *v7; // rbp
  PRKPROCESS *v8; // rcx
  struct VIDMM_GLOBAL_ALLOC *v9; // r8
  void *v10; // rcx
  int NumPde; // eax
  unsigned __int64 v12; // rdi
  int v13; // r9d
  unsigned int v14; // r12d
  __int64 v15; // r14
  void *v16; // r9
  __int64 v17; // [rsp+30h] [rbp-88h]
  unsigned int v18; // [rsp+30h] [rbp-88h]
  int v19; // [rsp+38h] [rbp-80h]
  __int64 v20; // [rsp+40h] [rbp-78h]
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-70h] BYREF

  v6 = 0LL;
  v17 = (unsigned int)Feature_CommitPagetableInstrumentation__private_featureState;
  if ( (Feature_CommitPagetableInstrumentation__private_featureState & 0x10) == 0 )
  {
    LODWORD(v17) = Feature_CommitPagetableInstrumentation__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_CommitPagetableInstrumentation__private_descriptor,
      v17,
      3LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v17,
      3,
      (__int64)&Feature_CommitPagetableInstrumentation__private_descriptor);
  }
  WdLogSingleEntry3(4LL, this, *((_QWORD *)this + 3), *((_QWORD *)this + 2));
  WdLogGlobalForLineNumber = 7972;
  VIDMM_PAGE_DIRECTORY::EvictPageDirectory(this, (struct CVirtualAddressAllocator *)a2, a3, 1u, 1);
  v7 = a2[11];
  if ( *((_QWORD *)this + 6) )
  {
    NumPde = CVirtualAddressAllocator::GetNumPde((CVirtualAddressAllocator *)a2, this);
    v19 = NumPde;
    v12 = a3;
    v13 = 2 * NumPde;
    v14 = 0;
    if ( (*(_DWORD *)this & 0x1020) != 0x1020 )
      v13 = NumPde;
    v18 = v13;
    v20 = *(_QWORD *)(*((_QWORD *)v7[5029] + (((unsigned __int64)*(unsigned int *)this >> 7) & 0x1F))
                    + 48LL * (*(_DWORD *)this & 7)
                    + 168);
    if ( v13 )
    {
      v15 = 0LL;
      do
      {
        v16 = *(void **)(v15 + *((_QWORD *)this + 6));
        if ( v16 )
        {
          if ( (*(_DWORD *)this & 0x20) != 0 )
          {
            if ( (*(_DWORD *)(v6 + *((_QWORD *)this + 5)) & 0x400LL) != 0 )
              ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)(v7 + 5032), v16);
            else
              VIDMM_PAGE_TABLE::DestroyPageTable((VIDMM_PAGE_TABLE *)v16, (struct CVirtualAddressAllocator *)a2, v12);
          }
          else
          {
            VIDMM_PAGE_DIRECTORY::DestroyPageDirectory(
              (VIDMM_PAGE_DIRECTORY *)v16,
              (struct CVirtualAddressAllocator *)a2,
              v12);
          }
          *(_QWORD *)(v15 + *((_QWORD *)this + 6)) = 0LL;
        }
        v12 += v20;
        if ( v14 == v19 )
          v12 = a3;
        ++v14;
        v6 += 16LL;
        v15 += 8LL;
      }
      while ( v14 < v18 );
    }
    operator delete(*((void **)this + 6));
    *((_QWORD *)this + 6) = 0LL;
  }
  if ( *((_QWORD *)this + 3) )
  {
    v8 = a2[12];
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(*v8, &ApcState);
    VIDMM_GLOBAL::CloseOneAllocation(
      (VIDMM_GLOBAL *)v7,
      *((struct VIDMM_ALLOC **)this + 3),
      0LL,
      0,
      (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)1,
      0LL);
    KeUnstackDetachProcess(&ApcState);
    *((_QWORD *)this + 3) = 0LL;
  }
  v9 = (struct VIDMM_GLOBAL_ALLOC *)*((_QWORD *)this + 2);
  if ( v9 )
  {
    VIDMM_GLOBAL::DestroyOneAllocation((VIDMM_GLOBAL *)v7, 0LL, v9, 0);
    *((_QWORD *)this + 2) = 0LL;
  }
  v10 = (void *)*((_QWORD *)this + 5);
  if ( v10 )
  {
    operator delete(v10);
    *((_QWORD *)this + 5) = 0LL;
  }
}
