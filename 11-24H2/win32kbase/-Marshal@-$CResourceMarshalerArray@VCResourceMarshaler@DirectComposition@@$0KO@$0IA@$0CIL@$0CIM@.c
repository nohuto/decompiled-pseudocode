/*
 * XREFs of ?Marshal@?$CResourceMarshalerArray@VCResourceMarshaler@DirectComposition@@$0KO@$0IA@$0CIL@$0CIM@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@IPEAK@Z @ 0x1402298F0
 * Callers:
 *     ?EmitUpdateCommands@CTransformGroupMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x14013CF80 (-EmitUpdateCommands@CTransformGroupMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?Marshal@CResourceMarshalerArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IPEAKKW4MILCMD@@2@Z @ 0x1400CF354 (-Marshal@CResourceMarshalerArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IPEAKKW4MILCMD@@2@.c)
 */

bool __fastcall DirectComposition::CResourceMarshalerArray<DirectComposition::CResourceMarshaler,174,128,651,652>::Marshal(
        _QWORD *a1,
        struct DirectComposition::CBatch **a2,
        int a3,
        _DWORD *a4)
{
  return DirectComposition::CResourceMarshalerArrayBase::Marshal(a1, a2, a3, a4, 128, 651, 652);
}
