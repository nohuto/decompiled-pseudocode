/*
 * XREFs of ?SendLampRangeUpdateReport@HidLampArrayDevice@@QEAAJPEBULampRangeUpdateDeviceReport@@@Z @ 0x18008268C
 * Callers:
 *     ?ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z @ 0x180086910 (-ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z.c)
 *     ?Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800E8A00 (-Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180010E84 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180030470 (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1800648FC (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ?CreateAndInitializeOutputBuffer@HidLampRangeUpdateReportParser@@QEAAJPEBULampRangeUpdateDeviceReport@@AEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@PEAI@Z @ 0x180064DE0 (-CreateAndInitializeOutputBuffer@HidLampRangeUpdateReportParser@@QEAAJPEBULampRangeUpdateDeviceR.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall HidLampArrayDevice::SendLampRangeUpdateReport(
        HidLampArrayDevice *this,
        const struct LampRangeUpdateDeviceReport *a2,
        __int64 a3,
        __int64 a4)
{
  const WCHAR *v4; // rdi
  __int64 v7; // rcx
  int v8; // eax
  signed int v9; // ebx
  const struct std::nothrow_t *v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  DWORD LastError; // eax
  __int64 v15; // r8
  __int64 v16; // r9
  int v18; // [rsp+20h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  const WCHAR *ReportBufferLength; // [rsp+50h] [rbp+20h] BYREF
  PVOID ReportBuffer; // [rsp+60h] [rbp+30h] BYREF
  const char *v22; // [rsp+68h] [rbp+38h] BYREF

  v4 = (const WCHAR *)((char *)this + 24);
  if ( (unsigned int)dword_180244248 > 5 )
  {
    ReportBufferLength = (const WCHAR *)((char *)this + 24);
    ReportBuffer = "Started";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
      (__int64)this,
      byte_18020A5E9,
      a3,
      a4,
      (const unsigned __int16 **)&ReportBuffer,
      &ReportBufferLength);
  }
  v7 = *((_QWORD *)this + 78);
  LODWORD(ReportBufferLength) = 0;
  ReportBuffer = 0LL;
  v8 = HidLampRangeUpdateReportParser::CreateAndInitializeOutputBuffer(
         v7,
         (__int64)a2,
         (int *)&ReportBuffer,
         &ReportBufferLength);
  v9 = v8;
  if ( v8 >= 0 )
  {
    if ( HidD_SetFeature(*(HANDLE *)(*((_QWORD *)this + 2) + 40LL), ReportBuffer, (ULONG)ReportBufferLength) )
    {
      if ( (unsigned int)dword_180244248 > 5 )
      {
        ReportBufferLength = v4;
        v22 = "Completed successfully";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
          v11,
          byte_18020A5E9,
          v12,
          v13,
          (const unsigned __int16 **)&v22,
          &ReportBufferLength);
      }
      v9 = 0;
    }
    else
    {
      LastError = GetLastError();
      v9 = LastError;
      if ( (unsigned int)dword_180244248 > 5 )
      {
        LODWORD(ReportBufferLength) = LastError;
        v22 = "Failed";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
          (__int64)&dword_180244248,
          (__int64)&unk_18020A594,
          v15,
          v16,
          (const unsigned __int16 **)&v22,
          (__int64)&ReportBufferLength);
      }
      if ( v9 > 0 )
        v9 = (unsigned __int16)v9 | 0x80070000;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x19F,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)(unsigned int)v8,
      v18);
  }
  VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(&ReportBuffer, v10);
  return (unsigned int)v9;
}
