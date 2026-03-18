/*
 * XREFs of ?MonitorRebuildMonitorModeListCache@@YAJPEAXIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14026EEA0
 * Callers:
 *     DxgkQueryConnectionChanges @ 0x140027BD0 (DxgkQueryConnectionChanges.c)
 * Callees:
 *     ?RebuildMonitorModeListCacheHelper@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14026FB58 (-RebuildMonitorModeListCacheHelper@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?DmmGetNextVideoPresentTarget@@YAJQEAXIPEAI@Z @ 0x1402E2240 (-DmmGetNextVideoPresentTarget@@YAJQEAXIPEAI@Z.c)
 */

__int64 __fastcall MonitorRebuildMonitorModeListCache(
        void *a1,
        __int64 a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3,
        __int64 a4)
{
  __int64 v6; // rax
  unsigned int v7; // ebx
  __int64 result; // rax
  unsigned int i; // edx
  int NextVideoPresentTarget; // eax
  unsigned int v11; // [rsp+30h] [rbp+8h] BYREF

  v6 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  v7 = 0;
  *(_QWORD *)(v6 + 24) = a1;
  *(_QWORD *)(v6 + 32) = 4294967293LL;
  WdLogGlobalForLineNumber = 4713;
  if ( a1 )
  {
    if ( *((_QWORD *)a1 + 390) )
    {
      v11 = 0;
      for ( i = -1; ; i = v11 )
      {
        NextVideoPresentTarget = DmmGetNextVideoPresentTarget(a1, i, &v11);
        if ( NextVideoPresentTarget < 0 )
          break;
        RebuildMonitorModeListCacheHelper((struct DXGADAPTER *)a1, v11, a3);
      }
      if ( NextVideoPresentTarget != -1073741275 )
        return (unsigned int)NextVideoPresentTarget;
    }
    return v7;
  }
  else
  {
    WdLogSingleEntry1(2LL, 0LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 4717;
  }
  return result;
}
