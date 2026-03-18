/*
 * XREFs of KeFlushRsb @ 0x1405B9694
 * Callers:
 *     MiUnloadSystemImage @ 0x140A862D4 (MiUnloadSystemImage.c)
 * Callees:
 *     KiIpiSendPacket @ 0x140466C7C (KiIpiSendPacket.c)
 *     KiIpiStallOnPacketTargets @ 0x14046925C (KiIpiStallOnPacketTargets.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiFlushCurrentRsb @ 0x1406B4640 (KiFlushCurrentRsb.c)
 */

__int64 KeFlushRsb()
{
  unsigned __int8 CurrentIrql; // bl
  __int64 v1; // rcx
  int v2; // edx
  int v3; // ecx
  int v4; // r8d
  int v5; // r9d
  __int64 result; // rax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 12);
  KiIpiSendPacket(1, 0LL, (__int64)KiFlushRsbTarget, 0LL, 0LL, 0LL);
  KiIpiStallOnPacketTargets(v1);
  KiFlushCurrentRsb(v3, v2, v4, v5);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
