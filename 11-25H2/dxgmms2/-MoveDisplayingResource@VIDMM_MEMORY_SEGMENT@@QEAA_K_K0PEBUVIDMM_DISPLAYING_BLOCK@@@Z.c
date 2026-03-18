/*
 * XREFs of ?MoveDisplayingResource@VIDMM_MEMORY_SEGMENT@@QEAA_K_K0PEBUVIDMM_DISPLAYING_BLOCK@@@Z @ 0x1400A427C
 * Callers:
 *     ?Defragment@VIDMM_MEMORY_SEGMENT@@UEAAX_K0@Z @ 0x1400A4090 (-Defragment@VIDMM_MEMORY_SEGMENT@@UEAAX_K0@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1400341A0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140034390 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14004CCF0 (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ?UpdateVirtualAddressForNewResourceLocation@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14009DBE4 (-UpdateVirtualAddressForNewResourceLocation@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?FindTemporarySegmentLocationForResource@VIDMM_LINEAR_POOL@@QEAAJPEBUVIDMM_FIND_TEMPORARY_LOCATION_ARGS@@_NPEA_K2@Z @ 0x14009E72C (-FindTemporarySegmentLocationForResource@VIDMM_LINEAR_POOL@@QEAAJPEBUVIDMM_FIND_TEMPORARY_LOCATI.c)
 *     ?VidMmiMoveAndFlipDisplayingAllocation@@YAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_GLOBAL_ALLOC@@_K2@Z @ 0x1400A4958 (-VidMmiMoveAndFlipDisplayingAllocation@@YAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_GLOBAL_ALLOC@@_K2@Z.c)
 *     ?DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P8VIDMM_SEGMENT@@EAAJPEAUVIDMM_PHYSICAL_ALLOC@@PEA_NPEAX@ZPEAV3@4PEAPEAU4@3@Z @ 0x140103044 (-DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@.c)
 *     ?SuspendSchedulerDeviceForMove@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14010EA94 (-SuspendSchedulerDeviceForMove@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 */

