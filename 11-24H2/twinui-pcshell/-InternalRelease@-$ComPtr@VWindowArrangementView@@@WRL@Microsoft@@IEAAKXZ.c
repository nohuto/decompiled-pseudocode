/*
 * XREFs of ?InternalRelease@?$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ @ 0x18052BF74
 * Callers:
 *     ??$MakeAndInitialize@VWindowArrangementView@@V1@$$V@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@@012@@Z @ 0x180529800 (--$MakeAndInitialize@VWindowArrangementView@@V1@$$V@Details@WRL@Microsoft@@YAJV-$ComPtrRef@V-$Co.c)
 *     ??1?$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@QEAA@XZ @ 0x180529DA8 (--1-$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@QEAA@XZ.c)
 *     CDCompBatchAnimationCallback__lambda_83894a20d7676cc7370719a196cbc3a9___::_CDCompBatchAnimationCallback__lambda_83894a20d7676cc7370719a196cbc3a9___ @ 0x180529DB4 (CDCompBatchAnimationCallback__lambda_83894a20d7676cc7370719a196cbc3a9___--_CDCompBatchAnimationC.c)
 *     CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::_CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___ @ 0x180529DE4 (CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___--_CDCompBatchAnimationC.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_af32df4a401f889ca6e3593a0d1a6fcf___::_CTaskWrapper__lambda_af32df4a401f889ca6e3593a0d1a6fcf___ @ 0x180529E14 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_af32df4a401f889ca6e3593a0d1a6fcf___--_CTask.c)
 *     _lambda_d996df4ae651642ba189a9f5cbef4ddb_::operator() @ 0x18052A054 (_lambda_d996df4ae651642ba189a9f5cbef4ddb_--operator().c)
 *     ?CancelPlacement@WindowArrangementView@@UEAAJXZ @ 0x18052A6C0 (-CancelPlacement@WindowArrangementView@@UEAAJXZ.c)
 *     ?Hide@WindowArrangementView@@UEAAX_N@Z @ 0x18052B3F0 (-Hide@WindowArrangementView@@UEAAX_N@Z.c)
 *     ?ResetPlaceModeIdleTimer@WindowArrangementView@@AEAAXXZ @ 0x18052CAD0 (-ResetPlaceModeIdleTimer@WindowArrangementView@@AEAAXXZ.c)
 *     ?SetPlaceModeIdleAnimationEnabled@WindowArrangementView@@AEAAX_N@Z @ 0x18052CC78 (-SetPlaceModeIdleAnimationEnabled@WindowArrangementView@@AEAAX_N@Z.c)
 *     ?Show@WindowArrangementView@@UEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z @ 0x18052CF20 (-Show@WindowArrangementView@@UEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z.c)
 *     ?ShowView@WindowArrangementView@@AEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z @ 0x18052D26C (-ShowView@WindowArrangementView@@AEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z.c)
 *     ?TickPlaceModeIdleAnimation@WindowArrangementView@@AEAAJXZ @ 0x18052DC10 (-TickPlaceModeIdleAnimation@WindowArrangementView@@AEAAJXZ.c)
 *     ?WindowArrangementView_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18052E8CC (-WindowArrangementView_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UIWindowArrangementView@@UITabletModeInputCallback@@UIApplicationViewChangeListener@@UIDragVisualHost@@U?$ChainInterfaces@UIShellTargetingBackContractNotification@@UIShellTargetingContractNotification@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18052CA20 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWR_ea_18052CA20.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,IWindowArrangementView,ITabletModeInputCallback,IApplicationViewChangeListener,IDragVisualHost,Microsoft::WRL::ChainInterfaces<IShellTargetingBackContractNotification,IShellTargetingContractNotification,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>::Release(v1);
  }
  return result;
}
