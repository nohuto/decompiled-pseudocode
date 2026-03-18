/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1400F38B0
 * Callers:
 *     ?DeliverDeviceResetRequest@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x14005A744 (-DeliverDeviceResetRequest@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     ?CompleteDeviceResetRequest@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x14005AA50 (-CompleteDeviceResetRequest@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     ?ReadComplete@RIM@TelemetryDebug@InputTraceLogging@@SAX_K@Z @ 0x14005D6CC (-ReadComplete@RIM@TelemetryDebug@InputTraceLogging@@SAX_K@Z.c)
 *     ?BindToInputSpace@Pointer@InputTraceLogging@@SAXPEBURIMDEV@@PEBUtagHID_POINTER_DEVICE_INFO@@PEBUINPUT_SPACE@@PEBUINPUT_SPACE_REGION@@@Z @ 0x1400C73D4 (-BindToInputSpace@Pointer@InputTraceLogging@@SAXPEBURIMDEV@@PEBUtagHID_POINTER_DEVICE_INFO@@PEBU.c)
 *     ?EndAllActiveContacts@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1400C8E0C (-EndAllActiveContacts@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     ?StartFrame@RIM@TelemetryDebug@InputTraceLogging@@SAX_K@Z @ 0x1400FFE00 (-StartFrame@RIM@TelemetryDebug@InputTraceLogging@@SAX_K@Z.c)
 *     ?CreateMsgData@PointerMsg@InputTraceLogging@@SAX_K@Z @ 0x140113C18 (-CreateMsgData@PointerMsg@InputTraceLogging@@SAX_K@Z.c)
 *     ?FreeMsgData@PointerMsg@InputTraceLogging@@SAX_K@Z @ 0x14011406C (-FreeMsgData@PointerMsg@InputTraceLogging@@SAX_K@Z.c)
 *     ?CoalesceInput@Mouse@InputTraceLogging@@SAX_K@Z @ 0x140121784 (-CoalesceInput@Mouse@InputTraceLogging@@SAX_K@Z.c)
 *     ?Delete@InputSink@InputTraceLogging@@SAXPEBUCompositionInputObject@@@Z @ 0x140126E24 (-Delete@InputSink@InputTraceLogging@@SAXPEBUCompositionInputObject@@@Z.c)
 *     ?ResumeDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1401272F8 (-ResumeDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     ?PauseDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1401286EC (-PauseDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     ?GetMaxCount@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x14019ABBC (-GetMaxCount@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     ?SkipReadComplete@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMDEV@@@Z @ 0x14019CA54 (-SkipReadComplete@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMDEV@@@Z.c)
 *     ?ContactAssessmentTimer@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x14019EF70 (-ContactAssessmentTimer@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     ?CallInterceptor@Mouse@InputTraceLogging@@SAX_K@Z @ 0x14021BF10 (-CallInterceptor@Mouse@InputTraceLogging@@SAX_K@Z.c)
 *     ?DequeueUserModeInput@Mouse@InputTraceLogging@@SAX_KPEBVCInputDest@@@Z @ 0x14021C77C (-DequeueUserModeInput@Mouse@InputTraceLogging@@SAX_KPEBVCInputDest@@@Z.c)
 *     ?RerouteWheel@Mouse@InputTraceLogging@@SAX_K@Z @ 0x14021E738 (-RerouteWheel@Mouse@InputTraceLogging@@SAX_K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  unsigned __int8 *v8; // [rsp+58h] [rbp-28h]
  int v9; // [rsp+60h] [rbp-20h]
  int v10; // [rsp+64h] [rbp-1Ch]
  __int64 v11; // [rsp+68h] [rbp-18h]
  int v12; // [rsp+70h] [rbp-10h]
  int v13; // [rsp+74h] [rbp-Ch]

  v13 = 0;
  v11 = a5;
  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  EventDescriptor.Keyword = *(_QWORD *)(a2 + 3);
  UserData.Ptr = *(_QWORD *)(a1 + 8);
  v12 = 8;
  UserData.Size = *(unsigned __int16 *)UserData.Ptr;
  v9 = *(unsigned __int16 *)(a2 + 11);
  v8 = a2 + 11;
  UserData.Reserved = 2;
  v10 = 1;
  return EtwWriteTransfer(*(_QWORD *)(a1 + 32), &EventDescriptor, 0LL, 0LL, 3u, &UserData);
}
