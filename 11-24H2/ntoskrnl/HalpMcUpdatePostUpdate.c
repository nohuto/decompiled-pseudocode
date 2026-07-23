/*
 * XREFs of HalpMcUpdatePostUpdate @ 0x1404D25E0
 * Callers:
 *     HalpLoadMicrocode @ 0x1406FF6C0 (HalpLoadMicrocode.c)
 *     HalpProcInitSystem @ 0x140B4F200 (HalpProcInitSystem.c)
 * Callees:
 *     PrExtLogToRegistry @ 0x1404D25F8 (PrExtLogToRegistry.c)
 */

__int64 HalpMcUpdatePostUpdate()
{
  return PrExtLogToRegistry();
}
