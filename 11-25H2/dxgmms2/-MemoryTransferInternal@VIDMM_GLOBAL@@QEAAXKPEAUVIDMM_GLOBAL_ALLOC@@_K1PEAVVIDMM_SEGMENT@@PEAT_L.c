/*
 * XREFs of ?MemoryTransferInternal@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1400A7ADC
 * Callers:
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1400A79DC (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTE.c)
 * Callees:
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x140038280 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     ?DriverId@VIDMM_SEGMENT@@QEBAGXZ @ 0x14003835C (-DriverId@VIDMM_SEGMENT@@QEBAGXZ.c)
 *     McTemplateK0pppxxq_EtwWriteTransfer @ 0x1400417A8 (McTemplateK0pppxxq_EtwWriteTransfer.c)
 *     memset @ 0x140056780 (memset.c)
 *     ?MemoryTransferUsingGpuVa@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1400A76F8 (-MemoryTransferUsingGpuVa@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT.c)
 *     ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@1PEAU_MDL@@2131U_DXGK_TRANSFERFLAGS@@1@Z @ 0x1400A804C (-MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400ABB28 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z @ 0x1400BBF84 (-VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1400BC060 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUI.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAA_NKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEA_KPEAX@Z @ 0x1400BC5E0 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAA_NKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1400BD134 (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGB.c)
 *     ?VerifyAllocationIsIdle@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400FEF80 (-VerifyAllocationIsIdle@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?IsAllocationInUse@VIDMM_GLOBAL@@QEBAEPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400FEFDC (-IsAllocationInUse@VIDMM_GLOBAL@@QEBAEPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ChargeEvictionTransfer@VIDMM_PROCESS@@QEAAXK_K@Z @ 0x140105978 (-ChargeEvictionTransfer@VIDMM_PROCESS@@QEAAXK_K@Z.c)
 */

