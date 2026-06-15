/*
 * XREFs of ??_GCAudioSessionStore@@EEAAPEAXI@Z @ 0x18002E080
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAudioSessionStore@@EEAA@XZ @ 0x18002E0BC (--1CAudioSessionStore@@EEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CAudioSessionStore *__fastcall CAudioSessionStore::`scalar deleting destructor'(CAudioSessionStore *this, char a2)
{
  CAudioSessionStore::~CAudioSessionStore(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x40);
  return this;
}
