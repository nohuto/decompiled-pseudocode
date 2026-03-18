/*
 * XREFs of ?Marshal@?$CResourceMarshalerArray@VCResourceMarshaler@DirectComposition@@$0IO@$0EA@$0CGB@$0CGC@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@IPEAK@Z @ 0x140229890
 * Callers:
 *     ?EmitUpdateCommands@CSceneNodeMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140228910 (-EmitUpdateCommands@CSceneNodeMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?Marshal@CResourceMarshalerArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IPEAKKW4MILCMD@@2@Z @ 0x1400CF354 (-Marshal@CResourceMarshalerArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IPEAKKW4MILCMD@@2@.c)
 */

bool __fastcall DirectComposition::CResourceMarshalerArray<DirectComposition::CResourceMarshaler,142,64,609,610>::Marshal(
        _QWORD *a1,
        struct DirectComposition::CBatch **a2,
        int a3,
        _DWORD *a4)
{
  return DirectComposition::CResourceMarshalerArrayBase::Marshal(a1, a2, a3, a4, 64, 609, 610);
}
