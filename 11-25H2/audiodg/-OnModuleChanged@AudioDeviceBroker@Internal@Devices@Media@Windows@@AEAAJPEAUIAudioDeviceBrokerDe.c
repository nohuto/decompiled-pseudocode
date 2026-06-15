/*
 * XREFs of ?OnModuleChanged@AudioDeviceBroker@Internal@Devices@Media@Windows@@AEAAJPEAUIAudioDeviceBrokerDevice@2345@PEAUIAudioDeviceBrokerChangedEventArgs@2345@@Z @ 0x14007CF80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$DoInvoke@V_lambda_8a2be094b6303b5728ec372d8292b9ec_@@@?$EventSource@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_8a2be094b6303b5728ec372d8292b9ec_@@@Z @ 0x140077EB0 (--$DoInvoke@V_lambda_8a2be094b6303b5728ec372d8292b9ec_@@@-$EventSource@U-$ITypedEventHandler@PEA.c)
 */

__int64 __fastcall Windows::Media::Devices::Internal::AudioDeviceBroker::OnModuleChanged(
        RTL_SRWLOCK *this,
        struct Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice *a2,
        struct Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs *a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  RTL_SRWLOCK *v8; // [rsp+40h] [rbp+8h] BYREF
  struct Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs *v9; // [rsp+50h] [rbp+18h] BYREF

  v8 = this;
  *(_QWORD *)&v6 = &v8;
  v9 = a3;
  *((_QWORD *)&v6 + 1) = &v9;
  v3 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::DoInvoke<_lambda_8a2be094b6303b5728ec372d8292b9ec_>(
         this + 10,
         &v6);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x51A,
    (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
