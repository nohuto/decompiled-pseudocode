/*
 * XREFs of ?PutOnComplete@?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAU?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@3@@Z @ 0x14007B100
 * Callers:
 *     ?put_Completed@SendCommandAsyncOperation@Devices@Media@Windows@@UEAAJPEAU?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@4@@Z @ 0x14007EA30 (-put_Completed@SendCommandAsyncOperation@Devices@Media@Windows@@UEAAJPEAU-$IAsyncOperationComple.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x140012DD8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??B?$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ @ 0x140019394 (--B-$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ.c)
 *     ?CheckValidStateForDelegateCall@?$AsyncBase@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@IEAAJXZ @ 0x140077E10 (-CheckValidStateForDelegateCall@-$AsyncBase@U-$IAsyncOperationCompletedHandler@PEAVModuleCommand.c)
 *     ?TraceDelegateAssigned@?$AsyncBase@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@IEAAXXZ @ 0x14007DD74 (-TraceDelegateAssigned@-$AsyncBase@U-$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@De.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::PutOnComplete(
        __int64 a1,
        __int64 a2)
{
  int AgileReference; // edi
  __int64 *v5; // rax
  __int64 *v6; // rdi
  __int64 v7; // rax
  signed __int32 v8; // ecx
  signed __int32 v10[8]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v11; // [rsp+20h] [rbp-18h] BYREF
  __int64 v12; // [rsp+28h] [rbp-10h] BYREF
  signed __int32 v13; // [rsp+50h] [rbp+18h] BYREF
  __int64 *v14; // [rsp+58h] [rbp+20h] BYREF

  AgileReference = Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::CheckValidStateForDelegateCall(a1);
  if ( AgileReference >= 0 )
  {
    if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 20)) != 1 )
      return (unsigned int)-2147483624;
    v14 = (__int64 *)(a1 + 120);
    v5 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::AgileRef>::operator Microsoft::WRL::AgileRef *(&v14);
    v6 = v5;
    if ( a2 )
    {
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v5);
      AgileReference = RoGetAgileReference(0LL, &GUID_cb786404_f2e8_5e0b_bf12_39e31483cfae, a2, v6);
      if ( AgileReference < 0 )
        return (unsigned int)AgileReference;
    }
    else
    {
      v7 = *v5;
      v12 = 0LL;
      *v6 = 0LL;
      v11 = v7;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v11);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
      AgileReference = 0;
    }
    Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::TraceDelegateAssigned(a1);
    if ( a2 )
    {
      *(_QWORD *)(a1 + 128) = *(_QWORD *)(*(_QWORD *)a2 + 24LL);
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 136));
    }
    _InterlockedOr(v10, 0);
    v8 = *(_DWORD *)(a1 + 56);
    v13 = -2;
    _InterlockedCompareExchange(&v13, v8, -2);
    if ( (unsigned int)(v13 - 1) <= 3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 128LL))(a1);
  }
  return (unsigned int)AgileReference;
}
