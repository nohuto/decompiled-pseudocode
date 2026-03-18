/*
 * XREFs of ?GetFloatAnimatableProperty@CAffineTransform2DEffectMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C0212560
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFloatAnimatableProperty@CResourceMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C020D610 (-GetFloatAnimatableProperty@CResourceMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 */

__int64 __fastcall DirectComposition::CAffineTransform2DEffectMarshaler::GetFloatAnimatableProperty(
        DirectComposition::CAffineTransform2DEffectMarshaler *this,
        int a2,
        float *a3)
{
  unsigned int v3; // r10d

  v3 = 0;
  if ( a2 == 3 )
  {
    *a3 = *((float *)this + 36);
  }
  else if ( (unsigned int)(a2 - 4) > 5 )
  {
    return (unsigned int)DirectComposition::CResourceMarshaler::GetFloatAnimatableProperty(this, a2, a3);
  }
  else
  {
    *a3 = *((float *)this + 2 * ((unsigned __int64)(unsigned int)(a2 - 4) >> 1) + (a2 & 1) + 30);
  }
  return v3;
}
