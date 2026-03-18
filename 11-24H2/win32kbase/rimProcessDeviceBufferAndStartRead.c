/*
 * XREFs of rimProcessDeviceBufferAndStartRead @ 0x140122404
 * Callers:
 *     rimCompleteReads @ 0x14005CF54 (rimCompleteReads.c)
 *     rimFindPausedDeviceAndCompleteRead @ 0x14005DED8 (rimFindPausedDeviceAndCompleteRead.c)
 *     RIMIDEInjectDeviceInput @ 0x140121AFC (RIMIDEInjectDeviceInput.c)
 *     RIMIDE_InjectGenericHidInput @ 0x140121F98 (RIMIDE_InjectGenericHidInput.c)
 *     RIMInjectInput @ 0x140156010 (RIMInjectInput.c)
 *     rimInputApc @ 0x14017F8E0 (rimInputApc.c)
 *     RIMQueueKeyboardInput @ 0x1401E7110 (RIMQueueKeyboardInput.c)
 *     RIMQueueMouseInput @ 0x1401E72D4 (RIMQueueMouseInput.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x140002598 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x14002588C (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     RIMStartDeviceSpecificRead @ 0x14005B744 (RIMStartDeviceSpecificRead.c)
 *     rimObsDeliverToExclusiveObservers @ 0x14005BBE8 (rimObsDeliverToExclusiveObservers.c)
 *     rimSignalReadComplete @ 0x14005D0F0 (rimSignalReadComplete.c)
 *     RIMIsInputSuppressed @ 0x14005D5E4 (RIMIsInputSuppressed.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     EtwTracePointerDeviceReadStart @ 0x1400926A0 (EtwTracePointerDeviceReadStart.c)
 *     EtwTracePointerDeviceReadStop @ 0x1400926D0 (EtwTracePointerDeviceReadStop.c)
 *     _tlgKeywordOn @ 0x140096080 (_tlgKeywordOn.c)
 *     rimObsDeliverToNonExclusiveObservers @ 0x1400BCD88 (rimObsDeliverToNonExclusiveObservers.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C0560 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?ProcessDeviceBuffer@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1400D0E18 (-ProcessDeviceBuffer@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     RIMProcessAnyPointerDeviceInput @ 0x1400D69F0 (RIMProcessAnyPointerDeviceInput.c)
 *     ?DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z @ 0x1400D75DC (-DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z.c)
 *     rimProcessKeyboardInput @ 0x1400E3AA0 (rimProcessKeyboardInput.c)
 *     rimProcessMouseInput @ 0x1400E3B2C (rimProcessMouseInput.c)
 *     RimDeviceTypeToRimInputTypeString @ 0x140114D9C (RimDeviceTypeToRimInputTypeString.c)
 *     ?ResumeDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1401272F8 (-ResumeDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     ?PauseDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1401286EC (-PauseDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@U2@U?$_tlgWrapperByVal@$07@@U3@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@4AEBU?$_tlgWrapperByVal@$07@@5AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x14012F7A0 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@U2@U-$_tlgWrapperByVal@$07@@U3@U-$_tlgWrapperByVal@$0.c)
 *     rimIsPointerInputAllowed @ 0x14017AC68 (rimIsPointerInputAllowed.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMTransferInjectionDeviceDataFifoToDataBuffer @ 0x1401E74C4 (RIMTransferInjectionDeviceDataFifoToDataBuffer.c)
 *     rimProcessHidInput @ 0x1401ED924 (rimProcessHidInput.c)
 *     rimProcessInjectedDeviceBuffers @ 0x1401EDAB4 (rimProcessInjectedDeviceBuffers.c)
 *     RIMHandleTTMDeviceInput @ 0x1401F2EA4 (RIMHandleTTMDeviceInput.c)
 */

