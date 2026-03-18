/*
 * XREFs of rimProcessDeviceBufferAndStartRead @ 0x1C0004A38
 * Callers:
 *     RIMQueueKeyboardInput @ 0x1C0004964 (RIMQueueKeyboardInput.c)
 *     rimCompleteReads @ 0x1C0074F84 (rimCompleteReads.c)
 *     rimFindPausedDeviceAndCompleteRead @ 0x1C0075170 (rimFindPausedDeviceAndCompleteRead.c)
 *     rimInputApc @ 0x1C00E2180 (rimInputApc.c)
 *     RIMInjectInput @ 0x1C01792A0 (RIMInjectInput.c)
 *     RIMIDEInjectDeviceInput @ 0x1C0195C58 (RIMIDEInjectDeviceInput.c)
 *     RIMQueueMouseInput @ 0x1C0197AAC (RIMQueueMouseInput.c)
 *     RIMIDE_InjectGenericHidInput @ 0x1C0199130 (RIMIDE_InjectGenericHidInput.c)
 * Callees:
 *     rimSignalReadComplete @ 0x1C0005120 (rimSignalReadComplete.c)
 *     RIMIsInputSuppressed @ 0x1C00053B0 (RIMIsInputSuppressed.c)
 *     rimObsDeliverToExclusiveObservers @ 0x1C00053E4 (rimObsDeliverToExclusiveObservers.c)
 *     rimProcessInjectedDeviceBuffers @ 0x1C0005660 (rimProcessInjectedDeviceBuffers.c)
 *     rimProcessKeyboardInput @ 0x1C00056C8 (rimProcessKeyboardInput.c)
 *     RIMTransferInjectionDeviceDataFifoToDataBuffer @ 0x1C00057F4 (RIMTransferInjectionDeviceDataFifoToDataBuffer.c)
 *     rimObsDeliverToNonExclusiveObservers @ 0x1C0005B48 (rimObsDeliverToNonExclusiveObservers.c)
 *     _tlgKeywordOn @ 0x1C0053E90 (_tlgKeywordOn.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C00665BC (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00744D4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C00749F8 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     RIMStartDeviceSpecificRead @ 0x1C00789D8 (RIMStartDeviceSpecificRead.c)
 *     RimDeviceTypeToRimInputTypeString @ 0x1C0078D74 (RimDeviceTypeToRimInputTypeString.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     EtwTracePointerDeviceReadStart @ 0x1C00DF160 (EtwTracePointerDeviceReadStart.c)
 *     EtwTracePointerDeviceReadStop @ 0x1C00DF190 (EtwTracePointerDeviceReadStop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@@Z @ 0x1C00DFD54 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?RimDevTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C00E091C (-RimDevTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     rimIsPointerInputAllowed @ 0x1C00E0A78 (rimIsPointerInputAllowed.c)
 *     rimProcessMouseInput @ 0x1C00E2990 (rimProcessMouseInput.c)
 *     ?DbgPrintGDI@@YAXPEADZZ @ 0x1C0150000 (-DbgPrintGDI@@YAXPEADZZ.c)
 *     ?ResumeDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C0172FC8 (-ResumeDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1C0191CB4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z @ 0x1C0192E64 (-DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@U2@U?$_tlgWrapperByVal@$07@@U3@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@4AEBU?$_tlgWrapperByVal@$07@@5AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C01A3720 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@U2@U-$_tlgWrapperByVal@$07@@U3@U-$_tlgWrapperByVal@$0.c)
 *     ?PauseDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C01A3F68 (-PauseDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     rimProcessHidInput @ 0x1C01A4CC4 (rimProcessHidInput.c)
 *     RIMProcessAnyPointerDeviceInput @ 0x1C01A7040 (RIMProcessAnyPointerDeviceInput.c)
 *     RIMHandleTTMDeviceInput @ 0x1C01B4714 (RIMHandleTTMDeviceInput.c)
 */

