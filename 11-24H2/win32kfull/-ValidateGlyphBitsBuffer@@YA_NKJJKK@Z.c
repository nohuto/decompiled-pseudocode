/*
 * XREFs of ?ValidateGlyphBitsBuffer@@YA_NKJJKK@Z @ 0x1401ACE48
 * Callers:
 *     ?CaptureUsermodeParameters@QueryFontDataRequest@@UEAAXPEAX@Z @ 0x140125F00 (-CaptureUsermodeParameters@QueryFontDataRequest@@UEAAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ValidateGlyphBitsBuffer(unsigned int a1, int a2, int a3, unsigned int a4, unsigned int a5)
{
  unsigned __int64 v6; // rdx
  unsigned int v8; // ecx

  if ( !a4 )
    return 1;
  if ( a2 < 0 )
    return 0;
  if ( a3 < 0 )
    return 0;
  v6 = a4 * (unsigned __int64)(unsigned int)a3;
  if ( v6 > 0xFFFFFFFF )
    return 0;
  v8 = (v6 + 3) & 0xFFFFFFFC;
  if ( v8 < (unsigned int)v6 || v8 + a5 < a5 )
    return 0;
  return v8 + a5 <= a1;
}
