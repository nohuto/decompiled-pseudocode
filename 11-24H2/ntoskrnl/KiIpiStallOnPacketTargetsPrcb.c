/*
 * XREFs of KiIpiStallOnPacketTargetsPrcb @ 0x1403AFC10
 * Callers:
 *     KeFlushProcessWriteBuffers @ 0x1403AFA9C (KeFlushProcessWriteBuffers.c)
 *     KeChangeMemoryAttributes @ 0x1403CA178 (KeChangeMemoryAttributes.c)
 *     KeQueryTotalCycleTimeThread @ 0x1403EBDD0 (KeQueryTotalCycleTimeThread.c)
 *     KiIpiStallOnPacketTargets @ 0x1404679AC (KiIpiStallOnPacketTargets.c)
 *     KeSynchronizeAddressPolicy @ 0x14048C814 (KeSynchronizeAddressPolicy.c)
 *     KeSynchronizeSecurityDomain @ 0x1404A7090 (KeSynchronizeSecurityDomain.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
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
