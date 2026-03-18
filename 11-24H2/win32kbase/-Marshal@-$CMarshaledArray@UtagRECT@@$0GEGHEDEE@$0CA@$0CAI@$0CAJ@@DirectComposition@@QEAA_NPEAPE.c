/*
 * XREFs of ?Marshal@?$CMarshaledArray@UtagRECT@@$0GEGHEDEE@$0CA@$0CAI@$0CAJ@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@IPEAK@Z @ 0x140229700
 * Callers:
 *     ?EmitUpdateCommands@CGdiSpriteBitmapMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1400F26B0 (-EmitUpdateCommands@CGdiSpriteBitmapMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?Marshal@CMarshaledArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IPEAKKW4MILCMD@@2_K@Z @ 0x1400EDE00 (-Marshal@CMarshaledArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IPEAKKW4MILCMD@@2_K@Z.c)
 */

bool __fastcall DirectComposition::CMarshaledArray<tagRECT,1684489028,32,520,521>::Marshal(
        _QWORD *a1,
        struct DirectComposition::CBatch **a2,
        int a3,
        _DWORD *a4)
{
  return DirectComposition::CMarshaledArrayBase::Marshal(a1, a2, a3, a4, 32, 520, 521, 0x10uLL);
}
