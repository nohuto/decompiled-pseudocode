/*
 * XREFs of ??_GCAPOEndpointNotificationsHandler@@UEAAPEAXI@Z @ 0x14005F200
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400590C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CAPOEndpointNotificationsHandler@@UEAA@XZ @ 0x14005F028 (--1CAPOEndpointNotificationsHandler@@UEAA@XZ.c)
 */

CAPOEndpointNotificationsHandler *__fastcall CAPOEndpointNotificationsHandler::`scalar deleting destructor'(
        CAPOEndpointNotificationsHandler *this,
        char a2)
{
  CAPOEndpointNotificationsHandler::~CAPOEndpointNotificationsHandler(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
