/*
 * XREFs of ?IsDisconnect@CDisplayModeChangeHelper@@CA?AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0@Z @ 0x180056250
 * Callers:
 *     ?HasChanged@CDisplayModeChangeHelper@@SA?AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@@Z @ 0x180055F14 (-HasChanged@CDisplayModeChangeHelper@@SA-AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV-$.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CDisplayModeChangeHelper::IsDisconnect(__int64 a1, __int64 a2)
{
  return *(_DWORD *)(a2 + 64) < *(_DWORD *)(a1 + 64);
}
