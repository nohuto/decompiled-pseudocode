/*
 * XREFs of ?DCEPtInRect@@YA_NPEBUtagRECT@@UtagPOINT@@@Z @ 0x1401B7F74
 * Callers:
 *     NtUserPerMonitorDPIPhysicalToLogicalPoint @ 0x1401B78A0 (NtUserPerMonitorDPIPhysicalToLogicalPoint.c)
 *     NtUserLogicalToPerMonitorDPIPhysicalPoint @ 0x1401B7A70 (NtUserLogicalToPerMonitorDPIPhysicalPoint.c)
 *     NtUserPhysicalToLogicalPoint @ 0x1401B7C80 (NtUserPhysicalToLogicalPoint.c)
 *     NtUserLogicalToPhysicalPoint @ 0x1401B7DF0 (NtUserLogicalToPhysicalPoint.c)
 *     EditionQueryInertiaWorker @ 0x1402AE7B0 (EditionQueryInertiaWorker.c)
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
