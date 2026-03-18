/*
 * XREFs of ?Marshal@?$CResourceMarshalerArray@VCResourceMarshaler@DirectComposition@@$0FM@$0IA@$0BNH@$0BNI@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@IPEAK@Z @ 0x140229860
 * Callers:
 *     ?EmitUpdateCommands@CAnimationControllerMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140107A90 (-EmitUpdateCommands@CAnimationControllerMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?Marshal@CResourceMarshalerArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IPEAKKW4MILCMD@@2@Z @ 0x1400CF354 (-Marshal@CResourceMarshalerArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IPEAKKW4MILCMD@@2@.c)
 */

bool __fastcall DirectComposition::CResourceMarshalerArray<DirectComposition::CResourceMarshaler,92,128,471,472>::Marshal(
        _QWORD *a1,
        struct DirectComposition::CBatch **a2,
        int a3,
        _DWORD *a4)
{
  return DirectComposition::CResourceMarshalerArrayBase::Marshal(a1, a2, a3, a4, 128, 471, 472);
}
