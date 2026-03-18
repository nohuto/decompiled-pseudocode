/*
 * XREFs of ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N@Z @ 0x1400BDBC4
 * Callers:
 *     ?CreateSchLog@VIDMM_SCH_LOG@@SAJPEAVVIDMM_GLOBAL@@I_KPEAPEAV1@PEAPEAXPEA_KPEAVVIDMM_PROCESS@@W4VIDMM_SCH_LOG_TYPE@@@Z @ 0x140033230 (-CreateSchLog@VIDMM_SCH_LOG@@SAJPEAVVIDMM_GLOBAL@@I_KPEAPEAV1@PEAPEAXPEA_KPEAVVIDMM_PROCESS@@W4V.c)
 *     ?CreateVidMmTransportBuffer@VIDMM_TRANSPORT_BUFFER@@SAJPEAVVIDMM_GLOBAL@@_KPEAPEAV1@PEAPEAX@Z @ 0x14004E244 (-CreateVidMmTransportBuffer@VIDMM_TRANSPORT_BUFFER@@SAJPEAVVIDMM_GLOBAL@@_KPEAPEAV1@PEAPEAX@Z.c)
 *     ?CreateVidMmDirtyBitplane@VIDMM_DIRTY_BITPLANE@@SAJPEAVVIDMM_GLOBAL@@PEAVDXGK_DIRTY_BITPLANE@@_KPEAPEAV1@@Z @ 0x14004E8D8 (-CreateVidMmDirtyBitplane@VIDMM_DIRTY_BITPLANE@@SAJPEAVVIDMM_GLOBAL@@PEAVDXGK_DIRTY_BITPLANE@@_K.c)
 *     ?MapPageTableToGpuVa@@YAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGE_TABLE_BASE@@I@Z @ 0x140099C54 (-MapPageTableToGpuVa@@YAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGE_TABLE_BASE@@I@Z.c)
 *     AddDmaBufferToPool @ 0x1400B05D8 (AddDmaBufferToPool.c)
 *     ?FillAllocationUsingGpuVa@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1400BD424 (-FillAllocationUsingGpuVa@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT.c)
 *     ?MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAUVIDMM_GLOBAL_ALLOC@@0I0PEBU_DXGK_ADL@@PEAE0@Z @ 0x1400BD984 (-MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAUVIDMM_GLOBAL_.c)
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAUVIDMM_CONTEXT_ALLOC@@@Z @ 0x1400E736C (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 *     ?VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@_N@Z @ 0x1400EFA34 (-VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MULTI_AL.c)
 *     ?MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1400FA518 (-MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x140104104 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     ?VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z @ 0x140112398 (-VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140027B84 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x140028730 (--3@YAXPEAX@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400338D0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@E@Z @ 0x14003AD34 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@E@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14004CCF0 (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ?AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDMM_VAD@@E@Z @ 0x1400B5900 (-AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDM.c)
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1400B6400 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?InsertVadToReservedListForNewVaRange@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@@Z @ 0x1400B6D40 (-InsertVadToReservedListForNewVaRange@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@U_D3DDDIGPUV.c)
 *     ?MapVadVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@IW4VIDMM_VAD_OWNER_TYPE@@PEAX_KU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@333@Z @ 0x1400B700C (-MapVadVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@IW4VIDMM_.c)
 *     ?CompareVadAddressInsideAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1400E55FC (-CompareVadAddressInsideAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

__int64 __fastcall CVirtualAddressAllocator::MapVirtualAddressRange(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        unsigned __int64 a8,
        unsigned int a9,
        _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE a10,
        __int64 a11,
        unsigned int a12,
        void **a13,
        char a14)
{
  struct _RTL_AVL_TREE *v15; // rdx
  __int64 v16; // r14
  unsigned __int64 v17; // r12
  char v18; // r13
  unsigned __int64 Value; // rbx
  struct VIDMM_VAD *v20; // rdi
  unsigned __int64 v21; // rsi
  int v22; // eax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // r9
  __int64 v25; // rcx
  int v27; // eax
  void **v28; // rsi
  __int64 v29; // rax
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // rcx
  char *v33; // rdi
  char **v34; // rcx
  char *v35; // rax
  _BYTE v36[40]; // [rsp+50h] [rbp-28h] BYREF
  struct VIDMM_VAD *v37; // [rsp+C0h] [rbp+48h] BYREF
  __int64 v38; // [rsp+C8h] [rbp+50h]
  __int64 v39; // [rsp+D0h] [rbp+58h]
  int v40; // [rsp+D8h] [rbp+60h]

  v40 = a4;
  v39 = a3;
  v38 = a2;
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
    (DXGAUTOPUSHLOCKEXCLUSIVE *)v36,
    (struct DXGPUSHLOCK *const)(a1 + 7),
    a1[8] != (_QWORD)KeGetCurrentThread());
  v37 = 0LL;
  v16 = 0LL;
  v17 = a6;
  v18 = 0;
  Value = a10.Value;
  if ( !a6 )
    goto LABEL_16;
  v15 = (struct _RTL_AVL_TREE *)a6;
  v20 = (struct VIDMM_VAD *)a1[6];
  v21 = a6 + a5;
  if ( !v20 )
    goto LABEL_16;
  do
  {
    v22 = CompareVadAddressInsideAvl(&a6, (struct _RTL_BALANCED_NODE *)v20);
    if ( v22 >= 0 )
    {
      if ( v22 <= 0 )
        break;
      v20 = (struct VIDMM_VAD *)*((_QWORD *)v20 + 1);
    }
    else
    {
      v20 = *(struct VIDMM_VAD **)v20;
    }
  }
  while ( v20 );
  v15 = (struct _RTL_AVL_TREE *)a6;
  if ( v20 )
  {
    v23 = *((_QWORD *)v20 + 4) - 4096LL;
    if ( (*((_DWORD *)v20 + 18) & 0x1000) == 0 )
      v23 = *((_QWORD *)v20 + 4);
    if ( v23 < v21 )
    {
      WdLogSingleEntry3(3LL, a6, v21, v20);
      WdLogGlobalForLineNumber = 1656;
      goto LABEL_15;
    }
    v24 = ((unsigned __int64)*((unsigned int *)v20 + 18) >> 11) & 1;
    v37 = v20;
    if ( v24 != ((Value >> 4) & 1) )
    {
      WdLogSingleEntry2(1LL, (unsigned int)v24, (Value >> 4) & 1);
      WdLogGlobalForLineNumber = 1681;
      DxgkLogInternalTriageEvent(v25, 0x40000LL);
LABEL_15:
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v36);
      return 0LL;
    }
  }
  else
  {
LABEL_16:
    v27 = CVirtualAddressAllocator::AllocateVirtualAddressRange(
            (CVirtualAddressAllocator *)a1,
            v15,
            a5,
            v17,
            a7,
            a8,
            a9,
            &v37,
            1u);
    v20 = v37;
    if ( v27 >= 0 )
    {
      v18 = 1;
      CVirtualAddressAllocator::InsertVadToReservedListForNewVaRange(
        (CVirtualAddressAllocator *)a1,
        v37,
        (struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE)Value);
    }
  }
  if ( v20 )
  {
    v28 = a13;
    if ( a13 )
    {
      v29 = operator new(24LL, 0x39346956u, 256LL);
      *v28 = (void *)v29;
      if ( !v29 )
        goto LABEL_29;
    }
    if ( (*((_BYTE *)v20 + 72) & 0xF) == 3 && ((Value & 8) != 0 || (Value & 4) != 0) )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 1703;
LABEL_29:
      if ( v18 )
        CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal((CVirtualAddressAllocator *)a1, v20, v30);
      if ( v28 )
      {
        operator delete(*v28);
        *v28 = 0LL;
      }
      goto LABEL_15;
    }
    if ( v18 )
      v17 = *((_QWORD *)v20 + 3);
    v31 = CVirtualAddressAllocator::MapVadVaRange(
            (CVirtualAddressAllocator *)a1,
            v20,
            a12,
            v40,
            v38,
            v39,
            Value,
            a11,
            v17,
            a5);
    v16 = v31;
    if ( !v31 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1724;
      DxgkLogInternalTriageEvent(v32, 0x40000LL);
      goto LABEL_29;
    }
    if ( v28 )
    {
      v33 = (char *)v20 + 80;
      *((_QWORD *)*v28 + 2) = v31;
      v34 = (char **)*((_QWORD *)v33 + 1);
      v35 = (char *)*v28;
      if ( *v34 != v33 )
        __fastfail(3u);
      *(_QWORD *)v35 = v33;
      *((_QWORD *)v35 + 1) = v34;
      *v34 = v35;
      *((_QWORD *)v33 + 1) = v35;
    }
    if ( a14 )
      _InterlockedIncrement((volatile signed __int32 *)(v16 + 136));
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v36);
  return v16;
}
