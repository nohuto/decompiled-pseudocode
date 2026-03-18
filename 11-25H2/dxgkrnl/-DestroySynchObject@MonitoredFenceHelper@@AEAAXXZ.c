/*
 * XREFs of ?DestroySynchObject@MonitoredFenceHelper@@AEAAXXZ @ 0x1401FC7A8
 * Callers:
 *     ??1WorkloadInstancePair@DXGTRACKEDWORKLOAD@@QEAA@XZ @ 0x1400792A0 (--1WorkloadInstancePair@DXGTRACKEDWORKLOAD@@QEAA@XZ.c)
 *     ?Update@MonitoredFenceHelper@@QEAAJPEAVDXGDEVICE@@_K1@Z @ 0x1401FD7A4 (-Update@MonitoredFenceHelper@@QEAAJPEAVDXGDEVICE@@_K1@Z.c)
 * Callees:
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x140034A5C (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 */

void __fastcall MonitoredFenceHelper::DestroySynchObject(MonitoredFenceHelper *this)
{
  DXGDEVICESYNCOBJECT *v2; // rcx

  v2 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 4);
  if ( v2 )
  {
    DXGDEVICESYNCOBJECT::`scalar deleting destructor'(v2);
    *((_QWORD *)this + 4) = 0LL;
  }
}
