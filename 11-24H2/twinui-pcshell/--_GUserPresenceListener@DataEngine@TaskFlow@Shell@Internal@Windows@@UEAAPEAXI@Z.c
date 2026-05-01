/*
 * XREFs of ??_GUserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAPEAXI@Z @ 0x1802EE420
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1PresentationRequestedArgs@@UEAA@XZ @ 0x1802EE368 (--1PresentationRequestedArgs@@UEAA@XZ.c)
 */

Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListener *__fastcall Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListener::`scalar deleting destructor'(
        Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListener *this,
        char a2)
{
  PresentationRequestedArgs::~PresentationRequestedArgs(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x60);
  return this;
}
