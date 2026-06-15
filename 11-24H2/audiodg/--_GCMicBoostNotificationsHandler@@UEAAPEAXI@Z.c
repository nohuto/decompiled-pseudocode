/*
 * XREFs of ??_GCMicBoostNotificationsHandler@@UEAAPEAXI@Z @ 0x1400601C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400590C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CMicBoostNotificationsHandler@@UEAA@XZ @ 0x1400600AC (--1CMicBoostNotificationsHandler@@UEAA@XZ.c)
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
