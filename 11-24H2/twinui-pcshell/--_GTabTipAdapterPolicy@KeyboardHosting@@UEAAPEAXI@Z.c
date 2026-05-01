/*
 * XREFs of ??_GTabTipAdapterPolicy@KeyboardHosting@@UEAAPEAXI@Z @ 0x18046FAA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1TabTipAdapterPolicy@KeyboardHosting@@UEAA@XZ @ 0x1801F3198 (--1TabTipAdapterPolicy@KeyboardHosting@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

KeyboardHosting::TabTipAdapterPolicy *__fastcall KeyboardHosting::TabTipAdapterPolicy::`scalar deleting destructor'(
        KeyboardHosting::TabTipAdapterPolicy *this,
        char a2)
{
  KeyboardHosting::TabTipAdapterPolicy::~TabTipAdapterPolicy(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x3E0);
  return this;
}
