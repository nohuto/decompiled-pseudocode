/*
 * XREFs of HalpMcUpdatePostUpdate @ 0x1404D9190
 * Callers:
 *     HalpLoadMicrocode @ 0x140701A80 (HalpLoadMicrocode.c)
 *     HalpProcInitSystem @ 0x140B4D1C0 (HalpProcInitSystem.c)
 * Callees:
 *     PrExtLogToRegistry @ 0x1404D91A8 (PrExtLogToRegistry.c)
 */

__int64 HalpMcUpdatePostUpdate()
{
  return PrExtLogToRegistry();
}
