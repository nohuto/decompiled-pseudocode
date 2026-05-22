/*
 * XREFs of ??4?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18019A588
 * Callers:
 *     ??$?4AEAUDisplayOcclusionContextMessage@@$0A@@?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@QEAAAEAV01@AEAUDisplayOcclusionContextMessage@@@Z @ 0x18019A174 (--$-4AEAUDisplayOcclusionContextMessage@@$0A@@-$variant@Umonostate@std@@UInputConfigContextMessa.c)
 *     ?Broadcast@DisplayOcclusionContextProvider@@AEAAJXZ @ 0x18019A630 (-Broadcast@DisplayOcclusionContextProvider@@AEAAJXZ.c)
 *     ?GetCurrentContext@DisplayOcclusionContextProvider@@UEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@@Z @ 0x18019A770 (-GetCurrentContext@DisplayOcclusionContextProvider@@UEAAJPEAV-$variant@Umonostate@std@@UInputCon.c)
 * Callees:
 *     ??$_Assign_counted_range@PEAUDisplayOcclusionRect@@@?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAXPEAUDisplayOcclusionRect@@_K@Z @ 0x18019A214 (--$_Assign_counted_range@PEAUDisplayOcclusionRect@@@-$vector@UDisplayOcclusionRect@@V-$allocator.c)
 */

char **__fastcall std::vector<DisplayOcclusionRect>::operator=(char **a1, __int64 a2)
{
  if ( a1 != (char **)a2 )
    std::vector<DisplayOcclusionRect>::_Assign_counted_range<DisplayOcclusionRect *>(
      a1,
      *(char **)a2,
      0x2E8BA2E8BA2E8BA3LL * ((__int64)(*(_QWORD *)(a2 + 8) - *(_QWORD *)a2) >> 4));
  return a1;
}
