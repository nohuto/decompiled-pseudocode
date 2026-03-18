/*
 * XREFs of RIMDeliverConfigRequest @ 0x1400A90C8
 * Callers:
 *     RIMUnRevokeConfigurationChange @ 0x1400A89A0 (RIMUnRevokeConfigurationChange.c)
 *     RIMApiSetSetUserPTPEnabledPreference @ 0x1400A89C8 (RIMApiSetSetUserPTPEnabledPreference.c)
 *     RIMConfigurePointerDevice @ 0x1400A8E7C (RIMConfigurePointerDevice.c)
 *     RIMAllocateHidConfigDesc @ 0x140127788 (RIMAllocateHidConfigDesc.c)
 *     RIMRevokeConfigurationChange @ 0x14019EE50 (RIMRevokeConfigurationChange.c)
 *     EnablePTPDevices @ 0x1401B16B0 (EnablePTPDevices.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@5@Z @ 0x1400049B0 (--$Write@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U3@@-$_tlgWriteTe.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _tlgKeywordOn @ 0x140096080 (_tlgKeywordOn.c)
 *     RIMGetDeviceObjectPointer @ 0x1400B1270 (RIMGetDeviceObjectPointer.c)
 *     ?LogBlockingIoControlRequest@RimTelemetry@@SAXPEBDQEAURIMDEV@@_KJK@Z @ 0x1400B14B8 (-LogBlockingIoControlRequest@RimTelemetry@@SAXPEBDQEAURIMDEV@@_KJK@Z.c)
 *     RimDeviceTypeToRimInputTypeString @ 0x140114D9C (RimDeviceTypeToRimInputTypeString.c)
 *     ??0RimTelemetryScopedIoctlObserver@@QEAA@PEBDQEAURIMDEV@@PEAJK@Z @ 0x1401269E0 (--0RimTelemetryScopedIoctlObserver@@QEAA@PEBDQEAURIMDEV@@PEAJK@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qDDdd @ 0x140128FF0 (WPP_RECORDER_AND_TRACE_SF_qDDdd.c)
 *     ?DeliverConfigRequest@RIM@InputTraceLogging@@SAXPEBURIMDEV@@GK@Z @ 0x140132E50 (-DeliverConfigRequest@RIM@InputTraceLogging@@SAXPEBURIMDEV@@GK@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memset @ 0x14023F500 (memset.c)
 */

