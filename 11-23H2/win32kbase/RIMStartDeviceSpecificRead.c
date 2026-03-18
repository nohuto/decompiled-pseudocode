/*
 * XREFs of RIMStartDeviceSpecificRead @ 0x1C00789D8
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0004A38 (rimProcessDeviceBufferAndStartRead.c)
 *     RIMOnPnpNotification @ 0x1C0073820 (RIMOnPnpNotification.c)
 *     rimStartDeviceReadIfAllowed @ 0x1C0075138 (rimStartDeviceReadIfAllowed.c)
 *     rimOnPnpArrived @ 0x1C0076A78 (rimOnPnpArrived.c)
 *     rimDoRimDevChangeAsyncWorkItem @ 0x1C00BC9DC (rimDoRimDevChangeAsyncWorkItem.c)
 *     rimInputApc @ 0x1C00E2180 (rimInputApc.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0053E90 (_tlgKeywordOn.c)
 *     RawInputManagerDeviceObjectReference @ 0x1C0078960 (RawInputManagerDeviceObjectReference.c)
 *     RimDeviceTypeToRimInputTypeString @ 0x1C0078D74 (RimDeviceTypeToRimInputTypeString.c)
 *     RIMStartDeviceRead @ 0x1C0079FB4 (RIMStartDeviceRead.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C007A034 (--$Write@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     EtwTraceStartInputDeviceRead @ 0x1C007A2A0 (EtwTraceStartInputDeviceRead.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqd @ 0x1C007ABD0 (WPP_RECORDER_AND_TRACE_SF_qqd.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?RimDevTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C00E091C (-RimDevTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     rimIsHidInputDevice @ 0x1C00E0F92 (rimIsHidInputDevice.c)
 *     ?DbgPrintGDI@@YAXPEADZZ @ 0x1C0150000 (-DbgPrintGDI@@YAXPEADZZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C01A365C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate.c)
 */

