/*
 * XREFs of ?bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z @ 0x1400DBF58
 * Callers:
 *     NtGdiEngBitBlt @ 0x1400DB6D0 (NtGdiEngBitBlt.c)
 *     NtGdiEngStretchBlt @ 0x140261C70 (NtGdiEngStretchBlt.c)
 *     NtGdiEngStretchBltROP @ 0x140262120 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngCopyBits @ 0x140339030 (NtGdiEngCopyBits.c)
 *     NtGdiEngPlgBlt @ 0x140339C60 (NtGdiEngPlgBlt.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bCheckSurfaceRectSize(
        struct _SURFOBJ *a1,
        struct _RECTL *a2,
        struct _CLIPOBJ *a3,
        unsigned int *a4,
        unsigned int *a5)
{
  int left; // esi
  LONG top; // edx
  LONG right; // ebx
  LONG bottom; // r11d
  RECTL *p_rclBounds; // r10
  RECTL *v13; // rsi
  LONG v14; // edx
  LONG v15; // r8d
  LONG v16; // r11d
  LONG v17; // ebx
  LONG v18; // r9d
  LONG v19; // r10d
  int v20; // r8d
  int v21; // ebx
  int v23; // ecx
  int v24; // ecx
  HDEV hdev; // rax
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx

  left = 0;
  top = 0;
  right = 0;
  bottom = 0;
  p_rclBounds = 0LL;
  if ( !a1 )
    return 1LL;
  if ( a3 && a3->iDComplexity )
  {
    p_rclBounds = &a3->rclBounds;
    top = a3->rclBounds.top;
    v13 = &a3->rclBounds;
    right = a3->rclBounds.right;
    bottom = a3->rclBounds.bottom;
    goto LABEL_7;
  }
  if ( a2 )
  {
    top = a2->top;
    v13 = a2;
    right = a2->right;
    bottom = a2->bottom;
LABEL_7:
    left = v13->left;
    if ( left > right || top > bottom )
      return 0LL;
  }
  if ( SLODWORD(a1[1].hsurf) < 0 )
  {
    hdev = a1->hdev;
    if ( hdev )
    {
      if ( ((_DWORD)hdev[10] & 0x20000) != 0 )
      {
        v26 = *((_DWORD *)hdev + 644);
        left -= v26;
        right -= v26;
        v27 = *((_DWORD *)hdev + 645);
        top -= v27;
        bottom -= v27;
      }
    }
  }
  if ( right <= a1->sizlBitmap.cx && left >= 0 && bottom <= a1->sizlBitmap.cy && top >= 0 )
  {
    if ( p_rclBounds )
    {
      if ( a2 )
      {
        v14 = p_rclBounds->left;
        v15 = p_rclBounds->right;
        v16 = p_rclBounds->top;
        v17 = p_rclBounds->bottom;
        if ( v15 >= a2->right )
          v15 = a2->right;
        v18 = a2->top;
        v19 = a2->bottom;
        if ( v14 <= a2->left )
          v14 = a2->left;
        v20 = v15 - v14;
        if ( v20 <= 0 )
          v20 = 0;
        *a4 = v20;
        if ( v16 <= v18 )
          v16 = v18;
        if ( v17 >= v19 )
          v17 = v19;
        v21 = v17 - v16;
        if ( v21 <= 0 )
          v21 = 0;
        *a5 = v21;
        return 1LL;
      }
      v28 = p_rclBounds->right - p_rclBounds->left;
      if ( v28 <= 0 )
        v28 = 0;
      *a4 = v28;
      v24 = p_rclBounds->bottom - p_rclBounds->top;
LABEL_34:
      if ( v24 <= 0 )
        v24 = 0;
      *a5 = v24;
      return 1LL;
    }
    if ( a2 )
    {
      v23 = a2->right - a2->left;
      if ( v23 <= 0 )
        v23 = 0;
      *a4 = v23;
      v24 = a2->bottom - a2->top;
      goto LABEL_34;
    }
    return 1LL;
  }
  return 0LL;
}
