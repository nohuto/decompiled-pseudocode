/*
 * XREFs of ?vCalculateCursorBounds@@YAXPEAU_SURFOBJ@@0PEAU_RECTL@@@Z @ 0x14017266C
 * Callers:
 *     ?vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@@@Z @ 0x14002A718 (-vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@.c)
 * Callees:
 *     ?vDetermineSurfaceBounds@@YAXPEAU_SURFOBJ@@EJJPEAU_RECTL@@@Z @ 0x140172774 (-vDetermineSurfaceBounds@@YAXPEAU_SURFOBJ@@EJJPEAU_RECTL@@@Z.c)
 */

void __fastcall vCalculateCursorBounds(struct _SURFOBJ *a1, struct _SURFOBJ *a2, struct _RECTL *a3)
{
  LONG v4; // ebx
  LONG bottom; // ecx
  LONG right; // r8d
  LONG top; // eax
  LONG left; // edx
  struct _RECTL si128; // xmm0
  struct _RECTL v12; // [rsp+30h] [rbp-20h] BYREF
  struct _RECTL v13; // [rsp+40h] [rbp-10h] BYREF

  v4 = a1->sizlBitmap.cy >> 1;
  vDetermineSurfaceBounds(a1, 0xFFu, 0, v4, &v13);
  if ( a2 )
  {
    vDetermineSurfaceBounds(a2, 0, 0, v4, &v12);
    bottom = v12.bottom;
    right = v12.right;
    top = v12.top;
    left = v12.left;
  }
  else
  {
    vDetermineSurfaceBounds(a1, 0, v4, 2 * v4, &v12);
    left = v12.left;
    right = v12.right;
    top = v12.top;
    bottom = v12.bottom;
    if ( v12.left < v12.right && v12.top < v12.bottom )
    {
      top = v12.top - v4;
      bottom = v12.bottom - v4;
    }
  }
  if ( v13.left < left )
    left = v13.left;
  v12.left = left;
  if ( v13.top < top )
    top = v13.top;
  v12.top = top;
  if ( v13.right > right )
    right = v13.right;
  v12.right = right;
  if ( v13.bottom > bottom )
    bottom = v13.bottom;
  v12.bottom = bottom;
  if ( left >= right || top >= bottom )
    si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
  else
    si128 = (struct _RECTL)_mm_loadu_si128((const __m128i *)&v12);
  *a3 = si128;
}
