/*
 * XREFs of KiIpiStallOnPacketTargetsPrcb @ 0x140271300
 * Callers:
 *     KeUpdateThreadTag @ 0x140202F10 (KeUpdateThreadTag.c)
 *     KeChangeMemoryAttributes @ 0x14026A684 (KeChangeMemoryAttributes.c)
 *     KeFlushProcessWriteBuffers @ 0x14027118C (KeFlushProcessWriteBuffers.c)
 *     KeQueryTotalCycleTimeThread @ 0x1403E5570 (KeQueryTotalCycleTimeThread.c)
 *     KiIpiStallOnPacketTargets @ 0x14046925C (KiIpiStallOnPacketTargets.c)
 *     KeSynchronizeAddressPolicy @ 0x14048D178 (KeSynchronizeAddressPolicy.c)
 *     KeSynchronizeSecurityDomain @ 0x1404A67FC (KeSynchronizeSecurityDomain.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall KiIpiStallOnPacketTargetsPrcb(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int i; // ebx

  result = *(unsigned int *)(a2 + 11648);
  for ( i = 0; (_DWORD)result; result = *(unsigned int *)(a2 + 11648) )
  {
    if ( (++i & HvlLongSpinCountMask) == 0
      && (HvlEnlightenments & 0x40) != 0
      && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
    {
      HvlNotifyLongSpinWait(i);
    }
    else
    {
      _mm_pause();
    }
  }
  return result;
}
