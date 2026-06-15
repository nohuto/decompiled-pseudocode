/*
 * XREFs of ?AddAudioSessionClientNotification@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@@Z @ 0x1800189A0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800150E8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?AddInterface@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@QEAAJVCAudioSessionNotificationProcess@@@Z @ 0x180018A60 (-AddInterface@-$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@QEAAJVCAud.c)
 *     WPP_SF_qd @ 0x1800C3678 (WPP_SF_qd.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSessionManager::AddAudioSessionClientNotification(
        CAudioSessionManager *this,
        struct IAudioProcess *a2)
{
  int v4; // eax
  unsigned int v5; // ebx

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 40LL))(a2);
    WPP_SF_qd(*((_QWORD *)WPP_GLOBAL_Control + 2), 17LL, &WPP_a93cb6bcfd8139528881ae8cee6da3d9_Traceguids, this);
  }
  if ( a2 )
    (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 8LL))(a2);
  v4 = CLockedList_UniqueValuesOnly<CAudioSessionNotificationProcess,0>::AddInterface((LPCRITICAL_SECTION)((char *)this + 176));
  v5 = v4;
  if ( v4 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSessionManager::AddAudioSessionClientNotification", 555, v4);
  return v5;
}
