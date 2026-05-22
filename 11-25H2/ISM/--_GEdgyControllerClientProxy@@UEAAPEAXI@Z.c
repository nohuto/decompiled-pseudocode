/*
 * XREFs of ??_GEdgyControllerClientProxy@@UEAAPEAXI@Z @ 0x180154150
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1EdgyControllerClientProxy@@UEAA@XZ @ 0x1801540C0 (--1EdgyControllerClientProxy@@UEAA@XZ.c)
 */

EdgyControllerClientProxy *__fastcall EdgyControllerClientProxy::`scalar deleting destructor'(
        EdgyControllerClientProxy *this,
        char a2)
{
  EdgyControllerClientProxy::~EdgyControllerClientProxy(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x88);
  return this;
}
