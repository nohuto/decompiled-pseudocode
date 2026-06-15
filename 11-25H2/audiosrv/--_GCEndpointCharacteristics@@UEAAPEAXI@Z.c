/*
 * XREFs of ??_GCEndpointCharacteristics@@UEAAPEAXI@Z @ 0x180042810
 * Callers:
 *     <none>
 * Callees:
 *     ??1CEndpointCharacteristics@@UEAA@XZ @ 0x18004284C (--1CEndpointCharacteristics@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CEndpointCharacteristics *__fastcall CEndpointCharacteristics::`scalar deleting destructor'(
        CEndpointCharacteristics *this,
        char a2)
{
  CEndpointCharacteristics::~CEndpointCharacteristics(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x2070);
  return this;
}
