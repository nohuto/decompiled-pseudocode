/*
 * XREFs of rimSignalReadComplete @ 0x1C0005120
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0004A38 (rimProcessDeviceBufferAndStartRead.c)
 *     RIMOnPnpNotification @ 0x1C0073820 (RIMOnPnpNotification.c)
 *     rimDispatchCompleteFrames @ 0x1C00E1F5C (rimDispatchCompleteFrames.c)
 * Callees:
 *     RIMIsInputSuppressed @ 0x1C00053B0 (RIMIsInputSuppressed.c)
 *     RIMArmWatchDog @ 0x1C0005594 (RIMArmWatchDog.c)
 *     ?ReadComplete@RIM@TelemetryDebug@InputTraceLogging@@SAX_K@Z @ 0x1C0005604 (-ReadComplete@RIM@TelemetryDebug@InputTraceLogging@@SAX_K@Z.c)
 *     ?SkipReadComplete@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMDEV@@@Z @ 0x1C0006750 (-SkipReadComplete@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMDEV@@@Z.c)
 *     _tlgKeywordOn @ 0x1C0053E90 (_tlgKeywordOn.c)
 *     RIMLockExclusive @ 0x1C0055140 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C00665BC (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C00749F8 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqqq @ 0x1C00AC9A8 (WPP_RECORDER_AND_TRACE_SF_qqqq.c)
 *     ?PointerDeviceTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C00E089E (-PointerDeviceTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C00E0D0A (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z @ 0x1C0192E64 (-DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U1@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@344@Z @ 0x1C01A3D28 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U1@U2@U2@@-$_tlgWriteTemplate@$$A6.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@D@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@D@@44@Z @ 0x1C01A3DD4 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapSz@D@@U2@U2@@-$_tlgW.c)
 */

