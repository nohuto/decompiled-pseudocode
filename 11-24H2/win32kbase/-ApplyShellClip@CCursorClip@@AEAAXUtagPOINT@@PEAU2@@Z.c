/*
 * XREFs of ?ApplyShellClip@CCursorClip@@AEAAXUtagPOINT@@PEAU2@@Z @ 0x1400DD430
 * Callers:
 *     ?ApplySystemClips@CCursorClip@@AEAA_NUtagPOINT@@W4BoundPointOptions@@PEAU2@PEAW4ClipResultDetailFlags@@@Z @ 0x14020A9D4 (-ApplySystemClips@CCursorClip@@AEAA_NUtagPOINT@@W4BoundPointOptions@@PEAU2@PEAW4ClipResultDetail.c)
 * Callees:
 *     PtInRect @ 0x1400DCAE4 (PtInRect.c)
 *     ?ClipPointToRect@CCursorClip@@CAXUtagPOINT@@PEBUtagRECT@@PEAU2@@Z @ 0x1400E1D70 (-ClipPointToRect@CCursorClip@@CAXUtagPOINT@@PEBUtagRECT@@PEAU2@@Z.c)
 */

void __fastcall CCursorClip::ApplyShellClip(CCursorClip *this, struct tagPOINT a2, struct tagPOINT *a3)
{
  unsigned int v3; // edi
  int v4; // ebp
  const struct tagRECT *v5; // r10
  unsigned int v6; // ebx
  struct tagPOINT *v7; // r11
  unsigned __int64 v8; // r9
  unsigned int v10; // eax
  const struct tagRECT *v11; // r8
  const struct tagRECT *v12; // r10
  LONG x; // ecx
  LONG right; // edx
  LONG y; // ecx
  LONG top; // edx
  LONG bottom; // edx

  v3 = -1;
  *a3 = a2;
  v4 = *((_DWORD *)this + 66);
  v5 = 0LL;
  v6 = 0;
  v7 = a3;
  v8 = (unsigned __int64)a2;
  while ( v6 != v4 )
  {
    v10 = PtInRect((_DWORD *)(*((_QWORD *)this + 32) + 16LL * v6), v8);
    if ( v10 )
      return;
    x = v7->x;
    if ( v7->x >= v11->left )
    {
      right = v11->right;
      if ( x >= right )
        v10 = x - right + 1;
    }
    else
    {
      v10 = v11->left - x;
    }
    y = v7->y;
    top = v11->top;
    if ( y >= top )
    {
      bottom = v11->bottom;
      if ( y >= bottom )
        v10 += y - bottom + 1;
    }
    else
    {
      v10 += top - y;
    }
    if ( v10 >= v3 )
      v11 = v12;
    ++v6;
    v5 = v11;
    if ( v10 >= v3 )
      v10 = v3;
    v3 = v10;
  }
  if ( v5 )
    CCursorClip::ClipPointToRect((struct tagPOINT)v8, v5, v7);
}
