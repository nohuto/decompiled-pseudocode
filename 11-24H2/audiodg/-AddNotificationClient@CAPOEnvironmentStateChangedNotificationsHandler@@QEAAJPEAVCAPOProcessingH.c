/*
 * XREFs of ?AddNotificationClient@CAPOEnvironmentStateChangedNotificationsHandler@@QEAAJPEAVCAPOProcessingHostObject@@@Z @ 0x14005FA0C
 * Callers:
 *     ?AddEnvironmentStateChangedNotificationClient@CAPOProcessingHost@@AEAAJPEBGPEAVCAPOProcessingHostObject@@@Z @ 0x1400580CC (-AddEnvironmentStateChangedNotificationClient@CAPOProcessingHost@@AEAAJPEBGPEAVCAPOProcessingHos.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400089F8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$emplace_front@AEAPEAVCAPOProcessingHostObject@@@?$forward_list@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?A_TAEAPEAVCAPOProcessingHostObject@@@Z @ 0x140018A28 (--$emplace_front@AEAPEAVCAPOProcessingHostObject@@@-$forward_list@V-$com_ptr_t@VCAPOProcessingHo.c)
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002C920 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 *     ?RegisterForEnvironmentalStateChangedNotifications@CAPOEnvironmentStateChangedNotificationsHandler@@AEAAJXZ @ 0x14005FCEC (-RegisterForEnvironmentalStateChangedNotifications@CAPOEnvironmentStateChangedNotificationsHandl.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAPOEnvironmentStateChangedNotificationsHandler::AddNotificationClient(
        CAPOEnvironmentStateChangedNotificationsHandler *this,
        struct CAPOProcessingHostObject *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  __int64 **i; // rax
  __int64 result; // rax
  int v7; // eax
  const char *v8; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+30h] [rbp+8h] BYREF
  struct CAPOProcessingHostObject *v11; // [rsp+38h] [rbp+10h] BYREF

  v11 = a2;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  v10 = v4;
  for ( i = (__int64 **)*((_QWORD *)this + 13); i; i = (__int64 **)*i )
  {
    if ( i[1] == (__int64 *)a2 )
    {
      CSAutoLock<1>::~CSAutoLock<1>(&v10);
      return 0LL;
    }
  }
  try
  {
    v7 = CAPOEnvironmentStateChangedNotificationsHandler::RegisterForEnvironmentalStateChangedNotifications(this);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2C,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoenvironmentnotificationshandler.cpp",
        (const char *)(unsigned int)v7);
    std::forward_list<wil::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>>::emplace_front<CAPOProcessingHostObject * &>(
      (_QWORD *)this + 13,
      &v11);
    CSAutoLock<1>::~CSAutoLock<1>(&v10);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x32,
                           (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoenvironmentnotificationshandler.cpp",
                           v8);
  }
  return result;
}
