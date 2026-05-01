/*
 * XREFs of ??$Start@$$V@PinningActivity@TaskbarPinningTelemetry@@SA?AV01@XZ @ 0x18068A3B0
 * Callers:
 *     ?InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModifyFlags@@@Z @ 0x180691760 (-InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModif.c)
 *     ?PinShellLink@CPinnedList@@UEAAJPEBGPEAUIShellLinkW@@@Z @ 0x180693720 (-PinShellLink@CPinnedList@@UEAAJPEBGPEAUIShellLinkW@@@Z.c)
 * Callees:
 *     ??0?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18068A964 (--0-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProv.c)
 *     ?StartActivity@PinningActivity@TaskbarPinningTelemetry@@QEAAXXZ @ 0x180695700 (-StartActivity@PinningActivity@TaskbarPinningTelemetry@@QEAAXXZ.c)
 */

TaskbarPinningTelemetry::PinningActivity *__fastcall TaskbarPinningTelemetry::PinningActivity::Start<>(
        TaskbarPinningTelemetry::PinningActivity *this)
{
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TaskbarLogging,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>(this);
  *(_QWORD *)this = &TaskbarPinningTelemetry::PinningActivity::`vftable';
  TaskbarPinningTelemetry::PinningActivity::StartActivity(this);
  return this;
}
