/*
 * XREFs of ?ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ @ 0x1400F6658
 * Callers:
 *     ?PageInAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAUVIDMM_ALLOC@@I_K@Z @ 0x1400EC39C (-PageInAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@W4VIDMM_PLACEMENT_RESTR.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140008038 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DriverId@VIDMM_SEGMENT@@QEBAGXZ @ 0x140036EF0 (-DriverId@VIDMM_SEGMENT@@QEBAGXZ.c)
 *     ?GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE@@QEBAJXZ @ 0x140036F6C (-GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE@@QEBAJXZ.c)
 *     ?DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x140044454 (-DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z.c)
 *     McTemplateK0qqqxxp_EtwWriteTransfer @ 0x14004DAF0 (McTemplateK0qqqxxp_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140055E20 (__security_check_cookie.c)
 *     ?CheckFreeVPRReserve@VIDMM_SEGMENT@@QEAA_NPEAU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x14009E014 (-CheckFreeVPRReserve@VIDMM_SEGMENT@@QEAA_NPEAU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z.c)
 *     ?EvictAllReclaimedAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAXXZ @ 0x1400ACE60 (-EvictAllReclaimedAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAXXZ.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1400B3D10 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1400B4660 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P8VIDMM_SEGMENT@@EAAJPEAUVIDMM_PHYSICAL_ALLOC@@PEA_NPEAX@ZPEAV3@4PEAPEAU4@3@Z @ 0x140101FA4 (-DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@.c)
 *     ?MoveOneResource@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@PEA_NPEAX@Z @ 0x14010C590 (-MoveOneResource@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@PEA_NPEAX@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_SEGMENT::ProcessPendingMoves(VIDMM_SEGMENT *this)
{
  unsigned __int64 v2; // r15
  __int64 v3; // rax
  __int64 v4; // r14
  __int64 v5; // r12
  __int64 v6; // rsi
  int v7; // edx
  __int64 v8; // rbx
  __int64 v9; // r8
  VIDMM_GLOBAL *v10; // rcx
  __int64 v11; // rax
  bool v12; // r14
  void (*v13)(void *); // r8
  __int64 v14; // r12
  int v15; // esi
  void (*v16)(void *); // r8
  __int64 v17; // rcx
  unsigned __int64 v18; // r8
  UINT v19; // ecx
  __int64 v20; // rax
  DXG_DEFERRED_WORK_QUEUE *v21; // rcx
  SIZE_T v22; // rdx
  SIZE_T v23; // r8
  void (*v24)(void *); // r8
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rcx
  bool v28[8]; // [rsp+50h] [rbp-19h] BYREF
  __int64 v29; // [rsp+58h] [rbp-11h] BYREF
  unsigned __int64 v30; // [rsp+60h] [rbp-9h] BYREF
  struct _DXGKARG_SETVIDEOPROTECTEDREGION v31; // [rsp+68h] [rbp-1h] BYREF

  if ( *((_BYTE *)this + 512) )
  {
    *((_BYTE *)this + 512) = 0;
    v28[0] = 0;
    v29 = 0LL;
    if ( *((_QWORD *)this + 59) )
      v2 = *((_QWORD *)this + 57);
    else
      v2 = *((_QWORD *)this + 9);
    v3 = *((_QWORD *)this + 26);
    v4 = *(_QWORD *)(v3 + 88);
    v5 = v3 + 80;
    while ( v4 != v5 )
    {
      v6 = v4 - 40;
      v4 = *(_QWORD *)(v4 + 8);
      if ( !(*(_QWORD *)v6 + *(_QWORD *)(v6 + 8)) )
        break;
      if ( *(_QWORD *)v6 < v2 && (unsigned __int8)(*(_BYTE *)(v6 + 56) - 3) <= 1u )
      {
        v7 = VIDMM_SEGMENT::MoveOneResource(this, *(struct VIDMM_PHYSICAL_ALLOC **)(v6 + 16), v28, 0LL);
        if ( v7 < 0 )
        {
          v8 = *(_QWORD *)(v6 + 16);
          v29 = v8;
          WdLogSingleEntry3(3LL, v8, v7, v28[0]);
          WdLogGlobalForLineNumber = 6118;
          return;
        }
      }
    }
    if ( *((_QWORD *)this + 59) )
    {
      v9 = *((unsigned __int16 *)this + 210);
      v10 = (VIDMM_GLOBAL *)*((_QWORD *)this + 3);
      v11 = *(_QWORD *)(*((_QWORD *)v10 + 3) + 2992LL);
      v12 = (*(_DWORD *)(v11 + 344 * v9 + 16) & 8) != 0;
      if ( (*(_DWORD *)(v11 + 344 * v9 + 16) & 8) != 0 )
      {
        VIDMM_GLOBAL::FlushPagingBufferInternal(v10, v9, 0, 0LL, 0LL, 0, 0);
        VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 3), *((unsigned __int16 *)this + 210), v13);
        *(_BYTE *)(*((_QWORD *)this + 3) + 40941LL) = 1;
      }
      v14 = *((_QWORD *)this + 58);
      v15 = VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
              *((_QWORD *)this + 26),
              v2,
              v14,
              1,
              (__int64)VIDMM_SEGMENT::MoveOneResource,
              (__int64)this,
              0LL,
              (__int64)&v29,
              (__int64)v28);
      if ( v12 )
      {
        VIDMM_GLOBAL::FlushPagingBufferInternal(
          *((VIDMM_GLOBAL **)this + 3),
          *((unsigned __int16 *)this + 210),
          0,
          0LL,
          0LL,
          0,
          1);
        VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 3), *((unsigned __int16 *)this + 210), v16);
        *(_BYTE *)(*((_QWORD *)this + 3) + 40941LL) = 0;
      }
      v17 = *((_QWORD *)this + 26);
      v30 = 0LL;
      if ( (unsigned int)VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
                           v17,
                           v2,
                           v14,
                           0,
                           (__int64)VIDMM_SEGMENT::CheckLowestAddress,
                           (__int64)this,
                           (__int64)&v30,
                           (__int64)&v29,
                           (__int64)v28) == -1073741823 )
      {
        v18 = *((_QWORD *)this + 57);
        v30 &= ~*((_QWORD *)this + 55);
        if ( v30 > v18 )
        {
          v31.PhysicalAdapterIndex = *((unsigned __int16 *)this + 210);
          *(_QWORD *)&v31.VprIndex = 0LL;
          v19 = VIDMM_SEGMENT::DriverId(this);
          v31.CurrentSize = *((_QWORD *)this + 59);
          v20 = *((_QWORD *)this + 58);
          v31.SegmentIndex = v19;
          v21 = (DXG_DEFERRED_WORK_QUEUE *)(*((_QWORD *)this + 3) + 41144LL);
          v31.NewSize = v20 - v22;
          *((_QWORD *)this + 59) = v20 - v22;
          v31.CurrentStartOffset = v23;
          v31.NewStartOffset = v22;
          *((_QWORD *)this + 57) = v22;
          if ( (unsigned int)DXG_DEFERRED_WORK_QUEUE::GetNumWorkItems(v21) )
          {
            if ( (byte_140081241 & 1) != 0 )
              McTemplateK0q_EtwWriteTransfer();
            KeWaitForSingleObject((PVOID)(*((_QWORD *)this + 3) + 41192LL), Executive, 0, 0, 0LL);
          }
          VIDMM_PHYSICAL_ADAPTER::EvictAllReclaimedAllocation(*((VIDMM_PHYSICAL_ADAPTER **)this + 4));
          VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(
            *((VIDMM_GLOBAL **)this + 3),
            *((unsigned __int16 *)this + 210),
            v24);
          VIDMM_SEGMENT::CheckFreeVPRReserve(this, &v31);
          v15 = ADAPTER_RENDER::DdiSetVideoProtectedRegion(
                  *(ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 3128LL),
                  &v31);
          if ( v15 < 0 && g_IsInternalRelease )
          {
            g_DxgMmsBugcheckExportIndex = 1;
            WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
            WdLogGlobalForLineNumber = 195;
          }
          if ( (byte_140081241 & 1) != 0 )
            McTemplateK0qqqxxp_EtwWriteTransfer(
              *(_QWORD *)(*((_QWORD *)this + 3) + 24LL),
              v25,
              v26,
              v31.PhysicalAdapterIndex,
              v31.SegmentIndex,
              v31.VprIndex,
              v31.NewStartOffset,
              v31.NewSize,
              *(_QWORD *)(*((_QWORD *)this + 3) + 24LL));
        }
      }
      else
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 6253;
        DxgkLogInternalTriageEvent(v27, 0x40000LL);
      }
      if ( v15 < 0 )
      {
        WdLogSingleEntry3(3LL, v29, v15, v28[0]);
        WdLogGlobalForLineNumber = 6264;
      }
    }
  }
}
