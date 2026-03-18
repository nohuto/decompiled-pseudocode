/*
 * XREFs of ?EmitUpdateCommands@CAnimationTriggerMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x14013E760
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x14007DA70 (-EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetConditionCommand@CAnimationTriggerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14013E7E4 (-EmitSetConditionCommand@CAnimationTriggerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetNotificationDataSourceIdCommand@CAnimationTriggerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14013E864 (-EmitSetNotificationDataSourceIdCommand@CAnimationTriggerMarshaler@DirectComposition@@AEAA_NPEAP.c)
 *     ?EmitSetNotificationDataProviderIdCommand@CAnimationTriggerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14013E8D4 (-EmitSetNotificationDataProviderIdCommand@CAnimationTriggerMarshaler@DirectComposition@@AEAA_NPE.c)
 *     ?Marshal@?$CResourceMarshalerArray@VCResourceMarshaler@DirectComposition@@$0L@$0BAA@$0BNN@$0BNO@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@IPEAK@Z @ 0x140229950 (-Marshal@-$CResourceMarshalerArray@VCResourceMarshaler@DirectComposition@@$0L@$0BAA@$0BNN@$0BNO@.c)
 */

bool __fastcall DirectComposition::CAnimationTriggerMarshaler::EmitUpdateCommands(
        DirectComposition::CAnimationTriggerMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CPropertyChangeResourceMarshaler::EmitUpdateCommands(this, a2)
    && DirectComposition::CAnimationTriggerMarshaler::EmitSetConditionCommand(this, a2)
    && (unsigned __int8)DirectComposition::CResourceMarshalerArray<DirectComposition::CResourceMarshaler,11,256,477,478>::Marshal(
                          (char *)this + 80,
                          a2,
                          *((unsigned int *)this + 8),
                          (char *)this + 16)
    && DirectComposition::CAnimationTriggerMarshaler::EmitSetNotificationDataProviderIdCommand(this, a2) )
  {
    return DirectComposition::CAnimationTriggerMarshaler::EmitSetNotificationDataSourceIdCommand(this, a2);
  }
  return v4;
}
