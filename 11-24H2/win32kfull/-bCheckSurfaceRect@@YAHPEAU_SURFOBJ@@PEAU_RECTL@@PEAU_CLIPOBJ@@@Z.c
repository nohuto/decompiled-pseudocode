/*
 * XREFs of ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1400DC2AC
 * Callers:
 *     NtGdiEngBitBlt @ 0x1400DB6D0 (NtGdiEngBitBlt.c)
 *     ?bCheckMask@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1400DC380 (-bCheckMask@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     NtGdiEngEraseSurface @ 0x1401DA1D0 (NtGdiEngEraseSurface.c)
 *     NtGdiEngTextOut @ 0x140262A80 (NtGdiEngTextOut.c)
 *     NtGdiEngAlphaBlend @ 0x140338D50 (NtGdiEngAlphaBlend.c)
 *     NtGdiEngCopyBits @ 0x140339030 (NtGdiEngCopyBits.c)
 *     NtGdiEngLineTo @ 0x140339840 (NtGdiEngLineTo.c)
 *     NtGdiEngPaint @ 0x140339AB0 (NtGdiEngPaint.c)
 *     NtGdiEngTransparentBlt @ 0x14033A400 (NtGdiEngTransparentBlt.c)
 * Callees:
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall bCheckSurfaceRect(struct _SURFOBJ *a1, struct _RECTL *p_rclBounds, struct _CLIPOBJ *a3)
{
  unsigned int v4; // r9d
  HDEV hdev; // rax
  int v7; // ecx
  int v8; // ecx
  __int128 v9; // [rsp+0h] [rbp-28h] BYREF

  v4 = 1;
  if ( a1 )
  {
    if ( a3 && a3->iDComplexity )
      p_rclBounds = &a3->rclBounds;
    if ( p_rclBounds )
    {
      if ( p_rclBounds->left > p_rclBounds->right || p_rclBounds->top > p_rclBounds->bottom )
        v4 = 0;
      v9 = (__int128)*p_rclBounds;
      if ( SLODWORD(a1[1].hsurf) < 0 )
      {
        hdev = a1->hdev;
        if ( hdev )
        {
          if ( ((_DWORD)hdev[10] & 0x20000) != 0 )
          {
            v7 = *((_DWORD *)hdev + 644);
            p_rclBounds = (struct _RECTL *)&v9;
            LODWORD(v9) = v9 - v7;
            DWORD2(v9) -= v7;
            v8 = *((_DWORD *)hdev + 645);
            DWORD1(v9) -= v8;
            HIDWORD(v9) -= v8;
          }
        }
      }
      if ( v4
        && (p_rclBounds->right > a1->sizlBitmap.cx
         || p_rclBounds->left < 0
         || p_rclBounds->bottom > a1->sizlBitmap.cy
         || p_rclBounds->top < 0) )
      {
        return 0;
      }
    }
  }
  return v4;
}
