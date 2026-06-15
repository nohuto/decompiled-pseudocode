/*
 * XREFs of ?TraceDelegateAssigned@?$AsyncBase@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@IEAAXXZ @ 0x14007DD74
 * Callers:
 *     ?PutOnComplete@?$AsyncBase@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@UEAAJPEAU?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@@Z @ 0x14007B020 (-PutOnComplete@-$AsyncBase@U-$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Me.c)
 *     ?PutOnComplete@?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAU?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@3@@Z @ 0x14007B100 (-PutOnComplete@-$AsyncBaseFTM@U-$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::TraceDelegateAssigned(
        __int64 a1)
{
  __int64 (__fastcall *v1)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, __int64, __int64, GUID *, __int64, _DWORD); // rax
  __int64 result; // rax
  GUID v3; // [rsp+40h] [rbp-18h] BYREF

  if ( Microsoft::WRL::gCausality )
  {
    v1 = *(__int64 (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, __int64, __int64, GUID *, __int64, _DWORD))(*(_QWORD *)Microsoft::WRL::gCausality + 64LL);
    v3 = GUID_CAUSALITY_WINDOWS_PLATFORM_ID;
    return v1(Microsoft::WRL::gCausality, 2LL, 2LL, &v3, a1, 0);
  }
  return result;
}
