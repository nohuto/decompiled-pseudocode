/*
 * XREFs of ?RuntimeClassInitialize@BluetoothBroadcastProvider@@QEAAJPEAUIMulticastManagerNotificationClient@@@Z @ 0x1800E27F0
 * Callers:
 *     ??$MakeAndInitialize@VBluetoothBroadcastProvider@@UIMulticastProvider@@AEAPEAUIMulticastManagerNotificationClient@@@Details@WRL@Microsoft@@YAJPEAPEAUIMulticastProvider@@AEAPEAUIMulticastManagerNotificationClient@@@Z @ 0x1800DDD08 (--$MakeAndInitialize@VBluetoothBroadcastProvider@@UIMulticastProvider@@AEAPEAUIMulticastManagerN.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$function@$$A6AXAEBW4BluetoothLEAudioSupportedState@Internal@Audio@Bluetooth@Microsoft@@@Z@wistd@@QEAA@XZ @ 0x18009F258 (--1-$function@$$A6AXAEBW4BluetoothLEAudioSupportedState@Internal@Audio@Bluetooth@Microsoft@@@Z@w.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800A105C (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@w.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1800C1648 (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 *     ??$make_wnf_subscription_state@W4BluetoothLEAudioSupportedState@Internal@Audio@Bluetooth@Microsoft@@@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBW4BluetoothLEAudioSupportedState@Internal@Audio@Bluetooth@Microsoft@@@Z@wistd@@KPEAPEAU?$wnf_subscription_state@W4BluetoothLEAudioSupportedState@Internal@Audio@Bluetooth@Microsoft@@@01@@Z @ 0x1800DEBA4 (--$make_wnf_subscription_state@W4BluetoothLEAudioSupportedState@Internal@Audio@Bluetooth@Microso.c)
 */

__int64 __fastcall BluetoothBroadcastProvider::RuntimeClassInitialize(
        BluetoothBroadcastProvider *this,
        struct IMulticastManagerNotificationClient *a2,
        __int64 a3)
{
  int v4; // eax
  wil::details *v5; // rcx
  struct wil::details::wnf_subscription_state_base *v6; // rdx
  const char *v7; // r9
  __int64 result; // rax
  wil::details *v9; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v10[8]; // [rsp+28h] [rbp-90h] BYREF
  _QWORD v11[14]; // [rsp+30h] [rbp-88h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  *((_QWORD *)this + 14) = a2;
  v11[0] = off_1801722E0;
  v11[1] = this;
  v11[13] = v11;
  v9 = 0LL;
  v4 = wil::details::make_wnf_subscription_state<enum Microsoft::Bluetooth::Audio::Internal::BluetoothLEAudioSupportedState>(
         (__int64)this,
         (__int64)v10,
         a3,
         &v9);
  v5 = 0LL;
  if ( v4 >= 0 )
    v5 = v9;
  v9 = v5;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>>::operator=(
    (wil::details **)this + 15,
    &v9);
  if ( v9 )
    wil::details::delete_wnf_subscription_state(v9, v6);
  wistd::function<void (enum Microsoft::Bluetooth::Audio::Internal::BluetoothLEAudioSupportedState const &)>::~function<void (enum Microsoft::Bluetooth::Audio::Internal::BluetoothLEAudioSupportedState const &)>((__int64)v10);
  if ( *((_QWORD *)this + 15) )
  {
    result = 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA8,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btbroadcastprovider.cpp",
      (const char *)0x8007000ELL);
    result = 2147942414LL;
  }
  while ( 2 )
  {
    try
    {
    }
    catch ( ... )
    {
      LODWORD(v9) = wil::details::in1diag3::Return_CaughtException(
                      retaddr,
                      (void *)0xAB,
                      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btbroadcastprovider.cpp",
                      v7);
      result = (unsigned int)v9;
      continue;
    }
    break;
  }
  return result;
}
