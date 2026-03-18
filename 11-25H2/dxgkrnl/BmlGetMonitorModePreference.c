/*
 * XREFs of BmlGetMonitorModePreference @ 0x1402C9A54
 * Callers:
 *     ?BmlGetTargetModePreferenceOnMonitor@@YA?AW4BML_MONITOR_SOURCE_MODE_PREFERENCE@@PEBVDMMVIDPNTARGETMODE@@EPEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1402C9800 (-BmlGetTargetModePreferenceOnMonitor@@YA-AW4BML_MONITOR_SOURCE_MODE_PREFERENCE@@PEBVDMMVIDPNTARG.c)
 *     BmlFillPreferredMonitorMode @ 0x1402C9BA0 (BmlFillPreferredMonitorMode.c)
 * Callees:
 *     ?DivideAndRound@@YA_K_K0@Z @ 0x140063148 (-DivideAndRound@@YA_K_K0@Z.c)
 *     BmlGetMonitorModeVSyncPreference @ 0x1402C975C (BmlGetMonitorModeVSyncPreference.c)
 *     BmlIsLowResAnalogTvOutput @ 0x1402C97D4 (BmlIsLowResAnalogTvOutput.c)
 *     BmlIsEDIDCapableOutputTechonology @ 0x1402C9A00 (BmlIsEDIDCapableOutputTechonology.c)
 */

__int64 __fastcall BmlGetMonitorModePreference(__int64 a1, int a2, __int64 a3)
{
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  __int64 v7; // rcx
  __int64 v8; // r9
  _DWORD *v9; // r9
  __int64 v11; // r9
  int v12; // edx
  int v13; // edx
  int v14; // edx
  int v15; // edx
  __int64 v16; // r9
  int v17; // edx
  int v18; // edx

  v3 = *(_DWORD *)(a1 + 84) - 1;
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( !v6 )
          return 5LL;
        if ( v6 == 1 )
        {
          if ( !BmlIsEDIDCapableOutputTechonology(a3) && *(_DWORD *)(v8 + 88) == 1 )
            return 11LL;
          if ( !BmlIsLowResAnalogTvOutput(v7) )
            return BmlGetMonitorModeVSyncPreference(v9);
          if ( (unsigned int)DivideAndRound((unsigned int)v9[7], (unsigned int)v9[8]) == 60 )
          {
            if ( *(_DWORD *)(v16 + 20) == 800 && *(_DWORD *)(v16 + 24) == 600 )
              return 4LL;
            return 3LL;
          }
          return 7LL;
        }
      }
      else
      {
        v15 = a2 - 1;
        if ( !v15 )
          return 9LL;
        v17 = v15 - 1;
        if ( !v17 )
          return 9LL;
        v18 = v17 - 1;
        if ( !v18 )
          return 9LL;
        if ( v18 == 1 )
          return 10LL;
      }
    }
    else
    {
      v12 = a2 - 1;
      if ( !v12 )
        return 6LL;
      v13 = v12 - 1;
      if ( !v13 )
        return 6LL;
      v14 = v13 - 1;
      if ( !v14 )
        return 6LL;
      if ( v14 == 1 )
        return 8LL;
    }
    return 0xFFFFFFFFLL;
  }
  if ( !BmlIsLowResAnalogTvOutput(a3) )
    return BmlGetMonitorModeVSyncPreference(v9);
  if ( (unsigned int)DivideAndRound((unsigned int)v9[7], (unsigned int)v9[8]) == 60 )
  {
    if ( *(_DWORD *)(v11 + 20) == 800 )
      return 4 - (unsigned int)(*(_DWORD *)(v11 + 24) != 600);
    return 3LL;
  }
  return 0LL;
}
