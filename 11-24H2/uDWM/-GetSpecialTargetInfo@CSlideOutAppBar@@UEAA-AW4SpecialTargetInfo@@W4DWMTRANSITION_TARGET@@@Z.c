/*
 * XREFs of ?GetSpecialTargetInfo@CSlideOutAppBar@@UEAA?AW4SpecialTargetInfo@@W4DWMTRANSITION_TARGET@@@Z @ 0x1800D27F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSlideOutAppBar::GetSpecialTargetInfo(__int64 a1, int a2)
{
  unsigned int v2; // ecx
  int v3; // r8d
  _DWORD *v4; // r9

  v2 = 0;
  v3 = 0;
  v4 = `CSlideOutAppBar::GetSpecialTargetInfo'::`2'::s_rgSpecialTargetLookupTable;
  while ( !v3 )
  {
    if ( ((*v4 ^ a2) & 0xFFF) == 0 )
      return (unsigned int)`CSlideOutAppBar::GetSpecialTargetInfo'::`2'::s_rgSpecialTargetLookupTable[1];
    v3 = 1;
    v4 += 2;
  }
  return v2;
}
