/*
 * XREFs of RIMGetMaxCountFeatureDetails @ 0x14017CAC0
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1401DECF0 (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapSz@G@@U1@U1@U?$_tlgWrapperByVal@$03@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapSz@G@@33AEBU?$_tlgWrapperByVal@$03@@5@Z @ 0x140004B88 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapSz@G@@U1@U1@U-$_tlgWrapperByVal@$03@@U3@@-$_tlgW.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14005DCC0 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     _tlgKeywordOn @ 0x140096080 (_tlgKeywordOn.c)
 *     ?LogBlockingIoControlRequest@RimTelemetry@@SAXPEBDQEAURIMDEV@@_KJK@Z @ 0x1400B14B8 (-LogBlockingIoControlRequest@RimTelemetry@@SAXPEBDQEAURIMDEV@@_KJK@Z.c)
 *     ??0RimTelemetryScopedIoctlObserver@@QEAA@PEBDQEAURIMDEV@@PEAJK@Z @ 0x1401269E0 (--0RimTelemetryScopedIoctlObserver@@QEAA@PEBDQEAURIMDEV@@PEAJK@Z.c)
 *     RIMGetFeatureReport @ 0x140155528 (RIMGetFeatureReport.c)
 *     ?GetMaxCount@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x14019ABBC (-GetMaxCount@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     rimSleep @ 0x1401D2850 (rimSleep.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memset @ 0x14023F500 (memset.c)
 */

__int64 __fastcall RIMGetMaxCountFeatureDetails(
        struct RIMDEV *a1,
        __int64 a2,
        __int64 a3,
        struct _HIDP_PREPARSED_DATA *a4,
        _WORD *a5,
        struct _DEVICE_OBJECT *a6,
        struct _FILE_OBJECT *a7)
{
  char v9; // di
  unsigned int v10; // ebx
  union _LARGE_INTEGER *v11; // r14
  int v12; // edi
  bool v13; // bl
  bool v14; // di
  __int64 UserSessionState; // rax
  int v16; // r8d
  int v17; // edx
  LARGE_INTEGER PerformanceCounter; // rax
  char v19; // bl
  bool v20; // di
  bool v21; // r12
  __int64 v22; // rax
  int v23; // r8d
  int v24; // edx
  ULONG v25; // edi
  int v26; // ebx
  ULONG v27; // ebx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // r8
  const WCHAR *v31; // r12
  unsigned int *v32; // rdi
  unsigned int v33; // ecx
  bool v34; // di
  bool v35; // si
  __int64 v36; // rax
  int v37; // r8d
  int v38; // edx
  bool v39; // si
  __int64 v40; // rax
  int v41; // r8d
  int v42; // edx
  int SpecificValueCaps; // [rsp+60h] [rbp-A0h] BYREF
  ULONG UsageValue; // [rsp+64h] [rbp-9Ch] BYREF
  __int64 v46; // [rsp+68h] [rbp-98h] BYREF
  USHORT ValueCapsLength[2]; // [rsp+70h] [rbp-90h] BYREF
  ULONG v48; // [rsp+74h] [rbp-8Ch] BYREF
  struct RIMDEV *v49; // [rsp+78h] [rbp-88h] BYREF
  const WCHAR *v50; // [rsp+80h] [rbp-80h] BYREF
  __int64 v51; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 QuadPart; // [rsp+90h] [rbp-70h] BYREF
  PHIDP_PREPARSED_DATA v53; // [rsp+98h] [rbp-68h]
  __int64 v54; // [rsp+A0h] [rbp-60h]
  _QWORD v55[3]; // [rsp+A8h] [rbp-58h] BYREF
  unsigned int v56; // [rsp+C0h] [rbp-40h]
  int *v57; // [rsp+C8h] [rbp-38h]
  struct _HIDP_VALUE_CAPS ValueCaps; // [rsp+D0h] [rbp-30h] BYREF

