/*
 * XREFs of ?GetFloatAnimatableProperty@CBrightnessEffectMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x14022DFE0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFloatAnimatableProperty@CResourceMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x14022C8F0 (-GetFloatAnimatableProperty@CResourceMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 */

__int64 __fastcall DirectComposition::CBrightnessEffectMarshaler::GetFloatAnimatableProperty(
        DirectComposition::CBrightnessEffectMarshaler *this,
        __int64 a2,
        float *a3)
{
  unsigned int v3; // r9d
  int v4; // eax

  v3 = 0;
  switch ( (_DWORD)a2 )
  {
    case 6:
      v4 = *((_DWORD *)this + 28);
      goto LABEL_10;
    case 7:
      v4 = *((_DWORD *)this + 29);
      goto LABEL_10;
    case 8:
      v4 = *((_DWORD *)this + 30);
      goto LABEL_10;
    case 9:
      v4 = *((_DWORD *)this + 31);
LABEL_10:
      *(_DWORD *)a3 = v4;
      return v3;
  }
  return (unsigned int)DirectComposition::CResourceMarshaler::GetFloatAnimatableProperty(this, a2, a3);
}
