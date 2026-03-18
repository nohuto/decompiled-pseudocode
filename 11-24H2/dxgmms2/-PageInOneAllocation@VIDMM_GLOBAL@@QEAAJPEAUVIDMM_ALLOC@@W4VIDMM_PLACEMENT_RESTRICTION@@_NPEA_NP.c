/*
 * XREFs of ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1400B15E0
 * Callers:
 *     ?InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z @ 0x1400B09E0 (-InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z.c)
 *     ?PageInFaultedAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@_NPEA_NPEAPEAU2@@Z @ 0x1400B1040 (-PageInFaultedAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@_NPEA_NPEAPEAU2@@Z.c)
 *     ?PageInPageTableOrDirectory@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGE_TABLE_BASE@@PEAUVIDMM_ALLOC@@_NPEA_NPEAPEAU3@@Z @ 0x1400B11D8 (-PageInPageTableOrDirectory@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGE_TABLE_BASE@@PEAUVIDMM_ALLOC@@_NPEA.c)
 *     ?CommitPageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400B13C4 (-CommitPageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400E11C8 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400E2548 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x14000D490 (McTemplateK0p_EtwWriteTransfer.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140035860 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x140035D1C (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     Feature_3694358843__private_IsEnabledDeviceUsageNoInline @ 0x14004C408 (Feature_3694358843__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140055E20 (__security_check_cookie.c)
 *     ?VidMmiEnsureVirtualAddressRangeValid@@YAJPEAX_K@Z @ 0x1400901C0 (-VidMmiEnsureVirtualAddressRangeValid@@YAJPEAX_K@Z.c)
 *     CommitVirtualAddressRangesInList @ 0x140092E24 (CommitVirtualAddressRangesInList.c)
 *     ?IteratePhysicalMemoryRanges@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@P6AJPEAU1@0PEBUVIDMM_ITERATE_PHYSICAL_MEMORY_RANGE_DESC@@PEAX@Z3II@Z @ 0x1400AD980 (-IteratePhysicalMemoryRanges@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@P6AJPEAU1@0P.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1400BC6E0 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1400BE360 (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAUVIDMM_MAPPED_VA_RAN.c)
 *     ?MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400CDD2C (-MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?AddCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1400DEF94 (-AddCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?PageInAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAUVIDMM_ALLOC@@I_K@Z @ 0x1400EC39C (-PageInAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@W4VIDMM_PLACEMENT_RESTR.c)
 */

