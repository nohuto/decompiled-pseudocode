/*
 * XREFs of ?GetPhysicalPtFromLogical@CWindowList@@QEAAXPEAVCWindowData@@AEAUtagRECT@@PEAH2@Z @ 0x180042D9C
 * Callers:
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180045E04 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?GetWindowRestoreRect@CWindowData@@QEAAJPEAUtagRECT@@_N@Z @ 0x180107D90 (-GetWindowRestoreRect@CWindowData@@QEAAJPEAUtagRECT@@_N@Z.c)
 * Callees:
 *     floor @ 0x18005D4A8 (floor.c)
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
  int *v9; // rbp
  float v10; // xmm7_4
  float v11; // xmm7_4

  left = a3->left;
  top = a3->top;
  if ( (*((_BYTE *)a2 + 372) & 1) != 0 )
  {
    v11 = (float)*((int *)a2 + 86) / (float)*((int *)a2 + 92);
    if ( v11 != 1.0 )
    {
      left = (int)floor((float)((float)left * v11) + 0.5);
      top = (int)floor((float)((float)top * v11) + 0.5);
    }
  }
  else
  {
    v9 = (int *)((char *)a2 + 356);
    if ( (double)*((int *)a2 + 88) != 0.0 || (double)*v9 != 0.0 )
    {
      left -= (int)floor((float)*((int *)a2 + 88) + 0.5);
      top -= (int)floor((float)*v9 + 0.5);
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
  }
  *a5 = top;
  *a4 = left;
}
