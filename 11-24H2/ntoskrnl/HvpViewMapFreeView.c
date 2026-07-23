/*
 * XREFs of HvpViewMapFreeView @ 0x140A40FA4
 * Callers:
 *     HvpViewMapShrinkStorage @ 0x1407DF59C (HvpViewMapShrinkStorage.c)
 *     HvpViewMapCreateViewsForRegion @ 0x140967F8C (HvpViewMapCreateViewsForRegion.c)
 *     HvpViewMapCreateView @ 0x14096821C (HvpViewMapCreateView.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x14096AEDC (HvpViewMapPromoteRangeToMapping.c)
 *     HvpViewMapDeleteViewTreeNode @ 0x140A40F84 (HvpViewMapDeleteViewTreeNode.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     CmSiReleaseProcessLockedPagesCharge @ 0x14046C89C (CmSiReleaseProcessLockedPagesCharge.c)
 *     CmSiUnmapViewOfSection @ 0x1404941D0 (CmSiUnmapViewOfSection.c)
 *     HvcallpNoHypervisorPresent @ 0x1404A7D70 (HvcallpNoHypervisorPresent.c)
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
