/*
 * XREFs of HalpBlkHandleIpi @ 0x140BDB3E0
 * Callers:
 *     HalpBlkIpiInterrupt @ 0x140BDCA00 (HalpBlkIpiInterrupt.c)
 * Callees:
 *     HalpBlkPoPerformPpmOperation @ 0x140BDB008 (HalpBlkPoPerformPpmOperation.c)
 */

char HalpBlkHandleIpi()
{
  return HalpBlkPoPerformPpmOperation();
}
