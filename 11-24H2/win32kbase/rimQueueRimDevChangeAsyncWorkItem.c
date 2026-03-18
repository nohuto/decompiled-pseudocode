/*
 * XREFs of rimQueueRimDevChangeAsyncWorkItem @ 0x14012EC64
 * Callers:
 *     RIMDoOnPnpNotification @ 0x1401127D0 (RIMDoOnPnpNotification.c)
 *     RIMCreateDev @ 0x1401D15BC (RIMCreateDev.c)
 *     RIMFreeSpecificDev @ 0x1401D1E88 (RIMFreeSpecificDev.c)
 *     RIMDeviceClassNotifyAsyncWorkItem @ 0x1401EC448 (RIMDeviceClassNotifyAsyncWorkItem.c)
 * Callees:
 *     RIMQueueAndSignalAsyncWorkItem @ 0x1401978F8 (RIMQueueAndSignalAsyncWorkItem.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqqDSd @ 0x1401E15F8 (WPP_RECORDER_AND_TRACE_SF_qqqDSd.c)
 *     RIMAllocateAsyncInputWorkItem @ 0x1401EC21C (RIMAllocateAsyncInputWorkItem.c)
 */

_UNKNOWN **__fastcall rimQueueRimDevChangeAsyncWorkItem(struct RawInputManagerObject *a1, __int64 a2, int a3)
{
  char v3; // r12
  struct RIMAsyncWorkItem *v6; // rax
  _UNKNOWN **result; // rax
  char v8; // r14
  bool v9; // r15
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rbp
  __int64 v13; // rbx
  __int64 UserSessionState; // rax
  int v15; // r8d
  int v16; // edx
  int v17; // [rsp+28h] [rbp-60h]

  v3 = a3;
  v6 = (struct RIMAsyncWorkItem *)RIMAllocateAsyncInputWorkItem(a1, *(PVOID *)(a2 + 32), 0LL, 0LL, a3, 2);
  if ( v6 )
    return (_UNKNOWN **)RIMQueueAndSignalAsyncWorkItem(a1, v6);
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (v8 = 1, (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0)
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
  {
    v8 = 0;
  }
  result = &WPP_RECORDER_INITIALIZED;
  v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v10 = *((_QWORD *)a1 + 5);
    v11 = *((_QWORD *)a1 + 4);
    v12 = *((_QWORD *)a1 + 9);
    v13 = *(_QWORD *)(a2 + 200);
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v15) = v9;
    LOBYTE(v16) = v8;
    return (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_qqqDSd(
                          *((_QWORD *)WPP_GLOBAL_Control + 3),
                          v16,
                          v15,
                          *(_QWORD *)(UserSessionState + 19392),
                          2,
                          v17,
                          17,
                          (__int64)&WPP_8f2753a93c4e3e90acbb2f7643baf67d_Traceguids,
                          v12,
                          v11,
                          v10,
                          v3,
                          v13,
                          23);
  }
  return result;
}
