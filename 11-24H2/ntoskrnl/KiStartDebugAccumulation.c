/*
 * XREFs of KiStartDebugAccumulation @ 0x1405BF5FC
 * Callers:
 *     KeFreezeExecution @ 0x1404CEFB0 (KeFreezeExecution.c)
 *     KiFreezeTargetExecution @ 0x1405BF250 (KiFreezeTargetExecution.c)
 * Callees:
 *     KiUpdateTotalCyclesCurrentThread @ 0x14036D540 (KiUpdateTotalCyclesCurrentThread.c)
 */

unsigned __int64 __fastcall KiStartDebugAccumulation(__int64 a1)
{
  unsigned __int64 result; // rax

  result = 0LL;
  if ( !*(_BYTE *)(a1 + 32) && *(_BYTE *)(a1 + 34524) && !PoAllProcIntrDisabled )
    return KiUpdateTotalCyclesCurrentThread((struct _KPRCB *)a1, *(_QWORD *)(a1 + 8), 0LL);
  return result;
}
