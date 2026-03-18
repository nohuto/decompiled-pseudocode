/*
 * XREFs of ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N6@Z @ 0x14009AF84
 * Callers:
 *     ?CreateSchLog@VIDMM_SCH_LOG@@SAJPEAVVIDMM_GLOBAL@@I_KPEAPEAV1@PEAPEAXPEA_KPEAVVIDMM_PROCESS@@W4VIDMM_SCH_LOG_TYPE@@@Z @ 0x140024A94 (-CreateSchLog@VIDMM_SCH_LOG@@SAJPEAVVIDMM_GLOBAL@@I_KPEAPEAV1@PEAPEAXPEA_KPEAVVIDMM_PROCESS@@W4V.c)
 *     ?CreateVidMmTransportBuffer@VIDMM_TRANSPORT_BUFFER@@SAJPEAVVIDMM_GLOBAL@@_KPEAPEAV1@PEAPEAX@Z @ 0x14004DBB0 (-CreateVidMmTransportBuffer@VIDMM_TRANSPORT_BUFFER@@SAJPEAVVIDMM_GLOBAL@@_KPEAPEAV1@PEAPEAX@Z.c)
 *     ?CreateVidMmDirtyBitplane@VIDMM_DIRTY_BITPLANE@@SAJPEAVVIDMM_GLOBAL@@PEAVDXGK_DIRTY_BITPLANE@@_KPEAPEAV1@@Z @ 0x14004E258 (-CreateVidMmDirtyBitplane@VIDMM_DIRTY_BITPLANE@@SAJPEAVVIDMM_GLOBAL@@PEAVDXGK_DIRTY_BITPLANE@@_K.c)
 *     ?MapPageTableToGpuVa@@YAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGE_TABLE_BASE@@I@Z @ 0x14009AAF8 (-MapPageTableToGpuVa@@YAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGE_TABLE_BASE@@I@Z.c)
 *     ?MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAUVIDMM_GLOBAL_ALLOC@@0I0PEBU_DXGK_ADL@@PEAE0@Z @ 0x1400AD738 (-MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAUVIDMM_GLOBAL_.c)
 *     ?FillAllocationUsingGpuVa@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1400AEA70 (-FillAllocationUsingGpuVa@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT.c)
 *     AddDmaBufferToPool @ 0x1400B8988 (AddDmaBufferToPool.c)
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAUVIDMM_CONTEXT_ALLOC@@@Z @ 0x1400DB434 (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 *     ?VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@_N@Z @ 0x1400F5180 (-VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MULTI_AL.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1400F71BC (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     ?MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1400F95B8 (-MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@.c)
 *     ?VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z @ 0x140111178 (-VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14001C724 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x14001D2D0 (--3@YAXPEAX@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140031710 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@E@Z @ 0x140038D34 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@E@Z.c)
 *     ?MapVadVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@IW4VIDMM_VAD_OWNER_TYPE@@PEAX_KU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@333_N@Z @ 0x14009AD34 (-MapVadVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@IW4VIDMM_.c)
 *     ?AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDMM_VAD@@E@Z @ 0x1400BD1F0 (-AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDM.c)
 *     ?InsertVadToReservedListForNewVaRange@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@@Z @ 0x1400BDFC4 (-InsertVadToReservedListForNewVaRange@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@U_D3DDDIGPUV.c)
 *     ?CompareVadAddressInsideAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1400E4F9C (-CompareVadAddressInsideAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1400FBFBC (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 */

