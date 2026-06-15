/*
 * XREFs of ??_ECAudioSessionPropertyStore@@EEAAPEAXI@Z @ 0x180042370
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002067C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CAudioSessionPropertyStore@@EEAA@XZ @ 0x180041EAC (--1CAudioSessionPropertyStore@@EEAA@XZ.c)
 */

CAudioSessionPropertyStore *__fastcall CAudioSessionPropertyStore::`vector deleting destructor'(
        CAudioSessionPropertyStore *this,
        char a2)
{
  CAudioSessionPropertyStore::~CAudioSessionPropertyStore(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x70);
  return this;
}
