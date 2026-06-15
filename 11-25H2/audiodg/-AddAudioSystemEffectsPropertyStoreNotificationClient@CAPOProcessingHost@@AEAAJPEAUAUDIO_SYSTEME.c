/*
 * XREFs of ?AddAudioSystemEffectsPropertyStoreNotificationClient@CAPOProcessingHost@@AEAAJPEAUAUDIO_SYSTEMEFFECTS_PROPERTY_CHANGE_APO_NOTIFICATION_DESCRIPTOR@@PEAVCAPOProcessingHostObject@@@Z @ 0x140017398
 * Callers:
 *     ?RegisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@PEBG@Z @ 0x140015220 (-RegisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@PEBG.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetAudioSystemEffectPropertyChangeNotificationHandler@CAPOProcessingHost@@AEAAJPEAUIMMDevice@@U_GUID@@PEAPEAVCAudioSystemEffectsPropertyChangeNotificationsHandler@@@Z @ 0x140017490 (-GetAudioSystemEffectPropertyChangeNotificationHandler@CAPOProcessingHost@@AEAAJPEAUIMMDevice@@U.c)
 *     ?AddNotificationClient@CAudioSystemEffectsPropertyChangeNotificationsHandler@@QEAAXPEAVCAPOProcessingHostObject@@@Z @ 0x140018A30 (-AddNotificationClient@CAudioSystemEffectsPropertyChangeNotificationsHandler@@QEAAXPEAVCAPOProce.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAPOProcessingHost::AddAudioSystemEffectsPropertyStoreNotificationClient(
        CAPOProcessingHost *this,
        struct AUDIO_SYSTEMEFFECTS_PROPERTY_CHANGE_APO_NOTIFICATION_DESCRIPTOR *a2,
        struct CAPOProcessingHostObject *a3)
{
  __int64 v4; // rax
  int v5; // eax
  unsigned int v6; // ebx
  struct CAudioSystemEffectsPropertyChangeNotificationsHandler *v7; // rbx
  __int64 v9; // rdx
  struct _GUID v10; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct CAudioSystemEffectsPropertyChangeNotificationsHandler *v12; // [rsp+48h] [rbp+10h] BYREF

  if ( !*(_QWORD *)a2 )
  {
    v6 = -2147467261;
    v9 = 202LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
      (const char *)v6);
    return v6;
  }
  v4 = *((_QWORD *)a2 + 1) - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( !v4 )
    v4 = *((_QWORD *)a2 + 2) - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  if ( !v4 )
  {
    v6 = -2147024809;
    v9 = 203LL;
    goto LABEL_10;
  }
  v12 = 0LL;
  v10 = *(struct _GUID *)((char *)a2 + 8);
  v5 = CAPOProcessingHost::GetAudioSystemEffectPropertyChangeNotificationHandler(
         this,
         *(struct IMMDevice **)a2,
         &v10,
         &v12);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCE,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
      (const char *)(unsigned int)v5);
    if ( v12 )
      (*(void (__fastcall **)(struct CAudioSystemEffectsPropertyChangeNotificationsHandler *))(*(_QWORD *)v12 + 16LL))(v12);
    return v6;
  }
  v7 = v12;
  CAudioSystemEffectsPropertyChangeNotificationsHandler::AddNotificationClient(v12, a3);
  if ( v7 )
    (*(void (__fastcall **)(struct CAudioSystemEffectsPropertyChangeNotificationsHandler *))(*(_QWORD *)v7 + 16LL))(v7);
  return 0LL;
}
