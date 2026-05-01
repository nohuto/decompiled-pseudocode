/*
 * XREFs of ??_GApplicationViewWrapper@@UEAAPEAXI@Z @ 0x18007BD80
 * Callers:
 *     <none>
 * Callees:
 *     ??1ApplicationViewWrapper@@UEAA@XZ @ 0x18007BDBC (--1ApplicationViewWrapper@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

ApplicationViewWrapper *__fastcall ApplicationViewWrapper::`scalar deleting destructor'(
        ApplicationViewWrapper *this,
        char a2)
{
  ApplicationViewWrapper::~ApplicationViewWrapper(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x50);
  return this;
}
