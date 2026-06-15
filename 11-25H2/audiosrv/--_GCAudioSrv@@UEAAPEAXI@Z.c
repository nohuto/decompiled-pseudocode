/*
 * XREFs of ??_GCAudioSrv@@UEAAPEAXI@Z @ 0x1800CC7C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CAudioSrv@@UEAA@XZ @ 0x1800CC2E4 (--1CAudioSrv@@UEAA@XZ.c)
 */

CAudioSrv *__fastcall CAudioSrv::`scalar deleting destructor'(CAudioSrv *this, char a2)
{
  CAudioSrv::~CAudioSrv(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x1E0);
  return this;
}
