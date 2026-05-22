/*
 * XREFs of ??_EInputSite@@UEAAPEAXI@Z @ 0x180037CB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1InputSite@@UEAA@XZ @ 0x180037CEC (--1InputSite@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

InputSite *__fastcall InputSite::`vector deleting destructor'(InputSite *this, char a2)
{
  InputSite::~InputSite(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x208);
  return this;
}
