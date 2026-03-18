/*
 * XREFs of ??1?$Win32RawLockedItemNoCleanup@UtagINTDDEINFO@@$0A@@@QEAA@XZ @ 0x140164684
 * Callers:
 *     xxxConnectService @ 0x140164060 (xxxConnectService.c)
 *     xxxClientCopyDDEIn1 @ 0x140215C30 (xxxClientCopyDDEIn1.c)
 *     NtUserInjectTouchInput @ 0x140243180 (NtUserInjectTouchInput.c)
 *     NtUserSendInput @ 0x1402453F0 (NtUserSendInput.c)
 *     EditionCreateWindowStationEntryPointEx @ 0x140291DE0 (EditionCreateWindowStationEntryPointEx.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

struct tagTHREADINFO *__fastcall Win32RawLockedItemNoCleanup<tagINTDDEINFO,0>::~Win32RawLockedItemNoCleanup<tagINTDDEINFO,0>(
        _QWORD *a1,
        __int64 a2)
{
  struct tagTHREADINFO *result; // rax

  result = PtiCurrent((__int64)a1, a2);
  *((_QWORD *)result + 48) = *a1;
  a1[2] = -1LL;
  return result;
}
