/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMessageProxyReconnectAdapter@@UIMessageProxyListener@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801E19B0
 * Callers:
 *     ?PositionAdjustmentHistory_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180076E10 (-PositionAdjustmentHistory_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$MakeAndInitialize@VPositionAdjustmentHistory@@V1@$$V@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@@012@@Z @ 0x180078234 (--$MakeAndInitialize@VPositionAdjustmentHistory@@V1@$$V@Details@WRL@Microsoft@@YAJV-$ComPtrRef@V.c)
 *     ?InternalRelease@?$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@IEAAKXZ @ 0x1801E1988 (-InternalRelease@-$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VCImmersiveShellBuilder@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1801EBB48 (--$MakeAndInitialize@VCImmersiveShellBuilder@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIU.c)
 *     ?CMultitaskingViewHotKeyHandler_CreateInstance@@YAJPEAUIImmersiveWindowMessageService@@PEAUIImmersiveMonitorManager@@PEAUIMultitaskingViewTaskScheduler@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x1801FBCB8 (-CMultitaskingViewHotKeyHandler_CreateInstance@@YAJPEAUIImmersiveWindowMessageService@@PEAUIImme.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIImmersiveShellBuilder@@UIImmersiveShellBuilder2@@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x1803EC720 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIImmersiveShellB.c)
 * Callees:
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009A220 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMessageProxyReconnectAdapter,IMessageProxyListener>::Release(
        __int64 a1,
        volatile int *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // r9

  v2 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(a1 + 20), a2);
  if ( !v2 )
  {
    if ( v3 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 32LL))(v3, v2 + 1);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v2;
}
