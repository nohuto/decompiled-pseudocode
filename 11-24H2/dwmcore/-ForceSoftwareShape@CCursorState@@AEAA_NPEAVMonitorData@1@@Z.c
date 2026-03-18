/*
 * XREFs of ?ForceSoftwareShape@CCursorState@@AEAA_NPEAVMonitorData@1@@Z @ 0x1802B2E80
 * Callers:
 *     ?ForceSoftwareCursor@COverlayContext@@AEAAXXZ @ 0x18026A168 (-ForceSoftwareCursor@COverlayContext@@AEAAXXZ.c)
 *     ?EnsureMonitorData@CCursorState@@QEAA_NU_LUID@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@_NAEBVCMILMatrix@@@Z @ 0x1802B2818 (-EnsureMonitorData@CCursorState@@QEAA_NU_LUID@@IAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeed.c)
 *     ?UpdateHardwareCursor@CCursorState@@AEAA_NPEAVMonitorData@1@_N@Z @ 0x1802B49CC (-UpdateHardwareCursor@CCursorState@@AEAA_NPEAVMonitorData@1@_N@Z.c)
 * Callees:
 *     ?HideHardwareShape@CCursorState@@AEAAXPEAVMonitorData@1@@Z @ 0x1802B2FFC (-HideHardwareShape@CCursorState@@AEAAXPEAVMonitorData@1@@Z.c)
 */

bool __fastcall CCursorState::ForceSoftwareShape(CCursorState *this, struct CCursorState::MonitorData *a2)
{
  bool result; // al

  if ( *((_DWORD *)a2 + 38) == 2 )
    return 0;
  CCursorState::HideHardwareShape(this, a2);
  result = 1;
  *((_DWORD *)a2 + 38) = 2;
  return result;
}
