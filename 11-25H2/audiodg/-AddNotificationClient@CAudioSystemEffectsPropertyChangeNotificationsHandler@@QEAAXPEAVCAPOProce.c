/*
 * XREFs of ?AddNotificationClient@CAudioSystemEffectsPropertyChangeNotificationsHandler@@QEAAXPEAVCAPOProcessingHostObject@@@Z @ 0x140018A30
 * Callers:
 *     ?AddAudioSystemEffectsPropertyStoreNotificationClient@CAPOProcessingHost@@AEAAJPEAUAUDIO_SYSTEMEFFECTS_PROPERTY_CHANGE_APO_NOTIFICATION_DESCRIPTOR@@PEAVCAPOProcessingHostObject@@@Z @ 0x140017398 (-AddAudioSystemEffectsPropertyStoreNotificationClient@CAPOProcessingHost@@AEAAJPEAUAUDIO_SYSTEME.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400089C8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterPropertyChangeNotification@CAudioSystemEffectsPropertyChangeNotificationsHandler@@AEAAJXZ @ 0x140018AF4 (-RegisterPropertyChangeNotification@CAudioSystemEffectsPropertyChangeNotificationsHandler@@AEAAJ.c)
 *     ??$emplace_front@AEAPEAVCAPOProcessingHostObject@@@?$forward_list@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?A_TAEAPEAVCAPOProcessingHostObject@@@Z @ 0x140018D28 (--$emplace_front@AEAPEAVCAPOProcessingHostObject@@@-$forward_list@V-$com_ptr_t@VCAPOProcessingHo.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAudioSystemEffectsPropertyChangeNotificationsHandler::AddNotificationClient(
        CAudioSystemEffectsPropertyChangeNotificationsHandler *this,
        struct CAPOProcessingHostObject *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  const char *v5; // r9
  __int64 **v6; // rax
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct CAPOProcessingHostObject *v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = a2;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 96);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  v6 = (__int64 **)*((_QWORD *)this + 22);
  try
  {
    while ( v6 )
    {
      if ( v6[1] == (__int64 *)a2 )
      {
        if ( v4 )
          LeaveCriticalSection(v4);
        return;
      }
      v6 = (__int64 **)*v6;
    }
    v7 = CAudioSystemEffectsPropertyChangeNotificationsHandler::RegisterPropertyChangeNotification(this);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x46,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiosystemeffectspropertychangenotificationshandler.cpp",
        (const char *)(unsigned int)v7);
    std::forward_list<wil::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>>::emplace_front<CAPOProcessingHostObject * &>(
      (char *)this + 176,
      &v9);
    if ( v4 )
      LeaveCriticalSection(v4);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x4B,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiosystemeffectspropertychangenotificationshandler.cpp",
      v5);
  }
}
