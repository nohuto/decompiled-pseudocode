/*
 * XREFs of ?MoveDisplayingResource@VIDMM_MEMORY_SEGMENT@@QEAA_K_K0PEBUVIDMM_DISPLAYING_BLOCK@@@Z @ 0x1400A5AFC
 * Callers:
 *     ?Defragment@VIDMM_MEMORY_SEGMENT@@UEAAX_K0@Z @ 0x1400A5910 (-Defragment@VIDMM_MEMORY_SEGMENT@@UEAAX_K0@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x140031B80 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140031D70 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?UpdateVirtualAddressForNewResourceLocation@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14009F494 (-UpdateVirtualAddressForNewResourceLocation@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?FindTemporarySegmentLocationForResource@VIDMM_LINEAR_POOL@@QEAAJPEBUVIDMM_FIND_TEMPORARY_LOCATION_ARGS@@_NPEA_K2@Z @ 0x14009FFCC (-FindTemporarySegmentLocationForResource@VIDMM_LINEAR_POOL@@QEAAJPEBUVIDMM_FIND_TEMPORARY_LOCATI.c)
 *     ?VidMmiMoveAndFlipDisplayingAllocation@@YAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_GLOBAL_ALLOC@@_K2@Z @ 0x1400A61D8 (-VidMmiMoveAndFlipDisplayingAllocation@@YAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_GLOBAL_ALLOC@@_K2@Z.c)
 *     ?DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P8VIDMM_SEGMENT@@EAAJPEAUVIDMM_PHYSICAL_ALLOC@@PEA_NPEAX@ZPEAV3@4PEAPEAU4@3@Z @ 0x140101FA4 (-DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@.c)
 *     ?SuspendSchedulerDeviceForMove@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14010C870 (-SuspendSchedulerDeviceForMove@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 */

