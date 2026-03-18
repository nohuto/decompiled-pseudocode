/*
 * XREFs of ?UpdateChainingDirection@CScrollAnimation@@AEAAXM@Z @ 0x1802223FC
 * Callers:
 *     ?UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z @ 0x1800E2EDC (-UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z.c)
 * Callees:
 *     ?TryGetChainingHelper@CScrollAnimation@@AEBAPEAVCChainingHelper@@XZ @ 0x1800E40C4 (-TryGetChainingHelper@CScrollAnimation@@AEBAPEAVCChainingHelper@@XZ.c)
 */

void __fastcall CScrollAnimation::UpdateChainingDirection(CScrollAnimation *this, float a2)
{
  char v2; // r8
  float v4; // xmm0_4
  struct CChainingHelper *ChainingHelper; // rax
  __int64 v6; // rdx

  v2 = *((_BYTE *)this + 436);
  if ( (v2 & 1) != 0 )
  {
    v4 = (float)(int)((__PAIR64__((float)(a2 - *((float *)this + 106)) > 0.0, a2 - *((float *)this + 106))
                     - COERCE_UNSIGNED_INT(0.0)) >> 32);
    *((float *)this + 108) = v4;
    *((_BYTE *)this + 436) = (v4 == 0.0) | v2 & 0xFE;
    if ( v4 != 0.0 )
    {
      ChainingHelper = CScrollAnimation::TryGetChainingHelper(this);
      if ( ChainingHelper )
      {
        v6 = 3LL * *((int *)this + 81);
        *((_BYTE *)ChainingHelper + 4 * v6) |= 4u;
        *((_DWORD *)ChainingHelper + v6 + 2) = -805306369;
        *((_BYTE *)ChainingHelper + 36) |= 2u;
      }
    }
  }
}
