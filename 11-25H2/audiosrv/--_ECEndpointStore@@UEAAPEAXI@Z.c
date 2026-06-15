/*
 * XREFs of ??_ECEndpointStore@@UEAAPEAXI@Z @ 0x1800F9F40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CEndpointStore@@UEAA@XZ @ 0x1800F9DDC (--1CEndpointStore@@UEAA@XZ.c)
 */

CEndpointStore *__fastcall CEndpointStore::`vector deleting destructor'(CEndpointStore *this, char a2)
{
  CEndpointStore::~CEndpointStore(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x108);
  return this;
}
