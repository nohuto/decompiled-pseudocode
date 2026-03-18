/*
 * XREFs of ?xxxTooltipDestroyCallback@@YAXXZ @ 0x1C013CED8
 * Callers:
 *     xxxTrackMouseMove @ 0x1C0024474 (xxxTrackMouseMove.c)
 *     xxxCancelMouseMoveTracking @ 0x1C0098298 (xxxCancelMouseMoveTracking.c)
 * Callees:
 *     ?xxxTooltipCallback@@YAXW4tagTOOLTIPID@@PEAUHFONT__@@PEAUHWND__@@@Z @ 0x1C013C7B0 (-xxxTooltipCallback@@YAXW4tagTOOLTIPID@@PEAUHFONT__@@PEAUHWND__@@@Z.c)
 */

void __fastcall xxxTooltipDestroyCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  xxxTooltipCallback(0, 0LL, 0LL, a4);
}
