/*
 * XREFs of ?xxxGetNextSysMsg@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@1@Z @ 0x140236B90
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027AA48 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qiqdd @ 0x14008EA90 (WPP_RECORDER_AND_TRACE_SF_qiqdd.c)
 *     ?WakeSomeoneAfterUnlockingOrUndeferring@@YAXPEAUtagQMSG@@@Z @ 0x14012E354 (-WakeSomeoneAfterUnlockingOrUndeferring@@YAXPEAUtagQMSG@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?ShouldYieldInputQueue@@YA_NPEAUtagTHREADINFO@@@Z @ 0x14027A4F0 (-ShouldYieldInputQueue@@YA_NPEAUtagTHREADINFO@@@Z.c)
 *     ?YieldInputQueue@Mouse@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagQ@@@Z @ 0x14027A948 (-YieldInputQueue@Mouse@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagQ@@@Z.c)
 *     Feature_YieldInputQueue2__private_GetVariant @ 0x14027F2D4 (Feature_YieldInputQueue2__private_GetVariant.c)
 */

struct tagQMSG *__fastcall xxxGetNextSysMsg(
        struct tagTHREADINFO *a1,
        struct tagQMSG *a2,
        struct tagQMSG *a3,
        __int64 a4)
{
  __int64 v4; // r14
  struct tagQMSG *v5; // rbp
  const struct tagQMSG **v8; // r12
  __int64 v9; // rcx
  int v10; // ebx
  __int64 v11; // rax
  const struct tagQMSG **v13; // rbx
  const struct tagQMSG *v14; // rbx
  __int64 v15; // rax
  int v16; // eax
  volatile signed __int32 *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  const struct tagQMSG **v20; // rax
  const struct tagQMSG *v21; // r13
  __int64 v22; // rax
  const struct tagQMSG **v23; // rax
  int v24; // eax
  char v25; // r12
  __int64 UserSessionState; // rax
  __int64 v27; // [rsp+20h] [rbp-88h]
  __int64 v28; // [rsp+28h] [rbp-80h]
  char v29; // [rsp+B0h] [rbp+8h]
  int v31; // [rsp+C8h] [rbp+20h]

  v4 = *((_QWORD *)a1 + 59);
  v5 = a3;
  v8 = (const struct tagQMSG **)(v4 + 24);
  if ( (unsigned int)Feature_YieldInputQueue2__private_GetVariant(a1, a2, a3, a4) == 1 )
  {
    if ( *(_DWORD *)(v4 + 40) )
      *(_DWORD *)(*((_QWORD *)a1 + 59) + 436LL) &= ~0x1000u;
    v9 = *((_QWORD *)a1 + 59);
    v10 = *(_DWORD *)(v9 + 436) & 0x1020;
    if ( (*(_DWORD *)(v9 + 436) & 0x20) != 0 )
    {
      PostPendingMouseMove();
      v11 = *((_QWORD *)a1 + 170);
      if ( (v11 & 0x2000) == 0 && (v11 & 0x2000000000LL) == 0 )
        *(_DWORD *)(*((_QWORD *)a1 + 59) + 436LL) |= 0x1000u;
    }
    if ( !*(_DWORD *)(v4 + 40) || v10 == 4128 )
    {
      if ( v10 == 4128 )
      {
        if ( *v8 )
        {
          InputTraceLogging::Mouse::YieldInputQueue(*v8, *((const struct tagQ **)a1 + 59));
          if ( (*(_DWORD *)(*((_QWORD *)a1 + 61) + 4LL) & 2) == 0 )
          {
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 7203LL);
            return 0LL;
          }
        }
      }
      return 0LL;
    }
  }
  else
  {
    if ( (*(_DWORD *)(*((_QWORD *)a1 + 59) + 436LL) & 0x20) != 0 )
      PostPendingMouseMove();
    if ( !*(_DWORD *)(v4 + 40) )
      return 0LL;
    if ( ShouldYieldInputQueue(a1) )
    {
      InputTraceLogging::Mouse::YieldInputQueue(*v8, *((const struct tagQ **)a1 + 59));
      WakeSomeoneAfterUnlockingOrUndeferring(*v8);
      if ( (*(_DWORD *)(*((_QWORD *)a1 + 61) + 4LL) & 0x402) == 0 )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 7226LL);
        return 0LL;
      }
      return 0LL;
    }
    if ( !*(_DWORD *)(v4 + 40) )
      return 0LL;
  }
  if ( a2 && (v13 = *(const struct tagQMSG ***)(*((_QWORD *)a1 + 59) + 88LL)) != 0LL )
    v14 = *v13;
  else
    v14 = *v8;
  v15 = *((_QWORD *)a1 + 170);
  if ( (v15 & 0x2000) != 0 || (v15 & 0x2000000000LL) != 0 )
  {
    if ( !v14 )
      return v14;
    while ( 1 )
    {
      v16 = *((_DWORD *)v14 + 25);
      if ( (v16 & 0x20) == 0 && (v16 & 0x8000000) == 0 )
        break;
      if ( (v16 & 0x10) == 0 )
        break;
      v14 = *(const struct tagQMSG **)v14;
      if ( !v14 )
        return v14;
    }
  }
  if ( v14 )
  {
    v17 = (volatile signed __int32 *)*((_QWORD *)v14 + 13);
    if ( v17 && v17 != (volatile signed __int32 *)a1 && (_InterlockedCompareExchange(v17 + 132, 0, 0) & 0x10000) != 0 )
    {
      LODWORD(v18) = 0;
      do
      {
        v19 = *((_QWORD *)v14 + 13);
        if ( !v19 || (_InterlockedCompareExchange((volatile signed __int32 *)(v19 + 528), 0, 0) & 0x10000) == 0 )
          break;
        v20 = (const struct tagQMSG **)*((_QWORD *)v14 + 1);
        v21 = *(const struct tagQMSG **)v14;
        if ( v20 )
          *v20 = v21;
        else
          *v8 = v21;
        v22 = *((_QWORD *)v14 + 1);
        if ( *(_QWORD *)v14 )
          *(_QWORD *)(*(_QWORD *)v14 + 8LL) = v22;
        else
          *(_QWORD *)(v4 + 32) = v22;
        if ( v14 == *(const struct tagQMSG **)(v4 + 56) )
          *(_QWORD *)(v4 + 56) = 0LL;
        *((_QWORD *)v14 + 1) = 0LL;
        *(_QWORD *)v14 = 0LL;
        v23 = *(const struct tagQMSG ***)(v4 + 48);
        if ( v23 )
        {
          *v23 = v14;
          *((_QWORD *)v14 + 1) = *(_QWORD *)(v4 + 48);
          *(_QWORD *)(v4 + 48) = v14;
        }
        else
        {
          *(_QWORD *)(v4 + 48) = v14;
          *((_QWORD *)v14 + 1) = 0LL;
        }
        v24 = *((_DWORD *)v14 + 25);
        *(_QWORD *)v14 = 0LL;
        if ( (v24 & 0x2000) == 0 && (v24 & 0x4000) == 0 && (v24 & 0x10000) == 0 )
        {
          v18 = (unsigned int)(v18 + 1);
          v31 = v18;
          v25 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
             && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x20000) != 0
             && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
          v29 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v25 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v18);
            WPP_RECORDER_AND_TRACE_SF_qiqdd(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v25,
              v29,
              *(_QWORD *)(UserSessionState + 69416),
              v27,
              v28,
              0x17u,
              (__int64)&WPP_097ed2134af63c79f9965b85d38c414a_Traceguids);
            LODWORD(v18) = v31;
          }
          v8 = (const struct tagQMSG **)(v4 + 24);
        }
        v14 = v21;
      }
      while ( v21 );
      *(_DWORD *)(v4 + 40) -= v18;
      if ( !v14 )
        return v14;
      v5 = a3;
    }
    *(_OWORD *)v5 = *(_OWORD *)v14;
    *((_OWORD *)v5 + 1) = *((_OWORD *)v14 + 1);
    *((_OWORD *)v5 + 2) = *((_OWORD *)v14 + 2);
    *((_OWORD *)v5 + 3) = *((_OWORD *)v14 + 3);
    *((_OWORD *)v5 + 4) = *((_OWORD *)v14 + 4);
    *((_OWORD *)v5 + 5) = *((_OWORD *)v14 + 5);
    *((_OWORD *)v5 + 6) = *((_OWORD *)v14 + 6);
    *((_OWORD *)v5 + 7) = *((_OWORD *)v14 + 7);
    *((_OWORD *)v5 + 8) = *((_OWORD *)v14 + 8);
    *((_OWORD *)v5 + 9) = *((_OWORD *)v14 + 9);
    *((_QWORD *)v5 + 20) = *((_QWORD *)v14 + 20);
  }
  return v14;
}