__int64 __fastcall CVirtualAddressAllocator::MapVirtualAddressRange(
        _QWORD *a1,
        _QWORD *a2,
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
        char a14,
        char a15)
{
  struct _RTL_AVL_TREE *v16; // rdx
  __int64 v17; // r14
  unsigned __int64 v18; // r12
  char v19; // r13
  unsigned __int64 Value; // rbx
  struct VIDMM_VAD *v21; // rdi
  unsigned __int64 v22; // rsi
  int v23; // eax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // r9
  __int64 v26; // rcx
  int v28; // eax
  void **v29; // rsi
  __int64 v30; // rax
  int v31; // eax
  char v32; // al
  __int64 v33; // rax
  __int64 v34; // rcx
  char *v35; // rdi
  char **v36; // rcx
  char *v37; // rax
  _BYTE v38[96]; // [rsp+68h] [rbp-21h] BYREF
  struct VIDMM_VAD *v39; // [rsp+D8h] [rbp+4Fh] BYREF
  _QWORD *v40; // [rsp+E0h] [rbp+57h]
  __int64 v41; // [rsp+E8h] [rbp+5Fh]
  int v42; // [rsp+F0h] [rbp+67h]

  v42 = a4;
  v41 = a3;
  v40 = a2;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
    (DXGAUTOPUSHLOCKEXCLUSIVE *)v38,
    (struct DXGPUSHLOCK *const)(a1 + 7),
    a1[8] != (_QWORD)KeGetCurrentThread());
  v39 = 0LL;
  v17 = 0LL;
  v18 = a6;
  v19 = 0;
  Value = a10.Value;
  if ( !a6 )
    goto LABEL_16;
  v16 = (struct _RTL_AVL_TREE *)a6;
  v21 = (struct VIDMM_VAD *)a1[6];
  v22 = a6 + a5;
  if ( !v21 )
    goto LABEL_16;
  do
  {
    v23 = CompareVadAddressInsideAvl(&a6, (struct _RTL_BALANCED_NODE *)v21);
    if ( v23 >= 0 )
    {
      if ( v23 <= 0 )
        break;
      v21 = (struct VIDMM_VAD *)*((_QWORD *)v21 + 1);
    }
    else
    {
      v21 = *(struct VIDMM_VAD **)v21;
    }
  }
  while ( v21 );
  v16 = (struct _RTL_AVL_TREE *)a6;
  if ( v21 )
  {
    v24 = *((_QWORD *)v21 + 4) - 4096LL;
    if ( (*((_DWORD *)v21 + 18) & 0x1000) == 0 )
      v24 = *((_QWORD *)v21 + 4);
    if ( v24 < v22 )
    {
      WdLogSingleEntry3(3LL, a6, v22, v21);
      WdLogGlobalForLineNumber = 2003;
      goto LABEL_15;
    }
    v25 = ((unsigned __int64)*((unsigned int *)v21 + 18) >> 11) & 1;
    v39 = v21;
    if ( v25 != ((Value >> 4) & 1) )
    {
      WdLogSingleEntry2(1LL, (unsigned int)v25, (Value >> 4) & 1);
      WdLogGlobalForLineNumber = 2028;
      DxgkLogInternalTriageEvent(v26, 0x40000LL);
LABEL_15:
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v38);
      return 0LL;
    }
  }
  else
  {
LABEL_16:
    v28 = CVirtualAddressAllocator::AllocateVirtualAddressRange(
            (CVirtualAddressAllocator *)a1,
            v16,
            a5,
            v18,
            a7,
            a8,
            a9,
            &v39,
            1u);
    v21 = v39;
    if ( v28 >= 0 )
    {
      v19 = 1;
      CVirtualAddressAllocator::InsertVadToReservedListForNewVaRange(
        (CVirtualAddressAllocator *)a1,
        v39,
        (struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE)Value);
    }
  }
  if ( v21 )
  {
    v29 = a13;
    if ( a13 )
    {
      v30 = operator new(24LL, 0x39346956u, 256LL);
      *v29 = (void *)v30;
      if ( !v30 )
        goto LABEL_33;
    }
    v31 = *((_DWORD *)v21 + 18) & 0xF;
    if ( v31 == 3 && ((Value & 8) != 0 || (Value & 4) != 0) )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 2050;
LABEL_33:
      if ( v19 )
        CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal((CVirtualAddressAllocator *)a1, v21);
      if ( v29 )
      {
        operator delete(*v29);
        *v29 = 0LL;
      }
      goto LABEL_15;
    }
    v32 = a15 && v31 == 2;
    if ( v19 )
      v18 = *((_QWORD *)v21 + 3);
    v33 = CVirtualAddressAllocator::MapVadVaRange(
            (CVirtualAddressAllocator *)a1,
            v21,
            a12,
            v42,
            v40,
            v41,
            Value,
            a11,
            v18,
            a5,
            v32);
    v17 = v33;
    if ( !v33 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2072;
      DxgkLogInternalTriageEvent(v34, 0x40000LL);
      goto LABEL_33;
    }
    if ( v29 )
    {
      v35 = (char *)v21 + 80;
      *((_QWORD *)*v29 + 2) = v33;
      v36 = (char **)*((_QWORD *)v35 + 1);
      v37 = (char *)*v29;
      if ( *v36 != v35 )
        __fastfail(3u);
      *(_QWORD *)v37 = v35;
      *((_QWORD *)v37 + 1) = v36;
      *v36 = v37;
      *((_QWORD *)v35 + 1) = v37;
    }
    if ( a14 )
      _InterlockedIncrement((volatile signed __int32 *)(v17 + 136));
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v38);
  return v17;
}
