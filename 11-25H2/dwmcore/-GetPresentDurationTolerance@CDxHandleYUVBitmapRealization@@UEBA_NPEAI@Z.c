/*
 * XREFs of ?GetPresentDurationTolerance@CDxHandleYUVBitmapRealization@@UEBA_NPEAI@Z @ 0x18020F0E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDxHandleYUVBitmapRealization::GetPresentDurationTolerance(
        CDxHandleYUVBitmapRealization *this,
        unsigned int *a2)
{
  unsigned int v2; // eax

  if ( (*((_DWORD *)this - 22) & 0x2000) != 0 )
    v2 = *((_DWORD *)this - 46);
  else
    v2 = 0;
  *a2 = v2;
  return (*((_DWORD *)this - 22) & 0x2000) != 0;
}
