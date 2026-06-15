/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@UIAudioProcessInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000AA80
 * Callers:
 *     ?DeleteInactivityTimer@CProcess@@QEAAXXZ @ 0x180002250 (-DeleteInactivityTimer@CProcess@@QEAAXXZ.c)
 *     ?HasAccessibilityAudioStateChanged@CWindowsPolicyManager@@UEAA?AW4AccessibilityStateChange@@XZ @ 0x180007C00 (-HasAccessibilityAudioStateChanged@CWindowsPolicyManager@@UEAA-AW4AccessibilityStateChange@@XZ.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x1800082D0 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     PbmGetSoundLevel @ 0x1800191D0 (PbmGetSoundLevel.c)
 *     PbmRegisterAppManagerNotification @ 0x18001A0D0 (PbmRegisterAppManagerNotification.c)
 *     ?RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18001A280 (-RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     ?MarkAsTerminated@CProcess@@QEAAXXZ @ 0x18001C3C4 (-MarkAsTerminated@CProcess@@QEAAXXZ.c)
 *     ?CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z @ 0x18001E3AC (-CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@UIAudioProcessInternal@@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x180036530 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAu_ea_180036530.c)
 *     ??1?$ComPtr@VCProcess@@@WRL@Microsoft@@QEAA@XZ @ 0x180038DD8 (--1-$ComPtr@VCProcess@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1CApplicationManager@@MEAA@XZ @ 0x180038E28 (--1CApplicationManager@@MEAA@XZ.c)
 *     PbmIsPlaying @ 0x18003DB10 (PbmIsPlaying.c)
 *     PbmRegisterAppClosureNotification @ 0x18003DD80 (PbmRegisterAppClosureNotification.c)
 *     PbmRegisterPlaybackManagerNotifications @ 0x18003DDF0 (PbmRegisterPlaybackManagerNotifications.c)
 *     PbmSetSmtcSubscriptionState @ 0x18003E180 (PbmSetSmtcSubscriptionState.c)
 *     PbmUnregisterAppClosureNotification @ 0x18003E330 (PbmUnregisterAppClosureNotification.c)
 *     PbmUnregisterAppManagerNotification @ 0x18003E3E0 (PbmUnregisterAppManagerNotification.c)
 *     PbmUnregisterPlaybackManagerNotifications @ 0x18003E440 (PbmUnregisterPlaybackManagerNotifications.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::Release(
        volatile signed __int32 *a1)
{
  signed __int32 i; // edx
  unsigned __int32 v2; // ebx

  for ( i = *((_DWORD *)a1 + 5); i != 0x7FFFFFFF; i = *((_DWORD *)a1 + 5) )
  {
    if ( i == _InterlockedCompareExchange(a1 + 5, i - 1, i) )
      break;
  }
  v2 = i - 1;
  if ( i == 1 )
  {
    if ( a1 )
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)a1 + 560LL))(a1, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v2;
}
