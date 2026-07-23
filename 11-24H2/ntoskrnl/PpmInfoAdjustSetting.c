/*
 * XREFs of PpmInfoAdjustSetting @ 0x140A28548
 * Callers:
 *     PpmSetProfilePolicySetting @ 0x1409A3A64 (PpmSetProfilePolicySetting.c)
 * Callees:
 *     PpmPerfComputePerfReductionTolerance @ 0x1404C39F0 (PpmPerfComputePerfReductionTolerance.c)
 *     PpmInfoWriteData @ 0x140A285FC (PpmInfoWriteData.c)
 */

char __fastcall PpmInfoAdjustSetting(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6)
{
  unsigned int v7; // ebp
  char v10; // bl

  v7 = a3;
  if ( a6 < *(_DWORD *)(a1 + 32) && (*(_BYTE *)(a1 + 37) & 8) == 0 )
    return 0;
  v10 = 0;
  if ( a3 <= a4 )
  {
    do
    {
      if ( (unsigned __int8)PpmInfoWriteData(a5, a6, v7, a1, a2) )
        v10 = 1;
      ++v7;
    }
    while ( v7 <= a4 );
    if ( v10 )
    {
      if ( *(_BYTE *)(a1 + 36) == 9 )
        *(_DWORD *)(a2 + 76) = PpmPerfComputePerfReductionTolerance(*(_DWORD *)(a2 + 68));
    }
  }
  return v10;
}
