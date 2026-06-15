/*
 * XREFs of ??_GCEndpointCharacteristics@@UEAAPEAXI@Z @ 0x18003F6C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CEndpointCharacteristics@@UEAA@XZ @ 0x18003F6FC (--1CEndpointCharacteristics@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A426C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
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
