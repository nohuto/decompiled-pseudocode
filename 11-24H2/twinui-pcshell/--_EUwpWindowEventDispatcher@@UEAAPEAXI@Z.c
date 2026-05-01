/*
 * XREFs of ??_EUwpWindowEventDispatcher@@UEAAPEAXI@Z @ 0x180428084
 * Callers:
 *     ??_EUwpWindowEventDispatcher@@WIA@EAAPEAXI@Z @ 0x180427FA0 (--_EUwpWindowEventDispatcher@@WIA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1UwpWindowEventDispatcher@@UEAA@XZ @ 0x180427924 (--1UwpWindowEventDispatcher@@UEAA@XZ.c)
 */

UwpWindowEventDispatcher *__fastcall UwpWindowEventDispatcher::`vector deleting destructor'(
        UwpWindowEventDispatcher *this,
        char a2)
{
  UwpWindowEventDispatcher::~UwpWindowEventDispatcher(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x240);
  return this;
}
