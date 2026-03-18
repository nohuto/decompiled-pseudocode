/*
 * XREFs of ?IsOpaque@CGdiSpriteBitmap@@UEBA_NXZ @ 0x18004BDD0
 * Callers:
 *     ?DoesImageOcclude@COcclusionContext@@AEAA_NPEAUIUnknown@@_N@Z @ 0x18004C7F0 (-DoesImageOcclude@COcclusionContext@@AEAA_NPEAUIUnknown@@_N@Z.c)
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
