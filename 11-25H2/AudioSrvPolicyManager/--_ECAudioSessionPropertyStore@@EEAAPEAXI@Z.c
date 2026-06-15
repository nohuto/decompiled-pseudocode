/*
 * XREFs of ??_ECAudioSessionPropertyStore@@EEAAPEAXI@Z @ 0x180044B90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800205CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CAudioSessionPropertyStore@@EEAA@XZ @ 0x1800446CC (--1CAudioSessionPropertyStore@@EEAA@XZ.c)
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
