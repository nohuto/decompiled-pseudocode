/*
 * XREFs of ?DmmResetModeState@@YAJQEAXK@Z @ 0x1402BC8D0
 * Callers:
 *     DpiFdoDestroyRelatedObjects @ 0x140236C10 (DpiFdoDestroyRelatedObjects.c)
 *     DpiPowerArbiterThread @ 0x1402BBB00 (DpiPowerArbiterThread.c)
 *     ?DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14030CA78 (-DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCEN.c)
 * Callees:
 *     ?MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1400293A8 (-MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400294B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall DmmResetModeState(PERESOURCE *a1, int a2)
{
  unsigned int v2; // ebx
  PERESOURCE v5; // rax
  __int64 result; // rax

  v2 = 0;
  if ( a1 )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(a1) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 13224;
    }
    v5 = a1[390];
    if ( v5 && LODWORD(v5->SpinLock) )
    {
      do
      {
        if ( _bittest(&a2, v2) )
          ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange((DXGADAPTER **)v5, v2, 1);
        v5 = a1[390];
        ++v2;
      }
      while ( v2 < LODWORD(v5->SpinLock) );
    }
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(2LL, 0LL);
    result = 3223191554LL;
    WdLogGlobalForLineNumber = 13218;
  }
  return result;
}
