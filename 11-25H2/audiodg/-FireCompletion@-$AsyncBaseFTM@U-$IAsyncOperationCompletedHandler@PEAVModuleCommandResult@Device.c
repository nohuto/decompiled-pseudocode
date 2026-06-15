/*
 * XREFs of ?FireCompletion@?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x14007AF00
 * Callers:
 *     ?OnStart@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAJXZ @ 0x14007D0E0 (-OnStart@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x140012DA8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x140041D70 (-InternalAddRef@-$ComPtr@U-$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Medi.c)
 *     ??$As@U?$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@@?$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x140077148 (--$As@U-$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@@-$.c)
 *     ??1?$AutoStubBias@U?$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@23@@@QEAA@XZ @ 0x140079120 (--1-$AutoStubBias@U-$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@.c)
 *     ?CopyLocal@?$GitPtrSupportsAgile@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@@Internal@Windows@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14007A49C (-CopyLocal@-$GitPtrSupportsAgile@U-$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devi.c)
 *     ?FireCompletionErrorPropagationPolicyFilter@?$ErrorPropagationPolicyTraits@$0?0@WRL@Microsoft@@SAJJPEAUIUnknown@@PEAX@Z @ 0x14007B0B0 (-FireCompletionErrorPropagationPolicyFilter@-$ErrorPropagationPolicyTraits@$0-0@WRL@Microsoft@@S.c)
 *     ?GetRpcOptions@RpcOptionsHelper@@SAJPEAUIUnknown@@_NPEAPEAUIRpcOptions@@@Z @ 0x14007BC94 (-GetRpcOptions@RpcOptionsHelper@@SAJPEAUIUnknown@@_NPEAPEAUIRpcOptions@@@Z.c)
 *     ?TraceCompletionNotificationComplete@?$AsyncBase@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@IEAAXXZ @ 0x14007FE40 (-TraceCompletionNotificationComplete@-$AsyncBase@U-$IAsyncOperationCompletedHandler@PEAVModuleCo.c)
 *     ?TraceCompletionNotificationStart@?$AsyncBase@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@IEAAXXZ @ 0x14007FE74 (-TraceCompletionNotificationStart@-$AsyncBase@U-$IAsyncOperationCompletedHandler@PEAVModuleComma.c)
 *     ?TraceOperationComplete@?$AsyncBase@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@IEAAXXZ @ 0x14007FF14 (-TraceOperationComplete@-$AsyncBase@U-$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@D.c)
 *     ?TransitionToState@?$AsyncBase@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@AEAA_NW4AsyncStatusInternal@Details@23@@Z @ 0x140080034 (-TransitionToState@-$AsyncBase@U-$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Device.c)
 *     ?UnlockCompleteDelegate@?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@AEAAXXZ @ 0x14008009C (-UnlockCompleteDelegate@-$AsyncBaseFTM@U-$IAsyncOperationCompletedHandler@PEAVModuleCommandResul.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::FireCompletion(
        __int64 a1)
{
  unsigned int v2; // edi
  unsigned int v3; // edx
  __int64 v4; // rdx
  bool v5; // dl
  IUnknown *v6; // rbx
  struct IUnknown *v7; // rcx
  unsigned int v8; // eax
  __int64 (__fastcall ***v10)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-28h] BYREF
  LPSTREAM ppstm; // [rsp+38h] [rbp-20h] BYREF
  HRESULT v12; // [rsp+40h] [rbp-18h]
  unsigned int v13; // [rsp+80h] [rbp+28h] BYREF
  struct IUnknown *v14; // [rsp+88h] [rbp+30h] BYREF
  struct IRpcOptions *v15; // [rsp+90h] [rbp+38h] BYREF
  LPUNKNOWN pUnk; // [rsp+98h] [rbp+40h] BYREF

  v2 = 0;
  Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::TransitionToState(
    a1,
    1LL);
  if ( *(int *)(a1 + 128) > 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 16), v3) + 1 == v3 )
  {
    v10 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a1;
    Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>>::InternalAddRef((__int64 *)&v10);
    pUnk = 0LL;
    Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::TraceOperationComplete(a1);
    if ( (int)Microsoft::WRL::ComPtr<IAsyncInfo>::As<Windows::Foundation::IAsyncOperation<Windows::Media::Devices::ModuleCommandResult *>>(
                &v10,
                (__int64 *)&pUnk) >= 0 )
    {
      v13 = -2;
      _InterlockedCompareExchange((volatile signed __int32 *)&v13, *(_DWORD *)(a1 + 48), -2);
      v14 = 0LL;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v14);
      if ( (int)Windows::Internal::GitPtrSupportsAgile<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>>::CopyLocal(
                  (__int64 *)(a1 + 112),
                  v4,
                  &v14) >= 0 )
      {
        Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::TraceCompletionNotificationStart(a1);
        v15 = 0LL;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v15);
        RpcOptionsHelper::GetRpcOptions(v14, v5, &v15);
        v6 = pUnk;
        ppstm = 0LL;
        v12 = 0;
        v7 = v14;
        if ( v15 && v14 )
        {
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&ppstm);
          v12 = CreateStreamOnHGlobal(0LL, 1, &ppstm);
          if ( v12 >= 0 )
            v12 = CoMarshalInterface(ppstm, &GUID_00000000_0000_0000_c000_000000000046, v6, 0, 0LL, 1u);
          v7 = v14;
        }
        else
        {
          v12 = -2147467262;
        }
        v8 = ((__int64 (__fastcall *)(struct IUnknown *, LPUNKNOWN, _QWORD))v7->lpVtbl[1].QueryInterface)(v7, pUnk, v13);
        v2 = Microsoft::WRL::ErrorPropagationPolicyTraits<-1>::FireCompletionErrorPropagationPolicyFilter(
               v8,
               v14,
               *(_QWORD *)(a1 + 120));
        Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::UnlockCompleteDelegate(a1);
        Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::TraceCompletionNotificationComplete();
        AutoStubBias<Windows::Foundation::IAsyncOperation<Windows::Media::Devices::ModuleCommandResult *>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>>::~AutoStubBias<Windows::Foundation::IAsyncOperation<Windows::Media::Devices::ModuleCommandResult *>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>>((int *)&ppstm);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v15);
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v14);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&pUnk);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  }
  return v2;
}
