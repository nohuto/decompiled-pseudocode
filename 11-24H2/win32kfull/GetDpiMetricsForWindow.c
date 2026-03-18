/*
 * XREFs of GetDpiMetricsForWindow @ 0x1402F1798
 * Callers:
 *     xxxMenuDraw @ 0x14006938C (xxxMenuDraw.c)
 *     xxxMNInvertItem @ 0x14006BB74 (xxxMNInvertItem.c)
 *     _ServerFixupMenuDC @ 0x14015A1FC (_ServerFixupMenuDC.c)
 *     xxxDrawMenuBarUnderlines @ 0x1401FF370 (xxxDrawMenuBarUnderlines.c)
 *     MNDrawArrow @ 0x1402E9214 (MNDrawArrow.c)
 *     xxxMNDrawFullNC @ 0x1402E951C (xxxMNDrawFullNC.c)
 * Callees:
 *     GetWindowDpiLastNotify @ 0x140045FC8 (GetWindowDpiLastNotify.c)
 *     GetDpiMetricsForDpi @ 0x1402F16E0 (GetDpiMetricsForDpi.c)
 */

struct tagDpiKMMetricsCacheNode *__fastcall GetDpiMetricsForWindow(__int64 a1)
{
  __int64 v2; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v4; // r8
  int v5; // ecx
  __int64 v6; // rax

  if ( a1 )
  {
    v4 = *(_QWORD *)(a1 + 40);
    v5 = *(_DWORD *)(v4 + 288) & 0xF;
    if ( v5 == 3 )
    {
      LODWORD(CurrentProcessWin32Process) = (*(_DWORD *)(v4 + 288) >> 8) & 0x1FF;
      return GetDpiMetricsForDpi(CurrentProcessWin32Process);
    }
    if ( (*(_DWORD *)(v4 + 232) & 0x400) != 0 )
    {
      LOWORD(CurrentProcessWin32Process) = GetWindowDpiLastNotify(a1);
      return GetDpiMetricsForDpi(CurrentProcessWin32Process);
    }
    if ( v5
      || (v6 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 496LL)) == 0
      || (*(_DWORD *)(**(_QWORD **)(v6 + 8) + 64LL) & 1) == 0 )
    {
      LOWORD(CurrentProcessWin32Process) = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 464LL) + 272LL);
      return GetDpiMetricsForDpi(CurrentProcessWin32Process);
    }
LABEL_13:
    LOWORD(CurrentProcessWin32Process) = 96;
    return GetDpiMetricsForDpi(CurrentProcessWin32Process);
  }
  if ( (W32GetCurrentThreadDpiAwarenessContext(0LL) & 0xF) == 0 )
    goto LABEL_13;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v2);
  if ( CurrentProcessWin32Process )
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  LOWORD(CurrentProcessWin32Process) = *(_WORD *)(CurrentProcessWin32Process + 272);
  return GetDpiMetricsForDpi(CurrentProcessWin32Process);
}
