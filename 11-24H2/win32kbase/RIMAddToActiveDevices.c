/*
 * XREFs of RIMAddToActiveDevices @ 0x14017C830
 * Callers:
 *     rimProcessPointerDeviceButtonContact @ 0x1400571D4 (rimProcessPointerDeviceButtonContact.c)
 *     rimProcessPointerDeviceContact @ 0x140181B78 (rimProcessPointerDeviceContact.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14005DCC0 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     rimQueueApiSetPostPointerDeviceRangeMessageAsyncWorkItem @ 0x14011317C (rimQueueApiSetPostPointerDeviceRangeMessageAsyncWorkItem.c)
 *     ApiSetPostPointerDeviceInRangeMessage @ 0x14012565C (ApiSetPostPointerDeviceInRangeMessage.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMAddToActiveDevices(struct RawInputManagerObject *a1, __int64 a2)
{
  __int64 v2; // rsi
  char *v3; // rdi
  char *v4; // r14
  unsigned int v5; // r15d
  char *v8; // rsi
  __int64 v9; // rcx
  _QWORD *v10; // r14
  __int64 v11; // r15
  char v12; // si
  bool v13; // r12
  __int64 UserSessionState; // rax
  int v15; // r8d
  int v16; // edx
  char *v17; // rax
  char **v18; // rcx
  int v19; // eax
  void *v20; // rcx
  union _LARGE_INTEGER DueTime; // [rsp+80h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a2 + 16);
  v3 = (char *)a1 + 448;
  v4 = (char *)*((_QWORD *)a1 + 56);
  v5 = 0;
  if ( (*(_DWORD *)(PsGetCurrentThreadWin32Thread() + 24) & 0xC) != 0 )
    ApiSetPostPointerDeviceInRangeMessage(a2);
  else
    rimQueueApiSetPostPointerDeviceRangeMessageAsyncWorkItem(a1, v2, 1);
  do
  {
    if ( v4 == v3 )
    {
      v10 = (_QWORD *)Win32AllocPoolZInitImpl(256LL, 0x20uLL, 0x78707352u);
      if ( v10 )
      {
        v11 = *(_QWORD *)(a2 + 16);
        *(_DWORD *)(v11 + 172) |= 0x10u;
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (v9 = *((unsigned int *)WPP_GLOBAL_Control + 11), (v9 & 1) == 0)
          || (v12 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
        {
          v12 = 0;
        }
        v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          UserSessionState = W32GetUserSessionState(v9);
          LOBYTE(v15) = v13;
          LOBYTE(v16) = v12;
          WPP_RECORDER_AND_TRACE_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v16,
            v15,
            *(_QWORD *)(UserSessionState + 19392),
            4,
            1,
            39,
            (__int64)&WPP_0506f230af1236dcb1827f6a44be6f8f_Traceguids,
            v11);
        }
        *v10 = a2;
        v17 = (char *)(v10 + 1);
        v18 = (char **)*((_QWORD *)v3 + 1);
        if ( *v18 != v3 )
          __fastfail(3u);
        *(_QWORD *)v17 = v3;
        v5 = 1;
        v10[2] = v18;
        *v18 = v17;
        *((_QWORD *)v3 + 1) = v17;
        if ( *((_DWORD *)a1 + 116) == -1 )
        {
          DueTime.LowPart = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3233LL);
        }
        if ( ++*((_DWORD *)a1 + 116) == 1 )
        {
          v20 = (void *)*((_QWORD *)a1 + 42);
          DueTime.QuadPart = -1000000LL;
          ZwSetTimer(v20, &DueTime, 0LL, 0LL, 0, 0, 0LL);
        }
      }
      return v5;
    }
    v8 = v4 - 8;
    v4 = *(char **)v4;
  }
  while ( *(_QWORD *)v8 != a2 );
  if ( (*((_DWORD *)v8 + 6) & 2) != 0 )
  {
    DueTime.LowPart = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3206LL);
  }
  v19 = *((_DWORD *)v8 + 6);
  if ( (v19 & 1) != 0 )
    *((_DWORD *)v8 + 6) = v19 & 0xFFFFFFFE;
  return 1;
}
