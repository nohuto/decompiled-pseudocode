/*
 * XREFs of MiApplyDynamicRelocationFixups @ 0x14043A8FC
 * Callers:
 *     MiReapplyImportOptimizationWorker @ 0x14067D7B0 (MiReapplyImportOptimizationWorker.c)
 *     MiPerformFixups @ 0x14093BA30 (MiPerformFixups.c)
 * Callees:
 *     RtlApplyImportRelocationToPage @ 0x14043AAF0 (RtlApplyImportRelocationToPage.c)
 *     RtlApplyIndirectRelocationToPage @ 0x14043AFDC (RtlApplyIndirectRelocationToPage.c)
 *     RtlApplySwitchJumpRelocationToPage @ 0x1404BC4E4 (RtlApplySwitchJumpRelocationToPage.c)
 */

__int64 __fastcall MiApplyDynamicRelocationFixups(int a1, int a2, int a3, unsigned __int16 *a4, unsigned int a5)
{
  __int64 result; // rax
  BOOL v10; // r14d
  int v11; // ebp
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rsi

  result = KiSpeculationFeatures;
  v10 = 0;
  v11 = (a5 & 0x10) != 0 ? 2 : 0;
  if ( (a5 & 0x10) == 0 )
    v10 = ((a5 >> 3) & 1) == 0;
  if ( (KiSpeculationFeatures & 0x20000000000LL) == 0 )
    v11 |= 1u;
  switch ( a4[3] )
  {
    case 3u:
      result = RtlApplyImportRelocationToPage(a1, a2, a3, (int)Base + 4, (__int64)(a4 + 4), v10, 1, v11);
      break;
    case 4u:
      result = RtlApplyIndirectRelocationToPage(a1, a2, a3, (int)Base + 4, (__int64)(a4 + 4), v10, 1);
      break;
    case 5u:
      result = RtlApplySwitchJumpRelocationToPage(a1, a2, a3, (int)Base + 4, (__int64)(a4 + 4), v10, 1);
      break;
  }
  v12 = (unsigned __int64)(a4 + 6);
  v13 = (unsigned __int64)a4 + *a4 + 12;
  while ( v12 < v13 )
  {
    result = RtlApplyImportRelocationToPage(a1, a2, a3, (int)Base + 4, v12, v10, 0, v11);
    v12 += 4LL;
  }
  v14 = v13 + a4[1];
  v15 = v14 + a4[2];
  while ( v13 < v14 )
  {
    result = RtlApplyIndirectRelocationToPage(a1, a2, a3, (int)Base + 4, v13, v10, 0);
    v13 += 2LL;
  }
  while ( v14 < v15 )
  {
    result = RtlApplySwitchJumpRelocationToPage(a1, a2, a3, (int)Base + 4, v14, v10, 0);
    v14 += 2LL;
  }
  return result;
}
