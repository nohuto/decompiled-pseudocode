/*
 * XREFs of KiStartDebugAccumulation @ 0x1405BDFE0
 * Callers:
 *     KeFreezeExecution @ 0x1404D6470 (KeFreezeExecution.c)
 *     KiFreezeTargetExecution @ 0x1405BDC20 (KiFreezeTargetExecution.c)
 * Callees:
 *     KiUpdateTotalCyclesCurrentThread @ 0x14031AFA0 (KiUpdateTotalCyclesCurrentThread.c)
 */

unsigned __int64 __fastcall KiStartDebugAccumulation(__int64 a1)
{
  unsigned __int64 result; // rax

  result = 0LL;
  if ( !*(_BYTE *)(a1 + 32) && *(_BYTE *)(a1 + 34524) && !PoAllProcIntrDisabled )
    return KiUpdateTotalCyclesCurrentThread(a1, *(_QWORD *)(a1 + 8), 0LL);
  return result;
}
