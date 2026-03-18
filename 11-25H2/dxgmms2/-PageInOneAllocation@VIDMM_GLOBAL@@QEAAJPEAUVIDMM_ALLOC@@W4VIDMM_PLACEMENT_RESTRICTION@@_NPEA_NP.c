/*
 * XREFs of ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1400E2D80
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400DD034 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400DE3C0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z @ 0x1400E2184 (-InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z.c)
 *     ?PageInFaultedAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@_NPEA_NPEAPEAU2@@Z @ 0x1400E27E4 (-PageInFaultedAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@_NPEA_NPEAPEAU2@@Z.c)
 *     ?PageInPageTableOrDirectory@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGE_TABLE_BASE@@PEAUVIDMM_ALLOC@@_NPEA_NPEAPEAU3@@Z @ 0x1400E297C (-PageInPageTableOrDirectory@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGE_TABLE_BASE@@PEAUVIDMM_ALLOC@@_NPEA.c)
 *     ?CommitPageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400E2B68 (-CommitPageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1400188F8 (McTemplateK0p_EtwWriteTransfer.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140036BF0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x140037174 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?SysMmQueryIommuState@@YAXPEBUSYSMM_ADAPTER@@PEATSYSMM_IOMMU_STATE@@@Z @ 0x140038D54 (-SysMmQueryIommuState@@YAXPEBUSYSMM_ADAPTER@@PEATSYSMM_IOMMU_STATE@@@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14004CCF0 (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 *     ?VidMmiEnsureVirtualAddressRangeValid@@YAJPEAX_K@Z @ 0x1400901C8 (-VidMmiEnsureVirtualAddressRangeValid@@YAJPEAX_K@Z.c)
 *     ?IteratePhysicalMemoryRanges@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@P6AJPEAU1@0PEBUVIDMM_ITERATE_PHYSICAL_MEMORY_RANGE_DESC@@PEAX@Z3II@Z @ 0x1400BDF30 (-IteratePhysicalMemoryRanges@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@P6AJPEAU1@0P.c)
 *     ?MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400D20EC (-MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?AddCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1400DAC34 (-AddCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?PageInAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAUVIDMM_ALLOC@@I_K@Z @ 0x1400F11A0 (-PageInAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@W4VIDMM_PLACEMENT_RESTR.c)
 *     ?UnfaultCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x140101AD4 (-UnfaultCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::PageInOneAllocation(
        __int64 a1,
        __int64 *a2,
        unsigned int a3,
        unsigned __int8 a4,
        _BYTE *a5,
        _QWORD *a6,
        int a7,
        __int64 a8)
{
  __int64 v8; // rax
  _QWORD *v12; // r9
  __int64 v14; // rdx
  VIDMM_PHYSICAL_ADAPTER *v15; // r10
  __int64 *v16; // rax
  __int64 v17; // r12
  struct VIDMM_PHYSICAL_ALLOC *v18; // r13
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // r14
  int v22; // ecx
  __int64 v23; // rax
  void *v24; // r15
  __int64 v25; // rcx
  __int64 v26; // r15
  __int64 v27; // r13
  __int64 **v28; // rbx
  __int64 v29; // rcx
  __int64 v30; // rcx
  unsigned int v31; // edi
  struct _KTHREAD **v32; // r15
  __int64 *v33; // rdx
  struct _KTHREAD **v34; // r13
  int (*v35)(struct VIDMM_PHYSICAL_ADAPTER *, struct VIDMM_PHYSICAL_ALLOC *, const struct VIDMM_ITERATE_PHYSICAL_MEMORY_RANGE_DESC *, void *); // r8
  __int64 *v36; // rax
  __int64 *v37; // rbx
  __int64 v38; // r13
  struct VIDMM_PHYSICAL_ALLOC *v39; // r12
  VIDMM_PHYSICAL_ADAPTER *v40; // rdi
  int v41; // ecx
  char v42; // al
  unsigned int i; // eax
  int v45; // [rsp+50h] [rbp-B0h]
  int v46; // [rsp+54h] [rbp-ACh] BYREF
  _QWORD *v47; // [rsp+58h] [rbp-A8h]
  VIDMM_PHYSICAL_ADAPTER *v48; // [rsp+60h] [rbp-A0h]
  _BYTE *v49; // [rsp+68h] [rbp-98h]
  _QWORD v50[2]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v51; // [rsp+80h] [rbp-80h]
  __int64 v52; // [rsp+90h] [rbp-70h]
  unsigned __int64 v53; // [rsp+98h] [rbp-68h]
  unsigned __int64 v54; // [rsp+A0h] [rbp-60h]
  __int64 v55; // [rsp+A8h] [rbp-58h]
  struct VIDMM_PHYSICAL_ALLOC *v56; // [rsp+B0h] [rbp-50h]
  __int64 v57; // [rsp+B8h] [rbp-48h]
  struct _KAPC_STATE ApcState; // [rsp+C0h] [rbp-40h] BYREF

  v8 = *(_QWORD *)(a1 + 40232);
  v12 = a6;
  v14 = (*((_DWORD *)a2 + 8) >> 2) & 0x3F;
  v55 = a1;
  v49 = a5;
  v47 = a6;
  v15 = *(VIDMM_PHYSICAL_ADAPTER **)(v8 + 8 * v14);
  v16 = (__int64 *)*a2;
  v48 = v15;
  v17 = *v16;
  v57 = v17;
  v18 = *(struct VIDMM_PHYSICAL_ALLOC **)v17;
  v56 = *(struct VIDMM_PHYSICAL_ALLOC **)v17;
  if ( g_IsInternalReleaseOrDbg )
  {
    v19 = WdLogNewEntry5_WdTrace(a1);
    v15 = v48;
    v12 = v47;
    *(_QWORD *)(v19 + 24) = a2;
    WdLogGlobalForLineNumber = 16760;
  }
  if ( (*((_DWORD *)a2 + 7) & 3) == 1 )
    VIDMM_DEVICE::UnfaultCommitment((VIDMM_DEVICE *)a1, (struct VIDMM_ALLOC *)a2);
  if ( (*(_DWORD *)(*(_QWORD *)(a2[1] + 8) + 112LL) & 8) != 0 )
  {
    v20 = *(_DWORD *)(v17 + 24);
    if ( (v20 & 0x40) != 0 && (v20 & 0x400) == 0 )
      a3 = 2;
  }
  LODWORD(v21) = VIDMM_PHYSICAL_ADAPTER::PageInAllocation(v15, v18, a3, a4, a5, v12, a7, a8);
  if ( (int)v21 < 0 )
  {
    if ( *a5 )
      *v47 = a2;
LABEL_58:
    if ( *(_DWORD *)(v17 + 72) == 2 && !*(_DWORD *)(v17 + 76) )
      VIDMM_SEGMENT::MarkResourcesForEviction(
        *(VIDMM_SEGMENT ****)(*(_QWORD *)v17 + 64LL),
        **(struct VIDMM_GLOBAL_ALLOC ***)v17);
    return (unsigned int)v21;
  }
  if ( !*((_BYTE *)a2 + 26) )
  {
    v22 = *(_DWORD *)(v17 + 28);
    if ( (v22 & 0x800) == 0 )
    {
      if ( a2[18]
        && (*(_BYTE *)(a1 + 40936) & 0x40) != 0
        && ((v22 & 0x80u) == 0 || (**(_DWORD **)(v17 + 376) & 0x20000008) != 0) )
      {
        v23 = *a2;
        memset(&ApcState, 0, sizeof(ApcState));
        KeStackAttachProcess(**(PRKPROCESS **)(v23 + 8), &ApcState);
        v24 = (void *)a2[18];
        v21 = (int)VidMmiEnsureVirtualAddressRangeValid(v24, *((_QWORD *)v18 + 2));
        KeUnstackDetachProcess(&ApcState);
        if ( (int)v21 < 0 )
        {
          WdLogSingleEntry2(1LL, v24, v21);
          WdLogGlobalForLineNumber = 16809;
          DxgkLogInternalTriageEvent(v25, 0x40000LL);
          *v49 = 0;
          goto LABEL_58;
        }
      }
      *((_BYTE *)a2 + 26) = 1;
    }
  }
  if ( (*(_BYTE *)(a1 + 40936) & 0x10) == 0
    || *(_BYTE *)(a1 + 40940) && (*(_DWORD *)(v17 + 24) & 0x100) != 0
    || (*(_DWORD *)(v17 + 28) & 0x800) != 0 )
  {
    goto LABEL_62;
  }
  v26 = *(_DWORD *)(v17 + 24) & 0x3F;
  v27 = *(_QWORD *)(*a2 + 8);
  v28 = (__int64 **)(*(_QWORD *)(v27 + 16) + 8LL * *(unsigned int *)(*(_QWORD *)(a1 + 24) + 240LL));
  if ( *v28 && (v29 = **v28, *(_DWORD *)(v29 + 40928)) )
  {
    v30 = *(_QWORD *)(v29 + 24);
    v31 = 0;
    v46 = 0;
    SysMmQueryIommuState(*(const struct SYSMM_ADAPTER **)(v30 + 224), (union SYSMM_IOMMU_STATE *)&v46);
    if ( (v46 & 8) != 0 )
    {
      v32 = *(struct _KTHREAD ***)(**v28 + 44504);
    }
    else
    {
      v33 = *v28;
      if ( (*(_DWORD *)(v27 + 96) & 2) != 0 )
        v32 = *(struct _KTHREAD ***)(*v33 + 8 * v26 + 40416);
      else
        v32 = (struct _KTHREAD **)v33[23];
    }
  }
  else
  {
    v31 = 0;
    v32 = 0LL;
  }
  v52 = 0LL;
  v51 = 0LL;
  v50[1] = a2;
  v34 = v32 + 7;
  v50[0] = v32;
  v53 = -1LL;
  v54 = 0LL;
  if ( (unsigned int)Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline() )
  {
    v45 = 0;
    if ( v32[8] == KeGetCurrentThread() )
      goto LABEL_38;
LABEL_37:
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v32 + 7));
    v45 = 2;
    goto LABEL_38;
  }
  if ( v32[8] != KeGetCurrentThread() )
    goto LABEL_37;
  v45 = 0;
LABEL_38:
  v36 = a2 + 16;
  v37 = (__int64 *)a2[16];
  if ( v37 == a2 + 16 )
    goto LABEL_50;
  v38 = v55;
  v39 = v56;
  v40 = v48;
  do
  {
    v41 = *((_DWORD *)v37 + 10);
    if ( (v41 & 0x400) == 0 )
    {
      if ( (*(_BYTE *)(v38 + 40936) & 2) != 0 )
        goto LABEL_46;
      v36 = a2 + 16;
    }
    if ( (v41 & 0x800) != 0 )
      goto LABEL_48;
    v42 = *(_BYTE *)(v38 + 40936);
    if ( (v42 & 4) != 0 || (v42 & 8) != 0 )
    {
LABEL_46:
      *(_QWORD *)&v51 = v37 - 4;
      LODWORD(v21) = VIDMM_PHYSICAL_ADAPTER::IteratePhysicalMemoryRanges(v40, v39, v35, v50);
      if ( (int)v21 < 0 )
        break;
    }
    v36 = a2 + 16;
LABEL_48:
    v37 = (__int64 *)*v37;
  }
  while ( v37 != v36 );
  v17 = v57;
  v34 = v32 + 7;
  v31 = 0;
LABEL_50:
  if ( v45 == 2 )
  {
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    v34[1] = 0LL;
    ExReleasePushLockExclusiveEx(v34, 0LL);
    KeLeaveCriticalRegion();
  }
  for ( i = HIDWORD(v52); i; HIDWORD(v52) = i )
  {
    if ( (i & 1) != 0 )
    {
      CVirtualAddressAllocator::FlushGpuVaTlb((CVirtualAddressAllocator *)v32, v31, v53, v54);
      i = HIDWORD(v52);
    }
    i >>= 1;
    ++v31;
  }
  if ( (int)v21 < 0 )
  {
    *v47 = *((_QWORD *)&v51 + 1);
    *v49 = v52;
    goto LABEL_58;
  }
LABEL_62:
  if ( (*((_DWORD *)a2 + 7) & 3) != 2 )
  {
    VIDMM_DEVICE::AddCommitment((VIDMM_DEVICE *)a2[1], (struct VIDMM_GLOBAL_ALLOC ***)a2);
    if ( (byte_140081241 & 1) != 0 )
      McTemplateK0p_EtwWriteTransfer();
  }
  *(_BYTE *)(v17 + 43) = 1;
  return 0LL;
}
