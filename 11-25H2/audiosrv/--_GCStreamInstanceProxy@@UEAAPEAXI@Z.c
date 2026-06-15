/*
 * XREFs of ??_GCStreamInstanceProxy@@UEAAPEAXI@Z @ 0x180061780
 * Callers:
 *     <none>
 * Callees:
 *     ??1CStreamInstanceProxy@@UEAA@XZ @ 0x1800617BC (--1CStreamInstanceProxy@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
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
