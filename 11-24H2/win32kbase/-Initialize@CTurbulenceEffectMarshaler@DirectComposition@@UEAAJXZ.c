/*
 * XREFs of ?Initialize@CTurbulenceEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x14022EC70
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ @ 0x14019A4E0 (-Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ.c)
 */

int __fastcall DirectComposition::CTurbulenceEffectMarshaler::Initialize(
        DirectComposition::CTurbulenceEffectMarshaler *this)
{
  int result; // eax

  result = DirectComposition::CFilterEffectMarshaler::Initialize(this);
  if ( result >= 0 )
  {
    *((_QWORD *)this + 14) = 0LL;
    *((_DWORD *)this + 30) = 1008981770;
    result = 0;
    *(_QWORD *)((char *)this + 124) = 1008981770LL;
    *((_DWORD *)this + 33) = 0;
  }
  *((_QWORD *)this + 17) = 1LL;
  *((_QWORD *)this + 18) = 0LL;
  return result;
}