void __fastcall rimSignalReadComplete(struct RawInputManagerObject *a1, LARGE_INTEGER *a2)
{
  LARGE_INTEGER *v3; // r12
  int v5; // edx
  int v6; // r8d
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // edx
  int v10; // r8d
  char QuadPart; // al
  LARGE_INTEGER PerformanceCounter; // rax
  int v13; // edx
  int v14; // r8d
  int updated; // eax
  int v16; // r8d
  int v17; // r9d
  void *v18; // rdx
  LARGE_INTEGER v19; // rcx
  int v20; // r8d
  int v21; // r9d
  LARGE_INTEGER v22; // rcx
  int v23; // [rsp+28h] [rbp-31h]
  __int64 v24; // [rsp+60h] [rbp+7h] BYREF
  __int64 v25; // [rsp+68h] [rbp+Fh] BYREF
  __int64 v26; // [rsp+70h] [rbp+17h] BYREF
  __int64 v27; // [rsp+78h] [rbp+1Fh] BYREF
  __int64 v28[2]; // [rsp+80h] [rbp+27h] BYREF
  __int64 v29; // [rsp+D0h] [rbp+77h] BYREF
  __int64 v30; // [rsp+D8h] [rbp+7Fh] BYREF

  v3 = a2 + 25;
  if ( (unsigned int)RIMIsInputSuppressed(a2) && (v3->LowPart & 0x80u) == 0 )
  {
    LOBYTE(v5) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_qq(
        WPP_GLOBAL_Control->AttachedDevice,
        v5,
        v6,
        (_DWORD)gRimLog,
        4,
        1,
        10,
        (__int64)&WPP_6c3dff8734b4343641ce6a69106986e7_Traceguids,
        (char)a2,
        a2[2].QuadPart);
    }
    InputTraceLogging::RIM::DropInput(a2, 5LL);
    *((_BYTE *)a1 + 776) = 1;
    return;
  }
  if ( !*((_BYTE *)a1 + 776) )
  {
    v7 = SGDGetUserSessionState();
    RIMLockExclusive(v7 + 272);
    *((LARGE_INTEGER *)a1 + 113) = KeQueryPerformanceCounter(0LL);
    *((_DWORD *)a1 + 228) = 1;
    RIMArmWatchDog();
    v8 = SGDGetUserSessionState();
    *(_QWORD *)(v8 + 280) = 0LL;
    ExReleasePushLockExclusiveEx(v8 + 272, 0LL);
    KeLeaveCriticalRegion();
    if ( (v3->LowPart & 0x80u) != 0 && *(_DWORD *)(a2[59].QuadPart + 24) != 7 )
    {
      v23 = 0;
      updated = ZwUpdateWnfStateData(&WNF_TOPE_INP_POINTER_DEVICE_ACTIVITY, 0LL, 0LL, 0LL, 0LL);
      if ( updated < 0 )
      {
        LOBYTE(v9) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                  && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                  && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_D(
            WPP_GLOBAL_Control->AttachedDevice,
            v9,
            v10,
            (_DWORD)gRimLog,
            4,
            1,
            11,
            (__int64)&WPP_6c3dff8734b4343641ce6a69106986e7_Traceguids,
            updated);
        }
      }
    }
    LOBYTE(v9) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_qqqq(
        WPP_GLOBAL_Control->AttachedDevice,
        v9,
        v10,
        (_DWORD)gRimLog,
        4,
        v23,
        12,
        (__int64)&WPP_6c3dff8734b4343641ce6a69106986e7_Traceguids,
        (char)a1,
        (char)a2,
        a2[2].QuadPart,
        *((_QWORD *)a1 + 105));
    }
    QuadPart = a2[6].QuadPart;
    if ( QuadPart )
    {
      if ( QuadPart == 2 )
      {
        if ( (v3->LowPart & 0x80u) == 0 )
        {
          if ( (unsigned int)dword_1C0289810 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C0289810, 256LL) )
          {
            v22 = a2[58];
            LODWORD(v29) = *(unsigned __int16 *)(v22.QuadPart + 18);
            LODWORD(v30) = *(unsigned __int16 *)(v22.QuadPart + 16);
            v28[0] = a2[2].QuadPart;
            LODWORD(v24) = a2[33].LowPart;
            v27 = (__int64)a1;
            v26 = (__int64)a2;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
              (unsigned int)&dword_1C0289810,
              (unsigned int)&unk_1C025A21A,
              v20,
              v21,
              (__int64)&v26,
              (__int64)&v27,
              (__int64)&v24,
              (__int64)v28,
              (__int64)&v30,
              (__int64)&v29);
          }
        }
        else if ( (unsigned int)dword_1C0289810 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C0289810, 256LL) )
        {
          v19 = a2[58];
          LODWORD(v29) = *(unsigned __int16 *)(v19.QuadPart + 18);
          LODWORD(v30) = *(unsigned __int16 *)(v19.QuadPart + 16);
          v25 = (__int64)InputTraceLogging::PointerDeviceTypeToString(*(_DWORD *)(a2[59].QuadPart + 24));
          v26 = a2[2].QuadPart;
          LODWORD(v24) = a2[33].LowPart;
          v27 = (__int64)a1;
          v28[0] = (__int64)a2;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            (int)&dword_1C0289810,
            (__int64)v28,
            (__int64)&v27,
            (__int64)&v24,
            (__int64)&v26,
            (__int64)&v25,
            (__int64)&v30,
            (__int64)&v29);
        }
        goto LABEL_13;
      }
      if ( (unsigned int)dword_1C0289810 <= 4
        || QuadPart != 1
        || !(unsigned __int8)tlgKeywordOn(&dword_1C0289810, 256LL) )
      {
LABEL_13:
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        a2[282] = a2[283];
        a2[285] = a2[286];
        a2[284] = PerformanceCounter;
        InputTraceLogging::TelemetryDebug::RIM::ReadComplete(PerformanceCounter.QuadPart);
        a2[23].HighPart |= 8u;
        ZwSetEvent(*((HANDLE *)a1 + 105), 0LL);
        ZwClose(*((HANDLE *)a1 + 105));
        *((_QWORD *)a1 + 105) = 0LL;
        return;
      }
      v18 = &unk_1C025A1DE;
    }
    else
    {
      if ( (unsigned int)dword_1C0289810 <= 4 || !(unsigned __int8)tlgKeywordOn(&dword_1C0289810, 256LL) )
        goto LABEL_13;
      v18 = &unk_1C025A1A5;
    }
    LODWORD(v29) = a2[33].LowPart;
    v30 = (__int64)a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (unsigned int)&dword_1C0289810,
      (_DWORD)v18,
      v16,
      v17,
      (__int64)&v30,
      (__int64)&v29);
    goto LABEL_13;
  }
  InputTraceLogging::RIM::SkipReadComplete(a1, (const struct RIMDEV *)a2);
  LOBYTE(v13) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_qq(
      WPP_GLOBAL_Control->AttachedDevice,
      v13,
      v14,
      (_DWORD)gRimLog,
      4,
      1,
      13,
      (__int64)&WPP_6c3dff8734b4343641ce6a69106986e7_Traceguids,
      (char)a2,
      a2[2].QuadPart);
  }
}
