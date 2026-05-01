/*
 * XREFs of ?ShouldProcessHorizontalGestureInput@MultitaskingViewGestureHandler@@AEBA_NXZ @ 0x180180678
 * Callers:
 *     ?StartSwipe@MultitaskingViewGestureHandler@@UEAAJHHIUTOUCHPAD_GESTURE_CONTEXT@@@Z @ 0x1801800F0 (-StartSwipe@MultitaskingViewGestureHandler@@UEAAJHHIUTOUCHPAD_GESTURE_CONTEXT@@@Z.c)
 *     ?ContinueSwipe@MultitaskingViewGestureHandler@@UEAAJHHHHI@Z @ 0x1801804F0 (-ContinueSwipe@MultitaskingViewGestureHandler@@UEAAJHHHHI@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall MultitaskingViewGestureHandler::ShouldProcessHorizontalGestureInput(
        MultitaskingViewGestureHandler *this)
{
  char v1; // dl
  int v2; // r9d
  int v3; // r8d
  int v4; // eax
  int v5; // eax

  v1 = 0;
  v2 = *((_DWORD *)this + 33);
  v3 = -*((_DWORD *)this + 32);
  if ( *((int *)this + 32) > 0 )
    v3 = *((_DWORD *)this + 32);
  v4 = -*((_DWORD *)this + 33);
  if ( *((int *)this + 33) > 0 )
    v4 = *((_DWORD *)this + 33);
  if ( v3 <= v4 )
  {
    if ( !v2 )
      return v1;
    v5 = (v2 > 0) + 1;
  }
  else
  {
    v5 = (*((_DWORD *)this + 32) > 0) + 3;
  }
  if ( v5 == 3 || v5 == 4 )
    return (double)v3 > (double)*((int *)this + 34) * *((double *)this + 19);
  return v1;
}
