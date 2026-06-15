/*
 * XREFs of ??$InvokeDelegates@V_lambda_0024b6ff9a14fcf65a4c3da593d931bf_@@U?$ITypedEventHandler@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_0024b6ff9a14fcf65a4c3da593d931bf_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x140078000
 * Callers:
 *     ??$DoInvoke@V_lambda_0024b6ff9a14fcf65a4c3da593d931bf_@@@?$EventSource@U?$ITypedEventHandler@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_0024b6ff9a14fcf65a4c3da593d931bf_@@@Z @ 0x140077E08 (--$DoInvoke@V_lambda_0024b6ff9a14fcf65a4c3da593d931bf_@@@-$EventSource@U-$ITypedEventHandler@PEA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x140012DA8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140022840 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?Remove@?$EventSource@U?$ITypedEventHandler@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x14003C084 (-Remove@-$EventSource@U-$ITypedEventHandler@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@W.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTargetArray@Details@12@@Z @ 0x140079578 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTarget.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::InvokeTraits<-2>::InvokeDelegates<_lambda_0024b6ff9a14fcf65a4c3da593d931bf_,Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>>(
        _QWORD **a1,
        __int64 a2,
        __int64 a3)
{
  unsigned int v5; // edi
  volatile int *v6; // rdx
  __int64 v7; // rbx
  _QWORD *v8; // r14
  struct IUnknown **i; // rsi
  int v10; // eax
  unsigned int v11; // ebx
  int MatchingRestrictedErrorInfo; // eax
  _QWORD v14[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+68h] [rbp+20h] BYREF

  v5 = 0;
  v14[0] = 0LL;
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(v14);
  v7 = v14[0];
  v8 = *(_QWORD **)(v14[0] + 32LL);
  for ( i = *(struct IUnknown ***)(v14[0] + 16LL); i != *(struct IUnknown ***)(v7 + 24); ++i )
  {
    v10 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, _QWORD))(*i)->lpVtbl[1].QueryInterface)(*i, **a1, *a1[1]);
    v5 = v10;
    if ( v10 == -2147417848 || v10 == -2147023174 || v10 == -1996357631 || v10 == -2147418105 || v10 == -2147418094 )
    {
      RoTransformError((unsigned int)v10, 0LL, 0LL);
      Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
        a3,
        *i);
    }
    else
    {
      if ( v10 >= 0 )
        goto LABEL_13;
      if ( (unsigned int)IsErrorPropagationEnabled() )
      {
        v11 = v5;
        v14[1] = *v8;
        v15 = 0LL;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
        MatchingRestrictedErrorInfo = RoGetMatchingRestrictedErrorInfo(v5, &v15);
        if ( MatchingRestrictedErrorInfo >= 0 )
          MatchingRestrictedErrorInfo = RoReportFailedDelegate(*i, v15);
        v5 = 0;
        if ( MatchingRestrictedErrorInfo < 0 )
          v5 = v11;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
        v7 = v14[0];
        break;
      }
      RoTransformError(v5, 0LL, 0LL);
    }
    v5 = 0;
LABEL_13:
    ++v8;
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v7, v6);
  return v5;
}
