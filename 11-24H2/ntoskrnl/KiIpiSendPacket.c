/*
 * XREFs of KiIpiSendPacket @ 0x1404656E8
 * Callers:
 *     KeChangeMemoryAttributes @ 0x1403CA178 (KeChangeMemoryAttributes.c)
 *     KeUpdateThreadTag @ 0x140472120 (KeUpdateThreadTag.c)
 *     KeSynchronizeAddressPolicy @ 0x14048C814 (KeSynchronizeAddressPolicy.c)
 *     KeSynchronizeSecurityDomain @ 0x1404A7090 (KeSynchronizeSecurityDomain.c)
 *     KeFlushRsb @ 0x1405BD4E0 (KeFlushRsb.c)
 *     KiSrcuReadUnlockRemote @ 0x1405C170C (KiSrcuReadUnlockRemote.c)
 *     KiAdjustUserIsolationDomainThread @ 0x1405C26B0 (KiAdjustUserIsolationDomainThread.c)
 *     KiIpiTargetCall @ 0x1405C8000 (KiIpiTargetCall.c)
 *     KiInitializeDynamicProcessorDpc @ 0x140B575C0 (KiInitializeDynamicProcessorDpc.c)
 * Callees:
 *     KiIpiSendRequest @ 0x1402928D0 (KiIpiSendRequest.c)
 */

__int64 __fastcall KiIpiSendPacket(int a1, char *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int128 v7; // [rsp+30h] [rbp-28h] BYREF
  __int64 v8; // [rsp+40h] [rbp-18h]
  __int64 v9; // [rsp+48h] [rbp-10h]

  *((_QWORD *)&v7 + 1) = a5;
  v9 = a3;
  *(_QWORD *)&v7 = a4;
  v8 = a6;
  return KiIpiSendRequest((__int64)KeGetCurrentPrcb(), a1, a2, &v7, 5LL);
}