__int64 __fastcall RIMDeliverConfigRequest(struct RIMDEV *a1, __int64 a2, unsigned __int16 a3, unsigned int a4)
{
  char v8; // r14
  bool v9; // r15
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  ULONG v13; // r15d
  int v14; // edx
  int v15; // r8d
  NTSTATUS v16; // eax
  bool v17; // bl
  PKEVENT NotificationEvent; // r14
  bool v19; // di
  __int64 v20; // rax
  int v21; // r8d
  int v22; // edx
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  bool v28; // bl
  bool v29; // bl
  bool v30; // di
  __int64 v31; // rax
  int v32; // r8d
  int v33; // edx
  bool v34; // di
  __int64 v35; // rax
  int v36; // r8d
  int v37; // edx
  struct _HIDP_PREPARSED_DATA *ValueCapsLength; // [rsp+28h] [rbp-D8h]
  struct _HIDP_PREPARSED_DATA *PreparsedData; // [rsp+30h] [rbp-D0h]
  CHAR *PreparsedDataa; // [rsp+30h] [rbp-D0h]
  ULONG ReportLength; // [rsp+38h] [rbp-C8h]
  int SpecificValueCaps; // [rsp+70h] [rbp-90h] BYREF
  ULONG UsageValue[2]; // [rsp+78h] [rbp-88h] BYREF
  USHORT ButtonCapsLength; // [rsp+80h] [rbp-80h] BYREF
  USHORT UsageList[4]; // [rsp+88h] [rbp-78h] BYREF
  HANDLE FileHandle; // [rsp+90h] [rbp-70h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+98h] [rbp-68h] BYREF
  const WCHAR *v49; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v50[3]; // [rsp+A8h] [rbp-58h] BYREF
  unsigned int v51; // [rsp+C0h] [rbp-40h]
  int *v52; // [rsp+C8h] [rbp-38h]
  struct _HIDP_VALUE_CAPS ValueCaps; // [rsp+D0h] [rbp-30h] BYREF
  _HIDP_BUTTON_CAPS ButtonCaps; // [rsp+120h] [rbp+20h] BYREF

  UsageValue[0] = a4;
  memset(&ValueCaps, 0, sizeof(ValueCaps));
  memset(&ButtonCaps, 0, sizeof(ButtonCaps));
  v8 = 1;
  ButtonCapsLength = 1;
  if ( !*(_QWORD *)(a2 + 32) )
  {
    SpecificValueCaps = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1570LL);
  }
  if ( !*(_WORD *)(a2 + 48) )
  {
    *(_DWORD *)UsageList = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1571LL);
  }
  InputTraceLogging::RIM::DeliverConfigRequest(a1, a3, a4);
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v8 = 0;
  }
  v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v11) = v9;
    LOBYTE(v12) = v8;
    WPP_RECORDER_AND_TRACE_SF_qDDdd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v12,
      v11,
      *(_QWORD *)(UserSessionState + 19392));
  }
  memset(*(void **)(a2 + 32), 0, *(unsigned __int16 *)(a2 + 48));
  PreparsedData = *(struct _HIDP_PREPARSED_DATA **)(a2 + 16);
  if ( a3 == 82 )
  {
    v13 = UsageValue[0];
    SpecificValueCaps = HidP_GetSpecificValueCaps(
                          HidP_Feature,
                          0xDu,
                          0,
                          0x52u,
                          &ValueCaps,
                          &ButtonCapsLength,
                          PreparsedData);
    v15 = SpecificValueCaps;
    if ( SpecificValueCaps != 1114112 )
      goto LABEL_20;
    **(_BYTE **)(a2 + 32) = ValueCaps.ReportID;
    v16 = HidP_SetUsageValue(
            HidP_Feature,
            0xDu,
            0,
            0x52u,
            v13,
            *(PHIDP_PREPARSED_DATA *)(a2 + 16),
            *(PCHAR *)(a2 + 32),
            *(unsigned __int16 *)(a2 + 48));
    goto LABEL_15;
  }
  v13 = UsageValue[0];
  SpecificValueCaps = HidP_GetSpecificButtonCaps(
                        HidP_Feature,
                        0xDu,
                        0,
                        a3,
                        &ButtonCaps,
                        &ButtonCapsLength,
                        PreparsedData);
  v15 = SpecificValueCaps;
  if ( SpecificValueCaps == 1114112 )
  {
    **(_BYTE **)(a2 + 32) = ButtonCaps.ReportID;
    if ( v13 )
    {
      ReportLength = *(unsigned __int16 *)(a2 + 48);
      PreparsedDataa = *(CHAR **)(a2 + 32);
      ValueCapsLength = *(struct _HIDP_PREPARSED_DATA **)(a2 + 16);
      UsageValue[0] = 2;
      *(_DWORD *)UsageList = 5767255;
      v16 = HidP_SetUsages(HidP_Feature, 0xDu, 0, UsageList, UsageValue, ValueCapsLength, PreparsedDataa, ReportLength);
LABEL_15:
      v15 = v16;
      SpecificValueCaps = v16;
      goto LABEL_20;
    }
    v15 = SpecificValueCaps;
  }
