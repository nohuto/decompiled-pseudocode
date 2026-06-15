/*
 * XREFs of ??_GCAudioSrv@@UEAAPEAXI@Z @ 0x1800CBEC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A426C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CAudioSrv@@UEAA@XZ @ 0x1800CB9E4 (--1CAudioSrv@@UEAA@XZ.c)
 */

CAudioSrv *__fastcall CAudioSrv::`scalar deleting destructor'(CAudioSrv *this, char a2)
{
  CAudioSrv::~CAudioSrv(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x1E0);
  return this;
}
