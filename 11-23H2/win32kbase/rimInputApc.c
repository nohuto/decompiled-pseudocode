/*
 * XREFs of rimInputApc @ 0x1C00E2180
 * Callers:
 *     <none>
 * Callees:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0004A38 (rimProcessDeviceBufferAndStartRead.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C0052D0C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0052D50 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     _tlgKeywordOn @ 0x1C0053E90 (_tlgKeywordOn.c)
 *     RIMLockExclusive @ 0x1C0055140 (RIMLockExclusive.c)
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C00742F0 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C00749F8 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     RIMStartDeviceSpecificRead @ 0x1C00789D8 (RIMStartDeviceSpecificRead.c)
 *     RimDeviceTypeToRimInputTypeString @ 0x1C0078D74 (RimDeviceTypeToRimInputTypeString.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C007A034 (--$Write@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqd @ 0x1C007ABD0 (WPP_RECORDER_AND_TRACE_SF_qqd.c)
 *     EtwTraceCompleteInputDeviceRead @ 0x1C00C4C70 (EtwTraceCompleteInputDeviceRead.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?PointerDeviceTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C00E089E (-PointerDeviceTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1C00E1CB6 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@D@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@D@@444@Z @ 0x1C00E1D48 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapSz@D@@U2@U2@U2@@-$_tlgW.c)
 *     ?DbgPrintGDI@@YAXPEADZZ @ 0x1C0150000 (-DbgPrintGDI@@YAXPEADZZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@344@Z @ 0x1C01A3EC4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U2@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     RIMApplyPTPConfigRemedyWorker @ 0x1C01B3CF8 (RIMApplyPTPConfigRemedyWorker.c)
 */

