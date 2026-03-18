/*
 * XREFs of ?MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1400F95B8
 * Callers:
 *     ?MapGpuVA@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1400F94DC (-MapGpuVA@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STOR.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?SysMmGetLogicalAddress@@YA_KQEAX@Z @ 0x140039AF0 (-SysMmGetLogicalAddress@@YA_KQEAX@Z.c)
 *     memset @ 0x140056340 (memset.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N6@Z @ 0x14009AF84 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x1400A8F40 (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DXGK_ADL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_NW4VIDMM_PAGESIZEUSAGE@@1@Z @ 0x1400ADD10 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DX.c)
 *     ?ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1400B970C (-ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1400B9DA4 (-OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEBU_DXGK_ADL@@PEA_KPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1400BA8FC (-CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_PAGING_QUE.c)
 *     ?CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z @ 0x1400BB46C (-CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z @ 0x1400BC21C (-ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1400BC6E0 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?VidMmiInitializeAdlForPfnArray@@YAXPEAU_DXGK_ADL@@PEB_KI_K@Z @ 0x1400F7C78 (-VidMmiInitializeAdlForPfnArray@@YAXPEAU_DXGK_ADL@@PEB_KI_K@Z.c)
 *     ?AllocateStoragePageGpuData@VIDMM_FENCE_STORAGE_PAGE@@QEAAPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@@PEAVVIDMM_GLOBAL@@@Z @ 0x14010218C (-AllocateStoragePageGpuData@VIDMM_FENCE_STORAGE_PAGE@@QEAAPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@.c)
 *     ?ReleaseStoragePageGpuData@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@@@Z @ 0x140102424 (-ReleaseStoragePageGpuData@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@.c)
 *     ?QueueLazySystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1401060E8 (-QueueLazySystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 */

__int64 __fastcall VIDMM_FENCE_STORAGE_PAGE::MapGpuVA(
        VIDMM_FENCE_STORAGE_PAGE *this,
        struct VIDMM_GLOBAL *a2,
        struct VIDMM_DEVICE *a3,
        struct VIDMM_PROCESS *a4,
        struct VIDMM_MONITORED_FENCE_STORAGE *a5,
        unsigned __int64 *a6,
        unsigned int a7,
        bool a8)
{
  unsigned int v11; // ecx
  char v12; // dl
  unsigned int v13; // edi
  __int64 result; // rax
  int v16; // eax
  __int64 v17; // rbx
  struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA *i; // rsi
  int v19; // edi
  char v20; // r12
  __int64 *j; // rcx
  struct CVirtualAddressAllocator *v22; // r10
  char v23; // r12
  __int64 Pool2; // rax
  __int64 v25; // rcx
  unsigned __int64 v26; // rcx
  __int64 v27; // rax
  unsigned __int64 v28; // r9
  struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA **v29; // rdx
  struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA *v30; // rax
  int v31; // ecx
  unsigned int v32; // edi
  unsigned int v33; // r12d
  void *v34; // rcx
  unsigned __int64 LogicalAddress; // rax
  int v36; // eax
  bool v37; // r8
  VIDMM_FENCE_STORAGE_PAGE *v38; // rcx
  VIDMM_FENCE_STORAGE_PAGE **v39; // rax
  VIDMM_FENCE_STORAGE_PAGE **v40; // rdx
  struct _KTHREAD **v41; // rax
  int v42; // [rsp+20h] [rbp-E0h]
  unsigned int v43; // [rsp+80h] [rbp-80h]
  struct CVirtualAddressAllocator *VirtualAddressAllocator; // [rsp+88h] [rbp-78h]
  struct VIDMM_MAPPED_VA_RANGE *v45; // [rsp+90h] [rbp-70h]
  unsigned __int64 v46; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v47; // [rsp+A8h] [rbp-58h] BYREF
  struct VIDMM_ALLOC *v48; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v49[18]; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v50; // [rsp+168h] [rbp+68h]

  *a6 = 0LL;
  if ( (*((_BYTE *)a2 + 40936) & 0x10) == 0 )
    return 0LL;
  v11 = *((_DWORD *)a2 + 1736);
  v12 = -1;
  if ( v11 <= 1 )
  {
    v13 = 1;
  }
  else
  {
    v13 = a7;
    if ( a7 )
    {
      if ( ((-1 << v11) & a7) != 0 )
      {
        WdLogSingleEntry0(3LL);
        result = 3221225485LL;
        WdLogGlobalForLineNumber = 882;
        return result;
      }
    }
    else
    {
      v13 = (1 << v11) - 1;
    }
  }
  v50 = 0;
  if ( a8 )
  {
    if ( _BitScanForward((unsigned int *)&v16, v13) )
      v12 = v16;
    v50 = v12;
  }
  v17 = 0LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 72, 0LL);
  *((_QWORD *)this + 10) = KeGetCurrentThread();
  for ( i = (struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA *)*((_QWORD *)this + 7);
        i != (VIDMM_FENCE_STORAGE_PAGE *)((char *)this + 56);
        i = *(struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA **)i )
  {
    if ( a2 == *((struct VIDMM_GLOBAL **)i + 6) )
      goto LABEL_18;
  }
  i = VIDMM_FENCE_STORAGE_PAGE::AllocateStoragePageGpuData(this, a2);
  if ( !i )
  {
LABEL_17:
    v19 = -1073741801;
    v20 = 0;
    goto LABEL_65;
  }
