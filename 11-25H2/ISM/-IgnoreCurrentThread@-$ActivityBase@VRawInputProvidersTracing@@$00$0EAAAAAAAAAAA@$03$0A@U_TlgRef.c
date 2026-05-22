/*
 * XREFs of ?IgnoreCurrentThread@?$ActivityBase@VRawInputProvidersTracing@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800D37A8
 * Callers:
 *     ?Stop@DeviceAttached@RawInputProvidersTracing@@QEAAXJK@Z @ 0x1800D5D84 (-Stop@DeviceAttached@RawInputProvidersTracing@@QEAAXJK@Z.c)
 *     ?StopActivity@DeviceAttached@RawInputProvidersTracing@@MEAAXXZ @ 0x1800D6070 (-StopActivity@DeviceAttached@RawInputProvidersTracing@@MEAAXXZ.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800D62A0 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 */

void __fastcall wil::ActivityBase<RawInputProvidersTracing,1,70368744177664,4,0,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread(
        __int64 a1)
{
  if ( *(_DWORD *)(a1 + 312) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 288));
}
