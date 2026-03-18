/*
 * XREFs of ?xxxOnTrackingWindowDestroyed@@YAXPEAUtagTHREADINFO@@PEAUtagDESKTOP@@@Z @ 0x140255A48
 * Callers:
 *     ?xxxFreeWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x14002E080 (-xxxFreeWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     FindTimer @ 0x14005FED0 (FindTimer.c)
 *     ?xxxTooltipCallback@@YAXW4tagTOOLTIPID@@PEAUHFONT__@@PEAUHWND__@@@Z @ 0x140269C14 (-xxxTooltipCallback@@YAXW4tagTOOLTIPID@@PEAUHFONT__@@PEAUHWND__@@@Z.c)
 */

void __fastcall xxxOnTrackingWindowDestroyed(struct tagTHREADINFO *a1, struct tagDESKTOP *a2)
{
  __int64 v3; // rdx
  int v5; // eax

  v3 = *((_QWORD *)a2 + 15);
  if ( v3 )
  {
    FindTimer(0LL, v3, 4u, 1, 0LL);
    *((_QWORD *)a2 + 15) = 0LL;
  }
  v5 = *((_DWORD *)a2 + 12);
  if ( (v5 & 0x100) != 0 )
  {
    *((_DWORD *)a2 + 12) = v5 & 0xFFFFFEFF;
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)a1 + 132, 0, 0) & 1) == 0 )
      xxxTooltipCallback(0LL, 0LL, 0LL);
  }
}
