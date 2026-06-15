/*
 * XREFs of ??_ECAudioStream@@UEAAPEAXI@Z @ 0x18005F630
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAudioStream@@UEAA@XZ @ 0x18005F66C (--1CAudioStream@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A426C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CAudioStream *__fastcall CAudioStream::`vector deleting destructor'(CAudioStream *this, char a2)
{
  CAudioStream::~CAudioStream(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x2B8);
  return this;
}
