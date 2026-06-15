/*
 * XREFs of ??_GCDeviceOrientationNotificationsHandler@@UEAAPEAXI@Z @ 0x140062060
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400591B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CDeviceOrientationNotificationsHandler@@UEAA@XZ @ 0x140061D20 (--1CDeviceOrientationNotificationsHandler@@UEAA@XZ.c)
 */

CDeviceOrientationNotificationsHandler *__fastcall CDeviceOrientationNotificationsHandler::`scalar deleting destructor'(
        CDeviceOrientationNotificationsHandler *this,
        char a2)
{
  CDeviceOrientationNotificationsHandler::~CDeviceOrientationNotificationsHandler(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
