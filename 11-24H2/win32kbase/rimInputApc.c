/*
 * XREFs of rimInputApc @ 0x14017F8E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x14002588C (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005B440 (RIMLockExclusive.c)
 *     RIMStartDeviceSpecificRead @ 0x14005B744 (RIMStartDeviceSpecificRead.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x140060B94 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x140062674 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     _tlgKeywordOn @ 0x140096080 (_tlgKeywordOn.c)
 *     ?InputApc@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBU_IO_STATUS_BLOCK@@@Z @ 0x1400AF394 (-InputApc@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBU_IO_STATUS_BLOCK@@@Z.c)
 *     EtwTraceCompleteInputDeviceRead @ 0x1400E0710 (EtwTraceCompleteInputDeviceRead.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqd @ 0x1400EDAF4 (WPP_RECORDER_AND_TRACE_SF_qqd.c)
 *     RIMApplyPTPConfigRemedyWorker @ 0x1400F1328 (RIMApplyPTPConfigRemedyWorker.c)
 *     RimDeviceTypeToRimInputTypeString @ 0x140114D9C (RimDeviceTypeToRimInputTypeString.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x140122404 (rimProcessDeviceBufferAndStartRead.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x14012B320 (--$Write@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall rimInputApc(char *ApcContext, const struct _IO_STATUS_BLOCK *IoStatusBlock, ULONG Reserved)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  NTSTATUS Status; // esi
  __int64 v8; // rdi
  char v9; // r14
  unsigned int v10; // eax
  char v11; // cl
  char v12; // r15
  __int64 v13; // rax
  int v14; // edx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  char v18; // r15
  __int64 UserSessionState; // rax
  int v20; // edx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  char v24; // si
  char v25; // r14
  __int64 v26; // rax
  const WCHAR *v27; // [rsp+60h] [rbp-10h] BYREF
  __int64 *v28; // [rsp+68h] [rbp-8h] BYREF
  int v29; // [rsp+B0h] [rbp+40h] BYREF
  int v30; // [rsp+B8h] [rbp+48h]
  const WCHAR *v31; // [rsp+C8h] [rbp+58h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v28, "InputApc", 0LL);
  if ( ApcContext + 240 != (char *)IoStatusBlock )
  {
    v29 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1464LL);
  }
  LOBYTE(v5) = ApcContext[48];
  *(struct _IO_STATUS_BLOCK *)(ApcContext + 136) = *IoStatusBlock;
  Status = IoStatusBlock->Status;
  EtwTraceCompleteInputDeviceRead(v5, IoStatusBlock->Status, v6);
  InputTraceLogging::RIM::InputApc((const struct RIMDEV *)ApcContext, IoStatusBlock);
  v8 = *((_QWORD *)ApcContext + 40);
  if ( !*(_BYTE *)(v8 + 81) && !*(_BYTE *)(v8 + 80) )
  {
    if ( ApcContext + 240 != (char *)IoStatusBlock )
    {
      v29 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1479LL);
    }
    v9 = 1;
    if ( Status < 0 || *((_DWORD *)ApcContext + 12) == 2 && (*((_DWORD *)ApcContext + 46) & 0x80u) != 0 )
    {
      v30 = 1;
      if ( *(_QWORD *)(v8 + 832) && !*(_BYTE *)(v8 + 776) )
      {
        v29 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1496LL);
      }
      RIMLockExclusive(v8 + 104);
    }
    else
    {
      v30 = 0;
    }
    if ( *((_QWORD *)ApcContext + 26) )
    {
      RIMLockExclusive(v8 + 760);
      v10 = *((_DWORD *)ApcContext + 42) & 0xFFFFFF7F;
      *((_DWORD *)ApcContext + 42) = v10;
      if ( !*(_BYTE *)(v8 + 81) && !*(_BYTE *)(v8 + 80) )
      {
        if ( Status < 0 )
        {
          if ( (v10 & 8) == 0 && Status != -1073741536 )
          {
            v11 = ApcContext[189];
            ApcContext[189] = v11 + 1;
            if ( (unsigned __int8)v11 >= 5u )
            {
              if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
                || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
                || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
              {
                v9 = 0;
              }
              v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
                WPP_RECORDER_AND_TRACE_SF_qqd(
                  *((_QWORD *)WPP_GLOBAL_Control + 3),
                  v9,
                  v18,
                  *(_QWORD *)(UserSessionState + 19392),
                  2u,
                  1u,
                  0x19u,
                  (__int64)&WPP_8b3d8589f9583a031a0fbbc3118bab56_Traceguids,
                  v8,
                  ApcContext,
                  Status);
              }
              if ( (unsigned int)dword_14029AE68 > 5 && tlgKeywordOn((__int64)&dword_14029AE68, 0x400000000000LL) )
              {
                v20 = *((_DWORD *)ApcContext + 12);
                v31 = (const WCHAR *)*((_QWORD *)ApcContext + 25);
                v29 = Status;
                v27 = RimDeviceTypeToRimInputTypeString((__int64)ApcContext, v20);
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
                  v21,
                  byte_140279018,
                  v22,
                  v23,
                  &v27,
                  &v31,
                  (__int64)&v29);
              }
            }
            else
            {
              if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
                || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
                || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
              {
                v9 = 0;
              }
              v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v13 = W32GetUserSessionState(WPP_GLOBAL_Control);
                WPP_RECORDER_AND_TRACE_SF_qqd(
                  *((_QWORD *)WPP_GLOBAL_Control + 3),
                  v9,
                  v12,
                  *(_QWORD *)(v13 + 19392),
                  2u,
                  1u,
                  0x18u,
                  (__int64)&WPP_8b3d8589f9583a031a0fbbc3118bab56_Traceguids,
                  v8,
                  ApcContext,
                  Status);
              }
              if ( (unsigned int)dword_14029AE68 > 5 && tlgKeywordOn((__int64)&dword_14029AE68, 0x400000000000LL) )
              {
                v14 = *((_DWORD *)ApcContext + 12);
                v31 = (const WCHAR *)*((_QWORD *)ApcContext + 25);
                v29 = Status;
                v27 = RimDeviceTypeToRimInputTypeString((__int64)ApcContext, v14);
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
                  v15,
                  byte_140278FC5,
                  v16,
                  v17,
                  &v27,
                  &v31,
                  (__int64)&v29);
              }
              RIMStartDeviceSpecificRead(v8, (__int64)ApcContext);
            }
          }
        }
        else
        {
          ApcContext[189] = 0;
          *((LARGE_INTEGER *)ApcContext + 283) = KeQueryPerformanceCounter(0LL);
          *((_QWORD *)ApcContext + 286) = MEMORY[0xFFFFF78000000014];
          rimProcessDeviceBufferAndStartRead((struct RawInputManagerObject *)v8, (struct RIMDEV *)ApcContext, 1);
        }
      }
      RIMUnlockExclusive(v8 + 760);
    }
    else if ( Status >= 0 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v24 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v24 = 0;
      }
      v25 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v26 = W32GetUserSessionState(WPP_GLOBAL_Control);
        WPP_RECORDER_AND_TRACE_SF_qq(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v24,
          v25,
          *(_QWORD *)(v26 + 19392),
          2u,
          1u,
          0x1Au,
          (__int64)&WPP_8b3d8589f9583a031a0fbbc3118bab56_Traceguids,
          v8,
          ApcContext);
      }
    }
    if ( v30 )
      RIMUnlockExclusive(v8 + 104);
    if ( IoStatusBlock->Status != -1073741536
      && !*((_DWORD *)ApcContext + 12)
      && (*((_DWORD *)ApcContext + 42) & 0x8000000) != 0 )
    {
      RIMApplyPTPConfigRemedyWorker(v8, (__int64)ApcContext);
    }
  }
  ObfDereferenceObject(*((PVOID *)ApcContext + 4));
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v28);
}
