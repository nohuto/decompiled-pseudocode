/*
 * XREFs of ?DCEPtInRect@@YA_NPEBUtagRECT@@UtagPOINT@@@Z @ 0x1C0150F64
 * Callers:
 *     NtUserLogicalToPerMonitorDPIPhysicalPoint @ 0x1C01D5840 (NtUserLogicalToPerMonitorDPIPhysicalPoint.c)
 *     NtUserLogicalToPhysicalPoint @ 0x1C01D5C10 (NtUserLogicalToPhysicalPoint.c)
 *     NtUserPerMonitorDPIPhysicalToLogicalPoint @ 0x1C01D7A40 (NtUserPerMonitorDPIPhysicalToLogicalPoint.c)
 *     NtUserPhysicalToLogicalPoint @ 0x1C01D7DD0 (NtUserPhysicalToLogicalPoint.c)
 *     EditionQueryInertiaWorker @ 0x1C01F6EE0 (EditionQueryInertiaWorker.c)
 * Callees:
 *     <none>
 */

bool __fastcall DCEPtInRect(const struct tagRECT *a1, struct tagPOINT a2)
{
  bool result; // al

  result = 0;
  if ( a1 && a2.x >= a1->left && a2.x <= a1->right && a2.y >= a1->top )
    return a2.y <= a1->bottom;
  return result;
}
