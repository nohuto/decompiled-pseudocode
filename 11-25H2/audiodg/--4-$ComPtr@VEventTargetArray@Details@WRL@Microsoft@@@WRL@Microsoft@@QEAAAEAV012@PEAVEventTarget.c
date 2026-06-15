/*
 * XREFs of ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTargetArray@Details@12@@Z @ 0x140079578
 * Callers:
 *     ??$InvokeDelegates@V_lambda_0024b6ff9a14fcf65a4c3da593d931bf_@@U?$ITypedEventHandler@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_0024b6ff9a14fcf65a4c3da593d931bf_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x140078000 (--$InvokeDelegates@V_lambda_0024b6ff9a14fcf65a4c3da593d931bf_@@U-$ITypedEventHandler@PEAVAudioDe.c)
 *     ??$InvokeDelegates@V_lambda_8a2be094b6303b5728ec372d8292b9ec_@@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_8a2be094b6303b5728ec372d8292b9ec_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x140078168 (--$InvokeDelegates@V_lambda_8a2be094b6303b5728ec372d8292b9ec_@@U-$ITypedEventHandler@PEAVAudioDe.c)
 *     ??$InvokeDelegates@V_lambda_9d7fead59395791ab94fec2ef4162c73_@@U?$ITypedEventHandler@PEAVAudioDeviceModulesManager@Devices@Media@Windows@@PEAVAudioDeviceModuleNotificationEventArgs@234@@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_9d7fead59395791ab94fec2ef4162c73_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAVAudioDeviceModulesManager@Devices@Media@Windows@@PEAVAudioDeviceModuleNotificationEventArgs@234@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x1400782D0 (--$InvokeDelegates@V_lambda_9d7fead59395791ab94fec2ef4162c73_@@U-$ITypedEventHandler@PEAVAudioDe.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEBAXXZ @ 0x14001A190 (-InternalAddRef@-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140022840 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(
        __int64 *a1,
        volatile int *a2)
{
  volatile int *v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  volatile int *v7; // [rsp+30h] [rbp+8h] BYREF

  if ( (volatile int *)*a1 != a2 )
  {
    v7 = a2;
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::InternalAddRef((__int64 *)&v7, a2);
    v4 = *a1;
    *a1 = v5;
    if ( v4 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v4, v3);
  }
  return a1;
}
