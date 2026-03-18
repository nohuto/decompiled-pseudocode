/*
 * XREFs of ?Initialize@CAffineTransform2DEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x140230860
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ @ 0x14019A4E0 (-Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ.c)
 */

int __fastcall DirectComposition::CAffineTransform2DEffectMarshaler::Initialize(
        DirectComposition::CAffineTransform2DEffectMarshaler *this)
{
  int result; // eax

  *((_DWORD *)this + 28) = 0;
  *((_DWORD *)this + 29) = 0;
  result = DirectComposition::CFilterEffectMarshaler::Initialize(this);
  if ( result >= 0 )
  {
    result = 0;
    *((_DWORD *)this + 30) = 1065353216;
    *((_DWORD *)this + 31) = 0;
    *((_DWORD *)this + 32) = 0;
    *((_DWORD *)this + 33) = 1065353216;
    *((_DWORD *)this + 34) = 0;
    *((_DWORD *)this + 35) = 0;
    *((_DWORD *)this + 36) = 1065353216;
  }
  return result;
}