LABEL_18:
  for ( j = (__int64 *)*((_QWORD *)i + 4); j != (__int64 *)((char *)i + 32); j = (__int64 *)*j )
  {
    if ( a4 == (struct VIDMM_PROCESS *)*(j - 1) && (!a8 || *((_DWORD *)j + 5) == v13) )
    {
      ++*((_DWORD *)j + 4);
      v17 = (__int64)(j - 5);
      break;
    }
  }
  VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(a4, *(_DWORD *)(*((_QWORD *)a2 + 3) + 240LL), v50);
  v22 = VirtualAddressAllocator;
  if ( !VirtualAddressAllocator || (v23 = 1, *(_BYTE *)(*((_QWORD *)a2 + 3) + 3042LL)) )
    v23 = 0;
  if ( v17 )
  {
    v31 = *(_DWORD *)(v17 + 60);
    *(_DWORD *)(v17 + 60) = v13 | v31;
  }
  else
  {
    Pool2 = ExAllocatePool2(64LL, 64LL, 1700882774LL);
    v17 = Pool2;
    if ( !Pool2 )
    {
      _InterlockedIncrement(&dword_140081868);
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 989;
      DxgkLogInternalTriageEvent(v25, 262145LL);
      goto LABEL_17;
    }
    *(_DWORD *)(Pool2 + 56) = 1;
    *(_QWORD *)(Pool2 + 32) = a4;
    *(_QWORD *)(Pool2 + 8) = i;
    *(_DWORD *)(Pool2 + 60) = v13;
    ++*((_DWORD *)i + 18);
    if ( v23 )
    {
      v26 = 0LL;
      v27 = *((_QWORD *)a2 + 3);
      if ( a8 )
      {
        *(_BYTE *)(v17 + 25) = 1;
        v28 = *((_QWORD *)a2 + 5122);
      }
      else
      {
        v28 = *(_QWORD *)(v27 + 2952);
        v26 = *(_QWORD *)(v27 + 2960);
      }
      v46 = 0LL;
      v19 = CVirtualAddressAllocator::ReserveVirtualAddressRangeNoAccess(
              (struct _KTHREAD **)VirtualAddressAllocator,
              0x1000uLL,
              0LL,
              v28,
              v26,
              0x1000u,
              &v46);
      if ( v19 < 0 )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 1044;
        goto LABEL_58;
      }
      *(_QWORD *)v17 = v46;
      *(_BYTE *)(v17 + 24) = 1;
      VIDMM_PROCESS::OpenAdapter((struct _KTHREAD **)a4, a2);
    }
    else
    {
      *(_QWORD *)Pool2 = *(_QWORD *)(*((_QWORD *)this + 15) + 48LL) << 12;
      *(_BYTE *)(Pool2 + 24) = 0;
    }
    v29 = (struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA **)*((_QWORD *)i + 5);
    v30 = (struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA *)(v17 + 40);
    if ( *v29 != (struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA *)((char *)i + 32) )
      goto LABEL_70;
    v22 = VirtualAddressAllocator;
    *(_QWORD *)v30 = (char *)i + 32;
    *(_QWORD *)(v17 + 48) = v29;
    *v29 = v30;
    *((_QWORD *)i + 5) = v30;
    v31 = 0;
  }
  if ( !v23 || (v43 = 0, v32 = 0, (v33 = ~v31 & *(_DWORD *)(v17 + 60)) == 0) )
  {
LABEL_71:
    *a6 = *(_QWORD *)v17 + *((unsigned int *)a5 + 4);
    *((_QWORD *)this + 10) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 72, 0LL);
    KeLeaveCriticalRegion();
    return 0LL;
  }
  while ( 1 )
  {
    if ( (v33 & 1) == 0 )
      goto LABEL_54;
    v45 = (struct VIDMM_MAPPED_VA_RANGE *)CVirtualAddressAllocator::MapVirtualAddressRange(
                                            v22,
                                            i,
                                            0LL,
                                            2,
                                            0x1000uLL,
                                            *(_QWORD *)v17,
                                            0LL,
                                            0LL,
                                            0x1000u,
                                            (_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE)17LL,
                                            0LL,
                                            v32,
                                            0LL,
                                            1,
                                            0);
    if ( !v45 )
      break;
    v34 = (void *)*((_QWORD *)i + 8);
    v47 = 0LL;
    LogicalAddress = SysMmGetLogicalAddress(v34);
    VidMmiInitializeAdlForPfnArray(
      (struct _DXGK_ADL *)&v47,
      (const unsigned __int64 *)(*((_QWORD *)i + 7) + 48LL),
      *(_DWORD *)(*((_QWORD *)i + 7) + 40LL) >> 12,
      LogicalAddress);
    if ( *(_BYTE *)(v17 + 25) )
    {
      *(_QWORD *)(v17 + 16) = v45;
      if ( KeGetCurrentThread() == *(struct _KTHREAD **)(*(_QWORD *)a2 + 8LL) )
      {
        v48 = 0LL;
        v36 = CVirtualAddressAllocator::CommitVirtualAddressRange(
                (__int64)VirtualAddressAllocator,
                (__int64)v45,
                v32,
                0,
                0LL,
                (struct _DXGK_ADL *)&v47,
                0,
                &v48,
                0LL,
                0,
                0LL);
      }
      else
      {
        memset(v49, 0, 0x58uLL);
        *(_OWORD *)&v49[7] = v47;
        LODWORD(v49[0]) = 113;
        v49[6] = v45;
        v49[5] = VirtualAddressAllocator;
        HIDWORD(v49[0]) = v32;
        v36 = VIDMM_GLOBAL::QueueLazySystemCommandAndWait(a2, (struct _VIDMM_SYSTEM_COMMAND *)v49, v37);
      }
    }
    else
    {
      LOBYTE(v42) = 0;
      v36 = VIDMM_GLOBAL::CommitVirtualAddressRange(
              (struct VIDMM_WORKER_THREAD **)a2,
              VirtualAddressAllocator,
              *(struct VIDMM_PAGING_QUEUE **)(32LL * v32 + *((_QWORD *)a3 + 9)),
              v45,
              v42,
              (const struct _DXGK_ADL *)&v47,
              0LL,
              0LL);
    }
    v19 = v36;
    VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReferenceSafe(v45, (struct _KTHREAD **)VirtualAddressAllocator);
    if ( v19 < 0 )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 1162;
      goto LABEL_58;
    }
    v32 = v43;
