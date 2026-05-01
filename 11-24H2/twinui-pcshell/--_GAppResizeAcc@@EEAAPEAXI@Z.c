/*
 * XREFs of ??_GAppResizeAcc@@EEAAPEAXI@Z @ 0x180535240
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1AppResizeAcc@@EEAA@XZ @ 0x180535180 (--1AppResizeAcc@@EEAA@XZ.c)
 */

IRawElementProviderSimple *__fastcall AppResizeAcc::`scalar deleting destructor'(
        IRawElementProviderSimple *this,
        char a2)
{
  AppResizeAcc::~AppResizeAcc(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xB0);
  return this;
}
