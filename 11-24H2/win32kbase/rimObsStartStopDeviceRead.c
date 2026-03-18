/*
 * XREFs of rimObsStartStopDeviceRead @ 0x1401F0DA0
 * Callers:
 *     RawInputManagerObjectDelete @ 0x1401E35C8 (RawInputManagerObjectDelete.c)
 *     rimObsAddInputObserver @ 0x1401EEEE4 (rimObsAddInputObserver.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?HandleDirectStartStopDeviceReadRequest@CHidInput@@QEAAXXZ @ 0x1400640C0 (-HandleDirectStartStopDeviceReadRequest@CHidInput@@QEAAXXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_dD @ 0x1400AACA4 (WPP_RECORDER_AND_TRACE_SF_dD.c)
 *     RIMSearchHidTLCInfo @ 0x1400C9484 (RIMSearchHidTLCInfo.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1400C95A8 (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     RIMHidTLCActive @ 0x14011577C (RIMHidTLCActive.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x14012D12C (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMAllocateAndLinkHidTLCInfo @ 0x1401E3074 (RIMAllocateAndLinkHidTLCInfo.c)
 *     RIMFreeHidTLCInfo @ 0x1401E32C0 (RIMFreeHidTLCInfo.c)
 */

__int64 __fastcall rimObsStartStopDeviceRead(__int64 a1, char a2)
{
  char v3; // si
  bool v4; // r14
  __int64 v5; // rax
  int v6; // r8d
  int v7; // edx
  unsigned __int16 v9; // bx
  unsigned __int16 v10; // di
  __int64 UserSessionState; // rax
  __int64 *v12; // rax
  unsigned int v13; // ebx
  __int64 v14; // rsi
  char v15; // si
  char v16; // r13
  __int64 v17; // rax
  char v18; // si
  bool v19; // bp
  __int64 v20; // rax
  int v21; // r8d
  int v22; // edx
  int v23; // eax
  CTouchProcessor *v24; // rcx
  char v25; // r12
  bool v26; // r13
  int v27; // edx
  int v28; // r8d
  __int64 v29; // r9
  __int64 v30; // rax
  char v31; // r14
  char v32; // r15
  __int64 v33; // rax
  __int16 v34; // [rsp+30h] [rbp-68h]
  char v35[8]; // [rsp+40h] [rbp-58h]
  char v36; // [rsp+40h] [rbp-58h]
  __int64 v37; // [rsp+48h] [rbp-50h]
  _BYTE v38[72]; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int16 v39; // [rsp+B0h] [rbp+18h]
  char v40; // [rsp+B8h] [rbp+20h]
  int v41; // [rsp+B8h] [rbp+20h]

  if ( *(_DWORD *)(a1 + 108) == 2 )
  {
    v9 = *(_WORD *)(a1 + 112);
    v10 = *(_WORD *)(a1 + 116);
    v39 = v9;
    UserSessionState = W32GetUserSessionState(a1);
    RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded(
      (RIMLOCKExclusiveIfNeeded *)v38,
      (struct RIMLOCK *)(UserSessionState + 104));
    v12 = RIMSearchHidTLCInfo(v9, v10);
    v13 = 0;
    v14 = (__int64)v12;
    if ( a2 && !v12 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v15 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v15 = 0;
      }
      v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v17 = W32GetUserSessionState(WPP_GLOBAL_Control);
        WPP_RECORDER_AND_TRACE_SF_dD(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v15,
          v16,
          *(_QWORD *)(v17 + 69400),
          4u,
          1u,
          0x37u,
          (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
          v39,
          v10);
      }
      v14 = RIMAllocateAndLinkHidTLCInfo(v39, v10);
    }
    if ( !v14 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v18 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v18 = 0;
      }
      v19 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v20 = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v21) = v19;
        LOBYTE(v22) = v18;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v22,
          v21,
          *(_QWORD *)(v20 + 69400),
          2,
          1,
          56,
          (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
      }
      if ( !a2 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1023);
      v13 = -1073741670;
LABEL_59:
      RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)v38);
      return v13;
    }
    v23 = *(_DWORD *)(v14 + 28);
    if ( a2 )
    {
      v40 = v23 + 1;
      *(_DWORD *)(v14 + 28) = v23 + 1;
      v24 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v25 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v25 = 0;
      }
      v26 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v25 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_49;
      v29 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 69400);
      v36 = v40;
      v34 = 57;
    }
    else
    {
      if ( !v23 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1035);
      v41 = *(_DWORD *)(v14 + 28) - 1;
      *(_DWORD *)(v14 + 28) = v41;
      v24 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v25 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v25 = 0;
      }
      v26 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v25 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_49;
      v29 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 69400);
      v36 = v41;
      v34 = 58;
    }
    LOBYTE(v28) = v26;
    LOBYTE(v27) = v25;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v27,
      v28,
      v29,
      4,
      1,
      v34,
      (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
      v36);
LABEL_49:
    v30 = W32GetUserSessionState(v24);
    CHidInput::HandleDirectStartStopDeviceReadRequest(*(CHidInput **)(v30 + 16840));
    if ( !*(_DWORD *)(v14 + 20) && !(unsigned int)RIMHidTLCActive((_DWORD *)v14) )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v31 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v31 = 0;
      }
      v32 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v31 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v33 = W32GetUserSessionState(WPP_GLOBAL_Control);
        LODWORD(v37) = v10;
        *(_DWORD *)v35 = v39;
        WPP_RECORDER_AND_TRACE_SF_dD(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v31,
          v32,
          *(_QWORD *)(v33 + 69400),
          4u,
          1u,
          0x3Bu,
          (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
          *(_QWORD *)v35,
          v37);
      }
      RIMFreeHidTLCInfo((PVOID **)v14);
    }
    goto LABEL_59;
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v3 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v3 = 0;
  }
  v4 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v5 = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v6) = v4;
    LOBYTE(v7) = v3;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v7,
      v6,
      *(_QWORD *)(v5 + 69400),
      4,
      1,
      54,
      (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
  }
  return 0LL;
}
