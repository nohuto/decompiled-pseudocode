/*
 * XREFs of ?GetVisualEffectiveParentImpl@CManipulationContext@@CAPEBVCVisual@@PEBV2@PEA_N@Z @ 0x1800FA80C
 * Callers:
 *     ?BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCDesktopTree@@PEAVCInteraction@@IW4InputType@@_NPEAVCInteractionChain@@PEA_N@Z @ 0x1800FA2C0 (-BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCDesktopTree@@PEAVCInteraction@.c)
 *     ?CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NW4InputType@@@Z @ 0x1800FA6AC (-CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NW4InputType.c)
 *     ?GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@PEA_N@Z @ 0x1800FB600 (-GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@PEA_N@Z.c)
 *     ?IsInteractionDescendantOfVisual@CManipulationContext@@CA_NPEBVCInteraction@@PEBVCVisual@@@Z @ 0x180257CA0 (-IsInteractionDescendantOfVisual@CManipulationContext@@CA_NPEBVCInteraction@@PEBVCVisual@@@Z.c)
 * Callees:
 *     ?IsStrictlyHoverPointerSource@CInteraction@@QEBA_NXZ @ 0x1800FAE38 (-IsStrictlyHoverPointerSource@CInteraction@@QEBA_NXZ.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x180137C40 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
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
