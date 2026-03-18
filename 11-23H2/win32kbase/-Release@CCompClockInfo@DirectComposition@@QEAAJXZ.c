/*
 * XREFs of ?Release@CCompClockInfo@DirectComposition@@QEAAJXZ @ 0x1C0008CE0
 * Callers:
 *     NtDCompositionWaitForCompositorClock @ 0x1C0008BC0 (NtDCompositionWaitForCompositorClock.c)
 *     ?GetCompositorClockInfo@CConnection@DirectComposition@@QEAAJPEAPEAVCCompClockInfo@2@@Z @ 0x1C0008DC8 (-GetCompositorClockInfo@CConnection@DirectComposition@@QEAAJPEAPEAVCCompClockInfo@2@@Z.c)
 *     ??1CProcessData@DirectComposition@@AEAA@XZ @ 0x1C00338F8 (--1CProcessData@DirectComposition@@AEAA@XZ.c)
 * Callees:
 *     ??_GCCompClockInfo@DirectComposition@@AEAAPEAXI@Z @ 0x1C02092B0 (--_GCCompClockInfo@DirectComposition@@AEAAPEAXI@Z.c)
 */

__int64 __fastcall DirectComposition::CCompClockInfo::Release(DirectComposition::CCompClockInfo *this, unsigned int a2)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement((volatile signed __int32 *)this);
  if ( !v2 && this )
    DirectComposition::CCompClockInfo::`scalar deleting destructor'(this, a2);
  return v2;
}
