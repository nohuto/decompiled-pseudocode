/*
 * XREFs of KeFlushRsb @ 0x1405BAB10
 * Callers:
 *     MiUnloadSystemImage @ 0x140A870C4 (MiUnloadSystemImage.c)
 * Callees:
 *     KiIpiSendPacket @ 0x14045D668 (KiIpiSendPacket.c)
 *     KiIpiStallOnPacketTargets @ 0x14045F44C (KiIpiStallOnPacketTargets.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiFlushCurrentRsb @ 0x1406C0840 (KiFlushCurrentRsb.c)
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
