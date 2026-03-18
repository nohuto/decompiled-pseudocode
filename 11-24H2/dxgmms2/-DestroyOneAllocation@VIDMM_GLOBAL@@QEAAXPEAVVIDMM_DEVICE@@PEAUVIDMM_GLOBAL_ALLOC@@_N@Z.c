/*
 * XREFs of ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1400AA4F4
 * Callers:
 *     ?DestroyContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_CONTEXT_ALLOC@@@Z @ 0x1400A9994 (-DestroyContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_CONTEXT_ALLOC@@@Z.c)
 *     ?DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1400A9B04 (-DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z.c)
 *     ?DestroyAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1400AA4DC (-DestroyAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@@Z.c)
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1400AAB2C (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     RemoveDmaBufferFromPool @ 0x1400B7C44 (RemoveDmaBufferFromPool.c)
 *     AddDmaBufferToPool @ 0x1400B8988 (AddDmaBufferToPool.c)
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAUVIDMM_CONTEXT_ALLOC@@@Z @ 0x1400DB434 (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 * Callees:
 *     ?FreeCrossAdapterDataDpc@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_CROSSADAPTER_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14001BDAC (-FreeCrossAdapterDataDpc@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_CROSSADAPTER_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC.c)
 *     ??3@YAXPEAX@Z @ 0x14001D2D0 (--3@YAXPEAX@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140031710 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140031A2C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?ReleaseReference@VIDMM_FLIP_QUEUE_REFERENCES@@QEAAXI@Z @ 0x1400382B4 (-ReleaseReference@VIDMM_FLIP_QUEUE_REFERENCES@@QEAAXI@Z.c)
 *     ??_GVIDMM_GLOBAL_ALLOC@@QEAAPEAXI@Z @ 0x140038698 (--_GVIDMM_GLOBAL_ALLOC@@QEAAPEAXI@Z.c)
 *     McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer @ 0x14003ACAC (McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer.c)
 *     McTemplateK0puu_EtwWriteTransfer @ 0x14003EC1C (McTemplateK0puu_EtwWriteTransfer.c)
 *     ?VidMmSynchronizeWithWorkerThreadRun@@YAXPEBUVIDMM_WORKER_THREAD@@@Z @ 0x14004449C (-VidMmSynchronizeWithWorkerThreadRun@@YAXPEBUVIDMM_WORKER_THREAD@@@Z.c)
 *     ?SysMmFreeLogicalMemory@@YAXPEAUSYSMM_ADAPTER@@PEAX@Z @ 0x14004B3B0 (-SysMmFreeLogicalMemory@@YAXPEAUSYSMM_ADAPTER@@PEAX@Z.c)
 *     Feature_Servicing_KcsanInVidMmCore__private_IsEnabledDeviceUsageNoInline @ 0x14004C558 (Feature_Servicing_KcsanInVidMmCore__private_IsEnabledDeviceUsageNoInline.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140055638 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     __security_check_cookie @ 0x140055E20 (__security_check_cookie.c)
 *     memset @ 0x140056340 (memset.c)
 *     ?FreePhysical@VIDMM_GLOBAL@@CAXPEAX@Z @ 0x140091AB8 (-FreePhysical@VIDMM_GLOBAL@@CAXPEAX@Z.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAUVIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1400A9EF4 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAUVIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DE.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400B1D24 (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_GLOBAL_ALLOC@@PEAUVI.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400B3F08 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     VidSchDestroySyncObject @ 0x1400BAF10 (VidSchDestroySyncObject.c)
 *     ?VidMmiClosePartition@@YAXPEAUVIDMM_PARTITION@@@Z @ 0x1400BC1A8 (-VidMmiClosePartition@@YAXPEAUVIDMM_PARTITION@@@Z.c)
 *     ?QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1400BCAFC (-QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1400C10B0 (-UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1400C38B0 (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?VidMmGetAllocationHint@@YAPEBU_DXGK_ALLOCATIONUSAGEHINT@@PEBUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400F4E40 (-VidMmGetAllocationHint@@YAPEBU_DXGK_ALLOCATIONUSAGEHINT@@PEBUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?DestroyPhysicalAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1400F55E0 (-DestroyPhysicalAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@Z.c)
 *     ?RemoveAllocationFromOfferList@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400FBB90 (-RemoveAllocationFromOfferList@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x140102EC4 (-RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?DestroyCrossAdapterAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_CROSSADAPTER_ALLOC@@@Z @ 0x14010A5AC (-DestroyCrossAdapterAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_CROSSADAPTER_ALLOC@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_GLOBAL::DestroyOneAllocation(
        VIDMM_GLOBAL *this,
        struct VIDMM_DEVICE *a2,
        struct VIDMM_GLOBAL_ALLOC *a3,
        char a4)
{
  __int64 v4; // r14
  __int64 v9; // rax
  bool v10; // bl
  VIDMM_GLOBAL *v11; // rcx
  struct VIDMM_GLOBAL_ALLOC *v12; // rbx
  int v13; // eax
  bool v14; // r8
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  KSPIN_LOCK *v19; // rdx
  struct _VIDMM_POOL_BLOCK *v20; // rcx
  __int64 v21; // rdx
  const struct _DXGK_ALLOCATIONUSAGEHINT *AllocationHint; // rax
  int *v23; // rdx
  int v24; // r15d
  int v25; // r12d
  __int64 v26; // rbx
  HANDLE CurrentProcessId; // rax
  __int64 v28; // r8
  int IsEnabledDeviceUsageNoInline; // eax
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rdx
  char *v32; // rax
  int *v33; // r9
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 i; // rbx
  void *v38; // rcx
  void *v39; // rdx
  struct _D3DDDICB_DESTROYALLOCATION2FLAGS v40[2]; // [rsp+20h] [rbp-160h]
  struct _KEVENT **v41; // [rsp+28h] [rbp-158h]
  int v42; // [rsp+48h] [rbp-138h]
  int v43; // [rsp+60h] [rbp-120h]
  int v44; // [rsp+88h] [rbp-F8h]
  __int16 v45; // [rsp+100h] [rbp-80h]
  UINT SlicePitch; // [rsp+104h] [rbp-7Ch]
  UINT Depth; // [rsp+108h] [rbp-78h]
  UINT Pitch; // [rsp+10Ch] [rbp-74h]
  UINT Height; // [rsp+110h] [rbp-70h]
  UINT Width; // [rsp+114h] [rbp-6Ch]
  UINT ByteOffset; // [rsp+118h] [rbp-68h]
  UINT SwizzledFormat; // [rsp+11Ch] [rbp-64h]
  D3DDDIFORMAT Format; // [rsp+120h] [rbp-60h]
  UINT Value; // [rsp+124h] [rbp-5Ch]
  UINT Version; // [rsp+128h] [rbp-58h]
  int v56; // [rsp+12Ch] [rbp-54h]
  int v57; // [rsp+130h] [rbp-50h]
  int v58; // [rsp+134h] [rbp-4Ch]
  int v59; // [rsp+138h] [rbp-48h]
  int v60; // [rsp+13Ch] [rbp-44h]
  int v61; // [rsp+140h] [rbp-40h]
  __int64 v62; // [rsp+148h] [rbp-38h]
  __int64 v63; // [rsp+150h] [rbp-30h]
  __int64 v64; // [rsp+158h] [rbp-28h]
  __int64 v65; // [rsp+160h] [rbp-20h]
  _BYTE v66[24]; // [rsp+168h] [rbp-18h] BYREF
  _QWORD v67[12]; // [rsp+180h] [rbp+0h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+1E0h] [rbp+60h] BYREF

  v4 = *(_QWORD *)a3;
  if ( g_IsInternalReleaseOrDbg )
  {
    v9 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v9 + 24) = a3;
    *(_QWORD *)(v9 + 32) = a2;
    WdLogGlobalForLineNumber = 3832;
  }
  v10 = 0;
  if ( (*((_DWORD *)a3 + 6) & 0x100) == 0 )
  {
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v66, (struct _KTHREAD **)this + 4988);
    if ( *((_QWORD *)a3 + 35) )
      VIDMM_GLOBAL::RemoveAllocationFromOfferList(v11, a3);
    if ( *((_QWORD *)a3 + 37) )
      VIDMM_GLOBAL::RemoveAllocationFromDecommitList(this, a3);
    v12 = (struct VIDMM_GLOBAL_ALLOC *)*((_QWORD *)this + 5598);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v66);
    v10 = v12 == a3;
  }
  if ( (*((_DWORD *)a3 + 8) & 4) != 0 )
  {
    if ( (*(_DWORD *)(v4 + 56) & 0x40) != 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    if ( *(_QWORD *)(v4 + 64) || (*(_DWORD *)(v4 + 56) & 0x40) != 0 )
    {
      memset(v67, 0, 0x58uLL);
      v13 = *((_DWORD *)a3 + 6) & 0x3F;
      LODWORD(v67[0]) = 112;
      HIDWORD(v67[0]) = v13;
      v67[5] = a3;
      LODWORD(v67[6]) = 0;
      VIDMM_GLOBAL::QueueSystemCleanupCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v67, v14);
      v10 = 0;
    }
    v15 = *(_QWORD *)(*((_QWORD *)a3 + 6) + 32LL);
    if ( (*((_DWORD *)a3 + 8) & 2) != 0 )
    {
      VIDMM_SEGMENT::UnlockAllocationBackingStore(this, a3, 0LL);
      VIDMM_GLOBAL::ReturnPinnedBackingStore(this, *(_QWORD *)(v4 + 16));
      *((_DWORD *)a3 + 8) &= ~2u;
    }
    v16 = *((_QWORD *)a3 + 6);
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(**(PRKPROCESS **)(v16 + 8), &ApcState);
    VIDMM_GLOBAL::CloseOneAllocation(this, (struct VIDMM_ALLOC *)(v15 - 40), 0LL, 0, 0, 0LL);
    KeUnstackDetachProcess(&ApcState);
    *((_QWORD *)a3 + 6) = 0LL;
  }
  if ( v10 )
    VidMmSynchronizeWithWorkerThreadRun(*(const struct VIDMM_WORKER_THREAD **)this);
  if ( a4 )
    VIDMM_GLOBAL::WaitForAllPagingEngines(this, a3);
  if ( (*((_DWORD *)a3 + 8) & 0x20) != 0 )
    VIDMM_GLOBAL::UncommitGlobalBackingStore(this, a3, 1);
  VidMmiClosePartition(**((struct VIDMM_PARTITION ***)a3 + 44));
  v19 = (KSPIN_LOCK *)*((_QWORD *)a3 + 45);
  if ( v19 )
  {
    VIDMM_GLOBAL::FreeCrossAdapterDataDpc((VIDMM_GLOBAL *)v17, v19, a3);
    v17 = (unsigned int)_InterlockedDecrement(*((volatile signed __int32 **)a3 + 45));
    if ( (_DWORD)v17 )
    {
      if ( (int)v17 < 0 )
      {
        v33 = (int *)*((_QWORD *)a3 + 45);
        v34 = *v33;
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 66LL, v33, v34, 0LL);
        WdLogGlobalForLineNumber = 195;
LABEL_43:
        ++*((_DWORD *)this + 1898);
        *((_QWORD *)this + 950) += v30;
        v35 = *(_QWORD *)(v4 + 16);
        if ( (**((_DWORD **)a3 + 49) & 0x20000000) != 0 )
        {
          ++*((_DWORD *)this + 1930);
          *((_QWORD *)this + 966) += v35;
        }
        else
        {
          ++*((_DWORD *)this + 1934);
          *((_QWORD *)this + 968) += v35;
        }
        *((_QWORD *)this + 5025) -= *(_QWORD *)(v4 + 16);
        goto LABEL_47;
      }
    }
    else
    {
      v20 = *(struct _VIDMM_POOL_BLOCK **)(*((_QWORD *)a3 + 45) + 48LL);
      if ( v20 )
        VIDMM_GLOBAL::FreePhysical(v20);
      VIDMM_GLOBAL::DestroyCrossAdapterAllocation(v20, *((struct VIDMM_CROSSADAPTER_ALLOC **)a3 + 45));
    }
    *((_QWORD *)a3 + 45) = 0LL;
  }
  v21 = *((_QWORD *)a3 + 49);
  if ( *(_WORD *)(v21 + 8) && (byte_140081241 & 1) != 0 )
  {
    LOBYTE(v41) = *((_BYTE *)a3 + 312);
    *(_BYTE *)&v40[0].0 = *(_BYTE *)(v21 + 8);
    McTemplateK0puu_EtwWriteTransfer(v17, &EventReportOfferAllocation, v18, a3, *(_QWORD *)&v40[0].0, v41);
  }
  AllocationHint = VidMmGetAllocationHint(a3);
  if ( (byte_140081241 & 0x10) != 0 )
  {
    v45 = *((_WORD *)a3 + 12) & 0x3F;
    v62 = *((_QWORD *)a3 + 28);
    SlicePitch = AllocationHint->v1.SlicePitch;
    Depth = AllocationHint->v1.Depth;
    Pitch = AllocationHint->v1.Pitch;
    Height = AllocationHint->v1.Height;
    Width = AllocationHint->v1.Width;
    ByteOffset = AllocationHint->v1.ByteOffset;
    SwizzledFormat = AllocationHint->v1.SwizzledFormat;
    v24 = (*((_DWORD *)a3 + 6) >> 8) & 1;
    v25 = (*((_DWORD *)a3 + 8) >> 1) & 1;
    Format = AllocationHint->v1.Format;
    Version = AllocationHint->Version;
    v63 = *((_QWORD *)a3 + 1);
    v56 = *(_DWORD *)(v4 + 48);
    v57 = *(_DWORD *)(v4 + 36);
    v58 = *(_DWORD *)(v4 + 44);
    v59 = *(_DWORD *)(v4 + 40);
    v60 = *(_DWORD *)(v4 + 32);
    v64 = *(_QWORD *)(v4 + 16);
    v61 = *v23;
    v65 = *((_QWORD *)this + 3);
    Value = AllocationHint->v1.Flags.Value;
    LOBYTE(v26) = 0;
    if ( a2 )
      v26 = *((_QWORD *)a2 + 3);
    CurrentProcessId = PsGetCurrentProcessId();
    McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer(
      v65,
      &EventDestroyAdapterAllocation,
      v28,
      (__int64)CurrentProcessId,
      v26,
      v65,
      v61,
      v64,
      v60,
      v42,
      v59,
      v58,
      v43,
      v57,
      v56,
      (char)a3,
      v63,
      v44,
      Version,
      Value,
      Format,
      SwizzledFormat,
      ByteOffset,
      Width,
      Height,
      Pitch,
      Depth,
      SlicePitch,
      v25,
      v62,
      v45,
      v24);
  }
  IsEnabledDeviceUsageNoInline = Feature_Servicing_KcsanInVidMmCore__private_IsEnabledDeviceUsageNoInline();
  v30 = *(_QWORD *)(v4 + 16);
  if ( !IsEnabledDeviceUsageNoInline )
    goto LABEL_43;
  _InterlockedAdd((volatile signed __int32 *)this + 1898, 1u);
  _InterlockedAdd64((volatile signed __int64 *)this + 950, v30);
  v31 = *(_QWORD *)(v4 + 16);
  v32 = (char *)this + 7720;
  if ( (**((_DWORD **)a3 + 49) & 0x20000000) == 0 )
    v32 = (char *)this + 7736;
  _InterlockedAdd((volatile signed __int32 *)v32, 1u);
  _InterlockedAdd64((volatile signed __int64 *)v32 + 1, v31);
  _InterlockedAdd64((volatile signed __int64 *)this + 5025, -*(_QWORD *)(v4 + 16));
LABEL_47:
  v36 = *((_QWORD *)a3 + 49);
  if ( v36 )
  {
    if ( *(_QWORD *)(v36 + 32) )
    {
      for ( i = 0LL; i < 16; i += 8LL )
      {
        v38 = *(void **)(i + *(_QWORD *)(*((_QWORD *)a3 + 49) + 32LL));
        if ( v38 )
        {
          VidSchDestroySyncObject(v38);
          *(_QWORD *)(i + *(_QWORD *)(*((_QWORD *)a3 + 49) + 32LL)) = 0LL;
        }
      }
      operator delete(*(void **)(*((_QWORD *)a3 + 49) + 32LL));
      *(_QWORD *)(*((_QWORD *)a3 + 49) + 32LL) = 0LL;
    }
    v30 = *(_QWORD *)(*((_QWORD *)a3 + 49) + 24LL);
    if ( v30 )
    {
      VIDMM_FLIP_QUEUE_REFERENCES::ReleaseReference((int *)v30);
      *(_QWORD *)(*((_QWORD *)a3 + 49) + 24LL) = 0LL;
    }
  }
  v39 = (void *)*((_QWORD *)a3 + 46);
  if ( v39 )
    SysMmFreeLogicalMemory(*(struct SYSMM_ADAPTER **)(*((_QWORD *)this + 3) + 224LL), v39);
  if ( *(_QWORD *)a3 )
  {
    VIDMM_PHYSICAL_ADAPTER::DestroyPhysicalAllocation(
      (VIDMM_PHYSICAL_ADAPTER *)v30,
      *(struct VIDMM_PHYSICAL_ALLOC **)a3);
    *(_QWORD *)a3 = 0LL;
  }
  if ( !*((_DWORD *)a3 + 64) )
  {
    operator delete(*((void **)a3 + 49));
    *((_DWORD *)a3 + 6) |= 0x400000u;
    VIDMM_GLOBAL_ALLOC::`scalar deleting destructor'(a3);
  }
}
