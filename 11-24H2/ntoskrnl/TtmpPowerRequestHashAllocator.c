/*
 * XREFs of TtmpPowerRequestHashAllocator @ 0x14076AB74
 * Callers:
 *     TtmpInsertPowerRequestToSession @ 0x14076A838 (TtmpInsertPowerRequestToSession.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 TtmpPowerRequestHashAllocator()
{
  return ExAllocatePool2(0x40uLL);
}
