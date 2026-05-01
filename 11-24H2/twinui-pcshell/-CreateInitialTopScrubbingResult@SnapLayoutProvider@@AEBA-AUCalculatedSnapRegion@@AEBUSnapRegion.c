/*
 * XREFs of ?CreateInitialTopScrubbingResult@SnapLayoutProvider@@AEBA?AUCalculatedSnapRegion@@AEBUSnapRegionCalculationArgs@@@Z @ 0x1802B73B0
 * Callers:
 *     ?CalculateSnapRegion@SnapLayoutProvider@@QEAA?AUCalculatedSnapRegion@@AEBUSnapRegionCalculationArgs@@@Z @ 0x18016F840 (-CalculateSnapRegion@SnapLayoutProvider@@QEAA-AUCalculatedSnapRegion@@AEBUSnapRegionCalculationA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SnapLayoutProvider::CreateInitialTopScrubbingResult(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // eax

  *(_QWORD *)(a2 + 4) = 0LL;
  *(_QWORD *)(a2 + 12) = 0LL;
  *(_QWORD *)(a2 + 20) = 0LL;
  *(_QWORD *)(a2 + 28) = 0LL;
  *(_BYTE *)a2 = 1;
  v6 = MulDiv(100, *(_DWORD *)(a1 + 88), 96);
  *(_DWORD *)(a2 + 24) = *(_DWORD *)(a1 + 76);
  *(_DWORD *)(a2 + 32) = *(_DWORD *)(a3 + 20) + 25;
  *(_DWORD *)(a2 + 20) = *(_DWORD *)(a3 + 16) - v6;
  *(_DWORD *)(a2 + 28) = *(_DWORD *)(a3 + 16) + v6;
  return a2;
}
