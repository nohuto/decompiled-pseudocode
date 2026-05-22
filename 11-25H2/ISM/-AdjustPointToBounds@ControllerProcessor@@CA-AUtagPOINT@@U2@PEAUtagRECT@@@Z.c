/*
 * XREFs of ?AdjustPointToBounds@ControllerProcessor@@CA?AUtagPOINT@@U2@PEAUtagRECT@@@Z @ 0x180178310
 * Callers:
 *     ?ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ @ 0x18017839C (-ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ.c)
 *     ?TransitionToEnabled@ControllerProcessor@@AEAAJPEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x18017ABB0 (-TransitionToEnabled@ControllerProcessor@@AEAAJPEAUtagRECT@@PEAUtagPOINT@@@Z.c)
 *     ?UpdateBoundsIfNeeded@ControllerProcessor@@AEAAXXZ @ 0x18017B180 (-UpdateBoundsIfNeeded@ControllerProcessor@@AEAAXXZ.c)
 *     ?UpdateNavigationParameters@ControllerProcessor@@AEAAJPEAUtagRECT@@@Z @ 0x18017B4F4 (-UpdateNavigationParameters@ControllerProcessor@@AEAAJPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?IsEdition@@YA_N_K@Z @ 0x1800392B0 (-IsEdition@@YA_N_K@Z.c)
 */

struct tagPOINT __fastcall ControllerProcessor::AdjustPointToBounds(struct tagPOINT a1, struct tagRECT *a2)
{
  int v5; // ecx
  LONG x; // eax
  int v7; // ecx
  LONG v8; // eax
  LONG y; // [rsp+34h] [rbp+Ch]
  __int64 v10; // [rsp+40h] [rbp+18h]

  y = a1.y;
  if ( IsEdition(8778LL) )
    return a1;
  v5 = a2->right - 1;
  x = v5;
  if ( a1.x < v5 )
    x = a1.x;
  if ( a2->left <= x )
  {
    if ( a1.x < v5 )
      v5 = a1.x;
    LODWORD(v10) = v5;
  }
  else
  {
    LODWORD(v10) = a2->left;
  }
  v7 = a2->bottom - 1;
  v8 = v7;
  if ( y < v7 )
    v8 = y;
  if ( a2->top <= v8 )
  {
    if ( y < v7 )
      v7 = y;
    HIDWORD(v10) = v7;
  }
  else
  {
    HIDWORD(v10) = a2->top;
  }
  return (struct tagPOINT)v10;
}
