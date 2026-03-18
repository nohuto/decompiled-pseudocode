/*
 * XREFs of ??1WorkloadInstancePair@DXGTRACKEDWORKLOAD@@QEAA@XZ @ 0x1400792A0
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroySynchObject@MonitoredFenceHelper@@AEAAXXZ @ 0x1401FC7A8 (-DestroySynchObject@MonitoredFenceHelper@@AEAAXXZ.c)
 */

void __fastcall DXGTRACKEDWORKLOAD::WorkloadInstancePair::~WorkloadInstancePair(
        DXGTRACKEDWORKLOAD::WorkloadInstancePair *this)
{
  MonitoredFenceHelper::DestroySynchObject((DXGTRACKEDWORKLOAD::WorkloadInstancePair *)((char *)this + 56));
}
