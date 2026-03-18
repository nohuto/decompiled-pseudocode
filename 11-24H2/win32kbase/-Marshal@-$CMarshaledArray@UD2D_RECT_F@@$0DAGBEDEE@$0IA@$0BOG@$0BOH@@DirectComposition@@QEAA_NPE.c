/*
 * XREFs of ?Marshal@?$CMarshaledArray@UD2D_RECT_F@@$0DAGBEDEE@$0IA@$0BOG@$0BOH@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@IPEAK@Z @ 0x140229690
 * Callers:
 *     ?EmitUpdateCommands@CAtlasedRectsMeshMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140226F40 (-EmitUpdateCommands@CAtlasedRectsMeshMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?Marshal@CMarshaledArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IPEAKKW4MILCMD@@2_K@Z @ 0x1400EDE00 (-Marshal@CMarshaledArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IPEAKKW4MILCMD@@2_K@Z.c)
 */

bool __fastcall DirectComposition::CMarshaledArray<D2D_RECT_F,811680580,128,486,487>::Marshal(
        _QWORD *a1,
        struct DirectComposition::CBatch **a2,
        int a3,
        _DWORD *a4)
{
  return DirectComposition::CMarshaledArrayBase::Marshal(a1, a2, a3, a4, 128, 486, 487, 0x10uLL);
}
