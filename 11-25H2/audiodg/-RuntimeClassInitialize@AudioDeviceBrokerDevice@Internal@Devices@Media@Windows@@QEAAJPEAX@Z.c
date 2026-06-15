/*
 * XREFs of ?RuntimeClassInitialize@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@QEAAJPEAX@Z @ 0x14001BBB8
 * Callers:
 *     ??$MakeAndInitialize@VAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UIAudioDeviceBrokerDevice@2345@AEAPEAX@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@AEAPEAX@Z @ 0x14001B9EC (--$MakeAndInitialize@VAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UIAudioDeviceBroke.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryRetrieveNotificationDeviceId@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@AEAAJXZ @ 0x14001BE98 (-TryRetrieveNotificationDeviceId@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@AEAAJXZ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x14002253C (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?InitializeEvents@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@AEAAJXZ @ 0x14004C48C (-InitializeEvents@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@AEAAJXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1400574C8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::RuntimeClassInitialize(
        HANDLE *this,
        void *a2)
{
  HANDLE CurrentProcess; // rbx
  HANDLE v5; // rax
  const char *v6; // r9
  int NotificationDeviceId; // ebx
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( !a2 )
  {
    NotificationDeviceId = -2147467261;
    v9 = 2042LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
      (const char *)(unsigned int)NotificationDeviceId);
    return (unsigned int)NotificationDeviceId;
  }
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    this + 14,
    0LL);
  CurrentProcess = GetCurrentProcess();
  v5 = GetCurrentProcess();
  if ( DuplicateHandle(v5, a2, CurrentProcess, this + 14, 0, 0, 2u) )
  {
    NotificationDeviceId = Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::TryRetrieveNotificationDeviceId((Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *)this);
    if ( NotificationDeviceId < 0 )
    {
      v9 = 2061LL;
    }
    else
    {
      if ( !*((_BYTE *)this + 136) )
        return 0LL;
      NotificationDeviceId = Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::InitializeEvents(this);
      if ( NotificationDeviceId >= 0 )
        return 0LL;
      v9 = 2067LL;
    }
    goto LABEL_8;
  }
  return wil::details::in1diag3::Return_GetLastError(
           retaddr,
           (void *)0x807,
           (unsigned int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
           v6);
}
