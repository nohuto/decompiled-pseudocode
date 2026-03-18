/*
 * XREFs of ?DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z @ 0x1C0192E64
 * Callers:
 *     RIMQueueKeyboardInput @ 0x1C0004964 (RIMQueueKeyboardInput.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0004A38 (rimProcessDeviceBufferAndStartRead.c)
 *     rimSignalReadComplete @ 0x1C0005120 (rimSignalReadComplete.c)
 *     rimObsDeliverToExclusiveObservers @ 0x1C00053E4 (rimObsDeliverToExclusiveObservers.c)
 *     rimProcessInjectedDeviceBuffers @ 0x1C0005660 (rimProcessInjectedDeviceBuffers.c)
 *     RIMQueueMouseInput @ 0x1C0197AAC (RIMQueueMouseInput.c)
 *     rimProcessHidInput @ 0x1C01A4CC4 (rimProcessHidInput.c)
 *     RIMProcessAnyPointerDeviceInput @ 0x1C01A7040 (RIMProcessAnyPointerDeviceInput.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0053E90 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@@Z @ 0x1C00DFD54 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?DropReasonToString@InputTraceLogging@@CAPEBDW4DropReason@RIM@1@@Z @ 0x1C0192F8C (-DropReasonToString@InputTraceLogging@@CAPEBDW4DropReason@RIM@1@@Z.c)
 */

char __fastcall InputTraceLogging::RIM::DropInput(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // r9d
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned __int8 *v6; // rdx
  unsigned int v7; // r9d
  unsigned int v8; // r9d
  unsigned int v9; // r9d
  __int64 v11; // [rsp+40h] [rbp+10h] BYREF
  __int64 v12; // [rsp+50h] [rbp+20h] BYREF

  LOBYTE(v1) = *(_BYTE *)(a1 + 48);
  if ( (_BYTE)v1 )
  {
    if ( (_BYTE)v1 == 2 )
    {
      v1 = *(_DWORD *)(a1 + 200);
      if ( (v1 & 0x80u) == 0 )
      {
        if ( (unsigned int)dword_1C0289810 > 4 )
        {
          LOBYTE(v1) = tlgKeywordOn((__int64)&dword_1C0289810, 256LL);
          if ( (_BYTE)v1 )
          {
            v3 = InputTraceLogging::DropReasonToString(v8);
            v6 = (unsigned __int8 *)&unk_1C02588A4;
            goto LABEL_17;
          }
        }
      }
      else if ( (unsigned int)dword_1C0289810 > 4 )
      {
        LOBYTE(v1) = tlgKeywordOn((__int64)&dword_1C0289810, 256LL);
        if ( (_BYTE)v1 )
        {
          v3 = InputTraceLogging::DropReasonToString(v7);
          v6 = (unsigned __int8 *)&unk_1C02588D6;
          goto LABEL_17;
        }
      }
    }
    else if ( (_BYTE)v1 == 1 && (unsigned int)dword_1C0289810 > 4 )
    {
      LOBYTE(v1) = tlgKeywordOn((__int64)&dword_1C0289810, 256LL);
      if ( (_BYTE)v1 )
      {
        v3 = InputTraceLogging::DropReasonToString(v9);
        v6 = (unsigned __int8 *)&unk_1C025890C;
        goto LABEL_17;
      }
    }
  }
  else if ( (unsigned int)dword_1C0289810 > 4 )
  {
    LOBYTE(v1) = tlgKeywordOn((__int64)&dword_1C0289810, 256LL);
    if ( (_BYTE)v1 )
    {
      v3 = InputTraceLogging::DropReasonToString(v2);
      v6 = (unsigned __int8 *)&unk_1C0258870;
LABEL_17:
      v11 = v3;
      v12 = v4;
      LOBYTE(v1) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>>(
                     (__int64)&dword_1C0289810,
                     v6,
                     v4,
                     v5,
                     (__int64)&v12,
                     (void **)&v11);
    }
  }
  return v1;
}
