/*
 * XREFs of RIMStartDeviceSpecificRead @ 0x14005B744
 * Callers:
 *     rimStartDeviceReadIfAllowed @ 0x14005B708 (rimStartDeviceReadIfAllowed.c)
 *     rimIssueReads @ 0x14005CDBC (rimIssueReads.c)
 *     RIMOnPnpNotification @ 0x140061480 (RIMOnPnpNotification.c)
 *     rimDoRimDevChangeAsyncWorkItem @ 0x1400C6E18 (rimDoRimDevChangeAsyncWorkItem.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x140122404 (rimProcessDeviceBufferAndStartRead.c)
 *     rimOnPnpArrived @ 0x14017E1FC (rimOnPnpArrived.c)
 *     rimInputApc @ 0x14017F8E0 (rimInputApc.c)
 * Callees:
 *     RawInputManagerDeviceObjectReference @ 0x140063B80 (RawInputManagerDeviceObjectReference.c)
 *     _tlgKeywordOn @ 0x140096080 (_tlgKeywordOn.c)
 *     ?StartDeviceRead@RIM@InputTraceLogging@@SAXPEBURIMDEV@@J@Z @ 0x1400D0F60 (-StartDeviceRead@RIM@InputTraceLogging@@SAXPEBURIMDEV@@J@Z.c)
 *     RIMStartDeviceRead @ 0x1400D8254 (RIMStartDeviceRead.c)
 *     EtwTraceStartInputDeviceRead @ 0x1400E06E0 (EtwTraceStartInputDeviceRead.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqd @ 0x1400EDAF4 (WPP_RECORDER_AND_TRACE_SF_qqd.c)
 *     RimDeviceTypeToRimInputTypeString @ 0x140114D9C (RimDeviceTypeToRimInputTypeString.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x14012B320 (--$Write@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     rimIsHidInputDevice @ 0x14017C7DC (rimIsHidInputDevice.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMStartDeviceSpecificRead(__int64 a1, __int64 a2)
{
  __int64 v3; // r15
  bool v4; // zf
  __int64 v6; // rcx
  int v7; // edi
  unsigned int v8; // eax
  __int64 v9; // rcx
  unsigned __int8 v10; // cl
  char v11; // si
  bool v12; // r14
  __int64 UserSessionState; // rax
  int v14; // r8d
  int v15; // edx
  __int64 v16; // rdx
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  char v20; // si
  bool v21; // r14
  __int64 v22; // rax
  int v23; // r8d
  int v24; // edx
  __int64 v25; // rdx
  int v26; // ecx
  int v27; // r8d
  int v28; // r9d
  __int64 v29; // rdx
  int v30; // ecx
  int v31; // r8d
  int v32; // r9d
  int v33; // [rsp+A8h] [rbp+48h] BYREF
  __int64 v34; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v35; // [rsp+B8h] [rbp+58h] BYREF

  v3 = a1;
  if ( (*(_DWORD *)(a2 + 168) & 0x2000) != 0 )
  {
    v33 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 65LL);
  }
  if ( (*(_DWORD *)(a2 + 168) & 0x80u) != 0 )
  {
    LOBYTE(a1) = *(_BYTE *)(a2 + 48);
    v7 = -1073740682;
    EtwTraceStartInputDeviceRead(a1, 3221226614LL);
  }
  else
  {
    v4 = *(_DWORD *)(a2 + 48) == 3;
    *(_DWORD *)(a2 + 240) = -1073741823;
    *(_QWORD *)(a2 + 248) = 0LL;
    *(_DWORD *)(a2 + 136) = 0;
    *(_QWORD *)(a2 + 144) = 0LL;
    if ( v4 )
    {
      v33 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 76LL);
    }
    if ( !*(_QWORD *)(a2 + 208) )
      return 0LL;
    if ( *(_DWORD *)(a2 + 48) == 2 )
    {
      if ( !*(_QWORD *)(a2 + 448) )
      {
        v33 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 90LL);
      }
      if ( !(unsigned int)rimIsHidInputDevice(a2, *(_QWORD *)(a2 + 440)) )
      {
        if ( (*(_DWORD *)(a2 + 168) & 0x10000) == 0 )
        {
          v33 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 97LL);
        }
        return 0LL;
      }
    }
    v6 = *(_QWORD *)(a2 + 32);
    *(_DWORD *)(a2 + 168) |= 0x80u;
    v7 = RawInputManagerDeviceObjectReference(v6);
    if ( v7 >= 0 )
    {
      v8 = RIMStartDeviceRead((PVOID)a2);
      LOBYTE(v9) = *(_BYTE *)(a2 + 48);
      v7 = v8;
      EtwTraceStartInputDeviceRead(v9, v8);
      InputTraceLogging::RIM::StartDeviceRead((const struct RIMDEV *)a2, v7);
      if ( v7 >= 0 )
      {
        if ( (*(_DWORD *)(a2 + 168) & 0x100) != 0 )
        {
          if ( (unsigned int)dword_14029AE68 > 5 && (unsigned __int8)tlgKeywordOn(&dword_14029AE68, 0x400000000000LL) )
          {
            v29 = *(unsigned int *)(a2 + 48);
            v34 = *(_QWORD *)(a2 + 200);
            v33 = v7;
            v35 = RimDeviceTypeToRimInputTypeString(a2, v29);
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
              v30,
              (unsigned int)&unk_140278F30,
              v31,
              v32,
              (__int64)&v35,
              (__int64)&v34,
              (__int64)&v33);
          }
          *(_DWORD *)(a2 + 168) &= ~0x100u;
        }
      }
      else
      {
        ObfDereferenceObject(*(PVOID *)(a2 + 32));
        if ( (v7 == -1073741670 || v7 == -1073741663 || v7 == -1073741801)
          && (v10 = *(_BYTE *)(a2 + 188), *(_BYTE *)(a2 + 188) = v10 + 1, v10 < 5u) )
        {
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v11 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
          {
            v11 = 0;
          }
          v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
            LOBYTE(v14) = v12;
            LOBYTE(v15) = v11;
            WPP_RECORDER_AND_TRACE_SF_qqd(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v15,
              v14,
              *(_QWORD *)(UserSessionState + 19392),
              2,
              1,
              10,
              (__int64)&WPP_7bf7317fea8f3c0b82ba448ae30d594a_Traceguids,
              v3,
              a2,
              v7);
          }
          if ( (unsigned int)dword_14029AE68 > 5 && (unsigned __int8)tlgKeywordOn(&dword_14029AE68, 0x400000000000LL) )
          {
            v16 = *(unsigned int *)(a2 + 48);
            v34 = *(_QWORD *)(a2 + 200);
            v33 = v7;
            v35 = RimDeviceTypeToRimInputTypeString(a2, v16);
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
              v17,
              (unsigned int)&unk_140278E8A,
              v18,
              v19,
              (__int64)&v35,
              (__int64)&v34,
              (__int64)&v33);
          }
          *(_DWORD *)(a2 + 168) &= ~0x80u;
          ZwSetEvent(*(HANDLE *)(v3 + 344), 0LL);
        }
        else
        {
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v20 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
          {
            v20 = 0;
          }
          v21 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v22 = W32GetUserSessionState(WPP_GLOBAL_Control);
            LOBYTE(v23) = v21;
            LOBYTE(v24) = v20;
            WPP_RECORDER_AND_TRACE_SF_qqd(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v24,
              v23,
              *(_QWORD *)(v22 + 19392),
              2,
              1,
              11,
              (__int64)&WPP_7bf7317fea8f3c0b82ba448ae30d594a_Traceguids,
              v3,
              a2,
              v7);
          }
          if ( (unsigned int)dword_14029AE68 > 5 && (unsigned __int8)tlgKeywordOn(&dword_14029AE68, 0x400000000000LL) )
          {
            v25 = *(unsigned int *)(a2 + 48);
            v34 = *(_QWORD *)(a2 + 200);
            v33 = v7;
            v35 = RimDeviceTypeToRimInputTypeString(a2, v25);
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
              v26,
              (unsigned int)&unk_140278EE1,
              v27,
              v28,
              (__int64)&v35,
              (__int64)&v34,
              (__int64)&v33);
          }
        }
      }
    }
  }
  return (unsigned int)v7;
}
