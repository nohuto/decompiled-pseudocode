/*
 * XREFs of ?GetFloatAnimatableProperty@CColorGradientStopMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1402316F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFloatAnimatableProperty@CResourceMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x14022C8F0 (-GetFloatAnimatableProperty@CResourceMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 */

__int64 __fastcall DirectComposition::CColorGradientStopMarshaler::GetFloatAnimatableProperty(
        DirectComposition::CColorGradientStopMarshaler *this,
        __int64 a2,
        float *a3)
{
  unsigned int v3; // r9d

  v3 = 0;
  if ( (_DWORD)a2 )
    return (unsigned int)DirectComposition::CResourceMarshaler::GetFloatAnimatableProperty(this, a2, a3);
  else
    *a3 = *((float *)this + 14);
  return v3;
}
