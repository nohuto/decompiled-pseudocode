/*
 * XREFs of ?GetFloatAnimatableProperty@CHolographicExclusiveModeMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x140234BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFloatAnimatableProperty@CResourceMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x14022C8F0 (-GetFloatAnimatableProperty@CResourceMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 */

__int64 __fastcall DirectComposition::CHolographicExclusiveModeMarshaler::GetFloatAnimatableProperty(
        DirectComposition::CHolographicExclusiveModeMarshaler *this,
        __int64 a2,
        float *a3)
{
  unsigned int v3; // r9d

  v3 = 0;
  if ( a3 )
  {
    if ( (_DWORD)a2 == 1 )
      *a3 = *((float *)this + 15);
    else
      return (unsigned int)DirectComposition::CResourceMarshaler::GetFloatAnimatableProperty(this, a2, a3);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
