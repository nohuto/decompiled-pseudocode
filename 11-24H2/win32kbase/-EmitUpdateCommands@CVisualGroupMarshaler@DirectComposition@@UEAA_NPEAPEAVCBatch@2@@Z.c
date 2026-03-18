/*
 * XREFs of ?EmitUpdateCommands@CVisualGroupMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140229450
 * Callers:
 *     <none>
 * Callees:
 *     ?Marshal@?$CResourceMarshalerArray@VCResourceMarshaler@DirectComposition@@$0LI@$0CA@$0CJD@$0CJE@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@IPEAK@Z @ 0x140229980 (-Marshal@-$CResourceMarshalerArray@VCResourceMarshaler@DirectComposition@@$0LI@$0CA@$0CJD@$0CJE@.c)
 */

__int64 __fastcall DirectComposition::CVisualGroupMarshaler::EmitUpdateCommands(
        DirectComposition::CVisualGroupMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  return DirectComposition::CResourceMarshalerArray<DirectComposition::CResourceMarshaler,184,32,659,660>::Marshal(
           (char *)this + 56,
           a2,
           *((unsigned int *)this + 8),
           (char *)this + 16);
}
