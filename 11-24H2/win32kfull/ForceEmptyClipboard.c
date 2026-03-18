/*
 * XREFs of ForceEmptyClipboard @ 0x1401E8C1C
 * Callers:
 *     FreeWindowStation @ 0x1401E89C0 (FreeWindowStation.c)
 * Callees:
 *     xxxCloseClipboard @ 0x14003D880 (xxxCloseClipboard.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?CloseClipboardToken@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1401E8C8C (-CloseClipboardToken@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     xxxEmptyClipboard @ 0x1401E8D2C (xxxEmptyClipboard.c)
 */

void __fastcall ForceEmptyClipboard(struct tagWINDOWSTATION *a1, __int64 a2)
{
  *((_QWORD *)a1 + 10) = PtiCurrent((__int64)a1, a2);
  HMAssignmentUnlock((char *)a1 + 112);
  HMAssignmentUnlock((char *)a1 + 104);
  HMAssignmentUnlock((char *)a1 + 96);
  xxxEmptyClipboard((ULONG_PTR)a1);
  if ( (*((_DWORD *)a1 + 16) & 0x10) == 0 )
    xxxCloseClipboard(a1);
  CloseClipboardToken(a1);
}
