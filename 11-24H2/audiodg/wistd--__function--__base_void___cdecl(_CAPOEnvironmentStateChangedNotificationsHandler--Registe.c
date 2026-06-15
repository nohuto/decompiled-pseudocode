/*
 * XREFs of wistd::__function::__base_void___cdecl(_CAPOEnvironmentStateChangedNotificationsHandler::RegisterForEnvironmentalStateChangedNotifications_::_2_::WnfPayload4k_const_&)_::_scalar_deleting_destructor_ @ 0x14005F950
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400590C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall wistd::__function::__base_void___cdecl__CAPOEnvironmentStateChangedNotificationsHandler::RegisterForEnvironmentalStateChangedNotifications_::_2_::WnfPayload4k_const____::_scalar_deleting_destructor_(
        _QWORD *a1,
        char a2)
{
  *a1 = off_14009EDF8;
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
