/*
 * XREFs of ?InitializeClientReferenceCount@PDEV@@QEAAXXZ @ 0x140089050
 * Callers:
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEBG22PEAXPEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x140087E70 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEBG22PEAXPEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z.c)
 *     ?MultiUserGreCleanupDrivers@@YAXXZ @ 0x1401991EC (-MultiUserGreCleanupDrivers@@YAXXZ.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x14019BA3C (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 * Callees:
 *     ?TrackObjectReferenceInitialization@@YAXW4ReferenceTrackerCountedType@@PEAXI@Z @ 0x1400D90C0 (-TrackObjectReferenceInitialization@@YAXW4ReferenceTrackerCountedType@@PEAXI@Z.c)
 */

void __fastcall PDEV::InitializeClientReferenceCount(PDEV *this)
{
  __int64 v1; // rdx

  v1 = *((_QWORD *)this + 442);
  *((_DWORD *)this + 2) = 1;
  if ( v1 )
    TrackObjectReferenceInitialization(1LL, v1, 1LL);
}
