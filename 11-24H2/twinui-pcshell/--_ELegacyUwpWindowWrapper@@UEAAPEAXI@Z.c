/*
 * XREFs of ??_ELegacyUwpWindowWrapper@@UEAAPEAXI@Z @ 0x180437720
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1LegacyUwpWindowWrapper@@UEAA@XZ @ 0x1804376A0 (--1LegacyUwpWindowWrapper@@UEAA@XZ.c)
 */

LegacyUwpWindowWrapper *__fastcall LegacyUwpWindowWrapper::`vector deleting destructor'(
        LegacyUwpWindowWrapper *this,
        char a2)
{
  LegacyUwpWindowWrapper::~LegacyUwpWindowWrapper(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x280);
  return this;
}
