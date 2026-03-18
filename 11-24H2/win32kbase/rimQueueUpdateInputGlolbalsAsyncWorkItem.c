/*
 * XREFs of rimQueueUpdateInputGlolbalsAsyncWorkItem @ 0x140116FA8
 * Callers:
 *     RIMCompletePointerDeviceFrame @ 0x140058A68 (RIMCompletePointerDeviceFrame.c)
 * Callees:
 *     RIMQueueAndSignalAsyncWorkItem @ 0x1401978F8 (RIMQueueAndSignalAsyncWorkItem.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqqDSd @ 0x1401E15F8 (WPP_RECORDER_AND_TRACE_SF_qqqDSd.c)
 *     RIMAllocateAsyncInputWorkItem @ 0x1401EC21C (RIMAllocateAsyncInputWorkItem.c)
 */

_UNKNOWN **__fastcall rimQueueUpdateInputGlolbalsAsyncWorkItem(struct RawInputManagerObject *a1, __int64 a2)
{
  struct RIMAsyncWorkItem *v4; // rax
  unsigned int v5; // ecx
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

  v4 = (struct RIMAsyncWorkItem *)RIMAllocateAsyncInputWorkItem(a1, *(PVOID *)(a2 + 32), 0LL, 0LL, 0, 5);
  if ( v4 )
  {
    v5 = *((_DWORD *)a1 + 277) + 1;
    *((_DWORD *)a1 + 277) = v5;
    if ( v5 > *((_DWORD *)a1 + 278) )
      *((_DWORD *)a1 + 278) = v5;
    return (_UNKNOWN **)RIMQueueAndSignalAsyncWorkItem(a1, v4);
  }
  else
  {
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
                            60,
                            (__int64)&WPP_3860bf17919d3cb2acb39c2fdc2a9255_Traceguids,
                            v11,
                            v10,
                            v9,
                            5,
                            v12,
                            23);
    }
  }
  return result;
}
