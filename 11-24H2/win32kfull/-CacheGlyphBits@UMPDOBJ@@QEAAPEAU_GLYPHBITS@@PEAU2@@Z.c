/*
 * XREFs of ?CacheGlyphBits@UMPDOBJ@@QEAAPEAU_GLYPHBITS@@PEAU2@@Z @ 0x1401D9B88
 * Callers:
 *     NtGdiFONTOBJ_cGetGlyphs @ 0x1400D71F0 (NtGdiFONTOBJ_cGetGlyphs.c)
 * Callees:
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1400D91A8 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

struct _GLYPHBITS *__fastcall UMPDOBJ::CacheGlyphBits(char **this, struct _GLYPHBITS *a2)
{
  unsigned int v4; // edi
  char *v5; // rbx
  char *v7; // rax

  v4 = a2->sizlBitmap.cy * ((unsigned int)(a2->sizlBitmap.cx + 7) >> 3) + 16;
  if ( v4 > *((_DWORD *)this + 96) )
  {
    v7 = UMPDOBJ::_AllocUserMem((UMPDOBJ *)this, v4, 0);
    v5 = v7;
    if ( !v7 )
      return (struct _GLYPHBITS *)v5;
    this[45] = v7;
    *((_DWORD *)this + 96) = v4;
    goto LABEL_3;
  }
  v5 = this[45];
  if ( v5 )
LABEL_3:
    memmove(v5, a2, v4);
  return (struct _GLYPHBITS *)v5;
}
