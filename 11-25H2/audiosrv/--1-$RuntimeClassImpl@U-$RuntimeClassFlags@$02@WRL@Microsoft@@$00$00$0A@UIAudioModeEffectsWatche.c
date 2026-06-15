/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioModeEffectsWatcher@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x18007FF14
 * Callers:
 *     ??1CEndpointCharacteristics@@UEAA@XZ @ 0x18004284C (--1CEndpointCharacteristics@@UEAA@XZ.c)
 *     ??1?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIMMNotificationClient@@@WRL@Microsoft@@UEAA@XZ @ 0x1800889E8 (--1-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UIMMNotificationClient@@@WRL@Microsoft.c)
 *     ??1AudioModeEffectsWatcher@@UEAA@XZ @ 0x1800A33AC (--1AudioModeEffectsWatcher@@UEAA@XZ.c)
 *     ??1AudioEffectsWatcher@@UEAA@XZ @ 0x1800B43F0 (--1AudioEffectsWatcher@@UEAA@XZ.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIMMNotificationClient@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800B4610 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UIMMNotificationClient@@@WRL@Microsof.c)
 *     ??1CAudioRenderEndpointChangeDelegator@@UEAA@XZ @ 0x1800B7450 (--1CAudioRenderEndpointChangeDelegator@@UEAA@XZ.c)
 *     ??1Token@?$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@UEAA@XZ @ 0x1800EC8FC (--1Token@-$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@UEAA@XZ.c)
 *     ??1CDeviceGraphManager@@UEAA@XZ @ 0x1800EEE30 (--1CDeviceGraphManager@@UEAA@XZ.c)
 *     ??1AtmosCheck@@UEAA@XZ @ 0x180147150 (--1AtmosCheck@@UEAA@XZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180026600 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioModeEffectsWatcher>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioModeEffectsWatcher>(
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