__int64 __fastcall rimProcessDeviceBufferAndStartRead(struct RawInputManagerObject *a1, struct RIMDEV *a2, char a3)
{
  int v5; // edx
  int v6; // r8d
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned int v8; // r11d
  _DWORD *v9; // rsi
  LARGE_INTEGER v10; // r14
  LONGLONG v11; // rcx
  int v12; // r9d
  __int64 v13; // rcx
  int v14; // eax
  char v15; // r13
  int v16; // r12d
  int v17; // eax
  _QWORD *v18; // rsi
  int v19; // edx
  int v20; // r8d
  int v21; // edx
  int v22; // r8d
  int v23; // eax
  _QWORD *v24; // rbx
  _QWORD *v25; // rax
  int v26; // r8d
  int v27; // r9d
  __int64 v29[2]; // [rsp+70h] [rbp-10h] BYREF
  __int64 v30; // [rsp+C8h] [rbp+48h] BYREF
  char v31; // [rsp+D0h] [rbp+50h]
  unsigned int v32; // [rsp+D8h] [rbp+58h]

  v31 = a3;
  if ( !(unsigned int)RIMIsInputSuppressed(a2)
    && (*((_DWORD *)a2 + 50) & 0x40) == 0
    && *(_BYTE *)SGDGetUserGdiSessionState() )
  {
    v32 = RIMHandleTTMDeviceInput(a2);
    if ( (v32 & 0x80000000) == 0 )
      goto LABEL_13;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v5) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v5) = 0;
    }
    if ( (_BYTE)v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v5,
        v6,
        (_DWORD)gRimLog,
        4,
        1,
        21,
        (__int64)&WPP_6c3dff8734b4343641ce6a69106986e7_Traceguids,
        v32);
    }
  }
  v32 = 0;
