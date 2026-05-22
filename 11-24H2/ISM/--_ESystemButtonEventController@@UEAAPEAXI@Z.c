/*
 * XREFs of ??_ESystemButtonEventController@@UEAAPEAXI@Z @ 0x18015C170
 * Callers:
 *     <none>
 * Callees:
 *     ??1SystemButtonEventController@@UEAA@XZ @ 0x180080844 (--1SystemButtonEventController@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

SystemButtonEventController *__fastcall SystemButtonEventController::`vector deleting destructor'(
        SystemButtonEventController *this,
        char a2)
{
  SystemButtonEventController::~SystemButtonEventController(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x58);
  return this;
}
