/*
 * XREFs of ?AddEndpointPropertyChangeNotificationClient@CAPOEndpointNotificationsHandler@@QEAAXPEAVCAPOProcessingHostObject@@@Z @ 0x140018C98
 * Callers:
 *     ?AddEndpointPropertyChangeNotificationClient@CAPOProcessingHost@@AEAAJPEAUAUDIO_ENDPOINT_PROPERTY_CHANGE_APO_NOTIFICATION_DESCRIPTOR@@PEAVCAPOProcessingHostObject@@@Z @ 0x140013914 (-AddEndpointPropertyChangeNotificationClient@CAPOProcessingHost@@AEAAJPEAUAUDIO_ENDPOINT_PROPERT.c)
 * Callees:
 *     ??$emplace_front@AEAPEAVCAPOProcessingHostObject@@@?$forward_list@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?A_TAEAPEAVCAPOProcessingHostObject@@@Z @ 0x140018D28 (--$emplace_front@AEAPEAVCAPOProcessingHostObject@@@-$forward_list@V-$com_ptr_t@VCAPOProcessingHo.c)
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002CC20 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAPOEndpointNotificationsHandler::AddEndpointPropertyChangeNotificationClient(
        CAPOEndpointNotificationsHandler *this,
        struct CAPOProcessingHostObject *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  __int64 **i; // rax
  const char *v6; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+30h] [rbp+8h] BYREF
  struct CAPOProcessingHostObject *v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = a2;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  v8 = v4;
  for ( i = (__int64 **)*((_QWORD *)this + 11); i; i = (__int64 **)*i )
  {
    if ( i[1] == (__int64 *)a2 )
    {
      CSAutoLock<1>::~CSAutoLock<1>(&v8);
      return;
    }
  }
  try
  {
    std::forward_list<wil::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>>::emplace_front<CAPOProcessingHostObject * &>(
      (char *)this + 88,
      &v9);
    if ( v4 )
      LeaveCriticalSection(v4);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x39,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpointnotificationshandler.cpp",
      v6);
  }
}
