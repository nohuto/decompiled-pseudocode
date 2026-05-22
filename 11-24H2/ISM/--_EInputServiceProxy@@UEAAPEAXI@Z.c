/*
 * XREFs of ??_EInputServiceProxy@@UEAAPEAXI@Z @ 0x18015E670
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1InputServiceProxy@@UEAA@XZ @ 0x18015E640 (--1InputServiceProxy@@UEAA@XZ.c)
 */

InputServiceProxy *__fastcall InputServiceProxy::`vector deleting destructor'(InputServiceProxy *this, char a2)
{
  InputServiceProxy::~InputServiceProxy(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x40);
  return this;
}
