/*
 * XREFs of ?EmitUpdateCommands@CColorBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140106520
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateColorCommand@CColorBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140106538 (-EmitUpdateColorCommand@CColorBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 */

bool __fastcall DirectComposition::CColorBrushMarshaler::EmitUpdateCommands(
        DirectComposition::CColorBrushMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  return DirectComposition::CColorBrushMarshaler::EmitUpdateColorCommand(this, a2);
}
