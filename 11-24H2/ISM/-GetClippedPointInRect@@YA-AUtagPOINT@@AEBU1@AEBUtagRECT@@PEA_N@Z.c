/*
 * XREFs of ?GetClippedPointInRect@@YA?AUtagPOINT@@AEBU1@AEBUtagRECT@@PEA_N@Z @ 0x1801B83B4
 * Callers:
 *     ?ConvertDisplayRelativeMicrometersToScreen@GazeProcessor@@IEAAJUtagPOINT@@PEAU2@1@Z @ 0x1801B8280 (-ConvertDisplayRelativeMicrometersToScreen@GazeProcessor@@IEAAJUtagPOINT@@PEAU2@1@Z.c)
 * Callees:
 *     <none>
 */

struct tagPOINT __fastcall GetClippedPointInRect(const struct tagPOINT *a1, const struct tagRECT *a2, bool *a3)
{
  LONG x; // r8d
  LONG y; // eax
  LONG left; // eax
  LONG top; // r8d
  LONG v8; // eax
  LONG v9; // ecx
  int v10; // edx
  __int64 v11; // [rsp+18h] [rbp+18h]

  x = a1->x;
  if ( a1->x >= a2->left && x < a2->right )
  {
    y = a1->y;
    if ( y >= a2->top && y < a2->bottom )
      return *a1;
  }
  left = a2->left;
  if ( a2->left <= x )
    left = a1->x;
  if ( a2->right - 1 >= left )
  {
    if ( a2->left > x )
      x = a2->left;
    LODWORD(v11) = x;
  }
  else
  {
    LODWORD(v11) = a2->right - 1;
  }
  top = a2->top;
  v8 = top;
  v9 = a1->y;
  v10 = a2->bottom - 1;
  if ( top <= v9 )
    v8 = v9;
  if ( v10 >= v8 )
  {
    if ( top > v9 )
      v9 = top;
    HIDWORD(v11) = v9;
  }
  else
  {
    HIDWORD(v11) = v10;
  }
  return (struct tagPOINT)v11;
}
