/*
 * XREFs of ?UpdateActiveVPRAfterMove@VIDMM_SEGMENT@@QEAAJXZ @ 0x1401111DC
 * Callers:
 *     ?MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@33W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x140110E58 (-MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@PEAVVIDMM_S.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140008038 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE@@QEBAJXZ @ 0x1400382FC (-GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE@@QEBAJXZ.c)
 *     ?DriverId@VIDMM_SEGMENT@@QEBAGXZ @ 0x14003835C (-DriverId@VIDMM_SEGMENT@@QEBAGXZ.c)
 *     ?DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x140046284 (-DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z.c)
 *     McTemplateK0qqqxxp_EtwWriteTransfer @ 0x14004E184 (McTemplateK0qqqxxp_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 *     ?CheckFreeVPRReserve@VIDMM_SEGMENT@@QEAA_NPEAU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x14009C764 (-CheckFreeVPRReserve@VIDMM_SEGMENT@@QEAA_NPEAU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z.c)
 *     ?CheckLowestAddress@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@PEA_NPEAX@Z @ 0x14009C840 (-CheckLowestAddress@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@PEA_NPEAX@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1400AB930 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?EvictAllReclaimedAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAXXZ @ 0x1400BB478 (-EvictAllReclaimedAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAXXZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_SEGMENT::UpdateActiveVPRAfterMove(VIDMM_SEGMENT *this)
{
  __int64 v1; // r14
  int v2; // esi
  _QWORD **v3; // r14
  unsigned __int64 v4; // r15
  int v5; // r8d
  unsigned __int64 v6; // r12
  _QWORD *v8; // rdi
  unsigned __int64 *v9; // rdx
  unsigned __int64 v10; // r8
  UINT v11; // eax
  UINT v12; // ecx
  __int64 v13; // rax
  DXG_DEFERRED_WORK_QUEUE *v14; // rcx
  SIZE_T v15; // rdx
  SIZE_T v16; // r8
  void (*v17)(void *); // r8
  __int64 v18; // rdx
  __int64 v19; // r8
  bool v21; // [rsp+50h] [rbp-19h] BYREF
  unsigned __int64 v22; // [rsp+58h] [rbp-11h] BYREF
  struct _DXGKARG_SETVIDEOPROTECTEDREGION v23; // [rsp+60h] [rbp-9h] BYREF

  v1 = *((_QWORD *)this + 26);
  v2 = 0;
  v22 = 0LL;
  v3 = (_QWORD **)(v1 + 80);
  v4 = *((_QWORD *)this + 58);
  v5 = 0;
  v6 = *((_QWORD *)this + 57);
  v21 = 0;
  v8 = *v3;
  if ( *v3 != v3 )
  {
    do
    {
      v9 = v8 - 5;
      v8 = (_QWORD *)*v8;
      if ( *v9 + v9[1] > v6 )
      {
        if ( *v9 >= v4 )
          break;
        if ( (unsigned __int8)(*((_BYTE *)v9 + 56) - 3) <= 1u )
        {
          v5 = VIDMM_SEGMENT::CheckLowestAddress(this, (struct VIDMM_PHYSICAL_ALLOC *)v9[2], &v21, &v22);
          if ( v5 < 0 )
            break;
        }
      }
    }
    while ( v8 != v3 );
    if ( v5 == -1073741823 )
    {
      v10 = *((_QWORD *)this + 57);
      v22 = v10 & ~*((_QWORD *)this + 55);
      if ( v22 > v10 )
      {
        v11 = *((unsigned __int16 *)this + 210);
        *(_QWORD *)&v23.VprIndex = 0LL;
        v23.PhysicalAdapterIndex = v11;
        v12 = VIDMM_SEGMENT::DriverId(this);
        v23.CurrentSize = *((_QWORD *)this + 59);
        v13 = *((_QWORD *)this + 58);
        v23.SegmentIndex = v12;
        v14 = (DXG_DEFERRED_WORK_QUEUE *)(*((_QWORD *)this + 3) + 41144LL);
        v23.NewSize = v13 - v15;
        *((_QWORD *)this + 59) = v13 - v15;
        v23.CurrentStartOffset = v16;
        v23.NewStartOffset = v15;
        *((_QWORD *)this + 57) = v15;
        if ( (unsigned int)DXG_DEFERRED_WORK_QUEUE::GetNumWorkItems(v14) )
        {
          if ( (byte_140081241 & 1) != 0 )
            McTemplateK0q_EtwWriteTransfer();
          KeWaitForSingleObject((PVOID)(*((_QWORD *)this + 3) + 41192LL), Executive, 0, 0, 0LL);
        }
        VIDMM_PHYSICAL_ADAPTER::EvictAllReclaimedAllocation(*((VIDMM_PHYSICAL_ADAPTER **)this + 4));
        VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 3), *((unsigned __int16 *)this + 210), v17);
        VIDMM_SEGMENT::CheckFreeVPRReserve(this, &v23);
        v2 = ADAPTER_RENDER::DdiSetVideoProtectedRegion(
               *(ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 3128LL),
               &v23);
        if ( v2 < 0 && g_IsInternalRelease )
        {
          g_DxgMmsBugcheckExportIndex = 1;
          WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
          WdLogGlobalForLineNumber = 195;
        }
        if ( (byte_140081241 & 1) != 0 )
          McTemplateK0qqqxxp_EtwWriteTransfer(
            *(_QWORD *)(*((_QWORD *)this + 3) + 24LL),
            v18,
            v19,
            v23.PhysicalAdapterIndex,
            v23.SegmentIndex,
            v23.VprIndex,
            v23.NewStartOffset,
            v23.NewSize,
            *(_QWORD *)(*((_QWORD *)this + 3) + 24LL));
      }
    }
  }
  return (unsigned int)v2;
}
