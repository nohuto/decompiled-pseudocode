/*
 * XREFs of KiIpiStallOnPacketTargets @ 0x1404679AC
 * Callers:
 *     KeIpiGenericCall @ 0x1404677F0 (KeIpiGenericCall.c)
 *     KeUpdateThreadTag @ 0x140472120 (KeUpdateThreadTag.c)
 *     KeFlushRsb @ 0x1405BD4E0 (KeFlushRsb.c)
 *     KiSrcuReadUnlockRemote @ 0x1405C170C (KiSrcuReadUnlockRemote.c)
 *     KiAdjustUserIsolationDomainThread @ 0x1405C26B0 (KiAdjustUserIsolationDomainThread.c)
 *     KiIpiTargetCall @ 0x1405C8000 (KiIpiTargetCall.c)
 *     KiInitializeDynamicProcessorDpc @ 0x140B575C0 (KiInitializeDynamicProcessorDpc.c)
 * Callees:
 *     KiIpiStallOnPacketTargetsPrcb @ 0x1403AFC10 (KiIpiStallOnPacketTargetsPrcb.c)
 */

__int64 __fastcall KiIpiStallOnPacketTargets(__int64 a1)
{
  return KiIpiStallOnPacketTargetsPrcb(a1, (__int64)KeGetCurrentPrcb());
}
