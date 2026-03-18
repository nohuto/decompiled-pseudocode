/*
 * XREFs of BmlIsEDIDCapableOutputTechonology @ 0x1402DFF98
 * Callers:
 *     ?BmlGetTargetModePreferenceOnMonitor@@YA?AW4BML_MONITOR_SOURCE_MODE_PREFERENCE@@PEBVDMMVIDPNTARGETMODE@@EPEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1402DFD98 (-BmlGetTargetModePreferenceOnMonitor@@YA-AW4BML_MONITOR_SOURCE_MODE_PREFERENCE@@PEBVDMMVIDPNTARG.c)
 *     BmlGetMonitorModePreference @ 0x1402DFFEC (BmlGetMonitorModePreference.c)
 *     BmlFillPreferredMonitorMode @ 0x1402E0138 (BmlFillPreferredMonitorMode.c)
 * Callees:
 *     <none>
 */

bool __fastcall BmlIsEDIDCapableOutputTechonology(__int64 a1)
{
  int v1; // edx
  bool v2; // zf
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx

  v1 = *(_DWORD *)(a1 + 80);
  if ( v1 > 8 )
  {
    v4 = v1 - 9;
    if ( !v4 )
      return 0;
    v5 = v4 - 2;
    if ( !v5 )
      return 0;
    v6 = v5 - 1;
    if ( !v6 )
      return 0;
    v7 = v6 - 1;
    if ( !v7 )
      return 0;
    v2 = v7 == 1;
  }
  else
  {
    if ( v1 == 8 || v1 == 0x80000000 || v1 == -1 || v1 == 1 || v1 == 2 || v1 == 3 )
      return 0;
    v2 = v1 == 6;
  }
  return !v2;
}