LABEL_54:
    ++v32;
    v33 >>= 1;
    v43 = v32;
    if ( !v33 )
      goto LABEL_71;
    v22 = VirtualAddressAllocator;
  }
  WdLogSingleEntry0(3LL);
  WdLogGlobalForLineNumber = 1101;
  v19 = -1073741823;
LABEL_58:
  v20 = 0;
  if ( *(_DWORD *)(v17 + 56) != 1 )
    goto LABEL_64;
  v38 = (VIDMM_FENCE_STORAGE_PAGE *)(v17 + 40);
  v20 = 1;
  v39 = *(VIDMM_FENCE_STORAGE_PAGE ***)(v17 + 40);
  if ( !v39 )
    goto LABEL_63;
  if ( v39[1] != v38 || (v40 = *(VIDMM_FENCE_STORAGE_PAGE ***)(v17 + 48), *v40 != v38) )
LABEL_70:
    __fastfail(3u);
  *v40 = (VIDMM_FENCE_STORAGE_PAGE *)v39;
  v39[1] = (VIDMM_FENCE_STORAGE_PAGE *)v40;
LABEL_63:
  VIDMM_FENCE_STORAGE_PAGE::ReleaseStoragePageGpuData(v38, i);
LABEL_64:
  --*(_DWORD *)(v17 + 56);
LABEL_65:
  *((_QWORD *)this + 10) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 72, 0LL);
  KeLeaveCriticalRegion();
  if ( v20 )
  {
    if ( *(_BYTE *)(v17 + 24) )
    {
      v41 = (struct _KTHREAD **)VIDMM_PROCESS::GetVirtualAddressAllocator(
                                  a4,
                                  *(_DWORD *)(*((_QWORD *)a2 + 3) + 240LL),
                                  v50);
      CVirtualAddressAllocator::FreeVirtualAddressRange(v41, *(_QWORD *)v17);
      VIDMM_PROCESS::CloseAdapter((struct _KTHREAD **)a4, a2);
    }
    ExFreePoolWithTag((PVOID)v17, 0);
  }
  return (unsigned int)v19;
}
