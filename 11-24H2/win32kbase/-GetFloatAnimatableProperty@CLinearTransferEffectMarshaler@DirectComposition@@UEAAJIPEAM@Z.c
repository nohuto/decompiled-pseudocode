/*
 * XREFs of ?GetFloatAnimatableProperty@CLinearTransferEffectMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x14022F130
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFloatAnimatableProperty@CResourceMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x14022C8F0 (-GetFloatAnimatableProperty@CResourceMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 */

__int64 __fastcall DirectComposition::CLinearTransferEffectMarshaler::GetFloatAnimatableProperty(
        DirectComposition::CLinearTransferEffectMarshaler *this,
        __int64 a2,
        float *a3)
{
  unsigned int v3; // r9d
  int v4; // eax

  v3 = 0;
  switch ( (_DWORD)a2 )
  {
    case 4:
      v4 = *((_DWORD *)this + 28);
      goto LABEL_18;
    case 5:
      v4 = *((_DWORD *)this + 29);
      goto LABEL_18;
    case 7:
      v4 = *((_DWORD *)this + 30);
      goto LABEL_18;
    case 8:
      v4 = *((_DWORD *)this + 31);
      goto LABEL_18;
    case 0xA:
      v4 = *((_DWORD *)this + 32);
      goto LABEL_18;
    case 0xB:
      v4 = *((_DWORD *)this + 33);
      goto LABEL_18;
    case 0xD:
      v4 = *((_DWORD *)this + 34);
      goto LABEL_18;
    case 0xE:
      v4 = *((_DWORD *)this + 35);
LABEL_18:
      *(_DWORD *)a3 = v4;
      return v3;
  }
  return (unsigned int)DirectComposition::CResourceMarshaler::GetFloatAnimatableProperty(this, a2, a3);
}
