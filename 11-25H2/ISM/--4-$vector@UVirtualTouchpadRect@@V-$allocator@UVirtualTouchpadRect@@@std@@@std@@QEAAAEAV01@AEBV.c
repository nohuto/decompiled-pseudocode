/*
 * XREFs of ??4?$vector@UVirtualTouchpadRect@@V?$allocator@UVirtualTouchpadRect@@@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x180199A60
 * Callers:
 *     ??$?4AEAUVirtualTouchpadContextMessage@@$0A@@?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@QEAAAEAV01@AEAUVirtualTouchpadContextMessage@@@Z @ 0x1801996D4 (--$-4AEAUVirtualTouchpadContextMessage@@$0A@@-$variant@Umonostate@std@@UInputConfigContextMessag.c)
 *     ?Broadcast@VirtualTouchpadContextProvider@@AEAAJXZ @ 0x180199B00 (-Broadcast@VirtualTouchpadContextProvider@@AEAAJXZ.c)
 *     ?GetCurrentContext@VirtualTouchpadContextProvider@@UEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@@Z @ 0x180199C70 (-GetCurrentContext@VirtualTouchpadContextProvider@@UEAAJPEAV-$variant@Umonostate@std@@UInputConf.c)
 * Callees:
 *     ??$_Assign_counted_range@PEAUVirtualTouchpadRect@@@?$vector@UVirtualTouchpadRect@@V?$allocator@UVirtualTouchpadRect@@@std@@@std@@AEAAXPEAUVirtualTouchpadRect@@_K@Z @ 0x180199774 (--$_Assign_counted_range@PEAUVirtualTouchpadRect@@@-$vector@UVirtualTouchpadRect@@V-$allocator@U.c)
 */

char **__fastcall std::vector<VirtualTouchpadRect>::operator=(char **a1, __int64 a2)
{
  if ( a1 != (char **)a2 )
    std::vector<VirtualTouchpadRect>::_Assign_counted_range<VirtualTouchpadRect *>(
      a1,
      *(char **)a2,
      0xAAAAAAAAAAAAAAABuLL * ((__int64)(*(_QWORD *)(a2 + 8) - *(_QWORD *)a2) >> 3));
  return a1;
}
