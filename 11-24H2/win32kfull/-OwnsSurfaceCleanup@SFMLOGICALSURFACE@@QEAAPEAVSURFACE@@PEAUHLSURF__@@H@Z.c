/*
 * XREFs of ?OwnsSurfaceCleanup@SFMLOGICALSURFACE@@QEAAPEAVSURFACE@@PEAUHLSURF__@@H@Z @ 0x14002C814
 * Callers:
 *     ?DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@@Z @ 0x14002C62C (-DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@@Z.c)
 * Callees:
 *     GreReferenceObject @ 0x14002C9F4 (GreReferenceObject.c)
 */

struct SURFACE *__fastcall SFMLOGICALSURFACE::OwnsSurfaceCleanup(SFMLOGICALSURFACE *this, HLSURF a2)
{
  __int64 v2; // rdx
  __int64 v3; // rbx
  int v4; // eax

  v2 = *((_QWORD *)this + 23);
  v3 = 0LL;
  if ( v2 )
  {
    v4 = *((_DWORD *)this + 61);
    if ( (v4 & 0x20) == 0 )
    {
      v3 = v2 - 24;
      *((_DWORD *)this + 61) = v4 | 0x20;
      GreReferenceObject(*(HSURF *)(v2 - 24 + 32));
    }
  }
  return (struct SURFACE *)v3;
}
