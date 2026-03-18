/*
 * XREFs of ?Initialize@CColorMatrixEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x14022E370
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ @ 0x14019A4E0 (-Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ.c)
 */

int __fastcall DirectComposition::CColorMatrixEffectMarshaler::Initialize(
        DirectComposition::CColorMatrixEffectMarshaler *this)
{
  int result; // eax

  result = DirectComposition::CFilterEffectMarshaler::Initialize(this);
  if ( result >= 0 )
  {
    *((_QWORD *)this + 14) = 1065353216LL;
    result = 0;
    *((_QWORD *)this + 15) = 0LL;
    *((_DWORD *)this + 32) = 0;
    *(_QWORD *)((char *)this + 132) = 1065353216LL;
    *(_QWORD *)((char *)this + 140) = 0LL;
    *((_DWORD *)this + 37) = 0;
    *((_QWORD *)this + 19) = 1065353216LL;
    *((_QWORD *)this + 20) = 0LL;
    *((_DWORD *)this + 42) = 0;
    *(_QWORD *)((char *)this + 172) = 1065353216LL;
    *(_QWORD *)((char *)this + 180) = 0LL;
    *((_DWORD *)this + 47) = 0;
  }
  *((_QWORD *)this + 24) = 1LL;
  return result;
}
