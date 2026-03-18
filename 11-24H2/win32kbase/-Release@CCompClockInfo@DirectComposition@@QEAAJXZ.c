/*
 * XREFs of ?Release@CCompClockInfo@DirectComposition@@QEAAJXZ @ 0x1400ED0EC
 * Callers:
 *     ??1CProcessData@DirectComposition@@AEAA@XZ @ 0x1400735D0 (--1CProcessData@DirectComposition@@AEAA@XZ.c)
 *     ?GetCompositorClockInfo@CConnection@DirectComposition@@QEAAJPEAPEAVCCompClockInfo@2@@Z @ 0x1400CAB78 (-GetCompositorClockInfo@CConnection@DirectComposition@@QEAAJPEAPEAVCCompClockInfo@2@@Z.c)
 *     NtDCompositionWaitForCompositorClock @ 0x1400CE2F0 (NtDCompositionWaitForCompositorClock.c)
 * Callees:
 *     ??_GCCompClockInfo@DirectComposition@@AEAAPEAXI@Z @ 0x1400ED11C (--_GCCompClockInfo@DirectComposition@@AEAAPEAXI@Z.c)
 */

__int64 __fastcall DirectComposition::CCompClockInfo::Release(DirectComposition::CCompClockInfo *this, unsigned int a2)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement((volatile signed __int32 *)this);
  if ( !v2 && this )
    DirectComposition::CCompClockInfo::`scalar deleting destructor'(this, a2);
  return v2;
}
