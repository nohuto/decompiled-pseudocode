/*
 * XREFs of ?Marshal@?$CMarshaledArray@H$0GHGNEDEE@$0BAA@$0CDC@$0CDD@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@IPEAK@Z @ 0x1402295B0
 * Callers:
 *     ?EmitUpdateCommands@CMeshGeometry2DMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140227EC0 (-EmitUpdateCommands@CMeshGeometry2DMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?Marshal@CMarshaledArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IPEAKKW4MILCMD@@2_K@Z @ 0x1400EDE00 (-Marshal@CMarshaledArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IPEAKKW4MILCMD@@2_K@Z.c)
 */

bool __fastcall DirectComposition::CMarshaledArray<int,1735213892,256,562,563>::Marshal(
        _QWORD *a1,
        struct DirectComposition::CBatch **a2,
        int a3,
        _DWORD *a4)
{
  return DirectComposition::CMarshaledArrayBase::Marshal(a1, a2, a3, a4, 256, 562, 563, 4uLL);
}
