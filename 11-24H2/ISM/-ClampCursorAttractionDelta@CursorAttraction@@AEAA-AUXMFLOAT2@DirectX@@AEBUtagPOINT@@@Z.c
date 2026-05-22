/*
 * XREFs of ?ClampCursorAttractionDelta@CursorAttraction@@AEAA?AUXMFLOAT2@DirectX@@AEBUtagPOINT@@@Z @ 0x1801A3F68
 * Callers:
 *     ?ApplyCursorAttraction@CursorAttraction@@QEAA?AUtagPOINT@@AEBU2@AEBUtagRECT@@@Z @ 0x1801A3D8C (-ApplyCursorAttraction@CursorAttraction@@QEAA-AUtagPOINT@@AEBU2@AEBUtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CursorAttraction::ClampCursorAttractionDelta(__int64 a1, __int64 a2, int *a3)
{
  _DWORD *v3; // r9
  int v4; // esi
  float v6; // xmm2_4
  int v7; // edi
  int v8; // ebx
  int v9; // eax
  _DWORD *v10; // r10
  _DWORD *v11; // rcx
  int v12; // eax

  v3 = a3 + 1;
  v4 = *a3;
  *(_QWORD *)a2 = *(_QWORD *)(a1 + 24);
  v6 = *(float *)(a2 + 4);
  v7 = v4 + (int)*(float *)a2;
  v8 = a3[1] + (int)v6;
  if ( *(float *)a2 >= 0.0 )
  {
    v10 = a3 + 1;
    goto LABEL_5;
  }
  v9 = *(_DWORD *)(a1 + 16);
  if ( v7 > v9 )
  {
    v10 = a3 + 1;
LABEL_5:
    v11 = a3 + 1;
    if ( *(float *)a2 <= 0.0 )
      goto LABEL_8;
    v9 = *(_DWORD *)(a1 + 16);
    v3 = v10;
    v11 = v10;
    if ( v7 < v9 )
      goto LABEL_8;
  }
  v11 = v3;
  *(float *)a2 = (float)(v9 - v4);
LABEL_8:
  if ( v6 < 0.0 && (v12 = *(_DWORD *)(a1 + 20), v8 <= v12) || v6 > 0.0 && (v12 = *(_DWORD *)(a1 + 20), v8 >= v12) )
    *(float *)(a2 + 4) = (float)(v12 - *v11);
  return a2;
}
