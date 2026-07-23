/*
 * XREFs of HalpBlkHandleIpi @ 0x140BDD3E0
 * Callers:
 *     HalpBlkIpiInterrupt @ 0x140BDEA00 (HalpBlkIpiInterrupt.c)
 * Callees:
 *     HalpBlkPoPerformPpmOperation @ 0x140BDD008 (HalpBlkPoPerformPpmOperation.c)
 */

char HalpBlkHandleIpi()
{
  return HalpBlkPoPerformPpmOperation();
}
