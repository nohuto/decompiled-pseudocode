/*
 * XREFs of ?HasInteraction@CVisual@@QEBA_NXZ @ 0x180193D80
 * Callers:
 *     ?EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z @ 0x1800C39A0 (-EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z.c)
 *     ?VisualHasActiveInteraction@CManipulationContext@@CA_NPEAVCVisual@@I@Z @ 0x180193794 (-VisualHasActiveInteraction@CManipulationContext@@CA_NPEAVCVisual@@I@Z.c)
 *     ?BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCDesktopTree@@PEAVCInteraction@@IW4InputType@@_NPEAVCInteractionChain@@PEA_N@Z @ 0x1801937D4 (-BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCDesktopTree@@PEAVCInteraction@.c)
 *     ?PropagateVisualManipulationNotificationFlag@CManipulationContext@@SAXPEAVCVisual@@_NPEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@I@Z @ 0x180194E84 (-PropagateVisualManipulationNotificationFlag@CManipulationContext@@SAXPEAVCVisual@@_NPEAV-$vecto.c)
 *     ?CheckTargetsForInteractionSource@CInteractionTracker@@SAXPEBUExpressionReferenceInfo@@PEAVCResource@@1@Z @ 0x18029D4C4 (-CheckTargetsForInteractionSource@CInteractionTracker@@SAXPEBUExpressionReferenceInfo@@PEAVCReso.c)
 * Callees:
 *     <none>
 */

bool __fastcall CVisual::HasInteraction(CVisual *this)
{
  _DWORD *v1; // r8
  _QWORD *v2; // rax
  __int64 v3; // rcx
  _BYTE *v4; // rdx
  unsigned int i; // r9d

  v1 = (_DWORD *)*((_QWORD *)this + 29);
  v2 = 0LL;
  if ( (*v1 & 0x1000000) != 0 )
  {
    v3 = (unsigned int)v1[1];
    v4 = v1 + 2;
    for ( i = 0; i < (unsigned int)v3; ++v4 )
    {
      if ( *v4 == 8 )
        break;
      ++i;
    }
    if ( i < (unsigned int)v3 )
      v2 = (_QWORD *)((char *)v1 + 8LL * i - (((_BYTE)v3 + 15) & 7) + v3 + 15);
    v2 = (_QWORD *)*v2;
  }
  return v2 != 0LL;
}
