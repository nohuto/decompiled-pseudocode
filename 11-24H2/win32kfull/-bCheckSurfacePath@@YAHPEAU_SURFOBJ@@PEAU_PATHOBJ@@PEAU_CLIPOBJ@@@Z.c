/*
 * XREFs of ?bCheckSurfacePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z @ 0x1403389B8
 * Callers:
 *     NtGdiEngFillPath @ 0x1402074A0 (NtGdiEngFillPath.c)
 *     NtGdiEngStrokePath @ 0x140262710 (NtGdiEngStrokePath.c)
 *     NtGdiEngStrokeAndFillPath @ 0x14033A020 (NtGdiEngStrokeAndFillPath.c)
 * Callees:
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXAEAIW4UnsupportedReason@@_K222@Z @ 0x1402FA8B0 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXAEAIW4UnsupportedReason@@_K222@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall bCheckSurfacePath(struct _SURFOBJ *a1, struct _PATHOBJ *a2, struct _CLIPOBJ *a3)
{
  unsigned int v4; // r9d
  BYTE iDComplexity; // al
  BOOL v6; // r8d
  RECTL *p_rclBounds; // rbx
  __int64 v8; // rax
  LONG right; // r10d
  unsigned int v11; // edi
  LONG cy; // eax
  struct Gre::Base::SESSION_GLOBALS *v13; // rax
  __int128 v14; // [rsp+30h] [rbp-28h] BYREF

  v4 = 1;
  v14 = 0LL;
  if ( !a1 || !a2 )
    return 0;
  if ( a3 )
  {
    iDComplexity = a3->iDComplexity;
    v6 = iDComplexity == 0;
    if ( iDComplexity )
    {
      p_rclBounds = &a3->rclBounds;
      if ( !p_rclBounds )
        return v4;
      goto LABEL_10;
    }
  }
  else
  {
    v6 = 1;
  }
  p_rclBounds = (RECTL *)&v14;
  v8 = 0LL;
  v14 = *(_OWORD *)(*(_QWORD *)&a2[1] + 48LL);
  do
    *((int *)&v14 + v8++) >>= 4;
  while ( v8 < 4 );
LABEL_10:
  right = p_rclBounds->right;
  if ( p_rclBounds->left > right || p_rclBounds->top > p_rclBounds->bottom )
  {
    v4 = 0;
  }
  else if ( right > a1->sizlBitmap.cx )
  {
    return 0;
  }
  v11 = v4;
  if ( p_rclBounds->left < 0 )
    return 0;
  cy = a1->sizlBitmap.cy;
  if ( p_rclBounds->bottom > cy || p_rclBounds->top < 0 )
    return 0;
  if ( v4 && v6 && (right == a1->sizlBitmap.cx || p_rclBounds->bottom == cy) )
  {
    v13 = Gre::Base::Globals((Gre::Base *)a1);
    TraceLoggingWriteUnsupportedGdiUsage((_DWORD *)v13 + 1438);
    return v11;
  }
  return v4;
}
