/*
 * XREFs of ??_ECAPOEnvironmentStateChangedNotificationsHandler@@UEAAPEAXI@Z @ 0x140061EB0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400590C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CAPOEnvironmentStateChangedNotificationsHandler@@UEAA@XZ @ 0x140061A68 (--1CAPOEnvironmentStateChangedNotificationsHandler@@UEAA@XZ.c)
 */

CAPOEnvironmentStateChangedNotificationsHandler *__fastcall CAPOEnvironmentStateChangedNotificationsHandler::`vector deleting destructor'(
        CAPOEnvironmentStateChangedNotificationsHandler *this,
        char a2)
{
  CAPOEnvironmentStateChangedNotificationsHandler::~CAPOEnvironmentStateChangedNotificationsHandler(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
