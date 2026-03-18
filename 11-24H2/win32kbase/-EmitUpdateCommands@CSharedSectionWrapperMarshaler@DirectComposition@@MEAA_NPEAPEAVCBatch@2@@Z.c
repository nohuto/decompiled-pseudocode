/*
 * XREFs of ?EmitUpdateCommands@CSharedSectionWrapperMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140239830
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitSetSharedSection@CSharedSectionWrapperMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1402397A0 (-EmitSetSharedSection@CSharedSectionWrapperMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CSharedSectionWrapperMarshaler::EmitUpdateCommands(
        DirectComposition::CSharedSectionWrapperMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  return DirectComposition::CSharedSectionWrapperMarshaler::EmitSetSharedSection(this, a2);
}
