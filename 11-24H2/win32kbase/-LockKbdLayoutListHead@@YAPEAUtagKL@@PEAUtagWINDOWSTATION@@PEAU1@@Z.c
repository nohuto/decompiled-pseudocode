/*
 * XREFs of ?LockKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@PEAU1@@Z @ 0x1400F3EC8
 * Callers:
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x14011AEC8 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     ?ReorderKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@PEAUtagKL@@@Z @ 0x14020F75C (-ReorderKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@PEAUtagKL@@@Z.c)
 *     ?xxxInternalUnloadKeyboardLayout@@YA_NPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x14020F940 (-xxxInternalUnloadKeyboardLayout@@YA_NPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 * Callees:
 *     HMAssignmentLock @ 0x1400F47B0 (HMAssignmentLock.c)
 */

struct tagKL *__fastcall LockKbdLayoutListHead(struct tagWINDOWSTATION *a1, struct tagKL *a2)
{
  char *v3; // rax
  __int64 v4; // rdx
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( a1 )
  {
    v3 = (char *)a1 + 72;
    v4 = 1LL;
  }
  else
  {
    v3 = (char *)(W32GetUserSessionState(0LL) + 14712);
    v4 = 0LL;
  }
  v6[0] = v3;
  v6[1] = a2;
  return (struct tagKL *)HMAssignmentLock(v6, v4);
}
