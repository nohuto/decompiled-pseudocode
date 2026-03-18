/*
 * XREFs of ?UncommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@@Z @ 0x1400B5418
 * Callers:
 *     ?UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1400B5380 (-UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_V.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400DE3C0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ??3@YAXPEAX@Z @ 0x140028730 (--3@YAXPEAX@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140036BF0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x14003C2C8 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14004CCF0 (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1400D00E0 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 */

__int64 __fastcall VIDMM_GLOBAL::UncommitVirtualAddressRangeSystemCommand(
        VIDMM_GLOBAL *this,
        struct _VIDMM_SYSTEM_COMMAND *a2)
{
  struct _LIST_ENTRY *v2; // rsi
  __int64 v4; // rcx
  __int64 v6; // rbx
  VIDMM_GLOBAL *v7; // rcx
  struct VIDMM_ALLOC *v8; // [rsp+60h] [rbp+8h] BYREF

  v8 = this;
  v2 = (struct _LIST_ENTRY *)*((_QWORD *)a2 + 8);
  if ( v2 )
  {
    if ( !v2[1].Flink->Flink )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 20632;
      DxgkLogInternalTriageEvent(v4, 0x40000LL);
      return 0LL;
    }
    v6 = *((_QWORD *)a2 + 6);
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v6 + 56));
    VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v7, v2);
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    *(_QWORD *)(v6 + 64) = 0LL;
    ExReleasePushLockExclusiveEx(v6 + 56, 0LL);
    KeLeaveCriticalRegion();
    operator delete(*((void **)a2 + 8));
  }
  v8 = 0LL;
  return CVirtualAddressAllocator::UncommitVirtualAddressRange(
           *((CVirtualAddressAllocator **)a2 + 6),
           *((struct VIDMM_MAPPED_VA_RANGE **)a2 + 7),
           &v8,
           1u);
}
