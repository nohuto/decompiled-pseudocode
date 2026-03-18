/*
 * XREFs of ?ValidatePresentRegions@DXGCONTEXT@@AEBAJPEBU_D3DKMT_PRESENT@@II@Z @ 0x140394080
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1402F3D20 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DXGCONTEXT::ValidatePresentRegions(
        DXGCONTEXT *this,
        const struct _D3DKMT_PRESENT *a2,
        int a3,
        int a4)
{
  D3DKMT_PRESENT_RGNS *pPresentRegions; // rcx
  UINT v8; // r11d
  const D3DKMT_MOVE_RECT *pMoveRects; // r10
  int *i; // rbx
  const RECT *pDirtyRects; // rbx
  UINT v12; // r8d
  UINT DirtyRectCount; // r9d
  int right; // ecx
  __int64 bottom; // rax
  const wchar_t *v17; // r9
  __int64 v18; // rcx
  __int64 top; // rdx
  __int64 left; // r8
  __int64 v21; // rdx
  __int64 v22; // r8
  int v23; // eax
  int v24; // r9d
  __int64 x; // rbp
  __int64 v26; // rsi
  int v27; // edx
  int v28; // eax
  __int64 v29; // rdi
  __int64 v30; // rbx

  pPresentRegions = a2->pPresentRegions;
  v8 = 0;
  pMoveRects = pPresentRegions->pMoveRects;
  for ( i = &pMoveRects->DestRect.bottom; ; i += 6 )
  {
    if ( v8 >= pPresentRegions->MoveRectCount )
    {
      pDirtyRects = pPresentRegions->pDirtyRects;
      v12 = 0;
      DirtyRectCount = pPresentRegions->DirtyRectCount;
      while ( 1 )
      {
        if ( v12 >= DirtyRectCount )
          return 0LL;
        right = pDirtyRects->right;
        if ( (a2->Flags.Value & 0x10000000) != 0 )
        {
          if ( right < pDirtyRects->left || pDirtyRects->bottom < pDirtyRects->top )
          {
LABEL_16:
            WdLogSingleEntry5(2LL, -1073741811LL, pDirtyRects->left, pDirtyRects->top, right, pDirtyRects->bottom);
            bottom = pDirtyRects->bottom;
            v17 = L"0x%I64x Invalid Dirty Rect [0x%I64x 0x%I64x 0x%I64x 0x%I64x]";
            v18 = pDirtyRects->right;
            top = pDirtyRects->top;
            left = pDirtyRects->left;
            WdLogGlobalForLineNumber = 9755;
            goto LABEL_17;
          }
        }
        else if ( right <= pDirtyRects->left || pDirtyRects->bottom <= pDirtyRects->top )
        {
          goto LABEL_16;
        }
        right = pDirtyRects->right;
        if ( right > a3 || pDirtyRects->bottom > a4 || pDirtyRects->left < 0 || pDirtyRects->top < 0 )
          goto LABEL_16;
        ++v12;
        ++pDirtyRects;
      }
    }
    v21 = *(i - 1);
    v22 = *(i - 3);
    if ( (int)v21 <= (int)v22 )
      break;
    v23 = *i;
    v24 = *(i - 2);
    if ( *i <= v24 || (int)v21 > a3 || v23 > a4 || (int)v22 < 0 || v24 < 0 )
      break;
    x = pMoveRects->SourcePoint.x;
    v26 = *(i - 4);
    v27 = x + v21 - v22;
    v28 = v26 + v23 - v24;
    if ( v27 > a3 || v28 > a4 || (int)x < 0 || (int)v26 < 0 )
    {
      v29 = v27;
      v30 = v28;
      WdLogSingleEntry5(2LL, -1073741811LL, x, v26, v27, v28);
      WdLogGlobalForLineNumber = 9725;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"0x%I64x Invalid Source Point [0x%I64x 0x%I64x : 0x%I64x 0x%I64x] in Move Rect",
        -1073741811LL,
        x,
        v26,
        v29,
        v30);
      return 3221225485LL;
    }
    ++v8;
    ++pMoveRects;
  }
  WdLogSingleEntry5(2LL, -1073741811LL, v22, *(i - 2), v21, *i);
  bottom = *i;
  v17 = L"0x%I64x Invalid Dest Rect [0x%I64x 0x%I64x 0x%I64x 0x%I64x] in Move Rect";
  v18 = *(i - 1);
  top = *(i - 2);
  left = *(i - 3);
  WdLogGlobalForLineNumber = 9701;
LABEL_17:
  DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v17, -1073741811LL, left, top, v18, bottom);
  return 3221225485LL;
}
