/*
 * XREFs of ??0?$Win32RawLockedItemNoCleanup@U_ACCESS_ALLOWED_ACE@@$0A@@@QEAA@PEAU_ACCESS_ALLOWED_ACE@@P6AXPEAX@Z@Z @ 0x1401646B0
 * Callers:
 *     NtUserMsgWaitForMultipleObjectsEx @ 0x14009E630 (NtUserMsgWaitForMultipleObjectsEx.c)
 *     xxxConnectService @ 0x140164060 (xxxConnectService.c)
 *     xxxCreateDesktopEx @ 0x14016470C (xxxCreateDesktopEx.c)
 *     xxxClientCopyDDEIn1 @ 0x140215C30 (xxxClientCopyDDEIn1.c)
 *     xxxValidateClassAndSize @ 0x14023A978 (xxxValidateClassAndSize.c)
 *     NtUserInjectTouchInput @ 0x140243180 (NtUserInjectTouchInput.c)
 *     NtUserSendInput @ 0x1402453F0 (NtUserSendInput.c)
 *     EditionCreateWindowStationEntryPointEx @ 0x140291DE0 (EditionCreateWindowStationEntryPointEx.c)
 *     xxxCsEvent @ 0x1402DBB18 (xxxCsEvent.c)
 * Callees:
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 */

_QWORD *__fastcall Win32RawLockedItemNoCleanup<_ACCESS_ALLOWED_ACE,0>::Win32RawLockedItemNoCleanup<_ACCESS_ALLOWED_ACE,0>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v7; // rcx
  _QWORD *result; // rax

  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(a1, a2);
  v7 = 0LL;
  if ( CurrentThreadNonPaged )
    v7 = *CurrentThreadNonPaged;
  *a1 = *(_QWORD *)(v7 + 384);
  result = a1;
  *(_QWORD *)(v7 + 384) = a1;
  a1[1] = a2;
  a1[2] = a3;
  return result;
}
