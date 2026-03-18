/*
 * XREFs of ?EmitUpdateCommands@CSolidColorLegacyMilBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C021C5F0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitSetColorCommand@CSolidColorLegacyMilBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0217120 (-EmitSetColorCommand@CSolidColorLegacyMilBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2.c)
 *     ?EmitUpdateCommands@CLegacyMilBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C021B880 (-EmitUpdateCommands@CLegacyMilBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CSolidColorLegacyMilBrushMarshaler::EmitUpdateCommands(
        DirectComposition::CSolidColorLegacyMilBrushMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CLegacyMilBrushMarshaler::EmitUpdateCommands(this, a2) )
    return DirectComposition::CSolidColorLegacyMilBrushMarshaler::EmitSetColorCommand(this, a2) != 0;
  return v4;
}
