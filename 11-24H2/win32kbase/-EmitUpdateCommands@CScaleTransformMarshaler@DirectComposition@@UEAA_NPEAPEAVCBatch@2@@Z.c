/*
 * XREFs of ?EmitUpdateCommands@CScaleTransformMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140110C10
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x14007DA70 (-EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetScaleXCommand@CScaleTransformMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140110C88 (-EmitSetScaleXCommand@CScaleTransformMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetScaleYCommand@CScaleTransformMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140110CF8 (-EmitSetScaleYCommand@CScaleTransformMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetCenterXCommand@CScaleTransformMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140110D68 (-EmitSetCenterXCommand@CScaleTransformMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetCenterYCommand@CScaleTransformMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140110DDC (-EmitSetCenterYCommand@CScaleTransformMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 */

bool __fastcall DirectComposition::CScaleTransformMarshaler::EmitUpdateCommands(
        DirectComposition::CScaleTransformMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CPropertyChangeResourceMarshaler::EmitUpdateCommands(this, a2)
    && DirectComposition::CScaleTransformMarshaler::EmitSetScaleXCommand(this, a2)
    && DirectComposition::CScaleTransformMarshaler::EmitSetScaleYCommand(this, a2)
    && DirectComposition::CScaleTransformMarshaler::EmitSetCenterXCommand(this, a2) )
  {
    return DirectComposition::CScaleTransformMarshaler::EmitSetCenterYCommand(this, a2);
  }
  return v4;
}
