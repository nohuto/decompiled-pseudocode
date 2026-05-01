/*
 * XREFs of ??_ELegacyWindowWrapper@@UEAAPEAXI@Z @ 0x1804317B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1LegacyWindowWrapper@@UEAA@XZ @ 0x180431654 (--1LegacyWindowWrapper@@UEAA@XZ.c)
 */

LegacyWindowWrapper *__fastcall LegacyWindowWrapper::`vector deleting destructor'(LegacyWindowWrapper *this, char a2)
{
  LegacyWindowWrapper::~LegacyWindowWrapper(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x288);
  return this;
}