unsigned __int64 __fastcall VIDMM_MEMORY_SEGMENT::MoveDisplayingResource(
        VIDMM_MEMORY_SEGMENT *this,
        __int64 a2,
        __int64 a3,
        const struct VIDMM_DISPLAYING_BLOCK *a4)
{
  __int64 v4; // r13
  __int64 v6; // r15
  _QWORD *v9; // rbx
  unsigned __int64 v10; // r15
  VIDMM_GLOBAL *v11; // rcx
  __int64 v12; // r8
  struct VIDMM_GLOBAL **v13; // r12
  unsigned __int64 *v14; // rdi
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // r8
  struct VIDMM_GLOBAL *v17; // rcx
  __int64 v18; // rcx
  VIDMM_LINEAR_POOL *v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  unsigned __int64 v22; // r15
  __int64 v23; // rcx
  unsigned __int64 v24; // r8
  struct VIDMM_GLOBAL *v25; // rcx
  unsigned __int64 v27; // [rsp+50h] [rbp-39h] BYREF
  unsigned __int64 v28; // [rsp+58h] [rbp-31h] BYREF
  unsigned __int64 *v29; // [rsp+60h] [rbp-29h]
  __int64 v30; // [rsp+68h] [rbp-21h] BYREF
  unsigned __int64 v31; // [rsp+70h] [rbp-19h]
  _QWORD v32[5]; // [rsp+78h] [rbp-11h] BYREF
  __int64 v33; // [rsp+A0h] [rbp+17h]
  __int64 v34; // [rsp+A8h] [rbp+1Fh]
  char v35; // [rsp+F0h] [rbp+67h]
  char v37; // [rsp+108h] [rbp+7Fh] BYREF

  v4 = *(_QWORD *)a4;
  v6 = *((_QWORD *)a4 + 1);
  v30 = 0LL;
  v37 = 0;
  v9 = *(_QWORD **)v4;
  v10 = *(_QWORD *)(v4 + 16) + v6;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v9 + 41, 0LL);
  v9[42] = KeGetCurrentThread();
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v9 + 17));
  VIDMM_GLOBAL::SuspendSchedulerDeviceForMove(v11, (struct VIDMM_GLOBAL_ALLOC *)v9);
  v13 = (struct VIDMM_GLOBAL **)((char *)this + 24);
  if ( !*((_BYTE *)a4 + 24) && (*((_DWORD *)*v13 + 1746) & 0x40000) == 0 )
  {
    v14 = (unsigned __int64 *)((char *)a4 + 16);
    WdLogSingleEntry2(4LL, *((_QWORD *)a4 + 1), *((_QWORD *)a4 + 2));
    v15 = *((_QWORD *)a4 + 2);
    v16 = *((_QWORD *)a4 + 1);
    v17 = *v13;
    WdLogGlobalForLineNumber = 2846;
    VidMmiMoveAndFlipDisplayingAllocation(v17, (struct VIDMM_GLOBAL_ALLOC *)v9, v16, v15);
LABEL_13:
    **(_QWORD **)(v4 + 80) = *v14;
    *(_QWORD *)(v4 + 72) = *v14;
    *(_QWORD *)(v9[49] + 40LL) = *v14 + *((_QWORD *)this + 6);
    v10 = *v14 + *(_QWORD *)(v4 + 16);
    VIDMM_SEGMENT::UpdateVirtualAddressForNewResourceLocation(this, (struct VIDMM_GLOBAL_ALLOC *)v9);
    goto LABEL_14;
  }
  v18 = *(_QWORD *)(v4 + 16);
  LOBYTE(v12) = 1;
  v32[0] = a2;
  v32[3] = *(unsigned int *)(v4 + 32);
  v32[4] = VidMmiIsSaveableResource;
  v32[1] = a3;
  v14 = (unsigned __int64 *)((char *)a4 + 16);
  v33 = *((_QWORD *)a4 + 2);
  v34 = v18 + v33;
  v35 = 0;
  v27 = 0LL;
  v28 = 0LL;
  v32[2] = v18;
  v19 = (VIDMM_LINEAR_POOL *)*((_QWORD *)this + 26);
  v29 = (unsigned __int64 *)((char *)a4 + 16);
  if ( (int)VIDMM_LINEAR_POOL::FindTemporarySegmentLocationForResource(
              v19,
              (const struct VIDMM_FIND_TEMPORARY_LOCATION_ARGS *)v32,
              v12,
              &v27,
              &v28) >= 0 )
  {
    v22 = v27;
    v31 = v28;
LABEL_11:
    WdLogSingleEntry3(4LL, *((_QWORD *)a4 + 1), v22, *v14);
    v24 = *((_QWORD *)a4 + 1);
    v25 = *v13;
    WdLogGlobalForLineNumber = 2933;
    VidMmiMoveAndFlipDisplayingAllocation(v25, (struct VIDMM_GLOBAL_ALLOC *)v9, v24, v22);
    VidMmiMoveAndFlipDisplayingAllocation(*v13, (struct VIDMM_GLOBAL_ALLOC *)v9, v22, *v14);
    if ( v35 )
    {
      VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
        *((_QWORD *)this + 26),
        v22,
        v31,
        0,
        (__int64)VIDMM_SEGMENT::RestoreResourceCB,
        (__int64)this,
        0LL,
        (__int64)&v30,
        (__int64)&v37);
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
              (const struct VIDMM_FIND_TEMPORARY_LOCATION_ARGS *)v32,
              0LL,
              &v27,
              &v28) >= 0 )
  {
    v22 = v27;
    v23 = *((_QWORD *)this + 26);
    v31 = v28;
    VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
      v23,
      v27,
      v28,
      0,
      (__int64)VIDMM_SEGMENT::SaveResourceCB,
      (__int64)this,
      0LL,
      (__int64)&v30,
      (__int64)&v37);
    v35 = 1;
    goto LABEL_11;
  }
  _InterlockedIncrement(&dword_140081810);
  WdLogSingleEntry0(6LL);
  WdLogGlobalForLineNumber = 2907;
  DxgkLogInternalTriageEvent(v21, 262145LL);
LABEL_14:
  v9[42] = 0LL;
  ExReleasePushLockExclusiveEx(v9 + 41, 0LL);
  KeLeaveCriticalRegion();
  DXGFASTMUTEX::Release((struct _KTHREAD **)v9 + 17);
  return v10;
}
