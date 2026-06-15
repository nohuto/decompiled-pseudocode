/*
 * XREFs of ??_ECDeviceGraphConnectionBuffer@@UEAAPEAXI@Z @ 0x14003BFD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAPOEndpointNotificationsDelegator@@UEAA@XZ @ 0x14003C00C (--1CAPOEndpointNotificationsDelegator@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400591B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CDeviceGraphConnectionBuffer *__fastcall CDeviceGraphConnectionBuffer::`vector deleting destructor'(
        CDeviceGraphConnectionBuffer *this,
        char a2)
{
  CAPOEndpointNotificationsDelegator::~CAPOEndpointNotificationsDelegator(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
