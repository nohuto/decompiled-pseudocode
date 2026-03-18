/*
 * XREFs of rimStorePointersInHoldingFrame @ 0x1C01A11A0
 * Callers:
 *     RIMCompletePointerDeviceFrame @ 0x1C019F804 (RIMCompletePointerDeviceFrame.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C000A528 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimAllocPointerInfoNodeList @ 0x1C00E1828 (rimAllocPointerInfoNodeList.c)
 *     rimFindHoldingFrame @ 0x1C00E1B8A (rimFindHoldingFrame.c)
 *     RIMCmActiveContactsEnd @ 0x1C00E34F0 (RIMCmActiveContactsEnd.c)
 *     RIMCmGetButtonContact @ 0x1C00E354C (RIMCmGetButtonContact.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1C01AFDC8 (RIMCmActiveContactsBeginNoButton.c)
 *     RIMCmActiveContactsNext @ 0x1C01AFE4C (RIMCmActiveContactsNext.c)
 */

__int64 __fastcall rimStorePointersInHoldingFrame(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v4; // r15
  unsigned __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD *HoldingFrame; // rbx
  int v10; // r8d
  __int64 v11; // rax
  int v12; // edx
  int v13; // r8d
  __int64 ButtonContact; // rsi
  _OWORD *v16; // rax
  char v17; // dl
  __int64 active; // rax
  __int64 v19; // xmm1_8
  __int64 v20; // rsi
  _OWORD *v21; // r14
  _OWORD *v22; // rdx
  int v23; // [rsp+50h] [rbp-19h]
  __int128 v24; // [rsp+58h] [rbp-11h] BYREF
  __int64 v25; // [rsp+68h] [rbp-1h]
  __int64 v26; // [rsp+70h] [rbp+7h] BYREF
  int v27; // [rsp+78h] [rbp+Fh]
  __int64 v28; // [rsp+80h] [rbp+17h]

  v4 = *(_QWORD *)(a2 + 472);
  HoldingFrame = rimFindHoldingFrame(a1, a2);
  if ( !v10 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 639);
  if ( !HoldingFrame )
    return 0LL;
  if ( !*((_DWORD *)HoldingFrame + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 646);
  if ( *((_DWORD *)HoldingFrame + 11) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 647);
  if ( *((_DWORD *)HoldingFrame + 10) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 648);
  if ( HoldingFrame[9] )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 649);
  v11 = rimAllocPointerInfoNodeList(v8, v7, a3);
  HoldingFrame[9] = v11;
  if ( !v11 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v12) = 0;
    }
    if ( (_BYTE)v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v12,
        v13,
        (_DWORD)gRimLog,
        4,
        1,
        46,
        (__int64)&WPP_fa356a5d835a35169fe137386a876b0b_Traceguids);
    }
    return 0LL;
  }
  *((_DWORD *)HoldingFrame + 10) = a3;
  if ( *((_DWORD *)HoldingFrame + 11) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 660);
  if ( a4 )
  {
    ButtonContact = RIMCmGetButtonContact(v4);
    if ( (*(_DWORD *)(ButtonContact + 32) & 2) == 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 666);
    if ( (*(_DWORD *)(ButtonContact + 32) & 4) == 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 667);
    if ( (*(_DWORD *)(ButtonContact + 2444) & 0x2000) != 0 )
    {
      if ( HoldingFrame[10] )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 670);
      HoldingFrame[10] = HoldingFrame[9];
    }
    v16 = (_OWORD *)HoldingFrame[9];
    *v16 = *(_OWORD *)(ButtonContact + 2416);
    v16[1] = *(_OWORD *)(ButtonContact + 2432);
    v16[2] = *(_OWORD *)(ButtonContact + 2448);
    v16[3] = *(_OWORD *)(ButtonContact + 2464);
    v16[4] = *(_OWORD *)(ButtonContact + 2480);
    v16[5] = *(_OWORD *)(ButtonContact + 2496);
    v16[6] = *(_OWORD *)(ButtonContact + 2512);
    v16 += 8;
    *(v16 - 1) = *(_OWORD *)(ButtonContact + 2528);
    *v16 = *(_OWORD *)(ButtonContact + 2544);
    v16[1] = *(_OWORD *)(ButtonContact + 2560);
    v16[2] = *(_OWORD *)(ButtonContact + 2576);
    v16[3] = *(_OWORD *)(ButtonContact + 2592);
    *((_DWORD *)HoldingFrame + 11) = 1;
  }
  else
  {
    active = RIMCmActiveContactsBeginNoButton(&v26, v4);
    v19 = *(_QWORD *)(active + 16);
    v24 = *(_OWORD *)active;
    v25 = v19;
    while ( 1 )
    {
      RIMCmActiveContactsEnd((__int64)&v26, v4);
      v20 = v25;
      if ( (_QWORD)v24 == v26 && DWORD2(v24) == v27 && v25 == v28 )
        break;
      v21 = (_OWORD *)(v25 + 2400);
      if ( (*(_DWORD *)(v25 + 16) & 2) == 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 685);
      if ( (*(_DWORD *)(v20 + 16) & 4) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 686);
      if ( (*(_DWORD *)(v20 + 2348) & 1) != 0 )
      {
        if ( (*(_DWORD *)(v20 + 2428) & 0x2000) != 0 )
        {
          if ( HoldingFrame[10] )
          {
            v23 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 699);
          }
          HoldingFrame[10] = HoldingFrame[9] + 192LL * *((unsigned int *)HoldingFrame + 11);
        }
        v22 = (_OWORD *)(HoldingFrame[9] + 192LL * *((unsigned int *)HoldingFrame + 11));
        *v22 = *v21;
        v22[1] = *(_OWORD *)(v20 + 2416);
        v22[2] = *(_OWORD *)(v20 + 2432);
        v22[3] = *(_OWORD *)(v20 + 2448);
        v22[4] = *(_OWORD *)(v20 + 2464);
        v22[5] = *(_OWORD *)(v20 + 2480);
        v22[6] = *(_OWORD *)(v20 + 2496);
        v22 += 8;
        *(v22 - 1) = *(_OWORD *)(v20 + 2512);
        *v22 = *(_OWORD *)(v20 + 2528);
        v22[1] = *(_OWORD *)(v20 + 2544);
        v22[2] = *(_OWORD *)(v20 + 2560);
        v22[3] = *(_OWORD *)(v20 + 2576);
        ++*((_DWORD *)HoldingFrame + 11);
      }
      RIMCmActiveContactsNext(v4, &v24);
    }
  }
  if ( *((_DWORD *)HoldingFrame + 11) != *((_DWORD *)HoldingFrame + 10) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (v17 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      v17 = 0;
    }
    if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_dd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v17,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gRimLog,
        4u,
        1u,
        0x2Fu,
        (__int64)&WPP_fa356a5d835a35169fe137386a876b0b_Traceguids,
        *((_DWORD *)HoldingFrame + 11),
        *((_DWORD *)HoldingFrame + 10),
        v23);
    return 0LL;
  }
  return 1LL;
}
