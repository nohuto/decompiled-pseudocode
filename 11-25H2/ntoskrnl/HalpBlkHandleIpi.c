/*
 * XREFs of HalpBlkHandleIpi @ 0x140BCA3E0
 * Callers:
 *     HalpBlkIpiInterrupt @ 0x140BCBA00 (HalpBlkIpiInterrupt.c)
 * Callees:
 *     HalpBlkPoPerformPpmOperation @ 0x140BCA008 (HalpBlkPoPerformPpmOperation.c)
 */

char HalpBlkHandleIpi()
{
  return HalpBlkPoPerformPpmOperation();
}
