/*
 * XREFs of ?GetPhysicalPtFromLogical@CWindowList@@QEAAXPEAVCWindowData@@AEAUtagRECT@@PEAH2@Z @ 0x18001ABC0
 * Callers:
 *     ?GetWindowRestoreRect@CWindowData@@QEAAJPEAUtagRECT@@_N@Z @ 0x1800039BC (-GetWindowRestoreRect@CWindowData@@QEAAJPEAUtagRECT@@_N@Z.c)
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x18001AA30 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     floor @ 0x18009C468 (floor.c)
 */

void __fastcall CWindowList::GetPhysicalPtFromLogical(
        CWindowList *this,
        struct CWindowData *a2,
        struct tagRECT *a3,
        int *a4,
        int *a5)
{
  LONG left; // edi
  LONG top; // esi
  int v9; // eax
  float v10; // xmm7_4
  float v11; // xmm7_4
  int v12; // ebx
  double v13; // xmm0_8

  left = a3->left;
  top = a3->top;
  if ( (*((_BYTE *)a2 + 372) & 1) == 0 )
  {
    v9 = *((_DWORD *)a2 + 88);
    if ( (double)v9 != 0.0 || (double)*((int *)a2 + 89) != 0.0 )
    {
      left -= (int)floor((float)v9 + 0.5);
      top -= (int)floor((float)*((int *)a2 + 89) + 0.5);
    }
    v10 = *((float *)a2 + 83);
    if ( v10 != 1.0 )
    {
      left = (int)floor((float)((float)left * v10) + 0.5);
      top = (int)floor((float)((float)top * v10) + 0.5);
    }
    if ( (double)*((int *)a2 + 90) != 0.0 || (double)*((int *)a2 + 91) != 0.0 )
    {
      left += (int)floor((float)*((int *)a2 + 90) + 0.5);
      top += (int)floor((float)*((int *)a2 + 91) + 0.5);
    }
    *a4 = left;
    goto LABEL_9;
  }
  v11 = (float)*((int *)a2 + 86) / (float)*((int *)a2 + 92);
  if ( v11 == 1.0 )
  {
    *a4 = left;
LABEL_9:
    *a5 = top;
    return;
  }
  v12 = (int)floor((float)((float)left * v11) + 0.5);
  v13 = floor((float)((float)top * v11) + 0.5);
  *a4 = v12;
  *a5 = (int)v13;
}