void __fastcall VIDMM_GLOBAL::MemoryTransferInternal(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        struct VIDMM_GLOBAL_ALLOC *a3,
        SIZE_T a4,
        unsigned __int64 a5,
        struct VIDMM_SEGMENT *a6,
        union _LARGE_INTEGER *a7,
        struct _MDL *a8,
        struct VIDMM_SEGMENT *a9,
        union _LARGE_INTEGER *a10,
        struct _MDL *a11,
        DXGK_TRANSFERFLAGS a12)
{
  unsigned int v13; // r15d
  LONGLONG QuadPart; // rdx
  LONGLONG v17; // rcx
  __int64 v18; // rcx
  struct VIDMM_GLOBAL_ALLOC *v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rax
  unsigned __int64 v22; // rbx
  __int64 v23; // rcx
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  UINT Value; // eax
  D3DGPU_VIRTUAL_ADDRESS v27; // rax
  UINT v28; // ecx
  __int64 v29; // rax
  struct _MDL *v30; // rax
  UINT v31; // ecx
  __int64 v32; // rax
  struct _MDL *v33; // rax
  BOOL v34; // ecx
  int v35; // eax
  ADAPTER_RENDER *v36; // rcx
  __int64 v37; // rcx
  int v38; // eax
  unsigned int v39; // r15d
  __int64 v40; // rbx
  HANDLE CurrentProcessId; // rax
  __int64 v42; // rdx
  __int64 v43; // r8
  struct VIDMM_SEGMENT *v44; // [rsp+48h] [rbp-C0h]
  __int64 v45; // [rsp+78h] [rbp-90h]
  unsigned __int64 v46; // [rsp+80h] [rbp-88h] BYREF
  struct _DXGKARG_BUILDPAGINGBUFFER v47; // [rsp+88h] [rbp-80h] BYREF
  int v48; // [rsp+1F8h] [rbp+F0h]

  v13 = a2;
  v45 = a2;
  if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 5029) + 8LL * a2) + 476LL) & 0x20) == 0 )
  {
    memset(&v47, 0, sizeof(v47));
    if ( g_IsInternalReleaseOrDbg )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v18) + 24) = a3;
      WdLogGlobalForLineNumber = 13279;
      v21 = WdLogNewEntry5_WdTrace(v20);
      v22 = a5;
      *(_QWORD *)(v21 + 24) = a4;
      *(_QWORD *)(v21 + 32) = a5;
      WdLogGlobalForLineNumber = 13281;
      v24 = (_QWORD *)WdLogNewEntry5_WdTrace(v23);
      v24[3] = a6;
      v24[4] = a7;
      v24[5] = a8;
      WdLogGlobalForLineNumber = 13283;
      v25 = (_QWORD *)WdLogNewEntry5_WdTrace(a8);
      v25[4] = a10;
      v25[5] = a11;
      v25[3] = a9;
      WdLogGlobalForLineNumber = 13285;
    }
    else
    {
      v22 = a5;
    }
    VIDMM_GLOBAL::SetupForBuildPagingBuffer(this, v13, v19, &v47);
    Value = a12.Value;
    v47.Transfer.Flags = a12;
    if ( a3 )
    {
      if ( !v22 )
      {
        Value = a12.Value | 8;
        v47.Transfer.Flags.Value = a12.Value | 8;
      }
      if ( a4 + v22 == *(_QWORD *)(*(_QWORD *)a3 + 16LL) )
        v47.Transfer.Flags.Value = Value | 0x10;
    }
    while ( 1 )
    {
      VIDMM_GLOBAL::SetupForBuildPagingBufferIteration(this, v13, a3, &v47);
      if ( a3 )
        v27 = *(_QWORD *)(*((_QWORD *)a3 + 47) + 48LL);
      else
        v27 = 0LL;
      v47.Operation = DXGK_OPERATION_TRANSFER;
      v47.Transfer.MdlOffset = 0;
      v47.Transfer.TransferOffset = v22;
      v47.UpdateContextAllocation.ContextAllocation = v27;
      v47.Transfer.TransferSize = a4;
      if ( a6 )
      {
        v28 = VIDMM_SEGMENT::DriverId(a6);
        v29 = *((_QWORD *)a6 + 6);
        v47.Transfer.Source.SegmentId = v28;
        v30 = (struct _MDL *)(a7->QuadPart + v29);
      }
      else
      {
        v47.Transfer.Source.SegmentId = 0;
        v30 = a8;
      }
      v47.Transfer.Source.SegmentAddress.QuadPart = (LONGLONG)v30;
      if ( a9 )
      {
        v31 = VIDMM_SEGMENT::DriverId(a9);
        v32 = *((_QWORD *)a9 + 6);
        v47.Transfer.Destination.SegmentId = v31;
        v33 = (struct _MDL *)(a10->QuadPart + v32);
      }
      else
      {
        v47.Transfer.Destination.SegmentId = 0;
        v33 = a11;
      }
      v47.Transfer.Destination.SegmentAddress.QuadPart = (LONGLONG)v33;
      if ( a3 )
        v34 = VIDMM_GLOBAL::IsAllocationInUse(this, a3) == 0;
      else
        v34 = 1;
      v47.Transfer.Flags.Value = v47.Transfer.Flags.Value & 0xFFFFFFFB | (4 * v34);
      v35 = ADAPTER_RENDER::DdiBuildPagingBuffer(*((ADAPTER_RENDER **)this + 2), &v47);
      v48 = v35;
      if ( a3 && v35 == -1071775486 )
      {
        VIDMM_GLOBAL::WaitForAllPagingEngines(this, a3);
        VIDMM_GLOBAL::VerifyAllocationIsIdle(this, a3);
        v36 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
        v47.Transfer.Flags.Value |= 4u;
        v48 = ADAPTER_RENDER::DdiBuildPagingBuffer(v36, &v47);
      }
      v37 = *((_QWORD *)this + 870);
      if ( v37 && (!a9 || (*((_DWORD *)a9 + 26) & 0x1001) != 0) )
        VIDMM_PROCESS::ChargeEvictionTransfer(
          *(VIDMM_PROCESS **)(v37 + 8),
          *(_DWORD *)(*((_QWORD *)this + 3) + 240LL),
          a4);
      _InterlockedAdd64((volatile signed __int64 *)this + 978, a4);
      if ( (byte_140081241 & 0x10) == 0 )
        goto LABEL_48;
      if ( !a6 )
        goto LABEL_46;
      v38 = *((_DWORD *)a6 + 26);
      if ( (v38 & 0x1001) == 0 )
      {
        if ( a9 && (*((_DWORD *)a9 + 26) & 2) != 0 )
          v39 = 4;
        else
          v39 = 2;
        goto LABEL_47;
      }
      v39 = 3;
      if ( (v38 & 2) == 0 )
LABEL_46:
        v39 = 1;
LABEL_47:
      v40 = *((_QWORD *)this + v45 + 143);
      CurrentProcessId = PsGetCurrentProcessId();
      LODWORD(v44) = v39;
      McTemplateK0pppxxq_EtwWriteTransfer(a5, v42, v43, CurrentProcessId, a3, v40, a5, a4, v44);
      VidMmRecordTransfer((VIDMM_GLOBAL *)((char *)this + 7112), a4, v39);
      v13 = a2;
LABEL_48:
      v46 = 0LL;
      VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(this, v13, a3, &v47, v48, 0, &v46, 0LL);
      LODWORD(v22) = a5;
      if ( v48 >= 0 )
        return;
    }
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)a3 + 192, 0LL);
  if ( *((struct VIDMM_GLOBAL_ALLOC **)a3 + 12) == (struct VIDMM_GLOBAL_ALLOC *)((char *)a3 + 96) )
  {
    ExReleasePushLockExclusiveEx((char *)a3 + 192, 0LL);
    KeLeaveCriticalRegion();
    if ( a10 )
      QuadPart = a10->QuadPart;
    else
      QuadPart = 0LL;
    if ( a7 )
      v17 = a7->QuadPart;
    else
      v17 = 0LL;
    VIDMM_GLOBAL::MemoryTransferUsingGpuVaWorker(this, v13, a3, a4, a5, a6, v17, a8, a9, QuadPart, a11, 0LL, a12, 0LL);
  }
  else
  {
    VIDMM_GLOBAL::MemoryTransferUsingGpuVa(this, v13, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
    ExReleasePushLockExclusiveEx((char *)a3 + 192, 0LL);
    KeLeaveCriticalRegion();
  }
}
