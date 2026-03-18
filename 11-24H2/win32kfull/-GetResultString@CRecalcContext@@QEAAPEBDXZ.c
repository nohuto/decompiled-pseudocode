/*
 * XREFs of ?GetResultString@CRecalcContext@@QEAAPEBDXZ @ 0x140252394
 * Callers:
 *     ?s_xxxProcessTopologyChange@CRecalcProp@@SAXPEAUHWND__@@PEAVCRecalcContext@@@Z @ 0x1402C55A8 (-s_xxxProcessTopologyChange@CRecalcProp@@SAXPEAUHWND__@@PEAVCRecalcContext@@@Z.c)
 *     ?xxxProcessPendingRecalcState@CRecalcProp@@AEAAXPEAVCRecalcState@@_NPEAVCRecalcContext@@@Z @ 0x1402C68BC (-xxxProcessPendingRecalcState@CRecalcProp@@AEAAXPEAVCRecalcState@@_NPEAVCRecalcContext@@@Z.c)
 * Callees:
 *     <none>
 */

const char *__fastcall CRecalcContext::GetResultString(CRecalcContext *this)
{
  switch ( *(_DWORD *)this )
  {
    case 1:
      return "Deferred";
    case 2:
      return "Skipped";
    case 3:
      return "Minimized";
    case 4:
      return "Migrated";
    case 5:
      return "MigratedFromOffscreen";
    case 6:
      return "MigratedFromAnchor";
    case 7:
      return "Restored";
    case 8:
      return "RestoredFullScreen";
    case 9:
      return "Immersive";
  }
  return "None";
}
