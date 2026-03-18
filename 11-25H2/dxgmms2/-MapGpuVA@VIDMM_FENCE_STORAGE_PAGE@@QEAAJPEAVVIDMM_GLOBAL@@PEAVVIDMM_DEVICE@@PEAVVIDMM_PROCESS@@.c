/*
 * XREFs of ?MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1400FA518
 * Callers:
 *     ?MapGpuVA@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1400FA43C (-MapGpuVA@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STOR.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?SysMmGetLogicalAddress@@YA_KQEAX@Z @ 0x14003C090 (-SysMmGetLogicalAddress@@YA_KQEAX@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14004CCF0 (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     memset @ 0x140056780 (memset.c)
 *     ?ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1400B1374 (-ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1400B1DBC (-OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEBU_DXGK_ADL@@PEA_KPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1400B2918 (-CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_PAGING_QUE.c)
 *     ?CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z @ 0x1400B348C (-CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z @ 0x1400B4278 (-ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1400B4820 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N@Z @ 0x1400BDBC4 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DXGK_ADL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_NW4VIDMM_PAGESIZEUSAGE@@1@Z @ 0x1400BE2C0 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DX.c)
 *     ?VidMmiInitializeAdlForPfnArray@@YAXPEAU_DXGK_ADL@@PEB_KI_K@Z @ 0x1400BFF30 (-VidMmiInitializeAdlForPfnArray@@YAXPEAU_DXGK_ADL@@PEB_KI_K@Z.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x14010188C (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 *     ?ReleaseStoragePageGpuData@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@@@Z @ 0x1401032F4 (-ReleaseStoragePageGpuData@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@.c)
 *     ?AllocateStoragePageGpuData@VIDMM_FENCE_STORAGE_PAGE@@QEAAPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@@PEAVVIDMM_GLOBAL@@@Z @ 0x140103454 (-AllocateStoragePageGpuData@VIDMM_FENCE_STORAGE_PAGE@@QEAAPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@.c)
 *     ?QueueLazySystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x140108018 (-QueueLazySystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 */

__int64 __fastcall VIDMM_FENCE_STORAGE_PAGE::MapGpuVA(
        VIDMM_FENCE_STORAGE_PAGE *this,
        struct VIDMM_GLOBAL *a2,
        struct VIDMM_DEVICE *a3,
        struct _KTHREAD **a4,
        struct VIDMM_MONITORED_FENCE_STORAGE *a5,
        unsigned __int64 *a6,
        unsigned int a7,
        bool a8)
{
  VIDMM_PROCESS *v8; // r12
  unsigned int v11; // ecx
  char v12; // dl
  unsigned int v13; // ebx
  __int64 result; // rax
  bool v15; // zf
  int v16; // eax
  __int64 v17; // rdi
  struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA *i; // rsi
  int v19; // r14d
  int v20; // r13d
  __int64 *j; // rcx
  struct _KTHREAD **v22; // r10
  bool v23; // r14
  __int64 Pool2; // rax
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // rax
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // r9
  struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA **v30; // rdx
  struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA *v31; // rax
  unsigned int v32; // ebx
  unsigned int v33; // r13d
  void *v34; // rcx
  unsigned __int64 LogicalAddress; // rax
  int v36; // eax
  bool v37; // r8
  VIDMM_FENCE_STORAGE_PAGE *v38; // rcx
  VIDMM_FENCE_STORAGE_PAGE **v39; // rax
  VIDMM_FENCE_STORAGE_PAGE **v40; // rdx
  CVirtualAddressAllocator *v41; // rax
  int v42; // [rsp+28h] [rbp-E0h]
  unsigned int v43; // [rsp+78h] [rbp-90h]
  struct _KTHREAD **VirtualAddressAllocator; // [rsp+80h] [rbp-88h]
  unsigned __int64 v45; // [rsp+90h] [rbp-78h] BYREF
  __int128 v46; // [rsp+98h] [rbp-70h] BYREF
  struct VIDMM_ALLOC *v47; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v48[20]; // [rsp+B8h] [rbp-50h] BYREF
  bool P; // [rsp+170h] [rbp+68h]
  struct VIDMM_MAPPED_VA_RANGE *Pa; // [rsp+170h] [rbp+68h]

  v8 = (VIDMM_PROCESS *)a4;
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
  v43 = 0;
  if ( a8 )
  {
    v15 = !_BitScanForward((unsigned int *)&v16, v13);
    if ( !v15 )
      v12 = v16;
    v43 = v12;
  }
  v17 = 0LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 72, 0LL);
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
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
    v19 = -1073741801;
    LOBYTE(v20) = 0;
    goto LABEL_66;
  }
