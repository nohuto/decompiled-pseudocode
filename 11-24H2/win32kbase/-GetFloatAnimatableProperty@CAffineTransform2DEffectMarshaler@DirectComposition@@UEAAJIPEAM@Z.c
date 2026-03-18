/*
 * XREFs of ?GetFloatAnimatableProperty@CAffineTransform2DEffectMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x140230810
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFloatAnimatableProperty@CResourceMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x14022C8F0 (-GetFloatAnimatableProperty@CResourceMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 */

__int64 __fastcall DirectComposition::CAffineTransform2DEffectMarshaler::GetFloatAnimatableProperty(
        DirectComposition::CAffineTransform2DEffectMarshaler *this,
        __int64 a2,
        float *a3)
{
  unsigned int v3; // r10d

  v3 = 0;
  if ( (_DWORD)a2 == 7 )
  {
    *a3 = *((float *)this + 36);
  }
  else if ( (unsigned int)(a2 - 8) > 5 )
  {
    return (unsigned int)DirectComposition::CResourceMarshaler::GetFloatAnimatableProperty(this, a2, a3);
  }
  else
  {
    *a3 = *((float *)this + 2 * ((unsigned __int64)(unsigned int)(a2 - 8) >> 1) + (a2 & 1) + 30);
  }
  return v3;
}
