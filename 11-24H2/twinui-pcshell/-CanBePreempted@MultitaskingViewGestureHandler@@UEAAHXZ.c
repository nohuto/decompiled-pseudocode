/*
 * XREFs of ?CanBePreempted@MultitaskingViewGestureHandler@@UEAAHXZ @ 0x18049D090
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMultitaskingViewState@MultitaskingViewGestureHandler@@AEBAJPEAUMultitaskingViewState@1@@Z @ 0x1801805BC (-GetMultitaskingViewState@MultitaskingViewGestureHandler@@AEBAJPEAUMultitaskingViewState@1@@Z.c)
 */

__int64 __fastcall MultitaskingViewGestureHandler::CanBePreempted(MultitaskingViewGestureHandler *this)
{
  __int64 result; // rax
  char v2; // [rsp+30h] [rbp+8h] BYREF
  int v3; // [rsp+34h] [rbp+Ch]

  v3 = 0;
  if ( (int)MultitaskingViewGestureHandler::GetMultitaskingViewState(
              (MultitaskingViewGestureHandler *)((char *)this - 8),
              (struct MultitaskingViewGestureHandler::MultitaskingViewState *)&v2) < 0 )
    return 0LL;
  result = 1LL;
  if ( (v3 & 1) != 0 )
    return 0LL;
  return result;
}
