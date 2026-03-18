/*
 * XREFs of ?SetBufferProperty@CAffineTransform2DEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1402308F0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnbindAllAnimations@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1400B906C (-UnbindAllAnimations@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z.c)
 *     ?SetBufferProperty@CFilterEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x14022DBE0 (-SetBufferProperty@CFilterEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEB.c)
 */

__int64 __fastcall DirectComposition::CAffineTransform2DEffectMarshaler::SetBufferProperty(
        DirectComposition::CAffineTransform2DEffectMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _QWORD *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // ebx
  bool v8; // r8
  __int64 v9; // rdx

  v6 = 0;
  *a6 = 0;
  if ( a3 == 6 )
  {
    if ( a5 == 24 )
    {
      v8 = 0;
      v9 = *((_QWORD *)this + 15) - *a4;
      if ( !v9 )
      {
        v9 = *((_QWORD *)this + 16) - a4[1];
        if ( !v9 )
          v9 = *((_QWORD *)this + 17) - a4[2];
      }
      if ( v9 )
      {
        v8 = 1;
        *(_OWORD *)((char *)this + 120) = *(_OWORD *)a4;
        *((_QWORD *)this + 17) = a4[2];
      }
      if ( *((_QWORD *)this + 5) )
      {
        DirectComposition::CApplicationChannel::UnbindAllAnimations(a2, this);
        v8 = 1;
      }
      *a6 = v8;
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)DirectComposition::CFilterEffectMarshaler::SetBufferProperty(this, a2, a3, a4, a5, a6);
  }
  return v6;
}
