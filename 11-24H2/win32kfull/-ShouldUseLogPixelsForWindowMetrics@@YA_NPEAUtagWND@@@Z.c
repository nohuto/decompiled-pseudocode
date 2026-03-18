/*
 * XREFs of ?ShouldUseLogPixelsForWindowMetrics@@YA_NPEAUtagWND@@@Z @ 0x140048A8C
 * Callers:
 *     UpdateWindowMonitor @ 0x140045CB0 (UpdateWindowMonitor.c)
 *     xxxCreateWindowEx @ 0x14004B6FC (xxxCreateWindowEx.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x140049A60 (_IsTopLevelWindow.c)
 *     _GetTopLevelWindow @ 0x140049F30 (_GetTopLevelWindow.c)
 */

char __fastcall ShouldUseLogPixelsForWindowMetrics(struct tagWND *a1)
{
  char v2; // bl
  int v3; // ecx
  __int64 v4; // r9
  __int64 TopLevelWindow; // rax
  int v6; // ebx

  v2 = 0;
  v3 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF;
  if ( v3 == 3 )
    return 1;
  if ( v3 == 2 )
  {
    if ( (unsigned int)IsTopLevelWindow(a1) )
    {
      v6 = *(_DWORD *)(v4 + 380) >> 19;
      return v6 & 1;
    }
    TopLevelWindow = GetTopLevelWindow(v4);
    if ( TopLevelWindow )
    {
      v6 = *(_DWORD *)(TopLevelWindow + 380) >> 20;
      return v6 & 1;
    }
  }
  return v2;
}
