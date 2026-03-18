/*
 * XREFs of EngDeleteSurface @ 0x1C0062910
 * Callers:
 *     <none>
 * Callees:
 *     bDeleteSurface @ 0x1C0062930 (bDeleteSurface.c)
 */

BOOL __stdcall EngDeleteSurface(HSURF hsurf)
{
  BOOL result; // eax

  result = 1;
  if ( hsurf )
    return bDeleteSurface();
  return result;
}
