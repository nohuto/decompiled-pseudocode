/*
 * XREFs of ?EmitUpdateCommands@CCaptureControllerMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140227040
 * Callers:
 *     <none>
 * Callees:
 *     ?Marshal@CMarshaledArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IPEAKKW4MILCMD@@2_K@Z @ 0x1400EDE00 (-Marshal@CMarshaledArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IPEAKKW4MILCMD@@2_K@Z.c)
 *     ?EmitSetCaptureStateCommand@CCaptureControllerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140225B88 (-EmitSetCaptureStateCommand@CCaptureControllerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2.c)
 *     ?EmitSetContentOffsetCommand@CCaptureControllerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140226058 (-EmitSetContentOffsetCommand@CCaptureControllerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@.c)
 *     ?EmitSetContentSizeCommand@CCaptureControllerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1402260CC (-EmitSetContentSizeCommand@CCaptureControllerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@.c)
 *     ?EmitSetDefaultSDRBoostCommand@CCaptureControllerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14022613C (-EmitSetDefaultSDRBoostCommand@CCaptureControllerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatc.c)
 *     ?EmitSetIsConstrainedBySizeCommand@CCaptureControllerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140226330 (-EmitSetIsConstrainedBySizeCommand@CCaptureControllerMarshaler@DirectComposition@@AEAA_NPEAPEAVC.c)
 *     ?EmitSetReferenceVisualCommand@CCaptureControllerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140226858 (-EmitSetReferenceVisualCommand@CCaptureControllerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatc.c)
 *     ?EmitSetRootVisualCommand@CCaptureControllerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140226960 (-EmitSetRootVisualCommand@CCaptureControllerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@.c)
 *     ?EmitSetSuspendOnScreenOffCommand@CCaptureControllerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140226B34 (-EmitSetSuspendOnScreenOffCommand@CCaptureControllerMarshaler@DirectComposition@@AEAA_NPEAPEAVCB.c)
 *     ?EmitSetTransformCommand@CCaptureControllerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140226C98 (-EmitSetTransformCommand@CCaptureControllerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 */

bool __fastcall DirectComposition::CCaptureControllerMarshaler::EmitUpdateCommands(
        DirectComposition::CCaptureControllerMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CCaptureControllerMarshaler::EmitSetRootVisualCommand(this, a2)
    && DirectComposition::CCaptureControllerMarshaler::EmitSetCaptureStateCommand(this, a2)
    && DirectComposition::CCaptureControllerMarshaler::EmitSetContentSizeCommand(this, a2)
    && DirectComposition::CCaptureControllerMarshaler::EmitSetTransformCommand(this, a2)
    && DirectComposition::CCaptureControllerMarshaler::EmitSetIsConstrainedBySizeCommand(this, a2)
    && DirectComposition::CCaptureControllerMarshaler::EmitSetDefaultSDRBoostCommand(this, a2)
    && DirectComposition::CCaptureControllerMarshaler::EmitSetReferenceVisualCommand(this, a2)
    && DirectComposition::CMarshaledArrayBase::Marshal(
         (_QWORD *)this + 13,
         a2,
         *((_DWORD *)this + 8),
         (_DWORD *)this + 4,
         4096,
         497,
         498,
         0x20uLL)
    && DirectComposition::CCaptureControllerMarshaler::EmitSetContentOffsetCommand(this, a2) )
  {
    return DirectComposition::CCaptureControllerMarshaler::EmitSetSuspendOnScreenOffCommand(this, a2) != 0;
  }
  return v4;
}
