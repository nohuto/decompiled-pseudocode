/*
 * XREFs of ?xxxProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x14021F008
 * Callers:
 *     xxxProcessMouseEvent @ 0x1402138E0 (xxxProcessMouseEvent.c)
 * Callees:
 *     isRootPartition @ 0x14004FB7C (isRootPartition.c)
 *     IsMouseIVEnabled @ 0x140050CD0 (IsMouseIVEnabled.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x140060B94 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x140062674 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B060 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B0F4 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     EtwTraceStopProcessQueuedMouseEvents @ 0x140092730 (EtwTraceStopProcessQueuedMouseEvents.c)
 *     EtwTraceStartProcessQueuedMouseEvents @ 0x140092760 (EtwTraceStartProcessQueuedMouseEvents.c)
 *     ?ProcessEvent@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@GGAEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1400952C8 (-ProcessEvent@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@GGAEBUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     ?Initialize@CMouseRawInput@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z @ 0x1400CE0A0 (-Initialize@CMouseRawInput@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1400CEF38 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1400D99A0 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 *     ?DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x140157398 (-DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     ?ComputeUIPIForMouseEvent@CMouseProcessor@@AEAAXPEAURawMouseEvent@1@@Z @ 0x14018C328 (-ComputeUIPIForMouseEvent@CMouseProcessor@@AEAAXPEAURawMouseEvent@1@@Z.c)
 *     ?_Dequeue@CMouseQueue@CMouseProcessor@@AEAAXPEAURawMouseEvent@2@@Z @ 0x14018FD88 (-_Dequeue@CMouseQueue@CMouseProcessor@@AEAAXPEAURawMouseEvent@2@@Z.c)
 *     ApiSetEditionForegroundQAccessibleToMouseProducer @ 0x140191A0C (ApiSetEditionForegroundQAccessibleToMouseProducer.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?CommitStagedChunkInput@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z @ 0x14019D900 (-CommitStagedChunkInput@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z.c)
 *     ?FlushInputDestinedForContainer@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXXZ @ 0x14021CC94 (-FlushInputDestinedForContainer@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 *     memset @ 0x14023F500 (memset.c)
 */