LABEL_18:
  for ( j = (__int64 *)*((_QWORD *)i + 4); j != (__int64 *)((char *)i + 32); j = (__int64 *)*j )
  {
    if ( v8 == (VIDMM_PROCESS *)*(j - 1) && (!a8 || *((_DWORD *)j + 5) == v13) )
    {
      ++*((_DWORD *)j + 4);
      v17 = (__int64)(j - 5);
      break;
    }
  }
  VirtualAddressAllocator = (struct _KTHREAD **)VIDMM_PROCESS::GetVirtualAddressAllocator(
                                                  v8,
                                                  *(_DWORD *)(*((_QWORD *)a2 + 3) + 240LL),
                                                  v43);
  v22 = VirtualAddressAllocator;
  v23 = VirtualAddressAllocator && !*(_BYTE *)(*((_QWORD *)a2 + 3) + 3042LL);
  v20 = 0;
  P = v23;
  if ( v17 )
  {
    v20 = *(_DWORD *)(v17 + 60);
    *(_DWORD *)(v17 + 60) = v13 | v20;
  }
  else
  {
    Pool2 = ExAllocatePool2(64LL, 64LL, 1700882774LL);
    v17 = Pool2;
    if ( !Pool2 )
    {
      _InterlockedIncrement(&dword_140081848);
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 989;
      DxgkLogInternalTriageEvent(v26, 262145LL);
      v19 = -1073741801;
      goto LABEL_65;
    }
    *(_DWORD *)(Pool2 + 56) = 1;
    *(_QWORD *)(Pool2 + 32) = a4;
    *(_QWORD *)(Pool2 + 8) = i;
    *(_DWORD *)(Pool2 + 60) = v13;
    ++*((_DWORD *)i + 18);
    if ( v23 )
    {
      v27 = *((_QWORD *)a2 + 3);
      v28 = 0LL;
      if ( a8 )
      {
        *(_BYTE *)(v17 + 25) = 1;
        v29 = *((_QWORD *)a2 + 5122);
      }
      else
      {
        v29 = *(_QWORD *)(v27 + 2952);
        v28 = *(_QWORD *)(v27 + 2960);
      }
      v45 = 0LL;
      v19 = CVirtualAddressAllocator::ReserveVirtualAddressRangeNoAccess(
              VirtualAddressAllocator,
              0x1000uLL,
              v25,
              v29,
              v28,
              0x1000u,
              &v45);
      if ( v19 < 0 )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 1044;
        goto LABEL_58;
      }
      *(_QWORD *)v17 = v45;
      *(_BYTE *)(v17 + 24) = 1;
      VIDMM_PROCESS::OpenAdapter(a4, a2);
      v23 = P;
    }
    else
    {
      *(_QWORD *)Pool2 = *(_QWORD *)(*((_QWORD *)this + 15) + 48LL) << 12;
      *(_BYTE *)(Pool2 + 24) = 0;
    }
    v30 = (struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA **)*((_QWORD *)i + 5);
    v31 = (struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA *)(v17 + 40);
    if ( *v30 != (struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA *)((char *)i + 32) )
      goto LABEL_71;
    v22 = VirtualAddressAllocator;
    *(_QWORD *)v31 = (char *)i + 32;
    *(_QWORD *)(v17 + 48) = v30;
    *v30 = v31;
    *((_QWORD *)i + 5) = v31;
  }
  if ( !v23 || (v15 = (~v20 & *(_DWORD *)(v17 + 60)) == 0, v32 = ~v20 & *(_DWORD *)(v17 + 60), v33 = 0, v15) )
  {
LABEL_72:
    *a6 = *(_QWORD *)v17 + *((unsigned int *)a5 + 4);
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    *((_QWORD *)this + 10) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 72, 0LL);
    KeLeaveCriticalRegion();
    return 0LL;
  }
  while ( 1 )
  {
    if ( (v32 & 1) == 0 )
      goto LABEL_54;
    Pa = (struct VIDMM_MAPPED_VA_RANGE *)CVirtualAddressAllocator::MapVirtualAddressRange(
                                           v22,
                                           (__int64)i,
                                           0LL,
                                           2,
                                           0x1000uLL,
                                           *(_QWORD *)v17,
                                           0LL,
                                           0LL,
                                           0x1000u,
                                           (_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE)17LL,
                                           0LL,
                                           v33,
                                           0LL,
                                           1);
    if ( !Pa )
      break;
    v34 = (void *)*((_QWORD *)i + 8);
    v46 = 0LL;
    LogicalAddress = SysMmGetLogicalAddress(v34);
    VidMmiInitializeAdlForPfnArray(
      (struct _DXGK_ADL *)&v46,
      (const unsigned __int64 *)(*((_QWORD *)i + 7) + 48LL),
      *(_DWORD *)(*((_QWORD *)i + 7) + 40LL) >> 12,
      LogicalAddress);
    if ( *(_BYTE *)(v17 + 25) )
    {
      *(_QWORD *)(v17 + 16) = Pa;
      if ( KeGetCurrentThread() == *(struct _KTHREAD **)(*(_QWORD *)a2 + 8LL) )
      {
        v47 = 0LL;
        v36 = CVirtualAddressAllocator::CommitVirtualAddressRange(
                (__int64)VirtualAddressAllocator,
                (__int64)Pa,
                v33,
                0,
                0LL,
                (struct _DXGK_ADL *)&v46,
                0,
                &v47,
                0LL,
                0,
                0LL);
      }
      else
      {
        memset(v48, 0, 0x58uLL);
        LODWORD(v48[0]) = 113;
        *(_OWORD *)&v48[7] = v46;
        v48[6] = Pa;
        v48[5] = VirtualAddressAllocator;
        HIDWORD(v48[0]) = v33;
        v36 = VIDMM_GLOBAL::QueueLazySystemCommandAndWait(a2, (struct _VIDMM_SYSTEM_COMMAND *)v48, v37);
      }
    }
    else
    {
      LOBYTE(v42) = 0;
      v36 = VIDMM_GLOBAL::CommitVirtualAddressRange(
              (struct VIDMM_WORKER_THREAD **)a2,
              (struct CVirtualAddressAllocator *)VirtualAddressAllocator,
              *(struct VIDMM_PAGING_QUEUE **)(32LL * v33 + *((_QWORD *)a3 + 9)),
              Pa,
              v42,
              (const struct _DXGK_ADL *)&v46,
              0LL,
              0LL);
    }
    v19 = v36;
    VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReferenceSafe(
      (volatile signed __int32 *)Pa,
      (struct CVirtualAddressAllocator *)VirtualAddressAllocator);
    if ( v19 < 0 )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 1162;
      goto LABEL_58;
    }
