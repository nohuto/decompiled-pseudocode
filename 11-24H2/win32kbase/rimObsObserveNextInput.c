/*
 * XREFs of rimObsObserveNextInput @ 0x140136B18
 * Callers:
 *     NtRIMObserveNextInput @ 0x1401D4B20 (NtRIMObserveNextInput.c)
 *     RIMObserveNextInput @ 0x1401D8780 (RIMObserveNextInput.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005B440 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14005DCC0 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     rimObsPopInputMessage @ 0x140136DB8 (rimObsPopInputMessage.c)
 *     RawInputManagerInputObserverObjectResolveHandle @ 0x14019D840 (RawInputManagerInputObserverObjectResolveHandle.c)
 */

__int64 __fastcall rimObsObserveNextInput(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  bool v4; // bl
  bool v5; // di
  int v6; // edi
  unsigned int *v7; // rsi
  char *v8; // r15
  int v9; // eax
  bool v10; // bl
  bool v11; // di
  __int64 UserSessionState; // rax
  int v14; // r8d
  int v15; // edx
  bool v16; // bp
  bool v17; // r14
  __int64 v18; // rbx
  __int64 v19; // rax
  int v20; // r8d
  int v21; // edx
  __int64 v22; // rax
  int v23; // r8d
  int v24; // edx
  PVOID Object; // [rsp+90h] [rbp+18h] BYREF

  v2 = a2;
  v4 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v5 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1);
    LOBYTE(v14) = v5;
    LOBYTE(v15) = v4;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v15,
      v14,
      *(_QWORD *)(UserSessionState + 69400),
      4,
      1,
      33,
      (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
      a1);
  }
  Object = 0LL;
  v6 = RawInputManagerInputObserverObjectResolveHandle(a1, a2, v2, &Object);
  if ( v6 >= 0 )
  {
    v7 = (unsigned int *)Object;
    v8 = (char *)Object + 176;
    RIMLockExclusive((__int64)Object + 176);
    v9 = rimObsPopInputMessage(v7, v2, *((_QWORD *)v7 + 12), v7[26]);
    v6 = v9;
    if ( v9 >= 0 )
    {
      v16 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v18 = *((_QWORD *)v7 + 10);
        v19 = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v20) = v17;
        LOBYTE(v21) = v16;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v21,
          v20,
          *(_QWORD *)(v19 + 69400),
          4,
          1,
          34,
          (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
          v18);
      }
      ZwSetEvent(*((HANDLE *)v7 + 10), 0LL);
    }
    else if ( v9 == -2147483622 )
    {
      v10 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v22 = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v23) = v11;
        LOBYTE(v24) = v10;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v24,
          v23,
          *(_QWORD *)(v22 + 69400),
          4,
          1,
          35,
          (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
      }
      v7[22] = 1;
      v6 = 0;
    }
    RIMUnlockExclusive((__int64)v8);
    ObfDereferenceObject(v7);
  }
  return (unsigned int)v6;
}