LABEL_13:
  ++*((_DWORD *)a2 + 577);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v8 = *((_DWORD *)a2 + 577);
  v9 = (_DWORD *)((char *)a2 + 2320);
  v10 = PerformanceCounter;
  v11 = 100 * (v8 / 0x64);
  if ( v8 == (_DWORD)v11 && !*v9
    || *v9
    && (v11 = 600000 * gliQpcFreq.QuadPart,
        PerformanceCounter.QuadPart - *((_QWORD *)a2 + 289) >= 600000 * gliQpcFreq.QuadPart / 1000)
    && !(v8 % 0x64) )
  {
    if ( (unsigned int)dword_1C02882F8 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C02882F8, 0x400000000000LL) )
    {
      LODWORD(v30) = v12 == 0;
      RimDeviceTypeToRimInputTypeString(a2, *((unsigned __int8 *)a2 + 48));
      v29[0] = (__int64)"rimProcessDeviceBufferAndStartRead";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        v13,
        &unk_1C0259B3A);
    }
    if ( !*v9 )
      *v9 = 1;
    *((LARGE_INTEGER *)a2 + 289) = v10;
  }
  if ( (unsigned int)dword_1C0289810 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C0289810, 256LL) )
  {
    v30 = (__int64)InputTraceLogging::RimDevTypeToString(*((unsigned __int8 *)a2 + 48));
    v29[0] = (__int64)a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>>(
      (int)&dword_1C0289810,
      (__int64)v29,
      (__int64)&v30);
  }
  v14 = *((_DWORD *)a2 + 46);
  v15 = 0;
  v16 = -__CFSHR__(v14, 7);
  if ( *((_BYTE *)a2 + 48) < 2u )
  {
    if ( (v14 & 0x2000) != 0 || __CFSHR__(*((_DWORD *)a2 + 46), 7) )
    {
      v15 = 1;
      RIMTransferInjectionDeviceDataFifoToDataBuffer(v11, a2);
    }
  }
  else
  {
    if ( *((_BYTE *)a2 + 48) != 2 )
      return v32;
    if ( (v14 & 0x10000) == 0 && (*((_DWORD *)a2 + 50) & 0x80u) != 0 )
    {
      if ( !(unsigned int)rimObsDeliverToExclusiveObservers(a2) )
      {
        rimObsDeliverToNonExclusiveObservers(a2);
        if ( (*((_DWORD *)a2 + 50) & 0x80u) != 0 )
        {
          if ( (unsigned int)rimIsPointerInputAllowed(a2) )
          {
            EtwTracePointerDeviceReadStart();
            RIMProcessAnyPointerDeviceInput(a1, a2);
            EtwTracePointerDeviceReadStop();
          }
        }
      }
      v17 = *((_DWORD *)a2 + 46);
      if ( (v17 & 0x2000) == 0 && !v16 )
      {
        if ( (v17 & 0x200) != 0 )
        {
          LODWORD(v30) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1332LL);
        }
        goto LABEL_94;
      }
      return v32;
    }
  }
  if ( !(unsigned int)rimObsDeliverToExclusiveObservers(a2) )
  {
    if ( *((_BYTE *)a1 + 776) )
    {
      if ( (*((_DWORD *)a2 + 46) & 0x200) != 0 || (v18 = (_QWORD *)((char *)a1 + 784), (_QWORD *)*v18 == v18) )
      {
        *((_BYTE *)a1 + 776) = 0;
        if ( (*((_DWORD *)a2 + 46) & 0x200) != 0 )
          InputTraceLogging::RIM::ResumeDevice(a2);
        *((_DWORD *)a2 + 46) &= ~0x200u;
        if ( *((_BYTE *)a2 + 48) )
        {
          if ( *((_BYTE *)a2 + 48) == 1 )
          {
            rimProcessKeyboardInput(a1, a2);
          }
          else if ( *((_BYTE *)a2 + 48) == 2 )
          {
            rimProcessHidInput(a1, a2);
          }
          else
          {
            *((_BYTE *)a1 + 776) = 1;
            InputTraceLogging::RIM::DropInput(a2, 9LL);
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
              || (LOBYTE(v19) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
            {
              LOBYTE(v19) = 0;
            }
            if ( (_BYTE)v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v20) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_d(
                WPP_GLOBAL_Control->AttachedDevice,
                v19,
                v20,
                (_DWORD)gRimLog,
                3,
                1,
                22,
                (__int64)&WPP_6c3dff8734b4343641ce6a69106986e7_Traceguids,
                *((_BYTE *)a2 + 48));
            }
          }
        }
        else
        {
          rimProcessMouseInput(a1, a2);
        }
        rimSignalReadComplete(a1, a2);
        if ( *((_BYTE *)a2 + 48) <= 1u )
        {
          v23 = *((_DWORD *)a2 + 46);
          if ( (v23 & 0x2000) != 0 || (v23 & 0x40) != 0 )
            rimProcessInjectedDeviceBuffers(a1, a2);
        }
        if ( *((_BYTE *)a1 + 776) && !_bittest((const signed __int32 *)a2 + 46, 0xDu) && !v16 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
            || (LOBYTE(v21) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            LOBYTE(v21) = 0;
          }
          if ( (_BYTE)v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v22) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_qq(
              WPP_GLOBAL_Control->AttachedDevice,
              v21,
              v22,
              (_DWORD)gRimLog,
              4,
              1,
              23,
              (__int64)&WPP_6c3dff8734b4343641ce6a69106986e7_Traceguids,
              (char)a1,
              (char)a2);
          }
          DbgPrintGDI("FailSafeRead pRimObj(%p) pRimDev(%p)\n", a1, a2);
          goto LABEL_94;
        }
        return v32;
      }
    }
    else
    {
      v18 = (_QWORD *)((char *)a1 + 784);
    }
    if ( (*((_DWORD *)a2 + 46) & 0x200) != 0 )
    {
      if ( v31 )
      {
        if ( !v15 )
        {
          InputTraceLogging::RIM::DropInput(a2, 6LL);
          if ( !_bittest((const signed __int32 *)a2 + 46, 0xDu)
            && *((_BYTE *)a2 + 48) <= 1u
            && (unsigned int)dword_1C02883D8 > 5
            && (unsigned __int8)tlgKeywordOn(&dword_1C02883D8, 0x400000000000LL) )
          {
            LOBYTE(v30) = v26;
            v29[0] = 0x1000000LL;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
              (unsigned int)&dword_1C02883D8,
              (unsigned int)&unk_1C0259A9D,
              v26,
              v27,
              (__int64)v29,
              (__int64)&v30);
          }
        }
      }
      if ( *((struct RIMDEV **)a2 + 13) == (struct RIMDEV *)((char *)a2 + 104) )
      {
        LODWORD(v30) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1292LL);
      }
    }
    else
    {
      InputTraceLogging::RIM::PauseDevice(a2);
      *((_DWORD *)a2 + 46) |= 0x200u;
      v24 = (_QWORD *)((char *)a2 + 104);
      if ( (_QWORD *)*v24 != v24 )
      {
        LODWORD(v30) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1269LL);
      }
      v25 = (_QWORD *)v18[1];
      if ( (_QWORD *)*v25 != v18 )
        __fastfail(3u);
      *v24 = v18;
      v24[1] = v25;
      *v25 = v24;
      v18[1] = v24;
    }
    return v32;
  }
  if ( !_bittest((const signed __int32 *)a2 + 46, 0xDu) && !v16 )
LABEL_94:
    RIMStartDeviceSpecificRead(a1, a2);
  return v32;
}
