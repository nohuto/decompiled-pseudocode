/*
 * XREFs of TtmpPowerRequestHashAllocator @ 0x14076AD94
 * Callers:
 *     TtmpInsertPowerRequestToSession @ 0x14076AA58 (TtmpInsertPowerRequestToSession.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall TtmpPowerRequestHashAllocator(ULONG_PTR a1)
{
  return ExAllocatePool2(0x40uLL, a1, 0x52507454u);
}
