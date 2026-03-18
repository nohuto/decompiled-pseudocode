/*
 * XREFs of KiSrcuReadUnlockRemote @ 0x1405C170C
 * Callers:
 *     KeSrcuReadUnlock @ 0x1405C0D30 (KeSrcuReadUnlock.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140257130 (KeAddProcessorAffinityEx.c)
 *     KiIpiSendPacket @ 0x1404656E8 (KiIpiSendPacket.c)
 *     KiIpiStallOnPacketTargets @ 0x1404679AC (KiIpiStallOnPacketTargets.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeSrcuReadUnlock @ 0x1405C0D30 (KeSrcuReadUnlock.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall KiSrcuReadUnlockRemote(__int64 a1, _DWORD *a2)
{
  unsigned int v3; // ebp
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rbx
  _KSTATIC_AFFINITY_BLOCK *p_StaticAffinity; // rbx
  __int64 v8; // rcx
  __int64 result; // rax

  v3 = (unsigned __int16)*a2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 12);
  CurrentPrcb = KeGetCurrentPrcb();
  if ( CurrentPrcb->Number == v3 )
  {
    KeSrcuReadUnlock(a1, a2);
  }
  else
  {
    p_StaticAffinity = &CurrentPrcb->StaticAffinity;
    p_StaticAffinity->KeFlushTbAffinity.Reserved = 0;
    *(_DWORD *)&p_StaticAffinity->KeFlushTbAffinity.Count = 2097153;
    memset_0(&p_StaticAffinity->KeRcuAffinity.8, 0, sizeof(p_StaticAffinity->KeRcuAffinity.8));
    KeAddProcessorAffinityEx(&p_StaticAffinity->KeFlushTbAffinity.Count, v3);
    KiIpiSendPacket(0, (char *)p_StaticAffinity, (__int64)KiSrcuReadUnlockIpi, a1, (__int64)a2, 0LL);
    KiIpiStallOnPacketTargets(v8);
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