void __fastcall rimInputApc(char *ApcContext, PIO_STATUS_BLOCK IoStatusBlock, ULONG Reserved)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  NTSTATUS Status; // esi
  char v8; // al
  int v9; // r13d
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int8 *v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // r8d
  int v20; // r9d
  __int64 v21; // rcx
  __int64 v22; // rdi
  CInpPushLock *v23; // r15
  unsigned int v24; // eax
  char v25; // cl
  char v26; // dl
  int v27; // edx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  char v31; // dl
  int v32; // edx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  char v36; // dl
  int v37; // [rsp+20h] [rbp-49h]
  __int64 v38; // [rsp+60h] [rbp-9h] BYREF
  __int64 v39; // [rsp+68h] [rbp-1h] BYREF
  __int64 v40; // [rsp+70h] [rbp+7h] BYREF
  __int64 Information; // [rsp+78h] [rbp+Fh] BYREF
  __int64 *v42[8]; // [rsp+80h] [rbp+17h] BYREF
  __int64 v43; // [rsp+D0h] [rbp+67h] BYREF
  __int64 v44; // [rsp+D8h] [rbp+6Fh] BYREF
  __int64 v45; // [rsp+E8h] [rbp+7Fh] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v42, "InputApc", 0LL);
  if ( ApcContext + 256 != (char *)IoStatusBlock )
  {
    LODWORD(v43) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1361);
  }
  LOBYTE(v5) = ApcContext[48];
  *(struct _IO_STATUS_BLOCK *)(ApcContext + 152) = *IoStatusBlock;
  Status = IoStatusBlock->Status;
  EtwTraceCompleteInputDeviceRead(v5, IoStatusBlock->Status, v6);
  v8 = ApcContext[48];
  v9 = 1;
  if ( v8 )
  {
    if ( v8 == 2 )
    {
      if ( (*((_DWORD *)ApcContext + 50) & 0x80u) == 0 )
      {
        if ( (unsigned int)dword_1C0289810 > 4 && tlgKeywordOn((__int64)&dword_1C0289810, 256LL) )
        {
          v21 = *((_QWORD *)ApcContext + 58);
          LODWORD(v43) = *(unsigned __int16 *)(v21 + 18);
          LODWORD(v44) = *(unsigned __int16 *)(v21 + 16);
          Information = IoStatusBlock->Information;
          LODWORD(v45) = IoStatusBlock->Status;
          v40 = (__int64)ApcContext;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            (unsigned int)&dword_1C0289810,
            (unsigned int)&unk_1C0259A4B,
            v19,
            v20,
            (__int64)&v40,
            (__int64)&v45,
            (__int64)&Information,
            (__int64)&v44,
            (__int64)&v43);
        }
      }
      else if ( (unsigned int)dword_1C0289810 > 4 && tlgKeywordOn((__int64)&dword_1C0289810, 256LL) )
      {
        v15 = *((_QWORD *)ApcContext + 58);
        LODWORD(v43) = *(unsigned __int16 *)(v15 + 18);
        LODWORD(v44) = *(unsigned __int16 *)(v15 + 16);
        if ( !v13 || (v16 = 0, !*(_DWORD *)(v13 + 36)) )
          v16 = 1;
        LODWORD(v45) = v16;
        v39 = (__int64)InputTraceLogging::PointerDeviceTypeToString(*(_DWORD *)(v14 + 24));
        v40 = IoStatusBlock->Information;
        LODWORD(v38) = IoStatusBlock->Status;
        Information = (__int64)ApcContext;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (__int64)&dword_1C0289810,
          byte_1C0259951,
          v17,
          v18,
          (__int64)&Information,
          (__int64)&v38,
          (__int64)&v40,
          (void **)&v39,
          (__int64)&v45,
          (__int64)&v44,
          (__int64)&v43);
      }
    }
    else if ( v8 == 1 && (unsigned int)dword_1C0289810 > 4 && tlgKeywordOn((__int64)&dword_1C0289810, 256LL) )
    {
      v12 = (unsigned __int8 *)&unk_1C0259A06;
      goto LABEL_22;
    }
  }
  else if ( (unsigned int)dword_1C0289810 > 4 && tlgKeywordOn((__int64)&dword_1C0289810, 256LL) )
  {
    v12 = (unsigned __int8 *)&unk_1C02599C4;
LABEL_22:
    v44 = IoStatusBlock->Information;
    LODWORD(v43) = IoStatusBlock->Status;
    v45 = (__int64)ApcContext;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (__int64)&dword_1C0289810,
      v12,
      v10,
      v11,
      (__int64)&v45,
      (__int64)&v43,
      (__int64)&v44);
  }
  v22 = *((_QWORD *)ApcContext + 42);
  if ( !*(_BYTE *)(v22 + 81) && !*(_BYTE *)(v22 + 80) )
  {
    if ( ApcContext + 256 != (char *)IoStatusBlock )
    {
      LODWORD(v43) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1376);
    }
    if ( Status < 0 || ApcContext[48] == 2 && (*((_DWORD *)ApcContext + 50) & 0x80u) != 0 )
    {
      if ( *(_QWORD *)(v22 + 832) && !*(_BYTE *)(v22 + 776) )
      {
        LODWORD(v43) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1393);
      }
      v23 = (CInpPushLock *)(v22 + 104);
      RIMLockExclusive(v22 + 104);
    }
    else
    {
      v23 = (CInpPushLock *)(v22 + 104);
      v9 = 0;
    }
    if ( *((_QWORD *)ApcContext + 28) )
    {
      RIMLockExclusive(v22 + 760);
      v24 = *((_DWORD *)ApcContext + 46) & 0xFFFFFF7F;
      *((_DWORD *)ApcContext + 46) = v24;
      if ( !*(_BYTE *)(v22 + 81) && !*(_BYTE *)(v22 + 80) )
      {
        if ( Status < 0 )
        {
          if ( (v24 & 8) == 0 && Status != -1073741536 )
          {
            v25 = ApcContext[205];
            ApcContext[205] = v25 + 1;
            if ( (unsigned __int8)v25 >= 5u )
            {
              DbgPrintGDI(
                ":rimInputApc [pRimObj:%p, pRimDev:%p] Status: %08x..not retrying read as maximum nretryErrorCompletion reached\n",
                (const void *)v22,
                ApcContext,
                Status);
              v31 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
              if ( v31 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_AND_TRACE_SF_qqd(
                  (__int64)WPP_GLOBAL_Control->AttachedDevice,
                  v31,
                  WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                  (__int64)gRimLog,
                  v37,
                  1u,
                  0x19u,
                  (__int64)&WPP_6c3dff8734b4343641ce6a69106986e7_Traceguids);
              if ( (unsigned int)dword_1C02882F8 > 5 && tlgKeywordOn((__int64)&dword_1C02882F8, 0x400000000000LL) )
              {
                v32 = (unsigned __int8)ApcContext[48];
                v44 = *((_QWORD *)ApcContext + 27);
                LODWORD(v43) = Status;
                v45 = (__int64)RimDeviceTypeToRimInputTypeString((__int64)ApcContext, v32);
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
                  v33,
                  byte_1C02598F8,
                  v34,
                  v35,
                  (const WCHAR **)&v45,
                  (const WCHAR **)&v44,
                  (__int64)&v43);
              }
            }
            else
            {
              DbgPrintGDI(
                ":rimInputApc [pRimObj:%p, pRimDev:%p] Status: %08x..retrying read as maximum nretryErrorCompletion not reached\n",
                (const void *)v22,
                ApcContext,
                Status);
              v26 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
              if ( v26 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_AND_TRACE_SF_qqd(
                  (__int64)WPP_GLOBAL_Control->AttachedDevice,
                  v26,
                  WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                  (__int64)gRimLog,
                  v37,
                  1u,
                  0x18u,
                  (__int64)&WPP_6c3dff8734b4343641ce6a69106986e7_Traceguids);
              if ( (unsigned int)dword_1C02882F8 > 5 && tlgKeywordOn((__int64)&dword_1C02882F8, 0x400000000000LL) )
              {
                v27 = (unsigned __int8)ApcContext[48];
                v44 = *((_QWORD *)ApcContext + 27);
                LODWORD(v43) = Status;
                v45 = (__int64)RimDeviceTypeToRimInputTypeString((__int64)ApcContext, v27);
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
                  v28,
                  byte_1C02598A5,
                  v29,
                  v30,
                  (const WCHAR **)&v45,
                  (const WCHAR **)&v44,
                  (__int64)&v43);
              }
              RIMStartDeviceSpecificRead((HANDLE *)v22, (__int64)ApcContext);
            }
          }
        }
        else
        {
          ApcContext[205] = 0;
          *((LARGE_INTEGER *)ApcContext + 283) = KeQueryPerformanceCounter(0LL);
          *((_QWORD *)ApcContext + 286) = MEMORY[0xFFFFF78000000014];
          rimProcessDeviceBufferAndStartRead((struct RawInputManagerObject *)v22, (struct RIMDEV *)ApcContext, 1);
        }
      }
      CInpPushLock::UnLockExclusive((CInpPushLock *)(v22 + 760));
    }
    else if ( Status >= 0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (v36 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        v36 = 0;
      }
      if ( v36 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_qq(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v36,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          (__int64)gRimLog,
          4u,
          1u,
          0x1Au,
          (__int64)&WPP_6c3dff8734b4343641ce6a69106986e7_Traceguids,
          v22,
          ApcContext);
      DbgPrintGDI("pRimObj(%p) pRimDev(%p), pRimDev's handle == nullptr\n", (const void *)v22, ApcContext);
    }
    if ( v9 )
      CInpPushLock::UnLockExclusive(v23);
    if ( IoStatusBlock->Status != -1073741536 && !ApcContext[48] && (*((_DWORD *)ApcContext + 46) & 0x8000000) != 0 )
      RIMApplyPTPConfigRemedyWorker(v22, ApcContext);
  }
  ObfDereferenceObject(*((PVOID *)ApcContext + 4));
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v42);
}
