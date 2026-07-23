/*
 * XREFs of KiIpiStallOnPacketTargetsPrcb @ 0x14039E420
 * Callers:
 *     KeFlushProcessWriteBuffers @ 0x14039E2AC (KeFlushProcessWriteBuffers.c)
 *     KeChangeMemoryAttributes @ 0x1403A4D48 (KeChangeMemoryAttributes.c)
 *     KeQueryTotalCycleTimeThread @ 0x1403E03C0 (KeQueryTotalCycleTimeThread.c)
 *     KiIpiStallOnPacketTargets @ 0x14045F44C (KiIpiStallOnPacketTargets.c)
 *     KeSynchronizeAddressPolicy @ 0x140487534 (KeSynchronizeAddressPolicy.c)
 *     KeSynchronizeSecurityDomain @ 0x1404A1ABC (KeSynchronizeSecurityDomain.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall KiIpiStallOnPacketTargetsPrcb(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int i; // ebx

  result = *(unsigned int *)(a2 + 11648);
  for ( i = 0; (_DWORD)result; result = *(unsigned int *)(a2 + 11648) )
  {
    if ( (++i & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 && KiCheckVpBackingLongSpinWaitHypercall() )
      HvlNotifyLongSpinWait(i);
    else
      _mm_pause();
  }
  return result;
}
