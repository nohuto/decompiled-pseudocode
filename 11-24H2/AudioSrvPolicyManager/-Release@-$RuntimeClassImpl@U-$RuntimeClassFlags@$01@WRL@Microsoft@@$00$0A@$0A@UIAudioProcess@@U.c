/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@UIAudioProcessInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180008880
 * Callers:
 *     ?HasAccessibilityAudioStateChanged@CWindowsPolicyManager@@UEAA?AW4AccessibilityStateChange@@XZ @ 0x180005A00 (-HasAccessibilityAudioStateChanged@CWindowsPolicyManager@@UEAA-AW4AccessibilityStateChange@@XZ.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x1800060D0 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ?DeleteInactivityTimer@CProcess@@QEAAXXZ @ 0x180012624 (-DeleteInactivityTimer@CProcess@@QEAAXXZ.c)
 *     PbmGetSoundLevel @ 0x180019300 (PbmGetSoundLevel.c)
 *     PbmRegisterAppManagerNotification @ 0x18001A200 (PbmRegisterAppManagerNotification.c)
 *     ?RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18001A3B0 (-RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     ?MarkAsTerminated@CProcess@@QEAAXXZ @ 0x18001C4F4 (-MarkAsTerminated@CProcess@@QEAAXXZ.c)
 *     ?CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z @ 0x18001E20C (-CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@UIAudioProcessInternal@@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x180033B50 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAu_ea_180033B50.c)
 *     ??1?$ComPtr@VCProcess@@@WRL@Microsoft@@QEAA@XZ @ 0x1800363F8 (--1-$ComPtr@VCProcess@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1CApplicationManager@@MEAA@XZ @ 0x180036448 (--1CApplicationManager@@MEAA@XZ.c)
 *     PbmIsPlaying @ 0x18003B2F0 (PbmIsPlaying.c)
 *     PbmRegisterAppClosureNotification @ 0x18003B560 (PbmRegisterAppClosureNotification.c)
 *     PbmRegisterPlaybackManagerNotifications @ 0x18003B5D0 (PbmRegisterPlaybackManagerNotifications.c)
 *     PbmSetSmtcSubscriptionState @ 0x18003B960 (PbmSetSmtcSubscriptionState.c)
 *     PbmUnregisterAppClosureNotification @ 0x18003BB10 (PbmUnregisterAppClosureNotification.c)
 *     PbmUnregisterAppManagerNotification @ 0x18003BBC0 (PbmUnregisterAppManagerNotification.c)
 *     PbmUnregisterPlaybackManagerNotifications @ 0x18003BC20 (PbmUnregisterPlaybackManagerNotifications.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
