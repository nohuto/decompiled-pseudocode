/*
 * XREFs of ?QueuePTPMouseEvent@CPTPProcessor@@AEAA_NUtagPOINT@@K_K11HPEBUtagUIPI_INFO_INT@@@Z @ 0x1401888A0
 * Callers:
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x140187B70 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B060 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B0F4 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x140157398 (-DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

char __fastcall CPTPProcessor::QueuePTPMouseEvent(
        LARGE_INTEGER *this,
        struct tagPOINT a2,
        int a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        int a7,
        const struct tagUIPI_INFO_INT *a8)
{
  LONG x; // edi
  __int64 UserSessionState; // rbx
  __int64 v12; // rcx
  __int64 v13; // rax
  char v14; // si
  LARGE_INTEGER PerformanceCounter; // rax
  int *QuadPart; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  _BYTE v20[20]; // [rsp+20h] [rbp-48h]
  LONG y; // [rsp+7Ch] [rbp+14h]

  y = a2.y;
  x = a2.x;
  UserSessionState = W32GetUserSessionState(this);
  W32AcquirePushLockExclusiveEx((struct W32_PUSH_LOCK *)(UserSessionState + 3344), 0);
  if ( *(_DWORD *)this[262].QuadPart < 0x40u )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    QuadPart = (int *)this[261].QuadPart;
    this[258] = PerformanceCounter;
    *QuadPart = ((unsigned __int8)*QuadPart + 1) & 0x3F;
    v17 = W32GetUserSessionState(QuadPart);
    *(_DWORD *)v20 = 0x800000;
    v18 = 136LL * *(unsigned int *)this[261].QuadPart;
    *(LARGE_INTEGER *)(v18 + v17 + 3360) = this[66];
    *(_QWORD *)(v18 + v17 + 3408) = a6;
    *(_QWORD *)(v18 + v17 + 3392) = 0LL;
    *(_QWORD *)(v18 + v17 + 3400) = 0LL;
    *(_OWORD *)(v18 + v17 + 3416) = *(_OWORD *)&this[254].LowPart;
    *(_OWORD *)(v18 + v17 + 3432) = *(_OWORD *)&this[256].LowPart;
    *(_OWORD *)(v18 + v17 + 3448) = *(_OWORD *)&this[258].LowPart;
    *(LARGE_INTEGER *)(v18 + v17 + 3464) = this[260];
    *(_DWORD *)(v18 + v17 + 3472) = a7;
    *(_OWORD *)(v18 + v17 + 3476) = *(_OWORD *)a8;
    *(_OWORD *)&v20[4] = 0LL;
    *(_OWORD *)(v18 + v17 + 3368) = *(_OWORD *)v20;
    *(_QWORD *)(v18 + v17 + 3384) = 0LL;
    if ( (a3 & 2) != 0 )
    {
      *(_WORD *)(v18 + v17 + 3372) |= 1u;
    }
    else
    {
      switch ( a3 )
      {
        case 4:
          *(_WORD *)(v18 + v17 + 3372) |= 2u;
          goto LABEL_6;
        case 8:
          *(_WORD *)(v18 + v17 + 3372) |= 4u;
          goto LABEL_6;
        case 16:
          *(_WORD *)(v18 + v17 + 3372) |= 8u;
          goto LABEL_6;
      }
    }
    if ( (a3 & 1) != 0 )
    {
      *(_DWORD *)(v18 + v17 + 3384) = y;
      *(_DWORD *)(v18 + v17 + 3380) = x;
LABEL_16:
      v14 = 1;
      ++*(_DWORD *)this[262].QuadPart;
      goto LABEL_17;
    }
LABEL_6:
    if ( *(_DWORD *)(v18 + v17 + 3380) || *(_DWORD *)(v18 + v17 + 3384) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1355LL);
    goto LABEL_16;
  }
  v13 = W32GetUserSessionState(v12);
  ++*(_DWORD *)(v13 + 12176);
  InputTraceLogging::Mouse::DropInput();
  v14 = 0;
LABEL_17:
  W32ReleasePushLockExclusiveEx((struct W32_PUSH_LOCK *)(UserSessionState + 3344), 0LL);
  return v14;
}
