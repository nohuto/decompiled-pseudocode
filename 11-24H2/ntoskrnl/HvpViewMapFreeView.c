/*
 * XREFs of HvpViewMapFreeView @ 0x140A4A284
 * Callers:
 *     HvpViewMapShrinkStorage @ 0x1407DF04C (HvpViewMapShrinkStorage.c)
 *     HvpViewMapCreateViewsForRegion @ 0x14097F77C (HvpViewMapCreateViewsForRegion.c)
 *     HvpViewMapCreateView @ 0x14097FA0C (HvpViewMapCreateView.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x1409826CC (HvpViewMapPromoteRangeToMapping.c)
 *     HvpViewMapDeleteViewTreeNode @ 0x140A4A264 (HvpViewMapDeleteViewTreeNode.c)
 * Callees:
 *     CmSiReleaseProcessLockedPagesCharge @ 0x1403CD0AC (CmSiReleaseProcessLockedPagesCharge.c)
 *     CmSiFreeMemory @ 0x14046B8D0 (CmSiFreeMemory.c)
 *     CmSiUnmapViewOfSection @ 0x140499840 (CmSiUnmapViewOfSection.c)
 *     HvcallpNoHypervisorPresent @ 0x1404AD690 (HvcallpNoHypervisorPresent.c)
 */

void __fastcall HvpViewMapFreeView(__int64 a1, __int64 a2)
{
  void *v2; // r8
  __int64 v5; // rax
  __int64 v6; // rcx

  v2 = *(void **)(a2 + 56);
  if ( v2 )
  {
    CmSiUnmapViewOfSection(a1, *(HANDLE **)(a1 + 24), v2);
    if ( *(_QWORD *)(a2 + 64) )
    {
      v5 = HvcallpNoHypervisorPresent();
      CmSiReleaseProcessLockedPagesCharge(*(_QWORD **)(a1 + 24), v6 * v5);
    }
  }
  CmSiFreeMemory((PPRIVILEGE_SET)a2);
}
