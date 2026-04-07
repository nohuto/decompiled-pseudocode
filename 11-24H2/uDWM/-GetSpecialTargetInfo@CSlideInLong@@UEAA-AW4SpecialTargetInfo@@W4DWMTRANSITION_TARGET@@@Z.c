/*
 * XREFs of ?GetSpecialTargetInfo@CSlideInLong@@UEAA?AW4SpecialTargetInfo@@W4DWMTRANSITION_TARGET@@@Z @ 0x180084550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSlideInLong::GetSpecialTargetInfo(__int64 a1, int a2)
{
  unsigned int v2; // ecx
  int v3; // r8d
  const char *v4; // r9

  v2 = 0;
  v3 = 0;
  v4 = "F";
  while ( (unsigned __int64)v3 < 5 )
  {
    if ( ((*(_DWORD *)v4 ^ a2) & 0xFFF) == 0 )
      return *(unsigned int *)&`CSlideInLong::GetSpecialTargetInfo'::`2'::s_rgSpecialTargetLookupTable[8 * v3 + 4];
    ++v3;
    v4 += 8;
  }
  return v2;
}
