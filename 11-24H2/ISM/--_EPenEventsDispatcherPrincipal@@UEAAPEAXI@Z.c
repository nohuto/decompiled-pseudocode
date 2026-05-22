/*
 * XREFs of ??_EPenEventsDispatcherPrincipal@@UEAAPEAXI@Z @ 0x180194B60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1PenEventsDispatcherPrincipal@@UEAA@XZ @ 0x180194A94 (--1PenEventsDispatcherPrincipal@@UEAA@XZ.c)
 */

PenEventsDispatcherPrincipal *__fastcall PenEventsDispatcherPrincipal::`vector deleting destructor'(
        PenEventsDispatcherPrincipal *this,
        char a2)
{
  PenEventsDispatcherPrincipal::~PenEventsDispatcherPrincipal(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x178);
  return this;
}
