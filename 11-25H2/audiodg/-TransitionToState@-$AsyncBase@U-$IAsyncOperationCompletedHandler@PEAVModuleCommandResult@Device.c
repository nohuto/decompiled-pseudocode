/*
 * XREFs of ?TransitionToState@?$AsyncBase@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@AEAA_NW4AsyncStatusInternal@Details@23@@Z @ 0x140080034
 * Callers:
 *     ?Cancel@?$AsyncBase@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@UEAAJXZ @ 0x14007A0D0 (-Cancel@-$AsyncBase@U-$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Win.c)
 *     ?Close@?$AsyncBase@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@UEAAJXZ @ 0x14007A400 (-Close@-$AsyncBase@U-$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Wind.c)
 *     ?FireCompletion@?$AsyncBase@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@UEAAJXZ @ 0x14007AE10 (-FireCompletion@-$AsyncBase@U-$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@M.c)
 *     ?FireCompletion@?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x14007AF00 (-FireCompletion@-$AsyncBaseFTM@U-$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Device.c)
 *     ?Start@?$AsyncBase@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@MEAAJXZ @ 0x14007F900 (-Start@-$AsyncBase@U-$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Wind.c)
 * Callees:
 *     <none>
 */

bool __fastcall Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::TransitionToState(
        __int64 a1,
        signed __int32 a2)
{
  signed __int32 v2; // r8d
  signed __int32 v4; // ecx
  signed __int32 v6; // [rsp+10h] [rbp+10h] BYREF

  v2 = *(_DWORD *)(a1 + 48);
  v6 = -2;
  _InterlockedCompareExchange(&v6, v2, -2);
  switch ( a2 )
  {
    case 0:
      v4 = v6;
      if ( v6 != -1 )
        return 0;
      return v4 == _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 48), a2, v4);
    case 1:
    case 2:
    case 3:
      v4 = v6;
      if ( v6 )
        return 0;
      return v4 == _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 48), a2, v4);
    case 4:
      v4 = v6;
      if ( (unsigned int)(v6 - 1) <= 3 )
        return v4 == _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 48), a2, v4);
      break;
  }
  return 0;
}