unsigned __int64 __fastcall VIDMM_MEMORY_SEGMENT::MoveDisplayingResource(
        VIDMM_MEMORY_SEGMENT *this,
        __int64 a2,
        __int64 a3,
        const struct VIDMM_DISPLAYING_BLOCK *a4)
{
  __int64 v4; // r12
  __int64 v6; // r15
  _QWORD *v9; // rsi
  unsigned __int64 v10; // r15
  __int64 v11; // rbx
  VIDMM_GLOBAL *v12; // rcx
  __int64 v13; // r8
  unsigned __int64 *v14; // rbx
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // r8
  struct VIDMM_GLOBAL *v17; // rcx
  __int64 v18; // rcx
  VIDMM_LINEAR_POOL *v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  unsigned __int64 v22; // r15
  int v23; // r13d
  unsigned __int64 v24; // r8
  struct VIDMM_GLOBAL *v25; // rcx
  unsigned __int64 v27; // [rsp+50h] [rbp-39h] BYREF
  unsigned __int64 v28; // [rsp+58h] [rbp-31h] BYREF
  unsigned __int64 *v29; // [rsp+60h] [rbp-29h]
  __int64 v30; // [rsp+68h] [rbp-21h] BYREF
  _QWORD v31[5]; // [rsp+70h] [rbp-19h] BYREF
  __int64 v32; // [rsp+98h] [rbp+Fh]
  __int64 v33; // [rsp+A0h] [rbp+17h]
  char v34; // [rsp+F0h] [rbp+67h]
  char v36; // [rsp+108h] [rbp+7Fh] BYREF

  v4 = *(_QWORD *)a4;
  v6 = *((_QWORD *)a4 + 1);
  v30 = 0LL;
  v36 = 0;
  v9 = *(_QWORD **)v4;
  v10 = *(_QWORD *)(v4 + 16) + v6;
  v11 = *(_QWORD *)v4 + 312LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v11, 0LL);
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *(_QWORD *)(v11 + 8) = KeGetCurrentThread();
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v9 + 17));
  VIDMM_GLOBAL::SuspendSchedulerDeviceForMove(v12, (struct VIDMM_GLOBAL_ALLOC *)v9);
  if ( !*((_BYTE *)a4 + 24) && (*(_DWORD *)(*((_QWORD *)this + 3) + 6984LL) & 0x40000) == 0 )
  {
    v14 = (unsigned __int64 *)((char *)a4 + 16);
    WdLogSingleEntry2(4LL, *((_QWORD *)a4 + 1), *((_QWORD *)a4 + 2));
    v15 = *((_QWORD *)a4 + 2);
    v16 = *((_QWORD *)a4 + 1);
    v17 = (struct VIDMM_GLOBAL *)*((_QWORD *)this + 3);
    WdLogGlobalForLineNumber = 2846;
    VidMmiMoveAndFlipDisplayingAllocation(v17, (struct VIDMM_GLOBAL_ALLOC *)v9, v16, v15);
LABEL_13:
    **(_QWORD **)(v4 + 80) = *v14;
    *(_QWORD *)(v4 + 72) = *v14;
    *(_QWORD *)(v9[47] + 40LL) = *v14 + *((_QWORD *)this + 6);
    v10 = *v14 + *(_QWORD *)(v4 + 16);
    VIDMM_SEGMENT::UpdateVirtualAddressForNewResourceLocation(this, (struct VIDMM_GLOBAL_ALLOC *)v9);
    goto LABEL_14;
  }
  v18 = *(_QWORD *)(v4 + 16);
  v14 = (unsigned __int64 *)((char *)a4 + 16);
  v31[0] = a2;
  LOBYTE(v13) = 1;
  v31[3] = *(unsigned int *)(v4 + 32);
  v31[4] = VidMmiIsSaveableResource;
  v32 = *((_QWORD *)a4 + 2);
  v33 = v18 + v32;
  v34 = 0;
  v27 = 0LL;
  v28 = 0LL;
  v31[2] = v18;
  v19 = (VIDMM_LINEAR_POOL *)*((_QWORD *)this + 26);
  v31[1] = a3;
  v29 = (unsigned __int64 *)((char *)a4 + 16);
  if ( (int)VIDMM_LINEAR_POOL::FindTemporarySegmentLocationForResource(
              v19,
              (const struct VIDMM_FIND_TEMPORARY_LOCATION_ARGS *)v31,
              v13,
              &v27,
              &v28) >= 0 )
  {
    v22 = v27;
    v23 = v28;
LABEL_11:
    WdLogSingleEntry3(4LL, *((_QWORD *)a4 + 1), v22, *v14);
    v24 = *((_QWORD *)a4 + 1);
    v25 = (struct VIDMM_GLOBAL *)*((_QWORD *)this + 3);
    WdLogGlobalForLineNumber = 2933;
    VidMmiMoveAndFlipDisplayingAllocation(v25, (struct VIDMM_GLOBAL_ALLOC *)v9, v24, v22);
    VidMmiMoveAndFlipDisplayingAllocation(
      *((struct VIDMM_GLOBAL **)this + 3),
      (struct VIDMM_GLOBAL_ALLOC *)v9,
      v22,
      *v14);
    if ( v34 )
    {
      VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
        *((_QWORD *)this + 26),
        v22,
        v23,
        0,
        (__int64)VIDMM_SEGMENT::RestoreResourceCB,
        (__int64)this,
        0LL,
        (__int64)&v30,
        (__int64)&v36);
      v14 = v29;
    }
    goto LABEL_13;
  }
  v29 = (unsigned __int64 *)((char *)a4 + 16);
  if ( g_IsInternalReleaseOrDbg )
  {
    WdLogNewEntry5_WdTrace(v20);
    WdLogGlobalForLineNumber = 2883;
    v29 = (unsigned __int64 *)((char *)a4 + 16);
  }
  if ( (int)VIDMM_LINEAR_POOL::FindTemporarySegmentLocationForResource(
              *((VIDMM_LINEAR_POOL **)this + 26),
              (const struct VIDMM_FIND_TEMPORARY_LOCATION_ARGS *)v31,
              0LL,
              &v27,
              &v28) >= 0 )
  {
    v22 = v27;
    v23 = v28;
    VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
      *((_QWORD *)this + 26),
      v27,
      v28,
      0,
      (__int64)VIDMM_SEGMENT::SaveResourceCB,
      (__int64)this,
      0LL,
      (__int64)&v30,
      (__int64)&v36);
    v34 = 1;
    goto LABEL_11;
  }
  _InterlockedIncrement(&dword_1400817F0);
  WdLogSingleEntry0(6LL);
  WdLogGlobalForLineNumber = 2907;
  DxgkLogInternalTriageEvent(v21, 262145LL);
LABEL_14:
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  v9[40] = 0LL;
  ExReleasePushLockExclusiveEx(v9 + 39, 0LL);
  KeLeaveCriticalRegion();
  DXGFASTMUTEX::Release((struct _KTHREAD **)v9 + 17);
  return v10;
}
