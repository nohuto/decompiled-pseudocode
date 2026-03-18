/*
 * XREFs of ?EmitUpdateCommands@CSynchronousSuperWetInkMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C021C690
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitSetInkLookupIdCommand@CSynchronousSuperWetInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0217E4C (-EmitSetInkLookupIdCommand@CSynchronousSuperWetInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBat.c)
 *     ?EmitSetIsVailCommand@CSynchronousSuperWetInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0218084 (-EmitSetIsVailCommand@CSynchronousSuperWetInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@.c)
 *     ?EmitSetLookupModeCommand@CSynchronousSuperWetInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0218178 (-EmitSetLookupModeCommand@CSynchronousSuperWetInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatc.c)
 *     ?EmitSetPerFrameDataAllocationOffsetCommand@CSynchronousSuperWetInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C021980C (-EmitSetPerFrameDataAllocationOffsetCommand@CSynchronousSuperWetInkMarshaler@DirectComposition@@.c)
 *     ?EmitSetPerFrameDataAllocationSizeCommand@CSynchronousSuperWetInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C021987C (-EmitSetPerFrameDataAllocationSizeCommand@CSynchronousSuperWetInkMarshaler@DirectComposition@@AE.c)
 *     ?EmitSetPerFrameDataSharedSectionCommand@CSynchronousSuperWetInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C02198EC (-EmitSetPerFrameDataSharedSectionCommand@CSynchronousSuperWetInkMarshaler@DirectComposition@@AEA.c)
 *     ?EmitSetPerFrameDataSizeCommand@CSynchronousSuperWetInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0219970 (-EmitSetPerFrameDataSizeCommand@CSynchronousSuperWetInkMarshaler@DirectComposition@@AEAA_NPEAPEA.c)
 *     ?EmitSetReferenceSurfaceCommand@CSynchronousSuperWetInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0219D18 (-EmitSetReferenceSurfaceCommand@CSynchronousSuperWetInkMarshaler@DirectComposition@@AEAA_NPEAPEA.c)
 *     ?EmitSetTipPointSizeCommand@CSynchronousSuperWetInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C021AB6C (-EmitSetTipPointSizeCommand@CSynchronousSuperWetInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBa.c)
 *     ?EmitSetTipPointsAllocationOffsetCommand@CSynchronousSuperWetInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C021ABDC (-EmitSetTipPointsAllocationOffsetCommand@CSynchronousSuperWetInkMarshaler@DirectComposition@@AEA.c)
 *     ?EmitSetTipPointsAllocationSizeCommand@CSynchronousSuperWetInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C021AC4C (-EmitSetTipPointsAllocationSizeCommand@CSynchronousSuperWetInkMarshaler@DirectComposition@@AEAA_.c)
 *     ?EmitSetTipPointsSharedSectionCommand@CSynchronousSuperWetInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C021ACBC (-EmitSetTipPointsSharedSectionCommand@CSynchronousSuperWetInkMarshaler@DirectComposition@@AEAA_N.c)
 */

char __fastcall DirectComposition::CSynchronousSuperWetInkMarshaler::EmitUpdateCommands(
        DirectComposition::CSynchronousSuperWetInkMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CSynchronousSuperWetInkMarshaler::EmitSetReferenceSurfaceCommand(this, a2)
    && DirectComposition::CSynchronousSuperWetInkMarshaler::EmitSetTipPointsSharedSectionCommand(this, a2)
    && DirectComposition::CSynchronousSuperWetInkMarshaler::EmitSetTipPointsAllocationOffsetCommand(this, a2)
    && DirectComposition::CSynchronousSuperWetInkMarshaler::EmitSetTipPointsAllocationSizeCommand(this, a2)
    && DirectComposition::CSynchronousSuperWetInkMarshaler::EmitSetTipPointSizeCommand(this, a2)
    && DirectComposition::CSynchronousSuperWetInkMarshaler::EmitSetPerFrameDataSharedSectionCommand(this, a2)
    && DirectComposition::CSynchronousSuperWetInkMarshaler::EmitSetPerFrameDataAllocationOffsetCommand(this, a2)
    && DirectComposition::CSynchronousSuperWetInkMarshaler::EmitSetPerFrameDataAllocationSizeCommand(this, a2)
    && DirectComposition::CSynchronousSuperWetInkMarshaler::EmitSetPerFrameDataSizeCommand(this, a2)
    && DirectComposition::CSynchronousSuperWetInkMarshaler::EmitSetIsVailCommand(this, a2)
    && DirectComposition::CSynchronousSuperWetInkMarshaler::EmitSetLookupModeCommand(this, a2) )
  {
    return DirectComposition::CSynchronousSuperWetInkMarshaler::EmitSetInkLookupIdCommand(this, a2) != 0;
  }
  return v4;
}
