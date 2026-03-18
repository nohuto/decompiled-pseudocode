/*
 * XREFs of rimQueueApiSetPostPointerDeviceRangeMessageAsyncWorkItem @ 0x14011317C
 * Callers:
 *     RIMAddToActiveDevices @ 0x14017C830 (RIMAddToActiveDevices.c)
 *     RIMRemoveFromActiveDevices @ 0x1401E0EE0 (RIMRemoveFromActiveDevices.c)
 * Callees:
 *     RIMQueueAndSignalAsyncWorkItem @ 0x1401978F8 (RIMQueueAndSignalAsyncWorkItem.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqqDSd @ 0x1401E15F8 (WPP_RECORDER_AND_TRACE_SF_qqqDSd.c)
 *     RIMAllocateAsyncInputWorkItem @ 0x1401EC21C (RIMAllocateAsyncInputWorkItem.c)
 */

_UNKNOWN **__fastcall rimQueueApiSetPostPointerDeviceRangeMessageAsyncWorkItem(
        struct RawInputManagerObject *a1,
        __int64 a2,
        int a3)
{
  struct RIMAsyncWorkItem *v5; // rax
  _UNKNOWN **result; // rax
  char v7; // r14
  bool v8; // r15
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rbp
  __int64 v12; // rbx
  __int64 UserSessionState; // rax
  int v14; // r8d
  int v15; // edx
  int v16; // [rsp+28h] [rbp-60h]

  v5 = (struct RIMAsyncWorkItem *)RIMAllocateAsyncInputWorkItem(a1, *(PVOID *)(a2 + 32), 0LL, 0LL, a3, 4);
  if ( v5 )
    return (_UNKNOWN **)RIMQueueAndSignalAsyncWorkItem(a1, v5);
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (v7 = 1, (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0)
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
  {
    v7 = 0;
  }
  result = &WPP_RECORDER_INITIALIZED;
  v8 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = *((_QWORD *)a1 + 5);
    v10 = *((_QWORD *)a1 + 4);
    v11 = *((_QWORD *)a1 + 9);
    v12 = *(_QWORD *)(a2 + 200);
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v14) = v8;
    LOBYTE(v15) = v7;
    return (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_qqqDSd(
                          *((_QWORD *)WPP_GLOBAL_Control + 3),
                          v15,
                          v14,
                          *(_QWORD *)(UserSessionState + 19392),
                          2,
                          v16,
                          48,
                          (__int64)&WPP_0506f230af1236dcb1827f6a44be6f8f_Traceguids,
                          v11,
                          v10,
                          v9,
                          4,
                          v12,
                          23);
  }
  return result;
}
