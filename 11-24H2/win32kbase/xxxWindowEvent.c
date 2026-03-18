/*
 * XREFs of xxxWindowEvent @ 0x140140F70
 * Callers:
 *     xxxInternalActivateKeyboardLayout @ 0x140096CA0 (xxxInternalActivateKeyboardLayout.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x14011AEC8 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     xxxDestroyThreadInfo @ 0x14015F444 (xxxDestroyThreadInfo.c)
 *     zzzDestroyQueue @ 0x140161AA0 (zzzDestroyQueue.c)
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x140189DE4 (xxxUpdateGlobalsAndSendKeyEvent.c)
 *     ?xxxInternalUnloadKeyboardLayout@@YA_NPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x14020F940 (-xxxInternalUnloadKeyboardLayout@@YA_NPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall xxxWindowEvent(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        int a5))(_QWORD, __int64, _QWORD, _QWORD, int)
{
  unsigned int v8; // ebp
  __int64 (__fastcall *result)(_QWORD, __int64, _QWORD, _QWORD, int); // rax

  v8 = a1;
  result = *(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, int))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(
                                                                                          a1,
                                                                                          a2)
                                                                                      + 48)
                                                                          + 1360LL);
  if ( result )
    return (__int64 (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD, int))result(v8, a2, a3, a4, a5);
  return result;
}
