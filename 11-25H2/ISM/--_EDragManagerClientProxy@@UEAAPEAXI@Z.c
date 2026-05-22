/*
 * XREFs of ??_EDragManagerClientProxy@@UEAAPEAXI@Z @ 0x18007A560
 * Callers:
 *     <none>
 * Callees:
 *     ??1DragManagerClientProxy@@UEAA@XZ @ 0x18007A59C (--1DragManagerClientProxy@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

DragManagerClientProxy *__fastcall DragManagerClientProxy::`vector deleting destructor'(
        DragManagerClientProxy *this,
        char a2)
{
  DragManagerClientProxy::~DragManagerClientProxy(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xA8);
  return this;
}
