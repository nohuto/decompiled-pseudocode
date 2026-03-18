/*
 * XREFs of ?PropagateVisualManipulationNotificationFlag@CManipulationContext@@SAXPEAVCVisual@@_NPEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@I@Z @ 0x180194E84
 * Callers:
 *     ?QueueMidManipulationUpdate@CManipulationManager@@IEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x1800931D4 (-QueueMidManipulationUpdate@CManipulationManager@@IEAAJW4MidManipulationUpdateType@@PEAVCVisual@.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@AEAAPEAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@QEAPEAV234@AEBQEAV234@@Z @ 0x1800DEA80 (--$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@-$vector@PEAVBamoPrincipalI.c)
 *     ?VisualHasActiveInteraction@CManipulationContext@@CA_NPEAVCVisual@@I@Z @ 0x180193794 (-VisualHasActiveInteraction@CManipulationContext@@CA_NPEAVCVisual@@I@Z.c)
 *     ?HasInteraction@CVisual@@QEBA_NXZ @ 0x180193D80 (-HasInteraction@CVisual@@QEBA_NXZ.c)
 *     ?VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z @ 0x180193DE4 (-VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z.c)
 */

void __fastcall CManipulationContext::PropagateVisualManipulationNotificationFlag(
        struct CVisual **a1,
        char a2,
        __int64 a3,
        unsigned int a4)
{
  struct CVisual *v6; // rbx
  struct CVisual *v7; // rdi
  char v8; // al
  _BYTE *v9; // rdx
  struct CVisual *v10; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    v10 = (struct CVisual *)a1;
    v6 = (struct CVisual *)a1;
    if ( a2 )
    {
      do
      {
        v8 = *((_BYTE *)v6 + 105);
        if ( (v8 & 0x20) != 0 )
          break;
        *((_BYTE *)v6 + 105) = v8 | 0x20;
        v6 = a1[11];
        a1 = (struct CVisual **)v6;
      }
      while ( v6 );
    }
    else
    {
      v7 = (struct CVisual *)a1;
      do
      {
        if ( (*((_BYTE *)v7 + 105) & 0x20) == 0
          || CManipulationContext::VisualHasActiveInteraction(v6, a4)
          || CManipulationContext::VisualHasAnyChildFlagged(v6) )
        {
          break;
        }
        *((_BYTE *)v7 + 105) &= ~0x20u;
        if ( CVisual::HasInteraction(v6) )
        {
          v9 = *(_BYTE **)(a3 + 8);
          if ( v9 == *(_BYTE **)(a3 + 16) )
          {
            std::vector<Microsoft::BamoImpl::BamoPrincipalImpl *>::_Emplace_reallocate<Microsoft::BamoImpl::BamoPrincipalImpl * const &>(
              (const void **)a3,
              v9,
              &v10);
            v6 = v10;
          }
          else
          {
            *(_QWORD *)v9 = v6;
            *(_QWORD *)(a3 + 8) += 8LL;
          }
        }
        v6 = (struct CVisual *)*((_QWORD *)v6 + 11);
        v10 = v6;
        v7 = v6;
      }
      while ( v6 );
    }
  }
}
