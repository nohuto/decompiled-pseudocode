/*
 * XREFs of ?IsInfinite@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800C2CEC
 * Callers:
 *     ?IsEquivalentTo@CDWMDisplay@@QEBA_NPEBV1@@Z @ 0x1800C2B58 (-IsEquivalentTo@CDWMDisplay@@QEBA_NPEBV1@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsInfinite(_DWORD *a1)
{
  return *a1 <= (unsigned int)TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::sc_rcInfinite
      && a1[2] >= (unsigned int)dword_180125D68
      || a1[1] <= (unsigned int)dword_180125D64 && a1[3] >= (unsigned int)dword_180125D6C;
}
