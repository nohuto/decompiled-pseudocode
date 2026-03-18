/*
 * XREFs of ?EmitUpdateCommands@CInteractionConfigurationGroup@DirectComposition@@QEAA_NPEAPEAVCBatch@2@@Z @ 0x14006EE04
 * Callers:
 *     ?EmitUpdateCommands@CInteractionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x14006E950 (-EmitUpdateCommands@CInteractionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EmitUpdateTouchConfiguration@CInteractionConfigurationGroup@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14006EE7C (-EmitUpdateTouchConfiguration@CInteractionConfigurationGroup@DirectComposition@@AEAA_NPEAPEAVCBa.c)
 *     ?EmitUpdateTouchpadConfiguration@CInteractionConfigurationGroup@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14006F01C (-EmitUpdateTouchpadConfiguration@CInteractionConfigurationGroup@DirectComposition@@AEAA_NPEAPEAV.c)
 *     ?EmitUpdateMousewheelConfiguration@CInteractionConfigurationGroup@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14006F1BC (-EmitUpdateMousewheelConfiguration@CInteractionConfigurationGroup@DirectComposition@@AEAA_NPEAPE.c)
 *     ?EmitUpdatePenConfiguration@CInteractionConfigurationGroup@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14006F250 (-EmitUpdatePenConfiguration@CInteractionConfigurationGroup@DirectComposition@@AEAA_NPEAPEAVCBatc.c)
 *     ?EmitUpdateMouseConfiguration@CInteractionConfigurationGroup@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14006F3F0 (-EmitUpdateMouseConfiguration@CInteractionConfigurationGroup@DirectComposition@@AEAA_NPEAPEAVCBa.c)
 */

bool __fastcall DirectComposition::CInteractionConfigurationGroup::EmitUpdateCommands(
        DirectComposition::CInteractionConfigurationGroup *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CInteractionConfigurationGroup::EmitUpdateTouchConfiguration(this, a2)
    && DirectComposition::CInteractionConfigurationGroup::EmitUpdateTouchpadConfiguration(this, a2)
    && DirectComposition::CInteractionConfigurationGroup::EmitUpdatePenConfiguration(this, a2)
    && DirectComposition::CInteractionConfigurationGroup::EmitUpdateMouseConfiguration(this, a2) )
  {
    return DirectComposition::CInteractionConfigurationGroup::EmitUpdateMousewheelConfiguration(this, a2);
  }
  return v4;
}
