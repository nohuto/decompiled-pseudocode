/*
 * XREFs of ?GetFloatAnimatableProperty@CHueRotationEffectMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x14022D9D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFloatAnimatableProperty@CResourceMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x14022C8F0 (-GetFloatAnimatableProperty@CResourceMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 */

__int64 __fastcall DirectComposition::CHueRotationEffectMarshaler::GetFloatAnimatableProperty(
        DirectComposition::CHueRotationEffectMarshaler *this,
        __int64 a2,
        float *a3)
{
  unsigned int v3; // r9d

  v3 = 0;
  if ( (_DWORD)a2 == 4 )
    *a3 = *((float *)this + 28);
  else
    return (unsigned int)DirectComposition::CResourceMarshaler::GetFloatAnimatableProperty(this, a2, a3);
  return v3;
}
