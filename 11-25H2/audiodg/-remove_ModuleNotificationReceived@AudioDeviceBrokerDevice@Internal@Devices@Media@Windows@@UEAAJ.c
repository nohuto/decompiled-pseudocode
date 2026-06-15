/*
 * XREFs of ?remove_ModuleNotificationReceived@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x14003C040
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Remove@?$EventSource@U?$ITypedEventHandler@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x14003C084 (-Remove@-$EventSource@U-$ITypedEventHandler@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@W.c)
 */

__int64 __fastcall Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::remove_ModuleNotificationReceived(
        Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *this,
        struct EventRegistrationToken a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
         (char *)this + 152,
         a2.value);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA9D,
    (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
