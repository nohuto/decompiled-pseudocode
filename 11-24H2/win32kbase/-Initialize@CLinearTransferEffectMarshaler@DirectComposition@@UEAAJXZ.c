/*
 * XREFs of ?Initialize@CLinearTransferEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x14022F1B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ @ 0x14019A4E0 (-Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ.c)
 */

int __fastcall DirectComposition::CLinearTransferEffectMarshaler::Initialize(
        DirectComposition::CLinearTransferEffectMarshaler *this)
{
  int result; // eax

  result = DirectComposition::CFilterEffectMarshaler::Initialize(this);
  if ( result >= 0 )
  {
    *((_BYTE *)this + 144) &= 0xE0u;
    *(_QWORD *)((char *)this + 116) = 1065353216LL;
    result = 0;
    *(_QWORD *)((char *)this + 124) = 1065353216LL;
    *(_QWORD *)((char *)this + 132) = 1065353216LL;
    *((_DWORD *)this + 35) = 1065353216;
    *((_DWORD *)this + 28) = 0;
  }
  return result;
}
