/*
 * XREFs of ?AddAudioSessionClientNotification@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@@Z @ 0x180025BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001AEC8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?AddInterface@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@QEAAJVCAudioSessionNotificationProcess@@@Z @ 0x180025C90 (-AddInterface@-$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@QEAAJVCAud.c)
 *     WPP_SF_qD @ 0x1800C49A0 (WPP_SF_qD.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSessionManager::AddAudioSessionClientNotification(
        CAudioSessionManager *this,
        struct IAudioProcess *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v7; // eax

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v7 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 40LL))(a2);
    WPP_SF_qD(*((_QWORD *)WPP_GLOBAL_Control + 2), 17LL, &WPP_26c2f811cba6303e2e635ec6759b9dab_Traceguids, this, v7);
  }
  if ( a2 )
    (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 8LL))(a2);
  v4 = CLockedList_UniqueValuesOnly<CAudioSessionNotificationProcess,0>::AddInterface((LPCRITICAL_SECTION)((char *)this + 176));
  v5 = v4;
  if ( v4 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSessionManager::AddAudioSessionClientNotification", 542, v4);
  return v5;
}
