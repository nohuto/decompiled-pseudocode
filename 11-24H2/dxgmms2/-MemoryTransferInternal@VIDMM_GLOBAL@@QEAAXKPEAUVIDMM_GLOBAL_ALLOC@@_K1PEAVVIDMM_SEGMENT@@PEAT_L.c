/*
 * XREFs of ?MemoryTransferInternal@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1400E5F04
 * Callers:
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1400E5E04 (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTE.c)
 * Callees:
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x140036BD8 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     ?DriverId@VIDMM_SEGMENT@@QEBAGXZ @ 0x140036EF0 (-DriverId@VIDMM_SEGMENT@@QEBAGXZ.c)
 *     McTemplateK0pppxxq_EtwWriteTransfer @ 0x1400401A8 (McTemplateK0pppxxq_EtwWriteTransfer.c)
 *     memset @ 0x140056340 (memset.c)
 *     ?VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z @ 0x1400AF1E8 (-VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1400AF2C0 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUI.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAA_NKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEA_KPEAX@Z @ 0x1400AF840 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAA_NKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1400B0394 (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGB.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400B3F08 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?VerifyAllocationIsIdle@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400FEDB0 (-VerifyAllocationIsIdle@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?IsAllocationInUse@VIDMM_GLOBAL@@QEBAEPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400FEE0C (-IsAllocationInUse@VIDMM_GLOBAL@@QEBAEPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ChargeEvictionTransfer@VIDMM_PROCESS@@QEAAXK_K@Z @ 0x140103AE4 (-ChargeEvictionTransfer@VIDMM_PROCESS@@QEAAXK_K@Z.c)
 *     ?MemoryTransferUsingGpuVa@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x14010F22C (-MemoryTransferUsingGpuVa@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT.c)
 *     ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@1PEAU_MDL@@2131U_DXGK_TRANSFERFLAGS@@1@Z @ 0x14010F48C (-MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT.c)
 */