LABEL_20:
  if ( v15 == 1114112 )
  {
    v17 = 0;
    *(_QWORD *)UsageValue = 0LL;
    Timeout.QuadPart = 0LL;
    FileHandle = 0LL;
    *(_QWORD *)UsageList = 0LL;
    SpecificValueCaps = RIMGetDeviceObjectPointer(
                          (int)a1 + 192,
                          v14,
                          1114112,
                          (unsigned int)&FileHandle,
                          (__int64)UsageValue,
                          (__int64)&Timeout);
    v15 = SpecificValueCaps;
    if ( SpecificValueCaps >= 0 )
    {
      NotificationEvent = IoCreateNotificationEvent(0LL, (PHANDLE)UsageList);
      RimTelemetryScopedIoctlObserver::RimTelemetryScopedIoctlObserver(
        (RimTelemetryScopedIoctlObserver *)v50,
        "DeliverConfigRequest",
        a1,
        &SpecificValueCaps,
        0);
      SpecificValueCaps = ZwDeviceIoControlFile(
                            FileHandle,
                            *(HANDLE *)UsageList,
                            0LL,
                            0LL,
                            (PIO_STATUS_BLOCK)a1 + 15,
                            0xB0191u,
                            *(PVOID *)(a2 + 32),
                            *(unsigned __int16 *)(a2 + 48),
                            0LL,
                            0);
      if ( SpecificValueCaps == 259 )
      {
        if ( NotificationEvent )
        {
          Timeout.QuadPart = -10000000LL;
          if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0 )
          {
            v17 = *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
          }
          v19 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v20 = W32GetUserSessionState(WPP_GLOBAL_Control);
            LOBYTE(v21) = v19;
            LOBYTE(v22) = v17;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v22,
              v21,
              *(_QWORD *)(v20 + 19392),
              4,
              1,
              66,
              (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids);
          }
          SpecificValueCaps = KeWaitForSingleObject(NotificationEvent, Executive, 0, 0, &Timeout);
        }
        else
        {
          SpecificValueCaps = -1073741536;
        }
      }
      ObfDereferenceObject(*(PVOID *)UsageValue);
      ZwClose(FileHandle);
      ZwClose(*(HANDLE *)UsageList);
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      RimTelemetry::LogBlockingIoControlRequest(
        (const char *)v50[2],
        (struct RIMDEV *const)v50[1],
        (unsigned __int64)(1000 * (PerformanceCounter.QuadPart - v50[0])) / gliQpcFreq.QuadPart,
        *v52,
        v51);
      v15 = SpecificValueCaps;
    }
  }
  else if ( (unsigned __int16)(a3 - 87) <= 1u )
  {
    v29 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v30 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v29 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v31 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v32) = v30;
      LOBYTE(v33) = v29;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v33,
        v32,
        *(_QWORD *)(v31 + 19392),
        4,
        1,
        67,
        (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids);
    }
    v15 = 0;
    SpecificValueCaps = 0;
  }
  if ( v15 < 0 )
  {
    if ( (unsigned int)dword_14029AE68 > 5 && tlgKeywordOn((__int64)&dword_14029AE68, 0x400000000000LL) )
    {
      v24 = *((unsigned int *)a1 + 12);
      Timeout = *(union _LARGE_INTEGER *)((char *)a1 + 200);
      *(_DWORD *)UsageList = v15;
      LODWORD(FileHandle) = v13;
      LOWORD(UsageValue[0]) = a3;
      v49 = (const WCHAR *)RimDeviceTypeToRimInputTypeString(a1, v24);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v25,
        (__int64)&unk_140277BD4,
        v26,
        v27,
        &v49,
        (const WCHAR **)&Timeout,
        (__int64)UsageValue,
        (__int64)&FileHandle,
        (__int64)UsageList);
      v15 = SpecificValueCaps;
    }
    v28 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v34 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v28 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v35 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v36) = v34;
      LOBYTE(v37) = v28;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v37,
        v36,
        *(_QWORD *)(v35 + 19392),
        2,
        1,
        68,
        (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids);
      return (unsigned int)SpecificValueCaps;
    }
  }
  return (unsigned int)v15;
}