void __fastcall CMouseProcessor::xxxProcessMouseEvent(CMouseProcessor *this)
{
  __int64 v2; // rcx
  __int64 v3; // r14
  struct CMouseProcessor::RawMouseEvent *v4; // rdi
  __int64 v5; // rsi
  char *v6; // rdi
  CMouseProcessor *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // r8d
  char v11; // bl
  bool v12; // si
  __int64 UserSessionState; // rax
  int v14; // r8d
  int v15; // edx
  int v16; // esi
  __int64 v17; // rcx
  unsigned int v18; // eax
  unsigned int v19; // esi
  bool (__fastcall **v20)(const struct CMouseProcessor::CMouseEvent *); // rbx
  __int64 v21; // rcx
  void (*v22)(void); // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  struct ContainerMouseInput *v25; // r8
  void **v26; // [rsp+50h] [rbp-B8h] BYREF
  char *v27; // [rsp+58h] [rbp-B0h]
  int v28; // [rsp+60h] [rbp-A8h]
  __int64 *v29; // [rsp+68h] [rbp-A0h] BYREF
  __int64 *v30[3]; // [rsp+70h] [rbp-98h] BYREF
  char v31[2944]; // [rsp+88h] [rbp-80h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v29, "ProcessMouse", 0LL);
  EtwTraceStartProcessQueuedMouseEvents(v2);
  memset(v31, 0, sizeof(v31));
  `vector constructor iterator'(
    v31,
    184LL,
    16LL,
    (void (__fastcall *)(char *))CMouseProcessor::RawMouseEvent::RawMouseEvent);
  W32AcquirePushLockExclusiveEx((CMouseProcessor *)((char *)this + 3008), 0);
  v3 = *((unsigned __int16 *)this + 1501);
  if ( *((_WORD *)this + 1501) )
  {
    v4 = (struct CMouseProcessor::RawMouseEvent *)v31;
    v5 = *((unsigned __int16 *)this + 1501);
    do
    {
      CMouseProcessor::CMouseQueue::_Dequeue((CMouseProcessor *)((char *)this + 56), v4);
      v4 = (struct CMouseProcessor::RawMouseEvent *)((char *)v4 + 184);
      --v5;
    }
    while ( v5 );
  }
  if ( *((_WORD *)this + 1501) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7004);
  W32ReleasePushLockExclusiveEx((CMouseProcessor *)((char *)this + 3008), 0LL);
  if ( v3 )
  {
    v6 = &v31[30];
    do
    {
      InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
        v30,
        "ProcessMouseEvent",
        (const struct InputTraceLogging::ThreadLockedPerfRegion *)&v29);
      InputTraceLogging::Mouse::ProcessEvent(
        *(_QWORD *)(v6 + 66),
        (const struct tagPOINT *)(v6 + 22),
        *((unsigned __int16 *)v6 - 1),
        *(unsigned __int16 *)v6,
        (const struct tagINPUT_MESSAGE_SOURCE *)(v6 + 82));
      CMouseProcessor::ComputeUIPIForMouseEvent(v7, (struct CMouseProcessor::RawMouseEvent *)(v6 - 30));
      v27 = v6 - 30;
      v26 = &CMouseProcessor::CMouseEvent::`vftable';
      v28 = 0;
      if ( (v6[90] & 1) != 0
        || *(_DWORD *)(v6 + 86) == 1
        || (v10 = *(_QWORD *)(v6 + 146) != 0LL,
            *(_OWORD *)&v30[1] = *(_OWORD *)(v6 + 114),
            (unsigned int)ApiSetEditionForegroundQAccessibleToMouseProducer((__int64)&v30[1], v8, v10)) )
      {
        v16 = *((_DWORD *)v27 + 30);
        if ( (v16 & 0x8000) != 0 )
        {
          if ( !*((_QWORD *)v27 + 22) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7165);
        }
        else
        {
          if ( (v16 & 0x800) == 0 )
          {
            v17 = *(_QWORD *)(W32GetUserSessionState(v9) + 3064);
            v18 = ((v16 & 0x40) != 0 ? 16 : 32) | 8;
            if ( (v16 & 0x80u) == 0 )
              v18 = (v16 & 0x40) != 0 ? 16 : 32;
            CInputGlobals::UpdateInputGlobals(v17, *((_QWORD *)v27 + 11), 3u, *((_WORD *)v27 + 14), 0, v18);
          }
          CMouseProcessor::CMouseRawInput::Initialize(
            (CMouseProcessor *)((char *)this + 3696),
            (const struct CMouseProcessor::CMouseEvent *)&v26);
          v19 = 0;
          v20 = &off_140254978;
          do
          {
            if ( !*v20 || (*v20)((const struct CMouseProcessor::CMouseEvent *)&v26) )
              ((void (__fastcall *)(CMouseProcessor *, void ***))v20[1])(this, &v26);
            ++v19;
            v20 += 2;
          }
          while ( v19 < 3 );
          if ( IsMouseIVEnabled() && isRootPartition(v21) )
            CMouseProcessor::ContainerMouseInputBuffer::CommitStagedChunkInput(
              (CMouseProcessor *)((char *)this + 4088),
              (const struct CMouseProcessor::CMouseEvent *)&v26);
        }
        v22 = (void (*)(void))*((_QWORD *)v27 + 22);
        if ( v22 )
          v22();
      }
      else
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
          || (v11 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
        {
          v11 = 0;
        }
        v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
          LOBYTE(v14) = v12;
          LOBYTE(v15) = v11;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v15,
            v14,
            *(_QWORD *)(UserSessionState + 69400),
            3,
            6,
            15,
            (__int64)&WPP_f61ee55f31d8345b2339769354926a3f_Traceguids);
        }
        InputTraceLogging::Mouse::DropInput();
      }
      InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v30);
      v6 += 184;
      --v3;
    }
    while ( v3 );
  }
  if ( IsMouseIVEnabled() && isRootPartition(v23) )
    CMouseProcessor::ContainerMouseInputBuffer::FlushInputDestinedForContainer(
      (CMouseProcessor *)((char *)this + 4088),
      v24,
      v25);
  EtwTraceStopProcessQueuedMouseEvents(v23);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v29);
}
