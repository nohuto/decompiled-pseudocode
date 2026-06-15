/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioSystemEffectsPropertyChangeNotificationClient@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x14005F0F0
 * Callers:
 *     ??1CAPOEndpointNotificationsHandler@@UEAA@XZ @ 0x14005F118 (--1CAPOEndpointNotificationsHandler@@UEAA@XZ.c)
 *     ??1CMicBoostNotificationsHandler@@UEAA@XZ @ 0x14006019C (--1CMicBoostNotificationsHandler@@UEAA@XZ.c)
 *     ??1CAPOEnvironmentStateChangedNotificationsHandler@@UEAA@XZ @ 0x140061B58 (--1CAPOEnvironmentStateChangedNotificationsHandler@@UEAA@XZ.c)
 *     ??1CDeviceOrientationNotificationsHandler@@UEAA@XZ @ 0x140061D20 (--1CDeviceOrientationNotificationsHandler@@UEAA@XZ.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIControlChangeNotify@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x140061F20 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UIControlChangeNotify@@@WRL@Microsoft.c)
 *     ??1CAudioSystemEffectsPropertyChangeNotificationsHandler@@UEAA@XZ @ 0x140066BB0 (--1CAudioSystemEffectsPropertyChangeNotificationsHandler@@UEAA@XZ.c)
 *     ??1?$SimpleVectorView@UEventRegistrationToken@@V?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UPodLifetimeTraits@XWinRT@@UIntVersionTag@8@$0A@@Internal@Collections@Foundation@Windows@@UEAA@XZ @ 0x140079238 (--1-$SimpleVectorView@UEventRegistrationToken@@V-$Vector@UEventRegistrationToken@@UEventRegistra.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140035490 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioSystemEffectsPropertyChangeNotificationClient>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioSystemEffectsPropertyChangeNotificationClient>(
        __int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 32);
  result = (unsigned __int64)v1 >> 63;
  if ( v1 < 0 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release((volatile signed __int32 *)(2 * v1));
  return result;
}
