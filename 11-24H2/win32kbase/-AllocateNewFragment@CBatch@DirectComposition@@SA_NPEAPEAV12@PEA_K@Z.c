/*
 * XREFs of ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x14010020C
 * Callers:
 *     ?EmitCommands@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@QEAA_NPEAPEAVCBatch@3@@Z @ 0x14007DCE8 (-EmitCommands@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@QEAA_NPEAPEAVCBatch@.c)
 *     ?EmitUpdateCommands@CBaseExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1400BE700 (-EmitUpdateCommands@CBaseExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CPrimitiveGroupMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1400D1F70 (-EmitUpdateCommands@CPrimitiveGroupMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ??$EmitAddTargets@UtagMILCMD_COMPOSITIONLIGHT_ADDTARGETS@@@CCompositionLightMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@1@PEAPEAVCResourceMarshaler@1@PEAI2W4MILCMD@@@Z @ 0x1400F964C (--$EmitAddTargets@UtagMILCMD_COMPOSITIONLIGHT_ADDTARGETS@@@CCompositionLightMarshaler@DirectComp.c)
 *     ??$EmitAddTargets@UtagMILCMD_COMPOSITIONLIGHT_ADDEXCLUSIONS@@@CCompositionLightMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@1@PEAPEAVCResourceMarshaler@1@PEAI2W4MILCMD@@@Z @ 0x1400F9778 (--$EmitAddTargets@UtagMILCMD_COMPOSITIONLIGHT_ADDEXCLUSIONS@@@CCompositionLightMarshaler@DirectC.c)
 *     ?EmitApplyPositionShift@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1401031B0 (-EmitApplyPositionShift@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSegmentUpdate@CGenericInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140103B8C (-EmitSegmentUpdate@CGenericInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitAddTimeEvents@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x14010C638 (-EmitAddTimeEvents@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitAddReceivers@CProjectedShadowSceneMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x14012E77C (-EmitAddReceivers@CProjectedShadowSceneMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitAddCasters@CProjectedShadowSceneMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x14012EAD8 (-EmitAddCasters@CProjectedShadowSceneMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitBuffers@CCaptureRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1401969FC (-EmitBuffers@CCaptureRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CEffectInputSet@DirectComposition@@QEAA_NW4MILCMD@@IPEAPEAVCBatch@2@@Z @ 0x14022DDF8 (-EmitUpdateCommands@CEffectInputSet@DirectComposition@@QEAA_NW4MILCMD@@IPEAPEAVCBatch@2@@Z.c)
 *     ?EmitTable@CTableTransferEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@I@Z @ 0x14022F648 (-EmitTable@CTableTransferEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@I@Z.c)
 *     ?EmitUpdateCommands@CClipGroupMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140231EF0 (-EmitUpdateCommands@CClipGroupMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_5d2c9c98b8030bbbdf417c93e21215cf___lambda_9a4a792e507a248f30b7fafb5b4b5849___ @ 0x140232EC4 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_5d2c9c98b8030bbbdf417c93e21215c.c)
 *     ??$EmitSetProperty@UPropertySetQuaternionValue@@UD2DQuaternion@@@CPropertySetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@1@I@Z @ 0x140233324 (--$EmitSetProperty@UPropertySetQuaternionValue@@UD2DQuaternion@@@CPropertySetMarshaler@DirectCom.c)
 *     ?EmitSurfaces@CCompositionMipmapSurfaceMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140238B58 (-EmitSurfaces@CCompositionMipmapSurfaceMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_66f16f058a7148ecab2826ea000753f1___lambda_45b02998bed050691e5b6850ccebf4aa___ @ 0x14023901C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_66f16f058a7148ecab2826ea000753f.c)
 * Callees:
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z @ 0x14007F1D0 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z.c)
 */

bool __fastcall DirectComposition::CBatch::AllocateNewFragment(
        struct DirectComposition::CBatch ***a1,
        unsigned __int64 *a2)
{
  struct DirectComposition::CBatch **v2; // rbx
  struct DirectComposition::CBatch *BatchFragment; // rax

  v2 = *a1;
  BatchFragment = DirectComposition::CApplicationChannel::GetBatchFragment(
                    (*a1)[1],
                    *((_DWORD *)*a1 + 4),
                    (_BYTE)(*a1)[4] & 1,
                    1,
                    0);
  if ( BatchFragment )
  {
    *((_BYTE *)v2[17] + 64) = 0;
    *v2 = BatchFragment;
    *a1 = (struct DirectComposition::CBatch **)BatchFragment;
    if ( a2 )
      *a2 = 4096LL - *(_QWORD *)(*((_QWORD *)BatchFragment + 17) + 40LL);
    LOBYTE(BatchFragment) = 1;
  }
  return (char)BatchFragment;
}
