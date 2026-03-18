/*
 * XREFs of ??$?4U?$default_delete@VCOcclusionInfo@@@std@@$0A@@?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18009ED4C
 * Callers:
 *     ?GetOcclusionInfo@CTreeData@@QEAAPEAVCOcclusionInfo@@I_N@Z @ 0x18009E720 (-GetOcclusionInfo@CTreeData@@QEAAPEAVCOcclusionInfo@@I_N@Z.c)
 * Callees:
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x18009EDD0 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z @ 0x18009EF40 (--_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??_ECWindowOcclusionInfo@@UEAAPEAXI@Z @ 0x18009FA40 (--_ECWindowOcclusionInfo@@UEAAPEAXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

CWindowOcclusionInfo **__fastcall std::unique_ptr<COcclusionInfo>::operator=<std::default_delete<COcclusionInfo>,0>(
        CWindowOcclusionInfo **a1,
        CWindowOcclusionInfo **a2)
{
  CWindowOcclusionInfo *v2; // rax
  CWindowOcclusionInfo *v4; // rcx
  void *(__fastcall *v5)(CSurfaceDrawListBrush *__hidden, unsigned int); // rax

  v2 = *a2;
  *a2 = 0LL;
  v4 = *a1;
  *a1 = v2;
  if ( v4 )
  {
    v5 = **(void *(__fastcall ***)(CSurfaceDrawListBrush *__hidden, unsigned int))v4;
    if ( v5 == CWindowOcclusionInfo::`vector deleting destructor' )
    {
      CWindowOcclusionInfo::`vector deleting destructor'(v4, 1u);
    }
    else if ( v5 == CSurfaceDrawListBrush::`vector deleting destructor' )
    {
      CSurfaceDrawListBrush::`vector deleting destructor'(v4, 1u);
    }
    else if ( v5 == CMultiPrimitiveDrawListBrush::`vector deleting destructor' )
    {
      CMultiPrimitiveDrawListBrush::`vector deleting destructor'(v4, 1u);
    }
    else
    {
      v5(v4, 1u);
    }
  }
  return a1;
}
