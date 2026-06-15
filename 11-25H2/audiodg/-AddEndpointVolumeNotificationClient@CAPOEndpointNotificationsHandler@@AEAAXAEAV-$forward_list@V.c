/*
 * XREFs of ?AddEndpointVolumeNotificationClient@CAPOEndpointNotificationsHandler@@AEAAXAEAV?$forward_list@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAVCAPOProcessingHostObject@@@Z @ 0x14001881C
 * Callers:
 *     ?AddEndpointVolumeNotificationClient@CAPOEndpointNotificationsHandler@@QEAAXW4APO_NOTIFICATION_TYPE@@PEAVCAPOProcessingHostObject@@@Z @ 0x140017178 (-AddEndpointVolumeNotificationClient@CAPOEndpointNotificationsHandler@@QEAAXW4APO_NOTIFICATION_T.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400089C8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterControlChangeNotify@CAPOEndpointNotificationsHandler@@AEAAJXZ @ 0x140018880 (-RegisterControlChangeNotify@CAPOEndpointNotificationsHandler@@AEAAJXZ.c)
 *     ??$emplace_front@AEAPEAVCAPOProcessingHostObject@@@?$forward_list@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?A_TAEAPEAVCAPOProcessingHostObject@@@Z @ 0x140018D28 (--$emplace_front@AEAPEAVCAPOProcessingHostObject@@@-$forward_list@V-$com_ptr_t@VCAPOProcessingHo.c)
 */

_QWORD *__fastcall CAPOEndpointNotificationsHandler::AddEndpointVolumeNotificationClient(
        CAPOEndpointNotificationsHandler *a1,
        _QWORD *a2,
        __int64 a3,
        const char *a4)
{
  _QWORD *result; // rax
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v8 = a3;
  result = (_QWORD *)*a2;
  try
  {
    while ( result )
    {
      if ( result[1] == a3 )
        return result;
      result = (_QWORD *)*result;
    }
    v6 = CAPOEndpointNotificationsHandler::RegisterControlChangeNotify(a1);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x92,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpointnotificationshandler.cpp",
        (const char *)(unsigned int)v6);
    result = (_QWORD *)std::forward_list<wil::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>>::emplace_front<CAPOProcessingHostObject * &>(
                         a2,
                         &v8);
  }
  catch ( ... )
  {
    return (_QWORD *)wil::details::in1diag3::Log_CaughtException(
                       retaddr,
                       (void *)0x97,
                       (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpointnotificationshandler.cpp",
                       a4);
  }
  return result;
}