__int64 __fastcall RIMStartDeviceSpecificRead(HANDLE *a1, __int64 a2)
{
  HANDLE *v3; // r15
  void *v4; // rcx
  int v5; // edi
  unsigned int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v11; // ecx
  unsigned __int8 v12; // cl
  int v13; // edx
  int v14; // r8d
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // edx
  int v18; // r8d
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // [rsp+20h] [rbp-40h]
  __int64 v22; // [rsp+A8h] [rbp+48h] BYREF
  __int64 v23; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v24; // [rsp+B8h] [rbp+58h] BYREF

  v3 = a1;
  if ( (*(_DWORD *)(a2 + 184) & 0x2000) != 0 )
  {
    LODWORD(v22) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 64LL);
  }
  LOBYTE(a1) = *(_BYTE *)(a2 + 48);
  if ( (*(_DWORD *)(a2 + 184) & 0x80u) != 0 )
  {
    v5 = -1073740682;
    EtwTraceStartInputDeviceRead(a1, 3221226614LL);
    return (unsigned int)v5;
  }
  *(_DWORD *)(a2 + 256) = -1073741823;
  *(_QWORD *)(a2 + 264) = 0LL;
  *(_DWORD *)(a2 + 152) = 0;
  *(_QWORD *)(a2 + 160) = 0LL;
  if ( (_BYTE)a1 == 3 )
  {
    LODWORD(v22) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 75LL);
  }
  if ( !*(_QWORD *)(a2 + 224) )
    return 0LL;
  if ( *(_BYTE *)(a2 + 48) != 2 )
    goto LABEL_8;
  if ( !*(_QWORD *)(a2 + 464) )
  {
    LODWORD(v22) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 89LL);
  }
  if ( (unsigned int)rimIsHidInputDevice(a2, *(_QWORD *)(a2 + 456)) )
  {
LABEL_8:
    v4 = *(void **)(a2 + 32);
    *(_DWORD *)(a2 + 184) |= 0x80u;
    v5 = RawInputManagerDeviceObjectReference(v4);
    if ( v5 >= 0 )
    {
      v6 = RIMStartDeviceRead((PVOID)a2);
      LOBYTE(v7) = *(_BYTE *)(a2 + 48);
      v5 = v6;
      EtwTraceStartInputDeviceRead(v7, v6);
      if ( (unsigned int)dword_1C0289810 > 5 && tlgKeywordOn((__int64)&dword_1C0289810, 256LL) )
      {
        v11 = *(unsigned __int8 *)(a2 + 48);
        LODWORD(v22) = v5;
        v23 = (__int64)InputTraceLogging::RimDevTypeToString(v11);
        v24 = a2;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
          (int)&dword_1C0289810,
          (__int64)&v24,
          (__int64)&v23,
          (__int64)&v22);
      }
      if ( v5 < 0 )
      {
        ObfDereferenceObject(*(PVOID *)(a2 + 32));
        if ( (v5 == -1073741670 || v5 == -1073741663 || v5 == -1073741801)
          && (v12 = *(_BYTE *)(a2 + 204), *(_BYTE *)(a2 + 204) = v12 + 1, v12 < 5u) )
        {
          DbgPrintGDI(
            ":rimInputApc [pRimObj:%p, pRimDev:%p] Status: %08x..retrying read as maximum retryReads not reached\n",
            v3,
            (const void *)a2,
            v5);
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
            || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            LOBYTE(v13) = 0;
          }
          if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_qqd(
              WPP_GLOBAL_Control->AttachedDevice,
              v13,
              v14,
              (_DWORD)gRimLog,
              v21,
              1,
              10,
              (__int64)&WPP_978b37271e493f0f4db770890ab25331_Traceguids,
              (char)v3,
              a2,
              v5);
          }
          if ( (unsigned int)dword_1C02882F8 > 5 && tlgKeywordOn((__int64)&dword_1C02882F8, 0x400000000000LL) )
          {
            v15 = *(unsigned __int8 *)(a2 + 48);
            v23 = *(_QWORD *)(a2 + 216);
            LODWORD(v22) = v5;
            v24 = RimDeviceTypeToRimInputTypeString(a2, v15);
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
              v16,
              &unk_1C0259814);
          }
          *(_DWORD *)(a2 + 184) &= ~0x80u;
          ZwSetEvent(v3[43], 0LL);
        }
        else
        {
          DbgPrintGDI(
            ":rimInputApc [pRimObj:%p, pRimDev:%p] Status: %X..not retrying read as maximum retryReads reached or encount"
            "ered non-memory error",
            v3,
            (const void *)a2,
            v5);
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
            || (LOBYTE(v17) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            LOBYTE(v17) = 0;
          }
          if ( (_BYTE)v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v18) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_qqd(
              WPP_GLOBAL_Control->AttachedDevice,
              v17,
              v18,
              (_DWORD)gRimLog,
              v21,
              1,
              11,
              (__int64)&WPP_978b37271e493f0f4db770890ab25331_Traceguids,
              (char)v3,
              a2,
              v5);
          }
          if ( (unsigned int)dword_1C02882F8 > 5 && tlgKeywordOn((__int64)&dword_1C02882F8, 0x400000000000LL) )
          {
            v19 = *(unsigned __int8 *)(a2 + 48);
            v23 = *(_QWORD *)(a2 + 216);
            LODWORD(v22) = v5;
            v24 = RimDeviceTypeToRimInputTypeString(a2, v19);
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
              v20,
              &unk_1C025976A);
          }
        }
      }
      else if ( (*(_DWORD *)(a2 + 184) & 0x100) != 0 )
      {
        if ( (unsigned int)dword_1C02882F8 > 5 && tlgKeywordOn((__int64)&dword_1C02882F8, 0x400000000000LL) )
        {
          v8 = *(unsigned __int8 *)(a2 + 48);
          v23 = *(_QWORD *)(a2 + 216);
          LODWORD(v22) = v5;
          v24 = RimDeviceTypeToRimInputTypeString(a2, v8);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
            v9,
            &unk_1C02597B9);
        }
        *(_DWORD *)(a2 + 184) &= ~0x100u;
      }
    }
    return (unsigned int)v5;
  }
  if ( (*(_DWORD *)(a2 + 184) & 0x10000) == 0 )
  {
    LODWORD(v22) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 96LL);
  }
  return 0LL;
}
