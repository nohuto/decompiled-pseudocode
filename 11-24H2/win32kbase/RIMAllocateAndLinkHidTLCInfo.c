/*
 * XREFs of RIMAllocateAndLinkHidTLCInfo @ 0x1401E3074
 * Callers:
 *     RIMIDECreateHIDDesc @ 0x1400C8E60 (RIMIDECreateHIDDesc.c)
 *     RIMCreateHidDesc @ 0x1401DBCC8 (RIMCreateHidDesc.c)
 *     rimObsStartStopDeviceRead @ 0x1401F0DA0 (rimObsStartStopDeviceRead.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMSearchHidTLCInfo @ 0x1400C9484 (RIMSearchHidTLCInfo.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1400C95A8 (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x14012D12C (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMAllocateAndLinkHidTLCInfo(__int64 a1, __int16 a2)
{
  unsigned __int16 v3; // si
  __int64 UserSessionState; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rbx
  char v8; // bl
  bool v9; // di
  __int64 v10; // rax
  int v11; // r8d
  int v12; // edx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 *v16; // rdi
  __int64 v17; // rcx
  __int64 i; // rax
  __int64 v19; // rcx
  char v20; // [rsp+78h] [rbp+20h] BYREF

  v3 = a1;
  UserSessionState = W32GetUserSessionState(a1);
  RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded(
    (RIMLOCKExclusiveIfNeeded *)&v20,
    (struct RIMLOCK *)(UserSessionState + 104));
  if ( RIMSearchHidTLCInfo(v3, a2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 152);
  v5 = Win32AllocPoolZInitImpl(256LL, 0x30uLL, 0x70707352u);
  v7 = v5;
  if ( v5 )
  {
    *(_WORD *)(v5 + 16) = v3;
    *(_WORD *)(v5 + 18) = a2;
    v14 = W32GetUserSessionState(v6) + 192;
    v15 = *(_QWORD *)v14;
    if ( *(_QWORD *)(*(_QWORD *)v14 + 8LL) != v14 )
      __fastfail(3u);
    *(_QWORD *)v7 = v15;
    *(_QWORD *)(v7 + 8) = v14;
    *(_QWORD *)(v15 + 8) = v7;
    *(_QWORD *)v14 = v7;
    v16 = *(__int64 **)(W32GetUserSessionState(v15) + 208);
    for ( i = W32GetUserSessionState(v17); v16 != (__int64 *)(i + 208); i = W32GetUserSessionState(v19) )
    {
      if ( *((_WORD *)v16 + 8) == v3 )
      {
        *(_DWORD *)(v7 + 32) = *((_DWORD *)v16 + 5);
        break;
      }
      v16 = (__int64 *)*v16;
    }
    RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v20);
    return v7;
  }
  else
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v8 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v8 = 0;
    }
    v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v11) = v9;
      LOBYTE(v12) = v8;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v12,
        v11,
        *(_QWORD *)(v10 + 19392),
        3,
        1,
        10,
        (__int64)&WPP_874cc551c50532d10d3b13ce90299f33_Traceguids);
    }
    RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v20);
    return 0LL;
  }
}
