/*
 * XREFs of ?SetStartTrigger@CAnimatedTransitionVisual@@UEAAJPEAVCAnimationTriggerProxy@@@Z @ 0x1800A74E0
 * Callers:
 *     ?SetStartTrigger@CStoryboard@@QEAAXPEAVCAnimationTriggerProxy@@@Z @ 0x1800DC088 (-SetStartTrigger@CStoryboard@@QEAAXPEAVCAnimationTriggerProxy@@@Z.c)
 * Callees:
 *     ?SetTrigger@CAnimationResource@@QEAAJPEAVCAnimationTriggerProxy@@@Z @ 0x1800AB974 (-SetTrigger@CAnimationResource@@QEAAJPEAVCAnimationTriggerProxy@@@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::SetStartTrigger(
        CAnimatedTransitionVisual *this,
        struct CAnimationTriggerProxy *a2)
{
  __int64 result; // rax
  CAnimatedTransitionVisual *v3; // r8
  unsigned int v4; // r10d
  CAnimationResource **v5; // r9

  result = 0LL;
  v3 = this;
  if ( !a2 )
    return 2147942487LL;
  if ( *((_QWORD *)this + 90) )
    return 2147942405LL;
  v4 = 0;
  v5 = (CAnimationResource **)((char *)this + 616);
  do
  {
    if ( (int)result < 0 )
      break;
    if ( *v5 )
      result = CAnimationResource::SetTrigger(*v5, a2);
    ++v4;
    ++v5;
  }
  while ( v4 < 7 );
  *((_QWORD *)v3 + 90) = a2;
  _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
  return result;
}
