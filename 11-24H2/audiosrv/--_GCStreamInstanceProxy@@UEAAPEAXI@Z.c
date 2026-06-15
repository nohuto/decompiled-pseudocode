/*
 * XREFs of ??_GCStreamInstanceProxy@@UEAAPEAXI@Z @ 0x180021B10
 * Callers:
 *     <none>
 * Callees:
 *     ??1CStreamInstanceProxy@@UEAA@XZ @ 0x180021E94 (--1CStreamInstanceProxy@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A426C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CStreamInstanceProxy *__fastcall CStreamInstanceProxy::`scalar deleting destructor'(
        CStreamInstanceProxy *this,
        char a2)
{
  CStreamInstanceProxy::~CStreamInstanceProxy(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x38);
  return this;
}
