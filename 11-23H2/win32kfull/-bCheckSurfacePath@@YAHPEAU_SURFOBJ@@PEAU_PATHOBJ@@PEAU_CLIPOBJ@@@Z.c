/*
 * XREFs of ?bCheckSurfacePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z @ 0x1C02C720C
 * Callers:
 *     NtGdiEngFillPath @ 0x1C02C9310 (NtGdiEngFillPath.c)
 *     NtGdiEngStrokeAndFillPath @ 0x1C02CADE0 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngStrokePath @ 0x1C02CB1B0 (NtGdiEngStrokePath.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXAEAIW4UnsupportedReason@@_K222@Z @ 0x1C013DB58 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXAEAIW4UnsupportedReason@@_K222@Z.c)
 */

__int64 __fastcall bCheckSurfacePath(struct _SURFOBJ *a1, struct _PATHOBJ *a2, struct _CLIPOBJ *a3)
{
  unsigned int v4; // r9d
  BYTE iDComplexity; // al
  _BOOL8 v6; // rcx
  RECTL *p_rclBounds; // rbx
  __int64 v8; // rax
  LONG *p_bottom; // rdi
  LONG right; // edx
  int *p_top; // r11
  LONG *v12; // r8
  unsigned int v14; // esi
  LONG cy; // eax
  struct Gre::Base::SESSION_GLOBALS *v16; // rax
  __int128 v17; // [rsp+30h] [rbp-38h] BYREF

  v4 = 1;
  v17 = 0LL;
  if ( !a1 || !a2 )
    return 0;
  if ( a3 )
  {
    iDComplexity = a3->iDComplexity;
    v6 = iDComplexity == 0;
    if ( iDComplexity )
    {
      p_rclBounds = &a3->rclBounds;
      if ( a3 == (struct _CLIPOBJ *)-4LL )
        return v4;
      goto LABEL_10;
    }
  }
  else
  {
    v6 = 1LL;
  }
  p_rclBounds = (RECTL *)&v17;
  v8 = 0LL;
  v17 = *(_OWORD *)(*(_QWORD *)&a2[1] + 48LL);
  do
    *((int *)&v17 + v8++) >>= 4;
  while ( v8 < 4 );
LABEL_10:
  p_bottom = &p_rclBounds->bottom;
  right = p_rclBounds->right;
  if ( p_rclBounds->left > right || (p_top = &p_rclBounds->top, p_rclBounds->top > *p_bottom) )
  {
    v12 = &p_rclBounds->bottom;
    p_top = &p_rclBounds->top;
    v4 = 0;
  }
  else
  {
    v12 = &p_rclBounds->bottom;
    if ( right > a1->sizlBitmap.cx )
      return 0;
  }
  v14 = v4;
  if ( p_rclBounds->left < 0 )
    return 0;
  cy = a1->sizlBitmap.cy;
  if ( *v12 > cy || *p_top < 0 )
    return 0;
  if ( v4 && v6 && (right == a1->sizlBitmap.cx || *p_bottom == cy) )
  {
    v16 = Gre::Base::Globals((Gre::Base *)v6);
    TraceLoggingWriteUnsupportedGdiUsage((_DWORD *)v16 + 2008, 0x1Cu, p_rclBounds->right, *p_bottom);
    return v14;
  }
  return v4;
}
