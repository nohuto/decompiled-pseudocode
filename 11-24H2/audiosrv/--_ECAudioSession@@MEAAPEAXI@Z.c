/*
 * XREFs of ??_ECAudioSession@@MEAAPEAXI@Z @ 0x1800C0FE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAudioSession@@MEAA@XZ @ 0x1800283D0 (--1CAudioSession@@MEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A426C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CAudioSession *__fastcall CAudioSession::`vector deleting destructor'(CAudioSession *this, char a2)
{
  CAudioSession::~CAudioSession(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x398);
  return this;
}
