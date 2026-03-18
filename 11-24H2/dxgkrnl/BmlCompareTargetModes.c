/*
 * XREFs of BmlCompareTargetModes @ 0x1402DD4E0
 * Callers:
 *     BmlGetNextBestTargetMode @ 0x14038BDB4 (BmlGetNextBestTargetMode.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x140040610 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     BmlCompareTargetModeWithVirtualRefreshRate @ 0x1402DC0F0 (BmlCompareTargetModeWithVirtualRefreshRate.c)
 *     BmlCompareTargetModesWithConstraint @ 0x1402DD6F4 (BmlCompareTargetModesWithConstraint.c)
 *     BmlCompareRegionsWithPivot @ 0x1402DDCA8 (BmlCompareRegionsWithPivot.c)
 *     BmlCompareTargetModesWithMonitor @ 0x1402DEAF8 (BmlCompareTargetModesWithMonitor.c)
 *     BmlCompareMonitorRegions @ 0x1403F7A68 (BmlCompareMonitorRegions.c)
 *     BmlCompareWireFormat @ 0x1403FAC30 (BmlCompareWireFormat.c)
 */

__int64 __fastcall BmlCompareTargetModes(__int64 a1, __int64 a2, unsigned __int16 a3, __int64 a4, __int64 a5, char a6)
{
  __int64 v6; // r15
  __int64 result; // rax
  __int64 v11; // r14
  struct DMMVIDPNPRESENTPATH *Path; // rbp
  __int64 v13; // r8

  v6 = a3;
  if ( !a1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2529;
  }
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2530;
  }
  if ( a4 == a5 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2532;
  }
  if ( !a4 )
    return 0xFFFFFFFFLL;
  if ( !a5 )
    return 1LL;
  v11 = 120 * v6;
  Path = DMMVIDPNTOPOLOGY::FindPath(
           (DMMVIDPNTOPOLOGY *)(a2 + 96),
           *(_DWORD *)(*(_QWORD *)(120 * v6 + a1 + 16) + 24LL),
           *(_DWORD *)(*(_QWORD *)(120 * v6 + a1 + 16) + 28LL));
  if ( !Path )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2542;
  }
  if ( !*((_QWORD *)Path + 12) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2543;
  }
  if ( !*(_QWORD *)(*((_QWORD *)Path + 12) + 96LL) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2544;
  }
  result = BmlCompareTargetModesWithConstraint(a1, (unsigned __int16)v6, a4, a5);
  if ( !(_DWORD)result )
  {
    LOBYTE(v13) = a6;
    result = BmlCompareTargetModesWithMonitor(a4, a5, v13, *(_QWORD *)(*((_QWORD *)Path + 12) + 96LL));
    if ( !(_DWORD)result )
    {
      result = BmlCompareRegionsWithPivot(
                 (struct _D3DKMDT_2DREGION *)(a4 + 84),
                 (struct _D3DKMDT_2DREGION *)(a5 + 84),
                 (struct _D3DKMDT_2DREGION *)(v11 + a1 + 52));
      if ( !(_DWORD)result )
      {
        result = BmlCompareTargetModeWithVirtualRefreshRate(
                   (struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(a4 + 72),
                   (struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(a5 + 72),
                   *(_QWORD *)(v11 + a1 + 16));
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
