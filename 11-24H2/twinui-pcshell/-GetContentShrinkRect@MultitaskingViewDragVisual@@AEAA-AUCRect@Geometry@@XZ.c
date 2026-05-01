/*
 * XREFs of ?GetContentShrinkRect@MultitaskingViewDragVisual@@AEAA?AUCRect@Geometry@@XZ @ 0x1804E1FFC
 * Callers:
 *     ?SetMaxDragVisualSize@MultitaskingViewDragVisual@@UEAAXAEBUCSize@Geometry@@@Z @ 0x1804E2630 (-SetMaxDragVisualSize@MultitaskingViewDragVisual@@UEAAXAEBUCSize@Geometry@@@Z.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall MultitaskingViewDragVisual::GetContentShrinkRect(__int64 a1, _DWORD *a2)
{
  float v2; // xmm3_4
  float v3; // xmm4_4
  float v4; // xmm5_4
  int v5; // eax
  int v6; // eax
  __int64 v8; // [rsp+8h] [rbp+8h]
  __int64 v9; // [rsp+10h] [rbp+10h]

  v2 = FLOAT_1_0;
  v3 = (float)*(int *)(a1 + 56);
  v4 = (float)*(int *)(a1 + 60);
  if ( (float)(v3 / v4) < (float)((float)*(int *)(a1 + 64) / (float)*(int *)(a1 + 68)) )
  {
    v6 = (int)((double)*(int *)(a1 + 68) * *(double *)(a1 + 80));
    if ( v6 < *(_DWORD *)(a1 + 60) )
      v2 = (float)v6 / v4;
  }
  else
  {
    v5 = (int)((double)*(int *)(a1 + 64) * *(double *)(a1 + 80));
    if ( v5 < *(_DWORD *)(a1 + 56) )
      v2 = (float)v5 / v3;
  }
  v8 = *(_QWORD *)(a1 + 48);
  v9 = *(_QWORD *)(a1 + 56);
  *a2 = -(int)(float)((float)(int)v8 * v2);
  a2[1] = -(int)(float)((float)SHIDWORD(v8) * v2);
  a2[2] = (int)(float)((float)(int)v9 * v2) - (int)(float)((float)(int)v8 * v2);
  a2[3] = (int)(float)((float)SHIDWORD(v9) * v2) - (int)(float)((float)SHIDWORD(v8) * v2);
  return a2;
}
