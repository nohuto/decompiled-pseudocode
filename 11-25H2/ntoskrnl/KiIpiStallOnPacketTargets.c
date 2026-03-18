/*
 * XREFs of KiIpiStallOnPacketTargets @ 0x14046925C
 * Callers:
 *     KeIpiGenericCall @ 0x1404690A0 (KeIpiGenericCall.c)
 *     KeFlushRsb @ 0x1405B9694 (KeFlushRsb.c)
 *     KiSrcuReadUnlockRemote @ 0x1405BD69C (KiSrcuReadUnlockRemote.c)
 *     KiAdjustUserIsolationDomainThread @ 0x1405BE5D0 (KiAdjustUserIsolationDomainThread.c)
 *     KiIpiTargetCall @ 0x1405C3DE0 (KiIpiTargetCall.c)
 *     KiInitializeDynamicProcessorDpc @ 0x140B47620 (KiInitializeDynamicProcessorDpc.c)
 * Callees:
 *     KiIpiStallOnPacketTargetsPrcb @ 0x140271300 (KiIpiStallOnPacketTargetsPrcb.c)
 */

__int64 __fastcall KiIpiStallOnPacketTargets(__int64 a1)
{
  return KiIpiStallOnPacketTargetsPrcb(a1, (__int64)KeGetCurrentPrcb());
}