  v54 = a2;
  v50 = (const WCHAR *)a3;
  v49 = a1;
  v53 = a4;
  v51 = (__int64)a6;
  memset(&ValueCaps, 0, sizeof(ValueCaps));
  v9 = 1;
  ValueCapsLength[0] = 1;
  SpecificValueCaps = HidP_GetSpecificValueCaps(HidP_Feature, 0xDu, 0, 0x55u, &ValueCaps, ValueCapsLength, a4);
  v10 = SpecificValueCaps;
  if ( SpecificValueCaps < 0 )
    return v10;
  v11 = (union _LARGE_INTEGER *)Win32AllocPoolZInitImpl(64LL, (unsigned __int16)a5[4], 0x69667352u);
  if ( v11 )
  {
    v12 = 2;
    if ( *(_DWORD *)(a3 + 24) == 7 )
      v12 = 10;
    UsageValue = 0;
    v48 = v12;
    LODWORD(v46) = 0;
    QuadPart = KeQueryPerformanceCounter(0LL).QuadPart;
    while ( 1 )
    {
      InputTraceLogging::RIM::GetMaxCount(v49);
      v13 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v16) = v14;
        LOBYTE(v17) = v13;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v17,
          v16,
          *(_QWORD *)(UserSessionState + 19392),
          4,
          1,
          31,
          (__int64)&WPP_0506f230af1236dcb1827f6a44be6f8f_Traceguids,
          (char)v49);
      }
      RimTelemetryScopedIoctlObserver::RimTelemetryScopedIoctlObserver(
        (RimTelemetryScopedIoctlObserver *)v55,
        "GetMaxCountFeature::GetFeatureReport",
        v49,
        &SpecificValueCaps,
        0);
      SpecificValueCaps = RIMGetFeatureReport(v11, a5[4], ValueCaps.ReportID, (struct _DEVICE_OBJECT *)v51, a7);
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      RimTelemetry::LogBlockingIoControlRequest(
        (const char *)v55[2],
        (struct RIMDEV *const)v55[1],
        (unsigned __int64)(1000 * (PerformanceCounter.QuadPart - v55[0])) / gliQpcFreq.QuadPart,
        *v57,
        v56);
      v19 = SpecificValueCaps;
      if ( !SpecificValueCaps
        || SpecificValueCaps == -1073741667
        || SpecificValueCaps == -1073741810
        || SpecificValueCaps == 1167
        || SpecificValueCaps == 433 )
      {
        break;
      }
      UsageValue = SpecificValueCaps;
      v20 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
      v21 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v22 = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v23) = v21;
        LOBYTE(v24) = v20;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v24,
          v23,
          *(_QWORD *)(v22 + 19392),
          3,
          1,
          32,
          (__int64)&WPP_0506f230af1236dcb1827f6a44be6f8f_Traceguids,
          v19);
      }
      v25 = v48;
      v26 = v46;
      if ( (unsigned int)v46 < v48 - 1 )
        rimSleep();
      v27 = v26 + 1;
      LODWORD(v46) = v27;
      if ( v27 >= v25 )
        goto LABEL_32;
    }
    v27 = v46;
LABEL_32:
    KeQueryPerformanceCounter(0LL);
    if ( (unsigned int)dword_14029AE68 > 5 && tlgKeywordOn((__int64)&dword_14029AE68, 0x400000000000LL) )
    {
      v30 = v28 - QuadPart;
      v31 = v50;
      v48 = UsageValue;
      UsageValue = SpecificValueCaps;
      v51 = v27 + 1;
      QuadPart = (unsigned __int64)(1000 * v30) / gliQpcFreq.QuadPart;
      v50 = (const WCHAR *)*((_QWORD *)v50 + 48);
      v49 = (struct RIMDEV *)*((int *)v31 + 241);
      v46 = *((int *)v31 + 6);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v51,
        (__int64)&unk_140277CE9,
        v30,
        v29,
        (__int64)&v46,
        (__int64)&v49,
        &v50,
        (__int64)&QuadPart,
        (__int64)&v51,
        (__int64)&UsageValue,
        (__int64)&v48);
    }
    else
    {
      v31 = v50;
    }
    if ( SpecificValueCaps )
    {
      SpecificValueCaps = -1073741668;
LABEL_66:
      GreDeleteFastMutex((char *)v11);
      return (unsigned int)SpecificValueCaps;
    }
    v32 = (unsigned int *)(v31 + 388);
    SpecificValueCaps = HidP_GetUsageValue(
                          HidP_Feature,
                          0xDu,
                          0,
                          0x55u,
                          (PULONG)v31 + 194,
                          v53,
                          (PCHAR)v11,
                          (unsigned __int16)a5[4]);
    v10 = SpecificValueCaps;
    if ( SpecificValueCaps >= 0 && (v33 = *v32) != 0 )
    {
      if ( v33 > 0x100 )
      {
LABEL_43:
        v10 = -1073741668;
        SpecificValueCaps = -1073741668;
        goto LABEL_65;
      }
      if ( *a5 == 5 )
      {
        *v32 = v33 + 1;
      }
      else if ( *(_DWORD *)(v54 + 720) + v33 > 0xA00 )
      {
        goto LABEL_43;
      }
    }
    else
    {
      v34 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
      v35 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v34 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v36 = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v37) = v35;
        LOBYTE(v38) = v34;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v38,
          v37,
          *(_QWORD *)(v36 + 19392),
          3,
          1,
          33,
          (__int64)&WPP_0506f230af1236dcb1827f6a44be6f8f_Traceguids,
          v10);
      }
      v10 = -1073741668;
      SpecificValueCaps = -1073741668;
    }
    if ( (v10 & 0x80000000) == 0 && *a5 == 5 )
    {
      UsageValue = 0;
      *((_DWORD *)v31 + 241) = 3;
      SpecificValueCaps = HidP_GetUsageValue(
                            HidP_Feature,
                            0xDu,
                            0,
                            0x59u,
                            &UsageValue,
                            v53,
                            (PCHAR)v11,
                            (unsigned __int16)a5[4]);
      v10 = SpecificValueCaps;
      if ( SpecificValueCaps >= 0 )
        *((_DWORD *)v31 + 241) = ((UsageValue & 1) != 0) + 1;
    }
  }
  else
  {
    v10 = -1073741668;
    SpecificValueCaps = -1073741668;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
    {
      v9 = 0;
    }
    v39 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v9 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v10;
    v40 = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v41) = v39;
    LOBYTE(v42) = v9;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v42,
      v41,
      *(_QWORD *)(v40 + 19392),
      3,
      1,
      34,
      (__int64)&WPP_0506f230af1236dcb1827f6a44be6f8f_Traceguids);
    v10 = SpecificValueCaps;
  }
LABEL_65:
  if ( v11 )
    goto LABEL_66;
  return v10;
}
