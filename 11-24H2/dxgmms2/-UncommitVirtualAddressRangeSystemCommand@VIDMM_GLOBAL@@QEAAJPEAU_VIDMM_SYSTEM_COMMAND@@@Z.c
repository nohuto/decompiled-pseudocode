/*
 * XREFs of ?UncommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@@Z @ 0x1400FBE4C
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400E2548 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1400FBDB4 (-UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_V.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ??3@YAXPEAX@Z @ 0x14001D2D0 (--3@YAXPEAX@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140031710 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140031A2C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140035860 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x140037628 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x140039D28 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     Feature_3694358843__private_IsEnabledDeviceUsageNoInline @ 0x14004C408 (Feature_3694358843__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_Servicing_VARangeHoldReference__private_IsEnabledDeviceUsageNoInline @ 0x14004C5AC (Feature_Servicing_VARangeHoldReference__private_IsEnabledDeviceUsageNoInline.c)
 *     CleanupVaRangeReference @ 0x140092D94 (CleanupVaRangeReference.c)
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1400BE360 (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAUVIDMM_MAPPED_VA_RAN.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1400F25E8 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 */

__int64 __fastcall VIDMM_GLOBAL::UncommitVirtualAddressRangeSystemCommand(
        VIDMM_GLOBAL *this,
        struct _VIDMM_SYSTEM_COMMAND *a2)
{
  struct _LIST_ENTRY *v2; // rdi
  __int64 v4; // rcx
  __int64 v6; // rbx
  VIDMM_GLOBAL *v7; // rcx
  struct _KTHREAD **v8; // rbp
  struct VIDMM_MAPPED_VA_RANGE *v9; // rbx
  int v10; // edi
  _QWORD *v11; // rdx
  _BYTE v12[32]; // [rsp+50h] [rbp-28h] BYREF
  struct VIDMM_ALLOC *v13; // [rsp+80h] [rbp+8h] BYREF

  v13 = this;
  v2 = (struct _LIST_ENTRY *)*((_QWORD *)a2 + 8);
  if ( v2 )
  {
    if ( !v2[1].Flink->Flink )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 20979;
      DxgkLogInternalTriageEvent(v4, 0x40000LL);
      return 0LL;
    }
    v6 = *((_QWORD *)a2 + 6);
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v6 + 56));
    VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v7, v2);
    *(_QWORD *)(v6 + 64) = 0LL;
    ExReleasePushLockExclusiveEx(v6 + 56, 0LL);
    KeLeaveCriticalRegion();
    operator delete(*((void **)a2 + 8));
  }
  v8 = (struct _KTHREAD **)*((_QWORD *)a2 + 6);
  v9 = (struct VIDMM_MAPPED_VA_RANGE *)*((_QWORD *)a2 + 7);
  v13 = 0LL;
  v10 = CVirtualAddressAllocator::UncommitVirtualAddressRange((CVirtualAddressAllocator *)v8, v9, &v13, 1);
  if ( (unsigned int)Feature_3694358843__private_IsEnabledDeviceUsageNoInline() && (*((_DWORD *)v9 + 18) & 0x8000) != 0 )
  {
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v12, v8 + 7);
    if ( v10 >= 0 )
    {
      v10 = CVirtualAddressAllocator::AddVaRangeToVadRangeList(
              v8,
              *(struct VIDMM_VAD **)v9,
              (*((_DWORD *)v9 + 18) >> 4) & 0x3F,
              v9);
      if ( (unsigned int)Feature_Servicing_VARangeHoldReference__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( v10 < 0 )
          VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(v9, (unsigned int)v11);
      }
    }
    CleanupVaRangeReference(v9, v11);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v12);
  }
  return (unsigned int)v10;
}
