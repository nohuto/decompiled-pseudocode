/*
 * XREFs of ?_GetWindowTrackInfoAsync@@YA_JPEAUtagWND@@@Z @ 0x1C00A42E4
 * Callers:
 *     NtUserGetWindowTrackInfoAsync @ 0x1C00A4230 (NtUserGetWindowTrackInfoAsync.c)
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C0030E2C (IAMThreadAccessGranted.c)
 *     ?IsThreadHungTimeCheck@@YA_NPEBUtagTHREADINFO@@K@Z @ 0x1C003AABC (-IsThreadHungTimeCheck@@YA_NPEBUtagTHREADINFO@@K@Z.c)
 *     ?BeginGetWidnowTrackInfoAsync@@YA_NPEAUtagWND@@@Z @ 0x1C00A413C (-BeginGetWidnowTrackInfoAsync@@YA_NPEAUtagWND@@@Z.c)
 *     ?EligibleWindow@ShellWindowManagement@@YA_NPEBUtagWND@@@Z @ 0x1C00A418C (-EligibleWindow@ShellWindowManagement@@YA_NPEBUtagWND@@@Z.c)
 *     IsShellProcess @ 0x1C00A688C (IsShellProcess.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 */

_BOOL8 __fastcall _GetWindowTrackInfoAsync(struct tagWND *a1)
{
  const struct tagTHREADINFO *v2; // rbx
  int v3; // eax
  __int64 v4; // r9
  const struct tagWND *v5; // rdx
  const struct tagTHREADINFO *v6; // r9

  v2 = (const struct tagTHREADINFO *)*((_QWORD *)a1 + 2);
  LOBYTE(v3) = IAMThreadAccessGranted(gptiCurrent);
  if ( v3
    && (unsigned int)IsShellProcess(*(_QWORD *)(v4 + 424))
    && v6 != v2
    && ShellWindowManagement::EligibleWindow((ShellWindowManagement **)a1, v5)
    && (*((_DWORD *)v2 + 318) & 0x20) == 0
    && !IsThreadHungTimeCheck(v2, gdwHungAppTimeout) )
  {
    return BeginGetWidnowTrackInfoAsync((struct tagTHREADINFO **)a1);
  }
  UserSetLastError(5LL);
  return 0LL;
}
