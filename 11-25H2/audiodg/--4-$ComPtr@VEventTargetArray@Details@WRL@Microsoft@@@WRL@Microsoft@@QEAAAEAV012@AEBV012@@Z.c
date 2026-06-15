/*
 * XREFs of ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x140079538
 * Callers:
 *     ??$DoInvoke@V_lambda_0024b6ff9a14fcf65a4c3da593d931bf_@@@?$EventSource@U?$ITypedEventHandler@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_0024b6ff9a14fcf65a4c3da593d931bf_@@@Z @ 0x140077E08 (--$DoInvoke@V_lambda_0024b6ff9a14fcf65a4c3da593d931bf_@@@-$EventSource@U-$ITypedEventHandler@PEA.c)
 *     ??$DoInvoke@V_lambda_8a2be094b6303b5728ec372d8292b9ec_@@@?$EventSource@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_8a2be094b6303b5728ec372d8292b9ec_@@@Z @ 0x140077EB0 (--$DoInvoke@V_lambda_8a2be094b6303b5728ec372d8292b9ec_@@@-$EventSource@U-$ITypedEventHandler@PEA.c)
 *     ??$DoInvoke@V_lambda_9d7fead59395791ab94fec2ef4162c73_@@@?$EventSource@U?$ITypedEventHandler@PEAVAudioDeviceModulesManager@Devices@Media@Windows@@PEAVAudioDeviceModuleNotificationEventArgs@234@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_9d7fead59395791ab94fec2ef4162c73_@@@Z @ 0x140077F58 (--$DoInvoke@V_lambda_9d7fead59395791ab94fec2ef4162c73_@@@-$EventSource@U-$ITypedEventHandler@PEA.c)
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
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 != *(_QWORD *)a2 )
  {
    v7 = *(_QWORD *)a2;
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::InternalAddRef(&v7, a2);
    v4 = *a1;
    *a1 = v5;
    if ( v4 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v4, v3);
  }
  return a1;
}
