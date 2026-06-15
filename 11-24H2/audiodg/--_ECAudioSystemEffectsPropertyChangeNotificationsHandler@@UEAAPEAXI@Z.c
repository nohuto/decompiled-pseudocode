/*
 * XREFs of ??_ECAudioSystemEffectsPropertyChangeNotificationsHandler@@UEAAPEAXI@Z @ 0x140061F30
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400590C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CAudioSystemEffectsPropertyChangeNotificationsHandler@@UEAA@XZ @ 0x140066B40 (--1CAudioSystemEffectsPropertyChangeNotificationsHandler@@UEAA@XZ.c)
 */

CAudioSystemEffectsPropertyChangeNotificationsHandler *__fastcall CAudioSystemEffectsPropertyChangeNotificationsHandler::`vector deleting destructor'(
        CAudioSystemEffectsPropertyChangeNotificationsHandler *this,
        char a2)
{
  CAudioSystemEffectsPropertyChangeNotificationsHandler::~CAudioSystemEffectsPropertyChangeNotificationsHandler(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
