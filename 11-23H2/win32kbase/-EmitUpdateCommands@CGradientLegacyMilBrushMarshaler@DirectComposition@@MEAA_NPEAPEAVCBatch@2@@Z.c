/*
 * XREFs of ?EmitUpdateCommands@CGradientLegacyMilBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C021B6AC
 * Callers:
 *     ?EmitUpdateCommands@CLinearGradientLegacyMilBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C021B8F0 (-EmitUpdateCommands@CLinearGradientLegacyMilBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatc.c)
 * Callees:
 *     ?Marshal@CMarshaledArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IPEAKKW4MILCMD@@2_K@Z @ 0x1C0213E88 (-Marshal@CMarshaledArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IPEAKKW4MILCMD@@2_K@Z.c)
 *     ?EmitSetColorInterpolationModeCommand@CGradientLegacyMilBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C021721C (-EmitSetColorInterpolationModeCommand@CGradientLegacyMilBrushMarshaler@DirectComposition@@AEAA_N.c)
 *     ?EmitSetMappingModeCommand@CGradientLegacyMilBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C02181E8 (-EmitSetMappingModeCommand@CGradientLegacyMilBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBat.c)
 *     ?EmitSetSpreadMethodCommand@CGradientLegacyMilBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C021A2DC (-EmitSetSpreadMethodCommand@CGradientLegacyMilBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBa.c)
 *     ?EmitUpdateCommands@CLegacyMilBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C021B880 (-EmitUpdateCommands@CLegacyMilBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CGradientLegacyMilBrushMarshaler::EmitUpdateCommands(
        DirectComposition::CGradientLegacyMilBrushMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CLegacyMilBrushMarshaler::EmitUpdateCommands(this, (struct DirectComposition::CBatch **)a2)
    && DirectComposition::CGradientLegacyMilBrushMarshaler::EmitSetColorInterpolationModeCommand(this, a2)
    && DirectComposition::CGradientLegacyMilBrushMarshaler::EmitSetMappingModeCommand(this, a2)
    && DirectComposition::CGradientLegacyMilBrushMarshaler::EmitSetSpreadMethodCommand(this, a2) )
  {
    return DirectComposition::CMarshaledArrayBase::Marshal(
             (_QWORD *)this + 13,
             a2,
             *((_DWORD *)this + 8),
             (_DWORD *)this + 4,
             4096,
             519,
             520,
             0x18uLL);
  }
  return v4;
}
