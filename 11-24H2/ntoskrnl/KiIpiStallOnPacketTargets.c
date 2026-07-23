/*
 * XREFs of KiIpiStallOnPacketTargets @ 0x14045F44C
 * Callers:
 *     KeIpiGenericCall @ 0x14045F290 (KeIpiGenericCall.c)
 *     KeUpdateThreadTag @ 0x14046E3F0 (KeUpdateThreadTag.c)
 *     KeFlushRsb @ 0x1405BAB10 (KeFlushRsb.c)
 *     KiSrcuReadUnlockRemote @ 0x1405BECDC (KiSrcuReadUnlockRemote.c)
 *     KiAdjustUserIsolationDomainThread @ 0x1405BFC80 (KiAdjustUserIsolationDomainThread.c)
 *     KiIpiTargetCall @ 0x1405C5730 (KiIpiTargetCall.c)
 *     KiInitializeDynamicProcessorDpc @ 0x140B59640 (KiInitializeDynamicProcessorDpc.c)
 * Callees:
 *     KiIpiStallOnPacketTargetsPrcb @ 0x14039E420 (KiIpiStallOnPacketTargetsPrcb.c)
 */

__int64 __fastcall KiIpiStallOnPacketTargets(__int64 a1)
{
  return KiIpiStallOnPacketTargetsPrcb(a1, (__int64)KeGetCurrentPrcb());
}
