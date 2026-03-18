/*
 * XREFs of xxxDWP_EraseBkgnd @ 0x140036DD8
 * Callers:
 *     xxxRealDefWindowProc @ 0x140252B3C (xxxRealDefWindowProc.c)
 * Callees:
 *     xxxFillWindow @ 0x140036A94 (xxxFillWindow.c)
 *     xxxInternalPaintDesktop @ 0x140206A90 (xxxInternalPaintDesktop.c)
 */

__int64 __fastcall xxxDWP_EraseBkgnd(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  unsigned __int64 v6; // rbx

  if ( (_DWORD)a2 == 20 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL);
    v6 = *(_QWORD *)(v5 + 72);
    if ( !v6 )
      return 0LL;
    if ( v6 <= 0x1F )
      v6 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v5, a2) + 19928) + 8 * v6 + 4688);
    xxxFillWindow(a1, a1, a3, v6);
  }
  else if ( (_DWORD)a2 == 39 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x40) != 0 )
      return 0LL;
    xxxInternalPaintDesktop(a1, a3, 1LL);
  }
  return 1LL;
}
