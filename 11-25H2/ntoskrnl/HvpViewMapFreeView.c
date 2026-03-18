/*
 * XREFs of HvpViewMapFreeView @ 0x140A46244
 * Callers:
 *     HvpViewMapShrinkStorage @ 0x1407CF774 (HvpViewMapShrinkStorage.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x14088274C (HvpViewMapPromoteRangeToMapping.c)
 *     HvpViewMapCreateViewsForRegion @ 0x140884B94 (HvpViewMapCreateViewsForRegion.c)
 *     HvpViewMapCreateView @ 0x140884E10 (HvpViewMapCreateView.c)
 *     HvpViewMapDeleteViewTreeNode @ 0x140A46224 (HvpViewMapDeleteViewTreeNode.c)
 * Callees:
 *     CmSiReleaseProcessLockedPagesCharge @ 0x1403C519C (CmSiReleaseProcessLockedPagesCharge.c)
 *     CmSiFreeMemory @ 0x14046F140 (CmSiFreeMemory.c)
 *     CmSiUnmapViewOfSection @ 0x1404996D0 (CmSiUnmapViewOfSection.c)
 *     HvcallpNoHypervisorPresent @ 0x1404AC0A0 (HvcallpNoHypervisorPresent.c)
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
