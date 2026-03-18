/*
 * XREFs of ?CleanupVadReference@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@@Z @ 0x14011175C
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400E11C8 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1401117CC (-CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANG.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x14001D2D0 (--3@YAXPEAX@Z.c)
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x140037628 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x140039D28 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     Feature_3694358843__private_IsEnabledDeviceUsageNoInline @ 0x14004C408 (Feature_3694358843__private_IsEnabledDeviceUsageNoInline.c)
 *     CleanupVaRangeReference @ 0x140092D94 (CleanupVaRangeReference.c)
 */

void __fastcall VIDMM_GLOBAL::CleanupVadReference(VIDMM_GLOBAL *this, struct _LIST_ENTRY **a2)
{
  VIDMM_MAPPED_VA_RANGE **v3; // rdi
  _QWORD *v4; // rdx
  VIDMM_GLOBAL *v5; // rcx
  unsigned int v6; // edx
  VIDMM_GLOBAL *v7; // rcx

  if ( a2[4] )
  {
    v3 = (VIDMM_MAPPED_VA_RANGE **)(a2 + 1);
    if ( (unsigned int)Feature_3694358843__private_IsEnabledDeviceUsageNoInline() )
    {
      CleanupVaRangeReference(*v3, v4);
      VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v7, a2[4]);
    }
    else
    {
      VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v5, a2[4]);
      VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(*v3, v6);
    }
    operator delete(a2[4]);
    a2[4] = 0LL;
    *a2 = 0LL;
    *v3 = 0LL;
  }
}
