/*
 * XREFs of _lambda_d6b6cd96afe151513f0173ad1156cee6_::operator() @ 0x18043EDD8
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d6b6cd96afe151513f0173ad1156cee6___::Run @ 0x1804425A0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d6b6cd96afe151513f0173ad1156cee6___--Run.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18003B490 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18008BB18 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18013C6A0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??$InvokeDelegates@V_lambda_042b81dcc6f54f0383a437e9dffe2f01_@@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_042b81dcc6f54f0383a437e9dffe2f01_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x1804394C4 (--$InvokeDelegates@V_lambda_042b81dcc6f54f0383a437e9dffe2f01_@@U-$ITypedEventHandler@PEAUIClient.c)
 *     ??$MakeOrThrow@VClientWindowReadyForPresentationEventArgs@@AEB_N@wil@@YA?AV?$ComPtr@VClientWindowReadyForPresentationEventArgs@@@WRL@Microsoft@@AEB_N@Z @ 0x18043AFDC (--$MakeOrThrow@VClientWindowReadyForPresentationEventArgs@@AEB_N@wil@@YA-AV-$ComPtr@VClientWindo.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_d6b6cd96afe151513f0173ad1156cee6_::operator()(char *a1)
{
  __int64 v2; // rsi
  int v3; // edi
  volatile signed __int32 *v4; // rbx
  __int64 v5; // rcx
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  _QWORD *v8[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+20h]
  __int64 v10; // [rsp+70h] [rbp+28h] BYREF
  volatile signed __int32 *v11; // [rsp+78h] [rbp+30h] BYREF
  RTL_SRWLOCK *v12; // [rsp+80h] [rbp+38h] BYREF
  __int64 v13; // [rsp+88h] [rbp+40h] BYREF

  wil::MakeOrThrow<ClientWindowReadyForPresentationEventArgs,bool const &>(&v10, a1 + 16);
  v2 = *(_QWORD *)a1;
  v7 = v10;
  v13 = *((_QWORD *)a1 + 1);
  v3 = 0;
  v11 = 0LL;
  wil::AcquireSRWLockExclusive(&v12, (RTL_SRWLOCK *)(v2 + 160));
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(
    &v11,
    (volatile signed __int32 **)(v2 + 152));
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v12);
  v4 = v11;
  if ( v11 )
  {
    v8[0] = &v13;
    v8[1] = &v7;
    v3 = Microsoft::WRL::InvokeTraits<-2>::InvokeDelegates<_lambda_042b81dcc6f54f0383a437e9dffe2f01_,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>>(
           v8,
           (__int64)v11,
           (RTL_SRWLOCK *)(v2 + 152));
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v4);
  }
  if ( v3 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xA51,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v3,
      v7);
  v5 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return 0LL;
}