__int64 __fastcall VIDMM_GLOBAL::PageInOneAllocation(
        __int64 a1,
        _DWORD *a2,
        unsigned int a3,
        unsigned __int8 a4,
        _BYTE *a5,
        _QWORD *a6,
        int a7,
        __int64 a8)
{
  _QWORD *v10; // r9
  _BYTE *v12; // r8
  VIDMM_PHYSICAL_ADAPTER *v14; // r10
  __int64 v15; // r12
  struct VIDMM_PHYSICAL_ALLOC *v16; // r13
  __int64 v17; // rax
  unsigned int v18; // esi
  __int64 v19; // rdx
  _QWORD *v20; // rax
  _QWORD *v21; // rcx
  int v22; // eax
  __int64 v23; // rdi
  int v24; // ecx
  _QWORD *v25; // rax
  void *v26; // r14
  __int64 v27; // rcx
  struct CVirtualAddressAllocator *VirtualAddressAllocator; // rax
  CVirtualAddressAllocator *v29; // r13
  char *v30; // r14
  int (*v31)(struct VIDMM_PHYSICAL_ADAPTER *, struct VIDMM_PHYSICAL_ALLOC *, const struct VIDMM_ITERATE_PHYSICAL_MEMORY_RANGE_DESC *, void *); // r8
  _DWORD *i; // r14
  int v33; // ecx
  char v34; // al
  _DWORD *v35; // r14
  unsigned int j; // eax
  int v38; // [rsp+50h] [rbp-B0h]
  VIDMM_PHYSICAL_ADAPTER *v39; // [rsp+60h] [rbp-A0h]
  CVirtualAddressAllocator *v40; // [rsp+68h] [rbp-98h]
  char *v41; // [rsp+70h] [rbp-90h]
  _QWORD v42[2]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v43; // [rsp+90h] [rbp-70h]
  __int64 v44; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v45; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v46; // [rsp+B0h] [rbp-50h]
  struct VIDMM_PHYSICAL_ALLOC *v47; // [rsp+B8h] [rbp-48h]
  struct _KAPC_STATE ApcState; // [rsp+C0h] [rbp-40h] BYREF

  v10 = a6;
  v12 = a5;
  v14 = *(VIDMM_PHYSICAL_ADAPTER **)(*(_QWORD *)(a1 + 40232) + 8LL * ((a2[8] >> 2) & 0x3F));
  v39 = v14;
  v15 = **(_QWORD **)a2;
  v16 = *(struct VIDMM_PHYSICAL_ALLOC **)v15;
  v47 = *(struct VIDMM_PHYSICAL_ALLOC **)v15;
  if ( g_IsInternalReleaseOrDbg )
  {
    v17 = WdLogNewEntry5_WdTrace(a1);
    v14 = v39;
    v12 = a5;
    v10 = a6;
    *(_QWORD *)(v17 + 24) = a2;
    WdLogGlobalForLineNumber = 16989;
  }
  v18 = 0;
  if ( (a2[7] & 3) == 1 )
  {
    v19 = *((_QWORD *)a2 + 7);
    v20 = a2 + 14;
    if ( *(_DWORD **)(v19 + 8) != a2 + 14 || (v21 = (_QWORD *)*((_QWORD *)a2 + 8), (_QWORD *)*v21 != v20) )
      __fastfail(3u);
    *v21 = v19;
    *(_QWORD *)(v19 + 8) = v21;
    a2[7] &= 0xFFFFFFFC;
    *((_QWORD *)a2 + 8) = 0LL;
    *v20 = 0LL;
  }
  v38 = 2;
  if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 1) + 8LL) + 112LL) & 8) != 0 )
  {
    v22 = *(_DWORD *)(v15 + 24);
    if ( (v22 & 0x40) != 0 && (v22 & 0x400) == 0 )
      a3 = 2;
  }
  LODWORD(v23) = VIDMM_PHYSICAL_ADAPTER::PageInAllocation(v14, v16, a3, a4, v12, v10, a7, a8);
  if ( (int)v23 < 0 )
  {
    if ( *a5 )
      *a6 = a2;
    goto LABEL_56;
  }
  if ( !*((_BYTE *)a2 + 26) )
  {
    v24 = *(_DWORD *)(v15 + 28);
    if ( (v24 & 0x800) == 0 )
    {
      if ( *((_QWORD *)a2 + 20)
        && (*(_BYTE *)(a1 + 40936) & 0x40) != 0
        && ((v24 & 0x80u) == 0 || (**(_DWORD **)(v15 + 392) & 0x20000008) != 0) )
      {
        v25 = *(_QWORD **)a2;
        memset(&ApcState, 0, sizeof(ApcState));
        KeStackAttachProcess(*(PRKPROCESS *)v25[1], &ApcState);
        v26 = (void *)*((_QWORD *)a2 + 20);
        v23 = (int)VidMmiEnsureVirtualAddressRangeValid(v26, *((_QWORD *)v16 + 2));
        KeUnstackDetachProcess(&ApcState);
        if ( (int)v23 < 0 )
        {
          WdLogSingleEntry2(1LL, v26, v23);
          WdLogGlobalForLineNumber = 17038;
          DxgkLogInternalTriageEvent(v27, 0x40000LL);
          *a5 = 0;
LABEL_56:
          if ( *(_DWORD *)(v15 + 72) == 2 && !*(_DWORD *)(v15 + 76) )
            VIDMM_SEGMENT::MarkResourcesForEviction(
              *(VIDMM_SEGMENT **)(*(_QWORD *)v15 + 64LL),
              **(struct VIDMM_GLOBAL_ALLOC ***)v15);
          return (unsigned int)v23;
        }
      }
      *((_BYTE *)a2 + 26) = 1;
    }
  }
  if ( (*(_BYTE *)(a1 + 40936) & 0x10) != 0
    && (!*(_BYTE *)(a1 + 40940) || (*(_DWORD *)(v15 + 24) & 0x100) == 0)
    && (*(_DWORD *)(v15 + 28) & 0x800) == 0 )
  {
    VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                                *(VIDMM_PROCESS **)(*(_QWORD *)a2 + 8LL),
                                *(_DWORD *)(*(_QWORD *)(a1 + 24) + 240LL),
                                *(_DWORD *)(v15 + 24) & 0x3F);
    v44 = 0LL;
    v43 = 0LL;
    v42[1] = a2;
    v29 = VirtualAddressAllocator;
    v30 = (char *)VirtualAddressAllocator + 56;
    v42[0] = VirtualAddressAllocator;
    v45 = -1LL;
    v46 = 0LL;
    v40 = VirtualAddressAllocator;
    v41 = (char *)VirtualAddressAllocator + 56;
    if ( *((struct _KTHREAD **)VirtualAddressAllocator + 8) == KeGetCurrentThread() )
      v38 = 0;
    else
      DXGPUSHLOCK::AcquireExclusive((struct CVirtualAddressAllocator *)((char *)VirtualAddressAllocator + 56));
    if ( (unsigned int)Feature_3694358843__private_IsEnabledDeviceUsageNoInline() )
    {
      LODWORD(v23) = CommitVirtualAddressRangesInList((_QWORD **)a2 + 16, v39, v42);
      if ( (int)v23 >= 0 )
      {
        v35 = a2 + 36;
        LODWORD(v23) = CommitVirtualAddressRangesInList((_QWORD **)a2 + 18, v39, v42);
        if ( (int)v23 >= 0 )
        {
          while ( *(_DWORD **)v35 != v35 )
          {
            LODWORD(v23) = CVirtualAddressAllocator::AddVaRangeToVadRangeList(
                             v29,
                             *(struct VIDMM_VAD **)(*(_QWORD *)v35 - 32LL),
                             (*(_DWORD *)(*(_QWORD *)v35 + 40LL) >> 4) & 0x3F,
                             (struct VIDMM_MAPPED_VA_RANGE *)(*(_QWORD *)v35 - 32LL));
            if ( (int)v23 < 0 )
              goto LABEL_47;
          }
          LODWORD(v23) = 0;
        }
LABEL_47:
        v30 = (char *)v29 + 56;
      }
    }
    else
    {
      for ( i = (_DWORD *)*((_QWORD *)a2 + 16); i != a2 + 32; i = *(_DWORD **)i )
      {
        v33 = i[10];
        if ( (v33 & 0x400) != 0 || (*(_BYTE *)(a1 + 40936) & 2) == 0 )
        {
          if ( (v33 & 0x800) != 0 )
            continue;
          v34 = *(_BYTE *)(a1 + 40936);
          if ( (v34 & 4) == 0 && (v34 & 8) == 0 )
            continue;
        }
        *(_QWORD *)&v43 = i - 8;
        LODWORD(v23) = VIDMM_PHYSICAL_ADAPTER::IteratePhysicalMemoryRanges(v39, v47, v31, v42);
        if ( (int)v23 < 0 )
          break;
      }
      v29 = v40;
      v30 = v41;
    }
    if ( v38 == 2 )
    {
      *((_QWORD *)v30 + 1) = 0LL;
      ExReleasePushLockExclusiveEx(v30, 0LL);
      KeLeaveCriticalRegion();
    }
    for ( j = HIDWORD(v44); j; HIDWORD(v44) = j )
    {
      if ( (j & 1) != 0 )
      {
        CVirtualAddressAllocator::FlushGpuVaTlb(v29, v18, v45, v46);
        j = HIDWORD(v44);
      }
      j >>= 1;
      ++v18;
    }
    if ( (int)v23 < 0 )
    {
      *a6 = *((_QWORD *)&v43 + 1);
      *a5 = v44;
      goto LABEL_56;
    }
  }
  if ( (a2[7] & 3) != 2 )
  {
    VIDMM_DEVICE::AddCommitment(*((VIDMM_DEVICE **)a2 + 1), (struct VIDMM_ALLOC *)a2);
    if ( (byte_140081241 & 1) != 0 )
      McTemplateK0p_EtwWriteTransfer();
  }
  *(_BYTE *)(v15 + 43) = 1;
  return 0LL;
}
