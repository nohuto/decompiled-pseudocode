/*
 * XREFs of rimQueueApiSetHidRawInputAsyncWorkItem @ 0x1400D7464
 * Callers:
 *     RIMProcessAnyPointerDeviceInput @ 0x1400D69F0 (RIMProcessAnyPointerDeviceInput.c)
 *     rimProcessHidInput @ 0x1401ED924 (rimProcessHidInput.c)
 * Callees:
 *     RIMQueueAndSignalAsyncWorkItem @ 0x1401978F8 (RIMQueueAndSignalAsyncWorkItem.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqqDSd @ 0x1401E15F8 (WPP_RECORDER_AND_TRACE_SF_qqqDSd.c)
 *     RIMAllocateAsyncInputWorkItem @ 0x1401EC21C (RIMAllocateAsyncInputWorkItem.c)
 */

_UNKNOWN **__fastcall rimQueueApiSetHidRawInputAsyncWorkItem(struct RawInputManagerObject *a1, __int64 a2)
{
  struct RIMAsyncWorkItem *v4; // rax
  _UNKNOWN **result; // rax
  char v6; // r14
  bool v7; // r15
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rbp
  __int64 v11; // rbx
  __int64 UserSessionState; // rax
  int v13; // r8d
  int v14; // edx
  int v15; // [rsp+28h] [rbp-60h]

  v4 = (struct RIMAsyncWorkItem *)RIMAllocateAsyncInputWorkItem(a1, *(PVOID *)(a2 + 32), 0LL, 0LL, 0, 3);
  if ( v4 )
    return (_UNKNOWN **)RIMQueueAndSignalAsyncWorkItem(a1, v4);
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (v6 = 1, (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0)
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
  {
    v6 = 0;
  }
  result = &WPP_RECORDER_INITIALIZED;
  v7 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v8 = *((_QWORD *)a1 + 5);
    v9 = *((_QWORD *)a1 + 4);
    v10 = *((_QWORD *)a1 + 9);
    v11 = *(_QWORD *)(a2 + 200);
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v13) = v7;
    LOBYTE(v14) = v6;
    return (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_qqqDSd(
                          *((_QWORD *)WPP_GLOBAL_Control + 3),
                          v14,
                          v13,
                          *(_QWORD *)(UserSessionState + 19392),
                          2,
                          v15,
                          72,
                          (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids,
                          v10,
                          v9,
                          v8,
                          3,
                          v11,
                          23);
  }
  return result;
}
