/*
 * XREFs of ?VisualHasActiveInteraction@CManipulationContext@@CA_NPEAVCVisual@@I@Z @ 0x180193794
 * Callers:
 *     ?CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NW4InputType@@@Z @ 0x180193BC0 (-CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NW4InputType.c)
 *     ?PropagateVisualManipulationNotificationFlag@CManipulationContext@@SAXPEAVCVisual@@_NPEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@I@Z @ 0x180194E84 (-PropagateVisualManipulationNotificationFlag@CManipulationContext@@SAXPEAVCVisual@@_NPEAV-$vecto.c)
 * Callees:
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x180093170 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?GetTotalNumContacts@CInteraction@@AEBAIXZ @ 0x1800966AC (-GetTotalNumContacts@CInteraction@@AEBAIXZ.c)
 *     ?HasInteraction@CVisual@@QEBA_NXZ @ 0x180193D80 (-HasInteraction@CVisual@@QEBA_NXZ.c)
 */

char __fastcall CManipulationContext::VisualHasActiveInteraction(struct CVisual *a1, unsigned int a2)
{
  bool HasInteraction; // al
  CVisual *v4; // r11
  char v5; // r10
  CInteraction *InteractionInternal; // rax

  HasInteraction = CVisual::HasInteraction(a1);
  v5 = 0;
  if ( HasInteraction )
  {
    InteractionInternal = CVisual::GetInteractionInternal(v4);
    if ( (unsigned int)CInteraction::GetTotalNumContacts(InteractionInternal) > a2 )
      return 1;
  }
  return v5;
}
