/*
 * XREFs of ?pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z @ 0x140338C90
 * Callers:
 *     NtGdiEngBitBlt @ 0x1400DB6D0 (NtGdiEngBitBlt.c)
 *     NtGdiEngStretchBlt @ 0x140261C70 (NtGdiEngStretchBlt.c)
 *     NtGdiEngStretchBltROP @ 0x140262120 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngCopyBits @ 0x140339030 (NtGdiEngCopyBits.c)
 *     NtGdiEngPlgBlt @ 0x140339C60 (NtGdiEngPlgBlt.c)
 * Callees:
 *     <none>
 */

struct _RECTL *__fastcall pRect(struct _POINTL *a1, struct _RECTL *a2, int a3, int a4)
{
  struct _RECTL *v4; // r10

  v4 = a2;
  if ( !a1 )
    return 0LL;
  a2->left = a1->x;
  a2->right = a3 + a1->x;
  a2->top = a1->y;
  a2->bottom = a4 + a1->y;
  return v4;
}
