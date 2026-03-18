/*
 * XREFs of ?EmitUpdateCommands@CExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1401960B0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CBaseExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1400BE700 (-EmitUpdateCommands@CBaseExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetReferenceInfo@CExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1400E0800 (-EmitSetReferenceInfo@CExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetSources@CExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1400E8ADC (-EmitSetSources@CExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetNodesInfo@CExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140195FFC (-EmitSetNodesInfo@CExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_5d2c9c98b8030bbbdf417c93e21215cf___lambda_9a4a792e507a248f30b7fafb5b4b5849___ @ 0x140232EC4 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_5d2c9c98b8030bbbdf417c93e21215c.c)
 */

char __fastcall DirectComposition::CExpressionMarshaler::EmitUpdateCommands(
        DirectComposition::CExpressionMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di

  v4 = 0;
  if ( DirectComposition::CBaseExpressionMarshaler::EmitUpdateCommands(this, a2)
    && DirectComposition::CExpressionMarshaler::EmitSetSources(this, a2)
    && DirectComposition::CExpressionMarshaler::EmitSetReferenceInfo(this, a2)
    && DirectComposition::CExpressionMarshaler::EmitSetNodesInfo(this, a2)
    && ((*((_DWORD *)this + 4) & 0x800) == 0
     || *((_DWORD *)this + 41) >= *((_DWORD *)this + 40)
     || (unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_5d2c9c98b8030bbbdf417c93e21215cf___lambda_9a4a792e507a248f30b7fafb5b4b5849___(
                           this,
                           a2)) )
  {
    return 1;
  }
  return v4;
}
