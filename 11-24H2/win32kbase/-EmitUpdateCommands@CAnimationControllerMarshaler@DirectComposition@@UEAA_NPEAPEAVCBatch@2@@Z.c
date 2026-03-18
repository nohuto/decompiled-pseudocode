/*
 * XREFs of ?EmitUpdateCommands@CAnimationControllerMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140107A90
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x14007DA70 (-EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetProgressCommand@CAnimationControllerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140107B04 (-EmitSetProgressCommand@CAnimationControllerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@.c)
 *     ?EmitSetPlaybackRateCommand@CAnimationControllerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140107B78 (-EmitSetPlaybackRateCommand@CAnimationControllerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch.c)
 *     ?Marshal@?$CResourceMarshalerArray@VCResourceMarshaler@DirectComposition@@$0FM@$0IA@$0BNH@$0BNI@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@IPEAK@Z @ 0x140229860 (-Marshal@-$CResourceMarshalerArray@VCResourceMarshaler@DirectComposition@@$0FM@$0IA@$0BNH@$0BNI@.c)
 */

bool __fastcall DirectComposition::CAnimationControllerMarshaler::EmitUpdateCommands(
        DirectComposition::CAnimationControllerMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CPropertyChangeResourceMarshaler::EmitUpdateCommands(this, a2)
    && (unsigned __int8)DirectComposition::CResourceMarshalerArray<DirectComposition::CResourceMarshaler,92,128,471,472>::Marshal(
                          (char *)this + 72,
                          a2,
                          *((unsigned int *)this + 8),
                          (char *)this + 16)
    && DirectComposition::CAnimationControllerMarshaler::EmitSetProgressCommand(this, a2) )
  {
    return DirectComposition::CAnimationControllerMarshaler::EmitSetPlaybackRateCommand(this, a2);
  }
  return v4;
}
