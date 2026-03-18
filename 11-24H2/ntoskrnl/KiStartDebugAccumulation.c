/*
 * XREFs of KiStartDebugAccumulation @ 0x1405C202C
 * Callers:
 *     KeFreezeExecution @ 0x1404D5B60 (KeFreezeExecution.c)
 *     KiFreezeTargetExecution @ 0x1405C1C80 (KiFreezeTargetExecution.c)
 * Callees:
 *     KiUpdateTotalCyclesCurrentThread @ 0x14034F060 (KiUpdateTotalCyclesCurrentThread.c)
 */

unsigned __int64 __fastcall KiStartDebugAccumulation(__int64 a1)
{
  unsigned __int64 result; // rax

  result = 0LL;
  if ( !*(_BYTE *)(a1 + 32) && *(_BYTE *)(a1 + 34524) && !PoAllProcIntrDisabled )
    return KiUpdateTotalCyclesCurrentThread((struct _KPRCB *)a1, *(_QWORD *)(a1 + 8), 0LL);
  return result;
}
