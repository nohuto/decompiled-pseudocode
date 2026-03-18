/*
 * XREFs of xxxCleanupMotherDesktopWindow @ 0x1C00A0C70
 * Callers:
 *     xxxDesktopThread @ 0x1C002ABF0 (xxxDesktopThread.c)
 *     ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C002B3A0 (-xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxCreateWindowStation @ 0x1C002BE34 (xxxCreateWindowStation.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00A1D48 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 * Callees:
 *     SetVisible @ 0x1C00EDEE8 (SetVisible.c)
 *     xxxDestroyWindow @ 0x1C00F2000 (xxxDestroyWindow.c)
 */

void __fastcall xxxCleanupMotherDesktopWindow(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx

  v1 = a1 + 8;
  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    SetVisible(*(struct tagWND **)(a1 + 8));
    if ( HMAssignmentUnlock(v1) )
      xxxDestroyWindow(v2);
  }
}