LABEL_54:
    ++v33;
    v32 >>= 1;
    if ( !v32 )
      goto LABEL_72;
    v22 = VirtualAddressAllocator;
  }
  WdLogSingleEntry0(3LL);
  WdLogGlobalForLineNumber = 1101;
  v19 = -1073741823;
LABEL_58:
  LOBYTE(v20) = 0;
  if ( *(_DWORD *)(v17 + 56) != 1 )
    goto LABEL_64;
  v38 = (VIDMM_FENCE_STORAGE_PAGE *)(v17 + 40);
  LOBYTE(v20) = 1;
  v39 = *(VIDMM_FENCE_STORAGE_PAGE ***)(v17 + 40);
  if ( !v39 )
    goto LABEL_63;
  if ( v39[1] != v38 || (v40 = *(VIDMM_FENCE_STORAGE_PAGE ***)(v17 + 48), *v40 != v38) )
LABEL_71:
    __fastfail(3u);
  *v40 = (VIDMM_FENCE_STORAGE_PAGE *)v39;
  v39[1] = (VIDMM_FENCE_STORAGE_PAGE *)v40;
LABEL_63:
  VIDMM_FENCE_STORAGE_PAGE::ReleaseStoragePageGpuData(v38, i);
LABEL_64:
  --*(_DWORD *)(v17 + 56);
LABEL_65:
  v8 = (VIDMM_PROCESS *)a4;
LABEL_66:
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *((_QWORD *)this + 10) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 72, 0LL);
  KeLeaveCriticalRegion();
  if ( (_BYTE)v20 )
  {
    if ( *(_BYTE *)(v17 + 24) )
    {
      v41 = VIDMM_PROCESS::GetVirtualAddressAllocator(v8, *(_DWORD *)(*((_QWORD *)a2 + 3) + 240LL), v43);
      CVirtualAddressAllocator::FreeVirtualAddressRange(v41, *(_QWORD *)v17);
      VIDMM_PROCESS::CloseAdapter((struct _KTHREAD **)v8, a2);
    }
    ExFreePoolWithTag((PVOID)v17, 0);
  }
  return (unsigned int)v19;
}