__int64 __fastcall rimProcessDeviceBufferAndStartRead(struct RawInputManagerObject *a1, struct RIMDEV *a2, char a3)
{
  __int64 v5; // rcx
  char v6; // r13
  unsigned int v7; // r15d
  char v8; // bl
  char v9; // r14
  __int64 UserSessionState; // rax
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned int v12; // r11d
  _DWORD *v13; // rbx
  LARGE_INTEGER v14; // r14
  int v15; // r9d
  __int64 v16; // r11
  __int64 v17; // rax
  unsigned int v18; // ecx
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  int v22; // r9d
  __int64 v23; // rcx
  int v24; // eax
  int v25; // r12d
  __int64 v26; // rcx
  __int64 v27; // rcx
  int v28; // eax
  _BYTE *v29; // rdx
  char *v30; // rbx
  _QWORD *v31; // rbx
  int v32; // ecx
  int v33; // ecx
  char v34; // r14
  bool v35; // r13
  int v36; // ebx
  __int64 v37; // rax
  int v38; // r8d
  int v39; // edx
  int v40; // eax
  char v41; // bl
  char v42; // r14
  __int64 v43; // rax
  _QWORD *v44; // rdi
  _QWORD *v45; // rax
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v49; // [rsp+50h] [rbp-30h] BYREF
  __int64 v50; // [rsp+58h] [rbp-28h] BYREF
  const wchar_t *v51; // [rsp+60h] [rbp-20h] BYREF
  __int64 v52; // [rsp+68h] [rbp-18h] BYREF
  _QWORD v53[2]; // [rsp+70h] [rbp-10h] BYREF
  int v54; // [rsp+C8h] [rbp+48h] BYREF
  char v55; // [rsp+D0h] [rbp+50h]
  unsigned int v56; // [rsp+D8h] [rbp+58h]

  v55 = a3;
  v6 = 0;
  if ( !(unsigned int)RIMIsInputSuppressed((__int64)a2)
    && (*((_DWORD *)a2 + 46) & 0x40) == 0
    && *(_BYTE *)W32GetUserGdiSessionState(v5) )
  {
    v56 = RIMHandleTTMDeviceInput(a2);
    v7 = v56;
    if ( (v56 & 0x80000000) == 0 )
      goto LABEL_13;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v8 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v8 = 0;
    }
    v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v8,
        v9,
        *(_QWORD *)(UserSessionState + 19392),
        4u,
        1u,
        0x15u,
        (__int64)&WPP_8b3d8589f9583a031a0fbbc3118bab56_Traceguids,
        v7);
    }
  }
  v56 = 0;
