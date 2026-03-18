/*
 * XREFs of ?Initialize@CArithmeticCompositeEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x140230640
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ @ 0x14019A4E0 (-Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ.c)
 */

int __fastcall DirectComposition::CArithmeticCompositeEffectMarshaler::Initialize(
        DirectComposition::CArithmeticCompositeEffectMarshaler *this)
{
  int result; // eax

  result = DirectComposition::CFilterEffectMarshaler::Initialize(this);
  if ( result >= 0 )
  {
    result = 0;
    *((_OWORD *)this + 7) = xmmword_1402712A8;
  }
  *((_DWORD *)this + 32) = 0;
  return result;
}
