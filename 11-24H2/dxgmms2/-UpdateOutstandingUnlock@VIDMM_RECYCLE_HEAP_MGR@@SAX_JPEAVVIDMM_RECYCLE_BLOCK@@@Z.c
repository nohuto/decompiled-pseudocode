/*
 * XREFs of ?UpdateOutstandingUnlock@VIDMM_RECYCLE_HEAP_MGR@@SAX_JPEAVVIDMM_RECYCLE_BLOCK@@@Z @ 0x140037178
 * Callers:
 *     ?ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z @ 0x1400C58D0 (-ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_RECYCLE_HEAP_MGR::UpdateOutstandingUnlock(unsigned __int64 a1, struct VIDMM_RECYCLE_BLOCK *a2)
{
  if ( (__int64)(a1
               + _InterlockedExchangeAdd64(
                   (volatile signed __int64 *)&VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedUnlock,
                   a1)) < 0
    && g_IsInternalRelease )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
    WdLogGlobalForLineNumber = 195;
    JUMPOUT(0x1400371D9LL);
  }
}
