/*
 * XREFs of ??_ECMuteSoftware@@EEAAPEAXI@Z @ 0x1800FDE50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CMuteSoftware@@EEAA@XZ @ 0x1800FDD74 (--1CMuteSoftware@@EEAA@XZ.c)
 */

CMuteSoftware *__fastcall CMuteSoftware::`vector deleting destructor'(CMuteSoftware *this, char a2)
{
  CMuteSoftware::~CMuteSoftware(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x70);
  return this;
}
