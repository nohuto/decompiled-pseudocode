/*
 * XREFs of ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1400B8AEC
 * Callers:
 *     RemoveDmaBufferFromPool @ 0x1400AF894 (RemoveDmaBufferFromPool.c)
 *     AddDmaBufferToPool @ 0x1400B05D8 (AddDmaBufferToPool.c)
 *     ?DestroyContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_CONTEXT_ALLOC@@@Z @ 0x1400B808C (-DestroyContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_CONTEXT_ALLOC@@@Z.c)
 *     ?DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1400B820C (-DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z.c)
 *     ?DestroyAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1400B8AD4 (-DestroyAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@@Z.c)
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1400B9124 (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAUVIDMM_CONTEXT_ALLOC@@@Z @ 0x1400E736C (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 * Callees:
 *     ?FreeCrossAdapterDataDpc@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_CROSSADAPTER_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14002720C (-FreeCrossAdapterDataDpc@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_CROSSADAPTER_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC.c)
 *     ??3@YAXPEAX@Z @ 0x140028730 (--3@YAXPEAX@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400338D0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140033D04 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?ReleaseReference@VIDMM_FLIP_QUEUE_REFERENCES@@QEAAXI@Z @ 0x1400395E8 (-ReleaseReference@VIDMM_FLIP_QUEUE_REFERENCES@@QEAAXI@Z.c)
 *     ??_GVIDMM_GLOBAL_ALLOC@@QEAAPEAXI@Z @ 0x140039A08 (--_GVIDMM_GLOBAL_ALLOC@@QEAAPEAXI@Z.c)
 *     McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer @ 0x14003CC8C (McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer.c)
 *     McTemplateK0puu_EtwWriteTransfer @ 0x14004081C (McTemplateK0puu_EtwWriteTransfer.c)
 *     ?VidMmSynchronizeWithWorkerThreadRun@@YAXPEBUVIDMM_WORKER_THREAD@@@Z @ 0x14004603C (-VidMmSynchronizeWithWorkerThreadRun@@YAXPEBUVIDMM_WORKER_THREAD@@@Z.c)
 *     ?SysMmFreeLogicalMemory@@YAXPEAUSYSMM_ADAPTER@@PEAX@Z @ 0x14004BCA0 (-SysMmFreeLogicalMemory@@YAXPEAUSYSMM_ADAPTER@@PEAX@Z.c)
 *     Feature_Servicing_KcsanInVidMmCore__private_IsEnabledDeviceUsageNoInline @ 0x14004CD44 (Feature_Servicing_KcsanInVidMmCore__private_IsEnabledDeviceUsageNoInline.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140055A70 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 *     memset @ 0x140056780 (memset.c)
 *     ?FreePhysical@VIDMM_GLOBAL@@CAXPEAX@Z @ 0x140091AE0 (-FreePhysical@VIDMM_GLOBAL@@CAXPEAX@Z.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400A9714 (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_GLOBAL_ALLOC@@PEAUVI.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400ABB28 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     VidSchDestroySyncObject @ 0x1400B2F30 (VidSchDestroySyncObject.c)
 *     ?VidMmiClosePartition@@YAXPEAUVIDMM_PARTITION@@@Z @ 0x1400B4204 (-VidMmiClosePartition@@YAXPEAUVIDMM_PARTITION@@@Z.c)
 *     ?QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1400B4C3C (-QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAUVIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1400B85FC (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAUVIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DE.c)
 *     ?UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1400C0750 (-UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1400C2F6C (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?VidMmGetAllocationHint@@YAPEBU_DXGK_ALLOCATIONUSAGEHINT@@PEBUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400F77C0 (-VidMmGetAllocationHint@@YAPEBU_DXGK_ALLOCATIONUSAGEHINT@@PEBUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?DestroyPhysicalAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1400F78A0 (-DestroyPhysicalAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@Z.c)
 *     ?RemoveAllocationFromOfferList@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400FC570 (-RemoveAllocationFromOfferList@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x140103FD4 (-RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?DestroyCrossAdapterAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_CROSSADAPTER_ALLOC@@@Z @ 0x14010C8AC (-DestroyCrossAdapterAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_CROSSADAPTER_ALLOC@@@Z.c)
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
  __int64 v14; // r15
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  KSPIN_LOCK *v18; // rdx
  struct _VIDMM_POOL_BLOCK *v19; // rcx
  __int64 v20; // rdx
  const struct _DXGK_ALLOCATIONUSAGEHINT *AllocationHint; // rax
  int *v22; // rdx
  int v23; // r15d
  int v24; // r12d
  __int64 v25; // rbx
  HANDLE CurrentProcessId; // rax
  __int64 v27; // r8
  int IsEnabledDeviceUsageNoInline; // eax
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  char *v31; // rax
  int *v32; // r9
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 i; // rbx
  struct _VIDSCH_SYNC_OBJECT *v36; // rcx
  void *v37; // rdx
  struct _D3DDDICB_DESTROYALLOCATION2FLAGS v38[2]; // [rsp+20h] [rbp-160h]
  struct _KEVENT **v39; // [rsp+28h] [rbp-158h]
  int v40; // [rsp+48h] [rbp-138h]
  int v41; // [rsp+60h] [rbp-120h]
  int v42; // [rsp+88h] [rbp-F8h]
  __int16 v43; // [rsp+100h] [rbp-80h]
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
  int v54; // [rsp+12Ch] [rbp-54h]
  int v55; // [rsp+130h] [rbp-50h]
  int v56; // [rsp+134h] [rbp-4Ch]
  int v57; // [rsp+138h] [rbp-48h]
  int v58; // [rsp+13Ch] [rbp-44h]
  int v59; // [rsp+140h] [rbp-40h]
  __int64 v60; // [rsp+148h] [rbp-38h]
  __int64 v61; // [rsp+150h] [rbp-30h]
  __int64 v62; // [rsp+158h] [rbp-28h]
  __int64 v63; // [rsp+160h] [rbp-20h]
  _BYTE v64[24]; // [rsp+168h] [rbp-18h] BYREF
  _QWORD v65[12]; // [rsp+180h] [rbp+0h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+1E0h] [rbp+60h] BYREF

  v4 = *(_QWORD *)a3;
  if ( g_IsInternalReleaseOrDbg )
  {
    v9 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v9 + 24) = a3;
    *(_QWORD *)(v9 + 32) = a2;
    WdLogGlobalForLineNumber = 3816;
  }
  v10 = 0;
  if ( (*((_DWORD *)a3 + 6) & 0x100) == 0 )
  {
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v64, (struct _KTHREAD **)this + 4988);
    if ( *((_QWORD *)a3 + 33) )
      VIDMM_GLOBAL::RemoveAllocationFromOfferList(v11, a3);
    if ( *((_QWORD *)a3 + 35) )
      VIDMM_GLOBAL::RemoveAllocationFromDecommitList(this, a3);
    v12 = (struct VIDMM_GLOBAL_ALLOC *)*((_QWORD *)this + 5598);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v64);
    v10 = v12 == a3;
  }
  if ( (*((_DWORD *)a3 + 8) & 4) != 0 )
  {
    if ( (*(_DWORD *)(v4 + 56) & 0x40) != 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    if ( *(_QWORD *)(v4 + 64) || (*(_DWORD *)(v4 + 56) & 0x40) != 0 )
    {
      memset(v65, 0, 0x58uLL);
      v13 = *((_DWORD *)a3 + 6) & 0x3F;
      LODWORD(v65[0]) = 112;
      HIDWORD(v65[0]) = v13;
      v65[5] = a3;
      LODWORD(v65[6]) = 0;
      VIDMM_GLOBAL::QueueSystemCleanupCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v65);
      v10 = 0;
    }
    v14 = *(_QWORD *)(*((_QWORD *)a3 + 6) + 32LL);
    if ( (*((_DWORD *)a3 + 8) & 2) != 0 )
    {
      VIDMM_SEGMENT::UnlockAllocationBackingStore(this, a3, 0LL);
      VIDMM_GLOBAL::ReturnPinnedBackingStore(this, *(_QWORD *)(v4 + 16));
      *((_DWORD *)a3 + 8) &= ~2u;
    }
    v15 = *((_QWORD *)a3 + 6);
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(**(PRKPROCESS **)(v15 + 8), &ApcState);
    VIDMM_GLOBAL::CloseOneAllocation(this, (struct VIDMM_ALLOC *)(v14 - 40), 0LL, 0, 0, 0LL);
    KeUnstackDetachProcess(&ApcState);
    *((_QWORD *)a3 + 6) = 0LL;
  }
  if ( v10 )
    VidMmSynchronizeWithWorkerThreadRun(*(const struct VIDMM_WORKER_THREAD **)this);
  if ( a4 )
    VIDMM_GLOBAL::WaitForAllPagingEngines(this, a3);
  if ( (*((_DWORD *)a3 + 8) & 0x20) != 0 )
    VIDMM_GLOBAL::UncommitGlobalBackingStore(this, a3, 1);
  VidMmiClosePartition(**((struct VIDMM_PARTITION ***)a3 + 42));
  v18 = (KSPIN_LOCK *)*((_QWORD *)a3 + 43);
  if ( v18 )
  {
    VIDMM_GLOBAL::FreeCrossAdapterDataDpc((VIDMM_GLOBAL *)v16, v18, a3);
    v16 = (unsigned int)_InterlockedDecrement(*((volatile signed __int32 **)a3 + 43));
    if ( (_DWORD)v16 )
    {
      if ( (int)v16 < 0 )
      {
        v32 = (int *)*((_QWORD *)a3 + 43);
        v33 = *v32;
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 66LL, v32, v33, 0LL);
        WdLogGlobalForLineNumber = 195;
LABEL_43:
        ++*((_DWORD *)this + 1898);
        *((_QWORD *)this + 950) += v29;
        v30 = *(_QWORD *)(v4 + 16);
        if ( (**((_DWORD **)a3 + 47) & 0x20000000) != 0 )
        {
          ++*((_DWORD *)this + 1930);
          *((_QWORD *)this + 966) += v30;
        }
        else
        {
          ++*((_DWORD *)this + 1934);
          *((_QWORD *)this + 968) += v30;
        }
        *((_QWORD *)this + 5025) -= *(_QWORD *)(v4 + 16);
        goto LABEL_47;
      }
    }
    else
    {
      v19 = *(struct _VIDMM_POOL_BLOCK **)(*((_QWORD *)a3 + 43) + 48LL);
      if ( v19 )
        VIDMM_GLOBAL::FreePhysical(v19);
      VIDMM_GLOBAL::DestroyCrossAdapterAllocation(v19, *((struct VIDMM_CROSSADAPTER_ALLOC **)a3 + 43));
    }
    *((_QWORD *)a3 + 43) = 0LL;
  }
  v20 = *((_QWORD *)a3 + 47);
  if ( *(_WORD *)(v20 + 8) && (byte_140081241 & 1) != 0 )
  {
    LOBYTE(v39) = *((_BYTE *)a3 + 296);
    *(_BYTE *)&v38[0].0 = *(_BYTE *)(v20 + 8);
    McTemplateK0puu_EtwWriteTransfer(v16, &EventReportOfferAllocation, v17, a3, *(_QWORD *)&v38[0].0, v39);
  }
  AllocationHint = VidMmGetAllocationHint(a3);
  if ( (byte_140081241 & 0x10) != 0 )
  {
    v43 = *((_WORD *)a3 + 12) & 0x3F;
    v60 = *((_QWORD *)a3 + 26);
    SlicePitch = AllocationHint->v1.SlicePitch;
    Depth = AllocationHint->v1.Depth;
    Pitch = AllocationHint->v1.Pitch;
    Height = AllocationHint->v1.Height;
    Width = AllocationHint->v1.Width;
    ByteOffset = AllocationHint->v1.ByteOffset;
    SwizzledFormat = AllocationHint->v1.SwizzledFormat;
    v23 = (*((_DWORD *)a3 + 6) >> 8) & 1;
    v24 = (*((_DWORD *)a3 + 8) >> 1) & 1;
    Format = AllocationHint->v1.Format;
    Version = AllocationHint->Version;
    v61 = *((_QWORD *)a3 + 1);
    v54 = *(_DWORD *)(v4 + 48);
    v55 = *(_DWORD *)(v4 + 36);
    v56 = *(_DWORD *)(v4 + 44);
    v57 = *(_DWORD *)(v4 + 40);
    v58 = *(_DWORD *)(v4 + 32);
    v62 = *(_QWORD *)(v4 + 16);
    v59 = *v22;
    v63 = *((_QWORD *)this + 3);
    Value = AllocationHint->v1.Flags.Value;
    LOBYTE(v25) = 0;
    if ( a2 )
      v25 = *((_QWORD *)a2 + 3);
    CurrentProcessId = PsGetCurrentProcessId();
    McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer(
      v63,
      &EventDestroyAdapterAllocation,
      v27,
      (__int64)CurrentProcessId,
      v25,
      v63,
      v59,
      v62,
      v58,
      v40,
      v57,
      v56,
      v41,
      v55,
      v54,
      (char)a3,
      v61,
      v42,
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
      v24,
      v60,
      v43,
      v23);
  }
  IsEnabledDeviceUsageNoInline = Feature_Servicing_KcsanInVidMmCore__private_IsEnabledDeviceUsageNoInline();
  v29 = *(_QWORD *)(v4 + 16);
  if ( !IsEnabledDeviceUsageNoInline )
    goto LABEL_43;
  _InterlockedAdd((volatile signed __int32 *)this + 1898, 1u);
  _InterlockedAdd64((volatile signed __int64 *)this + 950, v29);
  v30 = *(_QWORD *)(v4 + 16);
  v31 = (char *)this + 7720;
  if ( (**((_DWORD **)a3 + 47) & 0x20000000) == 0 )
    v31 = (char *)this + 7736;
  _InterlockedAdd((volatile signed __int32 *)v31, 1u);
  _InterlockedAdd64((volatile signed __int64 *)v31 + 1, v30);
  _InterlockedAdd64((volatile signed __int64 *)this + 5025, -*(_QWORD *)(v4 + 16));
LABEL_47:
  v34 = *((_QWORD *)a3 + 47);
  if ( v34 )
  {
    if ( *(_QWORD *)(v34 + 32) )
    {
      for ( i = 0LL; i < 16; i += 8LL )
      {
        v36 = *(struct _VIDSCH_SYNC_OBJECT **)(i + *(_QWORD *)(*((_QWORD *)a3 + 47) + 32LL));
        if ( v36 )
        {
          VidSchDestroySyncObject(v36, v30);
          *(_QWORD *)(i + *(_QWORD *)(*((_QWORD *)a3 + 47) + 32LL)) = 0LL;
        }
      }
      operator delete(*(void **)(*((_QWORD *)a3 + 47) + 32LL));
      *(_QWORD *)(*((_QWORD *)a3 + 47) + 32LL) = 0LL;
    }
    v29 = *(_QWORD *)(*((_QWORD *)a3 + 47) + 24LL);
    if ( v29 )
    {
      VIDMM_FLIP_QUEUE_REFERENCES::ReleaseReference((int *)v29);
      *(_QWORD *)(*((_QWORD *)a3 + 47) + 24LL) = 0LL;
    }
  }
  v37 = (void *)*((_QWORD *)a3 + 44);
  if ( v37 )
    SysMmFreeLogicalMemory(*(struct SYSMM_ADAPTER **)(*((_QWORD *)this + 3) + 224LL), v37);
  if ( *(_QWORD *)a3 )
  {
    VIDMM_PHYSICAL_ADAPTER::DestroyPhysicalAllocation(
      (VIDMM_PHYSICAL_ADAPTER *)v29,
      *(struct VIDMM_PHYSICAL_ALLOC **)a3);
    *(_QWORD *)a3 = 0LL;
  }
  if ( !*((_DWORD *)a3 + 60) )
  {
    operator delete(*((void **)a3 + 47));
    *((_DWORD *)a3 + 6) |= 0x400000u;
    VIDMM_GLOBAL_ALLOC::`scalar deleting destructor'(a3);
  }
}
