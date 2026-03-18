/*
 * XREFs of rimStorePointersInHoldingFrame @ 0x14017F21C
 * Callers:
 *     RIMCompletePointerDeviceFrame @ 0x140058A68 (RIMCompletePointerDeviceFrame.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     rimFindHoldingFrame @ 0x1400563E0 (rimFindHoldingFrame.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x140059F50 (RIMCmActiveContactsBeginNoButton.c)
 *     RIMCmActiveContactsEnd @ 0x140059FD4 (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsNext @ 0x14005A08C (RIMCmActiveContactsNext.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x14009782C (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     ??9tagLIST_TABLE_ITERATOR@@QEBA_NAEBU0@@Z @ 0x1400D0398 (--9tagLIST_TABLE_ITERATOR@@QEBA_NAEBU0@@Z.c)
 *     RIMCmGetButtonContact @ 0x140104458 (RIMCmGetButtonContact.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall rimStorePointersInHoldingFrame(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v4; // r12
  __int64 v6; // rdi
  _QWORD *HoldingFrame; // rbx
  int v8; // r8d
  unsigned int v9; // ecx
  __int64 v10; // rax
  __int64 ButtonContact; // r14
  _OWORD *v12; // rax
  __int64 active; // rax
  __int64 v14; // xmm1_8
  __int64 v15; // rsi
  __int64 v16; // r14
  _OWORD *v17; // rdx
  __int128 v18; // xmm1
  _OWORD *v19; // r14
  int v20; // r14d
  int v21; // r15d
  char v22; // bl
  char v23; // si
  __int64 v24; // rax
  char v26; // bl
  bool v27; // si
  __int64 UserSessionState; // rax
  int v29; // r8d
  int v30; // edx
  __int128 v31; // [rsp+58h] [rbp-21h] BYREF
  __int64 v32; // [rsp+68h] [rbp-11h]
  __int128 v33; // [rsp+70h] [rbp-9h] BYREF
  __int64 i; // [rsp+80h] [rbp+7h]
  __int128 v35; // [rsp+88h] [rbp+Fh] BYREF
  __int64 v36; // [rsp+98h] [rbp+1Fh]

  v4 = *(_QWORD *)(a2 + 456);
  v6 = a3;
  HoldingFrame = rimFindHoldingFrame(a1, a2);
  if ( !v8 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 640LL);
  if ( !HoldingFrame )
    return 0LL;
  if ( !*((_DWORD *)HoldingFrame + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 647LL);
  if ( *((_DWORD *)HoldingFrame + 11) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 648LL);
  if ( *((_DWORD *)HoldingFrame + 10) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 649LL);
  if ( HoldingFrame[9] )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 650LL);
  if ( !(_DWORD)v6 || (v9 = 192 * v6, (unsigned __int64)(192 * v6) > 0xFFFFFFFF) || !v9 )
  {
    HoldingFrame[9] = 0LL;
LABEL_50:
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v26 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v26 = 0;
    }
    v27 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v26 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v29) = v27;
      LOBYTE(v30) = v26;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v30,
        v29,
        *(_QWORD *)(UserSessionState + 19392),
        4,
        1,
        46,
        (__int64)&WPP_3860bf17919d3cb2acb39c2fdc2a9255_Traceguids);
    }
    return 0LL;
  }
  v10 = Win32AllocPoolZInitImpl(256LL, v9, 0x65707352u);
  HoldingFrame[9] = v10;
  if ( !v10 )
    goto LABEL_50;
  *((_DWORD *)HoldingFrame + 10) = v6;
  if ( *((_DWORD *)HoldingFrame + 11) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 661LL);
  if ( a4 )
  {
    ButtonContact = RIMCmGetButtonContact(v4);
    if ( (*(_DWORD *)(ButtonContact + 32) & 2) == 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 667LL);
    if ( (*(_DWORD *)(ButtonContact + 32) & 4) == 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 668LL);
    if ( (*(_DWORD *)(ButtonContact + 2444) & 0x2000) != 0 )
    {
      if ( HoldingFrame[10] )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 671LL);
      HoldingFrame[10] = HoldingFrame[9];
    }
    v12 = (_OWORD *)HoldingFrame[9];
    *v12 = *(_OWORD *)(ButtonContact + 2416);
    v12[1] = *(_OWORD *)(ButtonContact + 2432);
    v12[2] = *(_OWORD *)(ButtonContact + 2448);
    v12[3] = *(_OWORD *)(ButtonContact + 2464);
    v12[4] = *(_OWORD *)(ButtonContact + 2480);
    v12[5] = *(_OWORD *)(ButtonContact + 2496);
    v12[6] = *(_OWORD *)(ButtonContact + 2512);
    v12 += 8;
    *(v12 - 1) = *(_OWORD *)(ButtonContact + 2528);
    *v12 = *(_OWORD *)(ButtonContact + 2544);
    v12[1] = *(_OWORD *)(ButtonContact + 2560);
    v12[2] = *(_OWORD *)(ButtonContact + 2576);
    v12[3] = *(_OWORD *)(ButtonContact + 2592);
    *((_DWORD *)HoldingFrame + 11) = 1;
  }
  else
  {
    active = RIMCmActiveContactsBeginNoButton((__int64)&v33, v4);
    v14 = *(_QWORD *)(active + 16);
    v35 = *(_OWORD *)active;
    v36 = v14;
    RIMCmActiveContactsEnd((__int64)&v31, v4);
    v33 = v31;
    for ( i = v32; tagLIST_TABLE_ITERATOR::operator!=((__int64)&v35, (__int64)&v33); i = v32 )
    {
      v15 = v36;
      v16 = v36 + 2400;
      if ( (*(_DWORD *)(v36 + 16) & 2) == 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 686LL);
      if ( (*(_DWORD *)(v15 + 16) & 4) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 687LL);
      if ( (*(_DWORD *)(v15 + 2348) & 1) != 0 )
      {
        if ( (*(_DWORD *)(v16 + 28) & 0x2000) != 0 )
        {
          if ( HoldingFrame[10] )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 700LL);
          HoldingFrame[10] = HoldingFrame[9] + 192LL * *((unsigned int *)HoldingFrame + 11);
        }
        v17 = (_OWORD *)(HoldingFrame[9] + 192LL * *((unsigned int *)HoldingFrame + 11));
        *v17 = *(_OWORD *)v16;
        v17[1] = *(_OWORD *)(v16 + 16);
        v17[2] = *(_OWORD *)(v16 + 32);
        v17[3] = *(_OWORD *)(v16 + 48);
        v17[4] = *(_OWORD *)(v16 + 64);
        v17[5] = *(_OWORD *)(v16 + 80);
        v17[6] = *(_OWORD *)(v16 + 96);
        v17 += 8;
        v18 = *(_OWORD *)(v16 + 112);
        v19 = (_OWORD *)(v16 + 128);
        *(v17 - 1) = v18;
        *v17 = *v19;
        v17[1] = v19[1];
        v17[2] = v19[2];
        v17[3] = v19[3];
        ++*((_DWORD *)HoldingFrame + 11);
      }
      RIMCmActiveContactsNext(v4, &v35);
      RIMCmActiveContactsEnd((__int64)&v31, v4);
      v33 = v31;
    }
  }
  v20 = *((_DWORD *)HoldingFrame + 11);
  v21 = *((_DWORD *)HoldingFrame + 10);
  if ( v20 == v21 )
    return 1LL;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v22 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v22 = 0;
  }
  v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v24 = W32GetUserSessionState(WPP_GLOBAL_Control);
    WPP_RECORDER_AND_TRACE_SF_Dd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v22,
      v23,
      *(_QWORD *)(v24 + 19392),
      4u,
      1u,
      0x2Fu,
      (__int64)&WPP_3860bf17919d3cb2acb39c2fdc2a9255_Traceguids,
      v20,
      v21);
  }
  return 0LL;
}
