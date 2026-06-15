/*
 * XREFs of ??_GCAPOEndpointNotificationsDelegator@@UEAAPEAXI@Z @ 0x14005F1C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAPOEndpointNotificationsDelegator@@UEAA@XZ @ 0x14003BD0C (--1CAPOEndpointNotificationsDelegator@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400590C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CAPOEndpointNotificationsDelegator *__fastcall CAPOEndpointNotificationsDelegator::`scalar deleting destructor'(
        CAPOEndpointNotificationsDelegator *this,
        char a2)
{
  CAPOEndpointNotificationsDelegator::~CAPOEndpointNotificationsDelegator(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
