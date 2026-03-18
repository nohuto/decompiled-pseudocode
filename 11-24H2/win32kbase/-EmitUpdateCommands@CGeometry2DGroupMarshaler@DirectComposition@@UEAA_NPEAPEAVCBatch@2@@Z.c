/*
 * XREFs of ?EmitUpdateCommands@CGeometry2DGroupMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1402275E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Marshal@?$CResourceMarshalerArray@VCResourceMarshaler@DirectComposition@@$0EE@$0CA@$0CAO@$0CAP@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@IPEAK@Z @ 0x140229830 (-Marshal@-$CResourceMarshalerArray@VCResourceMarshaler@DirectComposition@@$0EE@$0CA@$0CAO@$0CAP@.c)
 */

__int64 __fastcall DirectComposition::CGeometry2DGroupMarshaler::EmitUpdateCommands(
        DirectComposition::CGeometry2DGroupMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  return DirectComposition::CResourceMarshalerArray<DirectComposition::CResourceMarshaler,68,32,526,527>::Marshal(
           (char *)this + 56,
           a2,
           *((unsigned int *)this + 8),
           (char *)this + 16);
}
