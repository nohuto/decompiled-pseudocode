/*
 * XREFs of BmlCompareTargetModes @ 0x1402C7B9C
 * Callers:
 *     BmlGetNextBestTargetMode @ 0x1402D37C8 (BmlGetNextBestTargetMode.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x140040B60 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     BmlCompareRegionsWithPivot @ 0x1402C7500 (BmlCompareRegionsWithPivot.c)
 *     BmlCompareTargetModesWithConstraint @ 0x1402C7DB0 (BmlCompareTargetModesWithConstraint.c)
 *     BmlCompareTargetModesWithMonitor @ 0x1402C817C (BmlCompareTargetModesWithMonitor.c)
 *     BmlCompareMonitorRegions @ 0x1403BF850 (BmlCompareMonitorRegions.c)
 *     BmlCompareTargetModeWithVirtualRefreshRate @ 0x1403FD27C (BmlCompareTargetModeWithVirtualRefreshRate.c)
 *     BmlCompareWireFormat @ 0x140400C40 (BmlCompareWireFormat.c)
 */

__int64 __fastcall BmlCompareTargetModes(__int64 a1, __int64 a2, unsigned __int16 a3, __int64 a4, __int64 a5, char a6)
{
  __int64 v6; // r15
  __int64 result; // rax
  struct DMMVIDPNPRESENTPATH *Path; // rbp
  __int64 v12; // r8

  v6 = a3;
  if ( !a1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2507;
  }
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2508;
  }
  if ( a4 == a5 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2510;
  }
  if ( !a4 )
    return 0xFFFFFFFFLL;
  if ( !a5 )
    return 1LL;
  Path = DMMVIDPNTOPOLOGY::FindPath(
           (DMMVIDPNTOPOLOGY *)(a2 + 96),
           *(_DWORD *)(*(_QWORD *)(120 * v6 + a1 + 16) + 24LL),
           *(_DWORD *)(*(_QWORD *)(120 * v6 + a1 + 16) + 28LL));
  if ( !Path )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2520;
  }
  if ( !*((_QWORD *)Path + 12) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2521;
  }
  if ( !*(_QWORD *)(*((_QWORD *)Path + 12) + 96LL) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2522;
  }
  result = BmlCompareTargetModesWithConstraint(a1, (unsigned __int16)v6, a4, a5);
  if ( !(_DWORD)result )
  {
    LOBYTE(v12) = a6;
    result = BmlCompareTargetModesWithMonitor(a4, a5, v12, *(_QWORD *)(*((_QWORD *)Path + 12) + 96LL));
    if ( !(_DWORD)result )
    {
      result = BmlCompareRegionsWithPivot(
                 (struct _D3DKMDT_2DREGION *)(a4 + 84),
                 (struct _D3DKMDT_2DREGION *)(a5 + 84),
                 (struct _D3DKMDT_2DREGION *)(120 * v6 + a1 + 52));
      if ( !(_DWORD)result )
      {
        result = BmlCompareTargetModeWithVirtualRefreshRate(
                   (struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(a4 + 72),
                   (struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(a5 + 72));
        if ( !(_DWORD)result )
        {
          result = BmlCompareMonitorRegions(a4, a5);
          if ( !(_DWORD)result )
            return BmlCompareWireFormat(a4, a5);
        }
      }
    }
  }
  return result;
}