LABEL_13:
  ++*((_DWORD *)a2 + 577);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v12 = *((_DWORD *)a2 + 577);
  v13 = (_DWORD *)((char *)a2 + 2320);
  v14 = PerformanceCounter;
  if ( v12 == 100 * (v12 / 0x64) && !*v13
    || *v13
    && PerformanceCounter.QuadPart - *((_QWORD *)a2 + 289) >= (signed __int64)(600000 * gliQpcFreq.QuadPart / 0x3E8uLL)
    && !(v12 % 0x64) )
  {
    if ( (unsigned int)dword_14029AE68 > 5 && tlgKeywordOn((__int64)&dword_14029AE68, 0x400000000000LL) )
    {
      v49 = v16;
      v54 = v15 == 0;
      if ( *((char *)a2 + 184) < 0 && (v17 = *((_QWORD *)a2 + 57)) != 0 )
        v18 = *(_DWORD *)(v17 + 776);
      else
        v18 = -1;
      v19 = *((_DWORD *)a2 + 12);
      v50 = v18;
      v51 = RimDeviceTypeToRimInputTypeString((__int64)a2, v19);
      v52 = *((_QWORD *)a2 + 25);
      v53[0] = "rimProcessDeviceBufferAndStartRead";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        v20,
        (unsigned int)&unk_1402791FC,
        v21,
        v22,
        (__int64)v53,
        (__int64)&v52,
        (__int64)&v51,
        (__int64)&v50,
        (__int64)&v49,
        (__int64)&v54);
    }
    if ( !*v13 )
      *((_DWORD *)a2 + 580) = 1;
    *((LARGE_INTEGER *)a2 + 289) = v14;
  }
  InputTraceLogging::RIM::ProcessDeviceBuffer(a2);
  v24 = *((_DWORD *)a2 + 42);
  v25 = -__CFSHR__(v24, 7);
  if ( *((_DWORD *)a2 + 12) < 2u )
  {
    if ( (v24 & 0x2000) != 0 || __CFSHR__(*((_DWORD *)a2 + 42), 7) )
    {
      v6 = 1;
      RIMTransferInjectionDeviceDataFifoToDataBuffer(v23, a2);
    }
  }
  else
  {
    if ( *((_DWORD *)a2 + 12) != 2 )
      return v56;
    if ( (v24 & 0x10000) == 0 && (*((_DWORD *)a2 + 46) & 0x80u) != 0 )
    {
      if ( !(unsigned int)rimObsDeliverToExclusiveObservers(a2) )
      {
        rimObsDeliverToNonExclusiveObservers(a2);
        if ( (*((_DWORD *)a2 + 46) & 0x80u) != 0 )
        {
          if ( (unsigned int)rimIsPointerInputAllowed(a2) )
          {
            EtwTracePointerDeviceReadStart(v26);
            RIMProcessAnyPointerDeviceInput(a1, (__int64)a2);
            EtwTracePointerDeviceReadStop(v27);
          }
        }
      }
      v28 = *((_DWORD *)a2 + 42);
      if ( (v28 & 0x2000) == 0 && !v25 )
      {
        if ( (v28 & 0x200) != 0 )
        {
          v54 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1435LL);
        }
        goto LABEL_95;
      }
      return v56;
    }
  }
  if ( !(unsigned int)rimObsDeliverToExclusiveObservers(a2) )
  {
    v29 = (char *)a1 + 776;
    if ( *((_BYTE *)a1 + 776) )
    {
      v30 = (char *)a1 + 776;
      if ( (*((_DWORD *)a2 + 42) & 0x200) != 0 )
        goto LABEL_48;
      v31 = (_QWORD *)((char *)a1 + 784);
      if ( (_QWORD *)*v31 == v31 )
      {
        v30 = (char *)a1 + 776;
LABEL_48:
        *v29 = 0;
        if ( (*((_DWORD *)a2 + 42) & 0x200) != 0 )
        {
          InputTraceLogging::RIM::ResumeDevice(a2);
          v29 = v30;
        }
        *((_DWORD *)a2 + 42) &= ~0x200u;
        v32 = *((_DWORD *)a2 + 12);
        if ( v32 )
        {
          v33 = v32 - 1;
          if ( v33 )
          {
            if ( v33 == 1 )
            {
              rimProcessHidInput(a1);
            }
            else
            {
              *v29 = 1;
              InputTraceLogging::RIM::DropInput((__int64)a2, 9u);
              if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
                || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
                || (v34 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
              {
                v34 = 0;
              }
              v35 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              if ( v34 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v36 = *((_DWORD *)a2 + 12);
                v37 = W32GetUserSessionState(WPP_GLOBAL_Control);
                LOBYTE(v38) = v35;
                LOBYTE(v39) = v34;
                WPP_RECORDER_AND_TRACE_SF_d(
                  *((_QWORD *)WPP_GLOBAL_Control + 3),
                  v39,
                  v38,
                  *(_QWORD *)(v37 + 19392),
                  3,
                  1,
                  22,
                  (__int64)&WPP_8b3d8589f9583a031a0fbbc3118bab56_Traceguids,
                  v36);
              }
            }
          }
          else
          {
            rimProcessKeyboardInput((__int64)a1, (__int64)a2);
          }
        }
        else
        {
          rimProcessMouseInput((__int64)a1, (__int64)a2);
        }
        rimSignalReadComplete(a1, a2, (struct _IO_STATUS_BLOCK *)a2 + 15);
        if ( *((_DWORD *)a2 + 12) <= 1u )
        {
          v40 = *((_DWORD *)a2 + 42);
          if ( (v40 & 0x2000) != 0 || (v40 & 0x40) != 0 )
            rimProcessInjectedDeviceBuffers(a1, a2);
        }
        if ( *((_BYTE *)a1 + 776) && !_bittest((const signed __int32 *)a2 + 42, 0xDu) && !v25 )
        {
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v41 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
          {
            v41 = 0;
          }
          v42 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v41 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v43 = W32GetUserSessionState(WPP_GLOBAL_Control);
            WPP_RECORDER_AND_TRACE_SF_qq(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v41,
              v42,
              *(_QWORD *)(v43 + 19392),
              2u,
              1u,
              0x17u,
              (__int64)&WPP_8b3d8589f9583a031a0fbbc3118bab56_Traceguids,
              a1,
              a2);
          }
          goto LABEL_95;
        }
        return v56;
      }
    }
    else
    {
      v31 = (_QWORD *)((char *)a1 + 784);
    }
    if ( (*((_DWORD *)a2 + 42) & 0x200) != 0 )
    {
      if ( v55 )
      {
        if ( !v6 )
        {
          InputTraceLogging::RIM::DropInput((__int64)a2, 6u);
          if ( !_bittest((const signed __int32 *)a2 + 42, 0xDu)
            && *((_DWORD *)a2 + 12) <= 1u
            && (unsigned int)dword_14029AF48 > 5
            && tlgKeywordOn((__int64)&dword_14029AF48, 0x400000000000LL) )
          {
            LOBYTE(v54) = *((_BYTE *)a2 + 48);
            v53[0] = 0x1000000LL;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
              (__int64)&dword_14029AF48,
              (__int64)&unk_1402791BD,
              v46,
              v47,
              (__int64)v53,
              (__int64)&v54);
          }
        }
      }
      if ( *((struct RIMDEV **)a2 + 11) == (struct RIMDEV *)((char *)a2 + 88) )
      {
        v54 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1395LL);
      }
    }
    else
    {
      InputTraceLogging::RIM::PauseDevice(a2);
      *((_DWORD *)a2 + 42) |= 0x200u;
      v44 = (_QWORD *)((char *)a2 + 88);
      if ( (_QWORD *)*v44 != v44 )
      {
        v54 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1372LL);
      }
      v45 = (_QWORD *)v31[1];
      if ( (_QWORD *)*v45 != v31 )
        __fastfail(3u);
      *v44 = v31;
      v44[1] = v45;
      *v45 = v44;
      v31[1] = v44;
    }
    return v56;
  }
  if ( !_bittest((const signed __int32 *)a2 + 42, 0xDu) && !v25 )
LABEL_95:
    RIMStartDeviceSpecificRead((__int64)a1, (__int64)a2);
  return v56;
}
