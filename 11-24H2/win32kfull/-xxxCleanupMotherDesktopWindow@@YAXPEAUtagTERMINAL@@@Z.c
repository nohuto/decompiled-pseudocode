/*
 * XREFs of ?xxxCleanupMotherDesktopWindow@@YAXPEAUtagTERMINAL@@@Z @ 0x14021B070
 * Callers:
 *     ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x140107708 (-xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x14023AFEC (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxDesktopThread @ 0x1402864A0 (xxxDesktopThread.c)
 *     ?xxxCreateWindowStation@@YAJPEAU_OBJECT_ATTRIBUTES@@DKPEAXKKPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGIW4tagWINDOWSTATIONFLAGS@@KPEAPEAUHWINSTA__@@@Z @ 0x14028A884 (-xxxCreateWindowStation@@YAJPEAU_OBJECT_ATTRIBUTES@@DKPEAXKKPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGI.c)
 * Callees:
 *     ?SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z @ 0x14002F994 (-SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z.c)
 *     xxxDestroyWindow @ 0x14015EF90 (xxxDestroyWindow.c)
 */

void __fastcall xxxCleanupMotherDesktopWindow(struct tagTERMINAL *a1)
{
  char *v1; // rdi
  struct tagWND *v2; // rbx
  __int64 v3; // rdx

  v1 = (char *)a1 + 8;
  v2 = (struct tagWND *)*((_QWORD *)a1 + 1);
  if ( v2 )
  {
    SetVisible(*((_QWORD *)a1 + 1), 0);
    if ( HMAssignmentUnlock(v1) )
      xxxDestroyWindow(v2, v3);
  }
}
