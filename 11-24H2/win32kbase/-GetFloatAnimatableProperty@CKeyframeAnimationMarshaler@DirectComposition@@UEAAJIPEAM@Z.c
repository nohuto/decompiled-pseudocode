/*
 * XREFs of ?GetFloatAnimatableProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x140233090
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFloatAnimatableProperty@CResourceMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x14022C8F0 (-GetFloatAnimatableProperty@CResourceMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 */

__int64 __fastcall DirectComposition::CKeyframeAnimationMarshaler::GetFloatAnimatableProperty(
        DirectComposition::CKeyframeAnimationMarshaler *this,
        __int64 a2,
        float *a3)
{
  __int64 result; // rax

  result = 0LL;
  if ( (_DWORD)a2 != 23 )
    return DirectComposition::CResourceMarshaler::GetFloatAnimatableProperty(this, a2, a3);
  *a3 = 0.0;
  return result;
}
