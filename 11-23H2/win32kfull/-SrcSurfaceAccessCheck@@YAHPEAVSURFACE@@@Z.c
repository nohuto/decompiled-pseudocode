/*
 * XREFs of ?SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C00C33E0
 * Callers:
 *     NtGdiGetPixel @ 0x1C0005580 (NtGdiGetPixel.c)
 *     GreMaskBlt @ 0x1C0079B5C (GreMaskBlt.c)
 *     GrePlgBlt @ 0x1C0290660 (GrePlgBlt.c)
 *     NtGdiTransparentBlt @ 0x1C02970E0 (NtGdiTransparentBlt.c)
 * Callees:
 *     ?_SurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C00C3A20 (-_SurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall SrcSurfaceAccessCheck(struct SURFACE *a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( !*((_DWORD *)a1 + 164) || ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) == *((_DWORD *)a1 + 164) )
    return (unsigned int)_SurfaceAccessCheck(a1);
  return v1;
}
