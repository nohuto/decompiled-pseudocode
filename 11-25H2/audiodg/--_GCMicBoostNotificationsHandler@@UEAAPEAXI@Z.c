/*
 * XREFs of ??_GCMicBoostNotificationsHandler@@UEAAPEAXI@Z @ 0x1400602B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400591B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CMicBoostNotificationsHandler@@UEAA@XZ @ 0x14006019C (--1CMicBoostNotificationsHandler@@UEAA@XZ.c)
 */

CMicBoostNotificationsHandler *__fastcall CMicBoostNotificationsHandler::`scalar deleting destructor'(
        CMicBoostNotificationsHandler *this,
        char a2)
{
  CMicBoostNotificationsHandler::~CMicBoostNotificationsHandler(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
