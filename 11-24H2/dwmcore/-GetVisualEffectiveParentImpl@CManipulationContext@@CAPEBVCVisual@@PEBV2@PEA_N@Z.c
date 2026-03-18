/*
 * XREFs of ?GetVisualEffectiveParentImpl@CManipulationContext@@CAPEBVCVisual@@PEBV2@PEA_N@Z @ 0x180193D20
 * Callers:
 *     ?BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCDesktopTree@@PEAVCInteraction@@IW4InputType@@_NPEAVCInteractionChain@@PEA_N@Z @ 0x1801937D4 (-BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCDesktopTree@@PEAVCInteraction@.c)
 *     ?CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NW4InputType@@@Z @ 0x180193BC0 (-CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NW4InputType.c)
 *     ?GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@PEA_N@Z @ 0x180194A04 (-GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@PEA_N@Z.c)
 *     ?IsInteractionDescendantOfVisual@CManipulationContext@@CA_NPEBVCInteraction@@PEBVCVisual@@@Z @ 0x18024C8D0 (-IsInteractionDescendantOfVisual@CManipulationContext@@CA_NPEBVCInteraction@@PEBVCVisual@@@Z.c)
 * Callees:
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x180093170 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?IsStrictlyHoverPointerSource@CInteraction@@QEBA_NXZ @ 0x180194634 (-IsStrictlyHoverPointerSource@CInteraction@@QEBA_NXZ.c)
 */

const struct CVisual *__fastcall CManipulationContext::GetVisualEffectiveParentImpl(const struct CVisual *a1, bool *a2)
{
  const struct CVisual *v2; // rbx
  struct CInteraction *InteractionInternal; // rax
  struct CInteraction *v4; // rax

  v2 = a1;
  InteractionInternal = CVisual::GetInteractionInternal(a1);
  if ( !InteractionInternal || (*((_BYTE *)InteractionInternal + 200) & 0x20) == 0 )
  {
    while ( 1 )
    {
      v2 = (const struct CVisual *)*((_QWORD *)v2 + 11);
      if ( !v2 )
        break;
      v4 = CVisual::GetInteractionInternal(v2);
      if ( !v4 || (*((_BYTE *)v4 + 200) & 0x20) == 0 && !CInteraction::IsStrictlyHoverPointerSource(v4) )
        return v2;
    }
  }
  return 0LL;
}
