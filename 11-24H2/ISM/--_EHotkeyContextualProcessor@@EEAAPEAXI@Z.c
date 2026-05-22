/*
 * XREFs of ??_EHotkeyContextualProcessor@@EEAAPEAXI@Z @ 0x18019EBE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1HotkeyContextualProcessor@@EEAA@XZ @ 0x1801B0780 (--1HotkeyContextualProcessor@@EEAA@XZ.c)
 */

HotkeyContextualProcessor *__fastcall HotkeyContextualProcessor::`vector deleting destructor'(
        HotkeyContextualProcessor *this,
        char a2)
{
  HotkeyContextualProcessor::~HotkeyContextualProcessor(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x40);
  return this;
}
