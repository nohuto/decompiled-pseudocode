/*
 * XREFs of s_GetAlignedRectsForApp @ 0x1804E7968
 * Callers:
 *     ?_PrepareTaggingForDelayedStoryboard@CAppArrangementSingleTransitionTarget@@AEAAXPEAUIAppLayoutOperationItem@@PEAUITemporaryAppVisual@@@Z @ 0x1804E70F0 (-_PrepareTaggingForDelayedStoryboard@CAppArrangementSingleTransitionTarget@@AEAAXPEAUIAppLayoutO.c)
 *     ?_PrepareTaggingForImmediateStoryboard@CAppArrangementSingleTransitionTarget@@AEAAXPEAUIAppLayoutOperationItem@@PEAUITemporaryAppVisual@@@Z @ 0x1804E72DC (-_PrepareTaggingForImmediateStoryboard@CAppArrangementSingleTransitionTarget@@AEAAXPEAUIAppLayou.c)
 * Callees:
 *     ?ComputeAppVisualAlignment@ImmersiveApplicationLayout@@YA?AW4RectAlignment@1@PEBUtagRECT@@0@Z @ 0x18067EE84 (-ComputeAppVisualAlignment@ImmersiveApplicationLayout@@YA-AW4RectAlignment@1@PEBUtagRECT@@0@Z.c)
 */

void __fastcall s_GetAlignedRectsForApp(__int64 a1, __int64 a2, _OWORD *a3, _OWORD *a4, bool *a5, _BYTE *a6)
{
  int v6; // ebx
  int v7; // eax
  _DWORD *v8; // rdx
  _DWORD *v9; // rcx
  struct tagRECT *v10; // r8
  struct tagRECT *v11; // r9
  int v12; // r10d
  bool *v13; // r11
  LONG v14; // eax
  LONG v15; // ecx

  *a3 = *(_OWORD *)a1;
  *a4 = *(_OWORD *)a2;
  if ( a5 )
    *a5 = 1;
  if ( a6 )
    *a6 = 1;
  v6 = *(_DWORD *)(a2 + 8) - *(_DWORD *)a2;
  if ( v6 >= *(_DWORD *)(a1 + 8) - *(_DWORD *)a1 )
    v6 = *(_DWORD *)(a1 + 8) - *(_DWORD *)a1;
  v7 = ImmersiveApplicationLayout::ComputeAppVisualAlignment() - 2;
  if ( v7 )
  {
    if ( v7 == 1 )
    {
      v10->left = v10->right - v6;
      v14 = v11->right - v6;
      v11->left = v14;
      if ( a5 )
        *a5 = v14 == *v8;
      v12 = v10->left - *v9;
    }
  }
  else
  {
    v10->right = v6 + v10->left;
    v15 = v6 + v11->left;
    v11->right = v15;
    if ( v13 )
      *v13 = v15 == v8[2];
  }
  v10->right += v12 - v10->left;
  v10->bottom -= v10->top;
  v10->top = 0;
  v10->left = v12;
  MatchRectAspectRatio(v10, v11);
}
