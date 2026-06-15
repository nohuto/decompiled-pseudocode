/*
 * XREFs of ??_ECAPOEnvironmentStateChangedNotificationsHandler@@UEAAPEAXI@Z @ 0x140061FA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400591B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CAPOEnvironmentStateChangedNotificationsHandler@@UEAA@XZ @ 0x140061B58 (--1CAPOEnvironmentStateChangedNotificationsHandler@@UEAA@XZ.c)
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
