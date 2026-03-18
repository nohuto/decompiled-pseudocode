/*
 * XREFs of ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x14010188C
 * Callers:
 *     ?DestroyVidMmTransportBuffer@VIDMM_TRANSPORT_BUFFER@@SAJPEAVVIDMM_GLOBAL@@PEAV1@@Z @ 0x14004E6D8 (-DestroyVidMmTransportBuffer@VIDMM_TRANSPORT_BUFFER@@SAJPEAVVIDMM_GLOBAL@@PEAV1@@Z.c)
 *     ?CreateVidMmDirtyBitplane@VIDMM_DIRTY_BITPLANE@@SAJPEAVVIDMM_GLOBAL@@PEAVDXGK_DIRTY_BITPLANE@@_KPEAPEAV1@@Z @ 0x14004E8D8 (-CreateVidMmDirtyBitplane@VIDMM_DIRTY_BITPLANE@@SAJPEAVVIDMM_GLOBAL@@PEAVDXGK_DIRTY_BITPLANE@@_K.c)
 *     ?MapHostVirtualAddressToGuest@VIDMM_PROCESS@@QEAAJPEAX_KKKPEAPEAXPEA_K2@Z @ 0x14008FDB0 (-MapHostVirtualAddressToGuest@VIDMM_PROCESS@@QEAAJPEAX_KKKPEAPEAXPEA_K2@Z.c)
 *     ?VidMmReserveGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAUVIDMM_PAGING_QUEUE@@PEAUD3DDDI_RESERVEGPUVIRTUALADDRESS@@@Z @ 0x1400B445C (-VidMmReserveGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAUVIDMM_PAGING_QUEUE@@PEA.c)
 *     ?ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESERVATION_TYPE@@_KEPEA_KPEAPEAUVIDMM_MAPPED_VA_RANGE@@E@Z @ 0x1400B550C (-ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESE.c)
 *     ?MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1400FA518 (-MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@.c)
 *     ?UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1E@Z @ 0x1401014AC (-UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1E@Z.c)
 *     ?MapHostAddressesToGuest@VIDMM_PROCESS@@QEAAJPEAU_MDL@@_KPEAPEAXPEA_K@Z @ 0x140101580 (-MapHostAddressesToGuest@VIDMM_PROCESS@@QEAAJPEAU_MDL@@_KPEAPEAXPEA_K@Z.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x140104104 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     ?VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z @ 0x140112398 (-VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140036BF0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14004CCF0 (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ?CompareVadByStartAddressAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1400B5364 (-CompareVadByStartAddressAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1400B6400 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 */

__int64 __fastcall CVirtualAddressAllocator::FreeVirtualAddressRange(
        CVirtualAddressAllocator *this,
        struct _RTL_BALANCED_NODE *a2)
{
  unsigned int v4; // ebp
  char v5; // r15
  struct _KTHREAD **v6; // r14
  __int64 v7; // r8
  struct _RTL_BALANCED_NODE *v8; // rbx
  int started; // eax
  struct _RTL_BALANCED_NODE *v11; // [rsp+50h] [rbp+8h] BYREF

  v4 = -1073741811;
  v5 = 0;
  v6 = (struct _KTHREAD **)((char *)this + 64);
  if ( !(unsigned int)Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( *v6 == KeGetCurrentThread() )
      goto LABEL_6;
    goto LABEL_5;
  }
  if ( *v6 != KeGetCurrentThread() )
  {
LABEL_5:
    DXGPUSHLOCK::AcquireExclusive((CVirtualAddressAllocator *)((char *)this + 56));
    v5 = 1;
  }
LABEL_6:
  v8 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 6);
  v11 = a2;
  while ( v8 )
  {
    started = CompareVadByStartAddressAvl(&v11, v8);
    if ( started >= 0 )
    {
      if ( started <= 0 )
        break;
      v8 = v8->Children[1];
    }
    else
    {
      v8 = v8->Children[0];
    }
  }
  if ( v8 )
  {
    CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal(this, (struct VIDMM_VAD *)v8, v7);
    v4 = 0;
  }
  else
  {
    WdLogSingleEntry2(3LL, this, a2);
    WdLogGlobalForLineNumber = 1986;
  }
  if ( v5 )
  {
    if ( (unsigned int)Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline() )
      *((_QWORD *)this + 8) = 0LL;
    else
      *v6 = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 56, 0LL);
    KeLeaveCriticalRegion();
  }
  return v4;
}
