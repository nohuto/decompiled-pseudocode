/*
 * XREFs of ?VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z @ 0x1800FA8D4
 * Callers:
 *     ?CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NW4InputType@@@Z @ 0x1800FA6AC (-CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NW4InputType.c)
 *     ?PropagateVisualManipulationNotificationFlag@CManipulationContext@@SAXPEAVCVisual@@_NPEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@I@Z @ 0x1800FB9F8 (-PropagateVisualManipulationNotificationFlag@CManipulationContext@@SAXPEAVCVisual@@_NPEAV-$vecto.c)
 *     ?QueueMidManipulationUpdate@CManipulationManager@@IEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x180137CA4 (-QueueMidManipulationUpdate@CManipulationManager@@IEAAJW4MidManipulationUpdateType@@PEAVCVisual@.c)
 * Callees:
 *     ?GetCount@?$CPtrArray@VCVisual@@@@QEBA_KXZ @ 0x1800E56E0 (-GetCount@-$CPtrArray@VCVisual@@@@QEBA_KXZ.c)
 */

char __fastcall CManipulationContext::VisualHasAnyChildFlagged(struct CVisual *a1)
{
  _QWORD *v1; // rcx
  unsigned __int64 Count; // rax
  char v3; // dl
  _QWORD *v4; // rcx
  unsigned __int64 v5; // r9
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // rax

  v1 = (_QWORD *)((char *)a1 + 80);
  while ( 1 )
  {
    Count = CPtrArray<CVisual>::GetCount(v1);
    if ( v5 >= Count )
      break;
    v6 = CPtrArray<CVisual>::GetCount(v4);
    if ( v7 < v6 )
    {
      if ( v6 == 1 )
      {
        v8 = *v1 & 0xFFFFFFFFFFFFFFFCuLL;
      }
      else
      {
        _mm_lfence();
        v8 = *(_QWORD *)((*v1 & 0xFFFFFFFFFFFFFFFCuLL) + 8 * v7 + 16);
      }
      if ( v8 && (*(_BYTE *)(v8 + 105) & 0x20) != 0 )
        return 1;
    }
  }
  return v3;
}
