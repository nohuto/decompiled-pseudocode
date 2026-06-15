/*
 * XREFs of ??_GCAPOEndpointNotificationsHandler@@UEAAPEAXI@Z @ 0x14005F2F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400591B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CAPOEndpointNotificationsHandler@@UEAA@XZ @ 0x14005F118 (--1CAPOEndpointNotificationsHandler@@UEAA@XZ.c)
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
