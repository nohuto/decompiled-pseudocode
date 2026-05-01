/*
 * XREFs of ??_EViewRectProvider@KeyboardHosting@@UEAAPEAXI@Z @ 0x180219740
 * Callers:
 *     <none>
 * Callees:
 *     ??1ViewRectProvider@KeyboardHosting@@UEAA@XZ @ 0x1802CA034 (--1ViewRectProvider@KeyboardHosting@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

KeyboardHosting::ViewRectProvider *__fastcall KeyboardHosting::ViewRectProvider::`vector deleting destructor'(
        KeyboardHosting::ViewRectProvider *this,
        char a2)
{
  KeyboardHosting::ViewRectProvider::~ViewRectProvider(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x310);
  return this;
}
