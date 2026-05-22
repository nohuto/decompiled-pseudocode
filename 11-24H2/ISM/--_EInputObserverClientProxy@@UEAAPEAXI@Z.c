/*
 * XREFs of ??_EInputObserverClientProxy@@UEAAPEAXI@Z @ 0x180137FD0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1InputObserverClientProxy@@UEAA@XZ @ 0x180137F9C (--1InputObserverClientProxy@@UEAA@XZ.c)
 */

InputObserverClientProxy *__fastcall InputObserverClientProxy::`vector deleting destructor'(
        InputObserverClientProxy *this,
        char a2)
{
  InputObserverClientProxy::~InputObserverClientProxy(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x40);
  return this;
}
