/*
 * XREFs of ?GetEndRect@CAnimatedTransitionVisual@@UEAAJPEAUtagRECT@@@Z @ 0x180058A40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimatedTransitionVisual::GetEndRect(CAnimatedTransitionVisual *this, struct tagRECT *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = *(struct tagRECT *)((char *)this + 872);
  return result;
}
