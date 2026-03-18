/*
 * XREFs of HalpMcUpdatePostUpdate @ 0x1404DA1E0
 * Callers:
 *     HalpLoadMicrocode @ 0x1406F5C90 (HalpLoadMicrocode.c)
 *     HalpProcInitSystem @ 0x140B3D1C0 (HalpProcInitSystem.c)
 * Callees:
 *     PrExtLogToRegistry @ 0x1404DA1F8 (PrExtLogToRegistry.c)
 */

__int64 HalpMcUpdatePostUpdate()
{
  return PrExtLogToRegistry();
}