void __fastcall VIDMM_GLOBAL::MemoryTransferInternal(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        struct VIDMM_GLOBAL_ALLOC *a3,
        char *a4,
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
  char *v16; // rbx
  LONGLONG QuadPart; // rdx
  LONGLONG v18; // rcx
  __int64 v19; // rcx
  struct VIDMM_GLOBAL_ALLOC *v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rax
  unsigned __int64 v23; // rbx
  __int64 v24; // rcx
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  UINT Value; // eax
  D3DGPU_VIRTUAL_ADDRESS v28; // rax
  UINT v29; // ecx
  __int64 v30; // rax
  struct _MDL *v31; // rax
  UINT v32; // ecx
  __int64 v33; // rax
  struct _MDL *v34; // rax
  BOOL v35; // ecx
  int v36; // eax
  ADAPTER_RENDER *v37; // rcx
  __int64 v38; // rcx
  int v39; // eax
  int v40; // r15d
  __int64 v41; // rbx
  HANDLE CurrentProcessId; // rax
  __int64 v43; // rdx
  __int64 v44; // r8
  struct VIDMM_SEGMENT *v45; // [rsp+48h] [rbp-C0h]
  __int64 v46; // [rsp+78h] [rbp-90h]
  unsigned __int64 v47; // [rsp+80h] [rbp-88h] BYREF
  struct _DXGKARG_BUILDPAGINGBUFFER v48; // [rsp+88h] [rbp-80h] BYREF
  int v49; // [rsp+1F8h] [rbp+F0h]

  v13 = a2;
  v46 = a2;
  if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 5029) + 8LL * a2) + 476LL) & 0x20) == 0 )
  {
    memset(&v48, 0, sizeof(v48));
    if ( g_IsInternalReleaseOrDbg )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v19) + 24) = a3;
      WdLogGlobalForLineNumber = 13413;
      v22 = WdLogNewEntry5_WdTrace(v21);
      v23 = a5;
      *(_QWORD *)(v22 + 24) = a4;
      *(_QWORD *)(v22 + 32) = a5;
      WdLogGlobalForLineNumber = 13415;
      v25 = (_QWORD *)WdLogNewEntry5_WdTrace(v24);
      v25[3] = a6;
      v25[4] = a7;
      v25[5] = a8;
      WdLogGlobalForLineNumber = 13417;
      v26 = (_QWORD *)WdLogNewEntry5_WdTrace(a8);
      v26[4] = a10;
      v26[5] = a11;
      v26[3] = a9;
      WdLogGlobalForLineNumber = 13419;
    }
    else
    {
      v23 = a5;
    }
    VIDMM_GLOBAL::SetupForBuildPagingBuffer(this, v13, v20, &v48);
    Value = a12.Value;
    v48.Transfer.Flags = a12;
    if ( a3 )
    {
      if ( !v23 )
      {
        Value = a12.Value | 8;
        v48.Transfer.Flags.Value = a12.Value | 8;
      }
      if ( &a4[v23] == *(char **)(*(_QWORD *)a3 + 16LL) )
        v48.Transfer.Flags.Value = Value | 0x10;
    }
    while ( 1 )
    {
      VIDMM_GLOBAL::SetupForBuildPagingBufferIteration(this, v13, a3, &v48);
      if ( a3 )
        v28 = *(_QWORD *)(*((_QWORD *)a3 + 49) + 48LL);
      else
        v28 = 0LL;
      v48.Operation = DXGK_OPERATION_TRANSFER;
      v48.Transfer.MdlOffset = 0;
      v48.Transfer.TransferOffset = v23;
      v48.UpdateContextAllocation.ContextAllocation = v28;
      v48.Transfer.TransferSize = (SIZE_T)a4;
      if ( a6 )
      {
        v29 = VIDMM_SEGMENT::DriverId(a6);
        v30 = *((_QWORD *)a6 + 6);
        v48.Transfer.Source.SegmentId = v29;
        v31 = (struct _MDL *)(a7->QuadPart + v30);
      }
      else
      {
        v48.Transfer.Source.SegmentId = 0;
        v31 = a8;
      }
      v48.Transfer.Source.SegmentAddress.QuadPart = (LONGLONG)v31;
      if ( a9 )
      {
        v32 = VIDMM_SEGMENT::DriverId(a9);
        v33 = *((_QWORD *)a9 + 6);
        v48.Transfer.Destination.SegmentId = v32;
        v34 = (struct _MDL *)(a10->QuadPart + v33);
      }
      else
      {
        v48.Transfer.Destination.SegmentId = 0;
        v34 = a11;
      }
      v48.Transfer.Destination.SegmentAddress.QuadPart = (LONGLONG)v34;
      if ( a3 )
        v35 = VIDMM_GLOBAL::IsAllocationInUse(this, a3) == 0;
      else
        v35 = 1;
      v48.Transfer.Flags.Value = v48.Transfer.Flags.Value & 0xFFFFFFFB | (4 * v35);
      v36 = ADAPTER_RENDER::DdiBuildPagingBuffer(*((ADAPTER_RENDER **)this + 2), &v48);
      v49 = v36;
      if ( a3 && v36 == -1071775486 )
      {
        VIDMM_GLOBAL::WaitForAllPagingEngines(this, a3);
        VIDMM_GLOBAL::VerifyAllocationIsIdle(this, a3);
        v37 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
        v48.Transfer.Flags.Value |= 4u;
        v49 = ADAPTER_RENDER::DdiBuildPagingBuffer(v37, &v48);
      }
      v38 = *((_QWORD *)this + 870);
      if ( v38 && (!a9 || (*((_DWORD *)a9 + 26) & 0x1001) != 0) )
        VIDMM_PROCESS::ChargeEvictionTransfer(
          *(VIDMM_PROCESS **)(v38 + 8),
          *(_DWORD *)(*((_QWORD *)this + 3) + 240LL),
          (unsigned __int64)a4);
      _InterlockedAdd64((volatile signed __int64 *)this + 978, (unsigned __int64)a4);
      if ( (byte_140081241 & 0x10) == 0 )
        goto LABEL_48;
      if ( !a6 )
        goto LABEL_46;
      v39 = *((_DWORD *)a6 + 26);
      if ( (v39 & 0x1001) == 0 )
      {
        if ( a9 && (*((_DWORD *)a9 + 26) & 2) != 0 )
          v40 = 4;
        else
          v40 = 2;
        goto LABEL_47;
      }
      v40 = 3;
      if ( (v39 & 2) == 0 )
LABEL_46:
        v40 = 1;
LABEL_47:
      v41 = *((_QWORD *)this + v46 + 143);
      CurrentProcessId = PsGetCurrentProcessId();
      LODWORD(v45) = v40;
      McTemplateK0pppxxq_EtwWriteTransfer(a5, v43, v44, CurrentProcessId, a3, v41, a5, a4, v45);
      VidMmRecordTransfer((VIDMM_GLOBAL *)((char *)this + 7112), (unsigned __int64)a4, v40);
      v13 = a2;
LABEL_48:
      v47 = 0LL;
      VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(this, v13, a3, &v48, v49, 0, &v47, 0LL);
      LODWORD(v23) = a5;
      if ( v49 >= 0 )
        return;
    }
  }
  v16 = (char *)a3 + 192;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v16, 0LL);
  *((_QWORD *)v16 + 1) = KeGetCurrentThread();
  if ( *((struct VIDMM_GLOBAL_ALLOC **)a3 + 12) == (struct VIDMM_GLOBAL_ALLOC *)((char *)a3 + 96) )
  {
    *((_QWORD *)v16 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v16, 0LL);
    KeLeaveCriticalRegion();
    if ( a10 )
      QuadPart = a10->QuadPart;
    else
      QuadPart = 0LL;
    if ( a7 )
      v18 = a7->QuadPart;
    else
      v18 = 0LL;
    VIDMM_GLOBAL::MemoryTransferUsingGpuVaWorker(
      this,
      v13,
      a3,
      (unsigned __int64)a4,
      a5,
      a6,
      v18,
      a8,
      a9,
      QuadPart,
      a11,
      0LL,
      a12,
      0LL);
  }
  else
  {
    VIDMM_GLOBAL::MemoryTransferUsingGpuVa(this, v13, a3, (unsigned __int64)a4, a5, a6, a7, a8, a9, a10, a11, a12);
    *((_QWORD *)v16 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v16, 0LL);
    KeLeaveCriticalRegion();
  }
}
