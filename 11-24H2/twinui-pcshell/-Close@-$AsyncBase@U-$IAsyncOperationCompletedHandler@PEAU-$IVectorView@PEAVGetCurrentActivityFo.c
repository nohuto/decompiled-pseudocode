/*
 * XREFs of ?Close@?$AsyncBase@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@UEAAJXZ @ 0x1803FD750
 * Callers:
 *     <none>
 * Callees:
 *     ?TransitionToState@?$AsyncBase@U?$IAsyncOperationCompletedHandler@W4AppRequestHandledResult@ViewManagerInterop@Shell@Internal@Windows@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@AEAA_NW4AsyncStatusInternal@Details@23@@Z @ 0x18022C95C (-TransitionToState@-$AsyncBase@U-$IAsyncOperationCompletedHandler@W4AppRequestHandledResult@View.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *> *>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::Close(
        __int64 a1)
{
  unsigned int v1; // ebx
  int v2; // edx
  _DWORD *v3; // r10
  signed __int32 v4; // ecx
  signed __int32 v6; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  if ( Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<enum Windows::Internal::Shell::ViewManagerInterop::AppRequestHandledResult>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::TransitionToState(
         a1,
         4) )
  {
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v3 + 144LL))(v3);
  }
  else
  {
    v4 = v3[14];
    v6 = -2;
    _InterlockedCompareExchange(&v6, v4, -2);
    if ( v6 != v2 )
    {
      v1 = -2147483635;
      RoOriginateError(2147483661LL, 0LL);
    }
  }
  return v1;
}
