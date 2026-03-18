/*
 * XREFs of ?Marshal@?$CMarshaledArray@UMilGradientStop@@$0GCGHEDEE@$0BAAA@$0CBH@$0CBI@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@IPEAK@Z @ 0x1402296C8
 * Callers:
 *     ?EmitUpdateCommands@CGradientLegacyMilBrushMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140227784 (-EmitUpdateCommands@CGradientLegacyMilBrushMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?Marshal@CMarshaledArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IPEAKKW4MILCMD@@2_K@Z @ 0x1400EDE00 (-Marshal@CMarshaledArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IPEAKKW4MILCMD@@2_K@Z.c)
 */

bool __fastcall DirectComposition::CMarshaledArray<MilGradientStop,1650934596,4096,535,536>::Marshal(
        _QWORD *a1,
        struct DirectComposition::CBatch **a2,
        int a3,
        _DWORD *a4)
{
  return DirectComposition::CMarshaledArrayBase::Marshal(a1, a2, a3, a4, 4096, 535, 536, 0x18uLL);
}
