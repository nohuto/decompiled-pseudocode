/*
 * XREFs of ?IsOpaque@CGdiSpriteBitmap@@UEBA_NXZ @ 0x1801E7F90
 * Callers:
 *     ?DoesImageOcclude@COcclusionContext@@AEAA_NPEAUIUnknown@@_N@Z @ 0x1800CF250 (-DoesImageOcclude@COcclusionContext@@AEAA_NPEAUIUnknown@@_N@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CGdiSpriteBitmap::IsOpaque(CGdiSpriteBitmap *this)
{
  char result; // al

  result = 0;
  if ( !*((_BYTE *)this + 51) && *((_DWORD *)this + 9) == 3 )
    return 1;
  return result;
}
