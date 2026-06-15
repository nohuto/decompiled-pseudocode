/*
 * XREFs of ?Invoke@CAudioSessionManagerNotification@@UEAAJVCAudioSessionNotificationProcess@@@Z @ 0x18005D040
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800150E8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_D @ 0x1800C03A4 (WPP_SF_D.c)
 *     WPP_SF_dd @ 0x1800C33FC (WPP_SF_dd.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioSessionManagerNotification::Invoke(__int64 a1, _QWORD *a2)
{
  int MediaEvent; // edi
  int v5; // ebx
  unsigned int v7; // eax
  __int64 v8; // r8
  unsigned int v9; // eax
  unsigned int v10; // eax

  MediaEvent = 0;
  v5 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 644LL);
  if ( !v5 || v5 == (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 48LL))(*a2) )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 40LL))(*a2);
    MediaEvent = GenerateMediaEvent(*(_QWORD *)(a1 + 8), v7, v8);
    if ( MediaEvent )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        v10 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 40LL))(*a2);
        WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 26LL, &WPP_a93cb6bcfd8139528881ae8cee6da3d9_Traceguids, v10);
      }
      if ( MediaEvent < 0 )
        AudSrvTraceLoggingErrorHelper("CAudioSessionManagerNotification::Invoke", 797, MediaEvent);
    }
    else if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
           && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 40LL))(*a2);
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        (unsigned int)(MediaEvent + 27),
        &WPP_a93cb6bcfd8139528881ae8cee6da3d9_Traceguids,
        v9);
    }
  }
  else if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 48LL))(*a2);
    WPP_SF_dd(*((_QWORD *)WPP_GLOBAL_Control + 2), 28LL, &WPP_a93cb6bcfd8139528881ae8cee6da3d9_Traceguids);
  }
  if ( *a2 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 16LL))(*a2);
  return (unsigned int)MediaEvent;
}
