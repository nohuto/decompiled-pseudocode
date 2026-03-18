/*
 * XREFs of ?UpdateParallelMode@CMonitorClock@@IEAAXXZ @ 0x1801E3C40
 * Callers:
 *     ?UpdateTiming@CMonitorClock@@UEAA_KXZ @ 0x180249B00 (-UpdateTiming@CMonitorClock@@UEAA_KXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CMonitorClock::UpdateParallelMode(CMonitorClock *this)
{
  CGlobalComposition *v1; // rax
  _QWORD *v3; // rcx
  unsigned __int64 v4; // rdx

  v1 = g_pComposition;
  *((_BYTE *)this + 72) = 0;
  v3 = (_QWORD *)*((_QWORD *)v1 + 77);
  if ( v3[4] - v3[3] != 8LL )
  {
    v4 = *((_QWORD *)this + 3);
    if ( v4 <= CCommonRegistryData::m_parallelModeDurationThreshold && 9 * v4 <= 5LL * v3[2] )
      *((_BYTE *)this + 72) = 1;
  }
}
