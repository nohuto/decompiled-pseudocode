/*
 * XREFs of ?ClipIntersection@CDisplayAnimatedVisual@@KA?AUtagRECT@@AEBUD2D_RECT_U@@0AEBU2@W4DXGI_MODE_ROTATION@@@Z @ 0x1800BD1D0
 * Callers:
 *     ?CapturePrimary@CDisplayAnimatedVisual@@IEAAJ_KPEAPEAVCAnimatedTransitionVisual@@@Z @ 0x1800BCF58 (-CapturePrimary@CDisplayAnimatedVisual@@IEAAJ_KPEAPEAVCAnimatedTransitionVisual@@@Z.c)
 *     ?CaptureAndPositionToExtendedDisplay@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ @ 0x1800BE54C (-CaptureAndPositionToExtendedDisplay@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct tagRECT *__fastcall CDisplayAnimatedVisual::ClipIntersection(
        struct tagRECT *__return_ptr retstr,
        const struct D2D_RECT_U *a2,
        const struct D2D_RECT_U *a3,
        const struct tagRECT *a4,
        enum DXGI_MODE_ROTATION a5)
{
  int v5; // esi
  LONG left; // r15d
  LONG top; // r12d
  int v9; // r10d
  int v10; // eax
  int v11; // r9d
  signed int v12; // ecx
  signed int v13; // r11d
  int v14; // eax
  int v15; // ebp
  int v16; // r14d
  int v17; // eax
  int v18; // ecx
  UINT32 v19; // eax
  int v20; // r8d
  int v21; // eax
  int v22; // edx
  int v23; // r11d

  v5 = 0;
  left = a4->left;
  top = a4->top;
  v9 = 0;
  if ( a4->right - a4->left >= 0 )
    v9 = a4->right - a4->left;
  v10 = a4->bottom - top;
  v11 = 0;
  if ( v10 >= 0 )
    v11 = v10;
  v12 = a3->right - a3->left;
  v13 = a3->bottom - a3->top;
  if ( ((a5 - 2) & 0xFFFFFFFD) == 0 )
  {
    v14 = v9;
    v9 = v11;
    v11 = v14;
  }
  v15 = 0;
  v16 = v9;
  if ( (signed int)(v9 * (a2->left - a3->left)) / v12 >= 0 )
    v15 = (signed int)(v9 * (a2->left - a3->left)) / v12;
  if ( (signed int)(v11 * (a2->top - a3->top)) / v13 >= 0 )
    v5 = (signed int)(v11 * (a2->top - a3->top)) / v13;
  v17 = (signed int)(v9 * (a2->right - a3->left)) / v12;
  v18 = v11;
  if ( v9 >= v17 )
    v16 = v17;
  v19 = a2->bottom - a3->top;
  v20 = v5;
  v21 = (int)(v11 * v19) / v13;
  v22 = v15;
  v23 = v16;
  if ( v11 >= v21 )
    v18 = v21;
  switch ( a5 )
  {
    case DXGI_MODE_ROTATION_ROTATE90:
      v22 = v11 - v18;
      v20 = v15;
      v23 = v11 - v5;
      v18 = v16;
      break;
    case DXGI_MODE_ROTATION_ROTATE180:
      v20 = v11 - v18;
      v22 = v9 - v16;
      v23 = v9 - v15;
      v18 = v11 - v5;
      break;
    case DXGI_MODE_ROTATION_ROTATE270:
      v23 = v18;
      v20 = v9 - v16;
      v18 = v9 - v15;
      v22 = v5;
      break;
  }
  retstr->left = left + v22;
  retstr->top = top + v20;
  retstr->right = left + v23;
  retstr->bottom = top + v18;
  return retstr;
}
