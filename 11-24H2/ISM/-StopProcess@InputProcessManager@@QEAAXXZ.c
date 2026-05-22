/*
 * XREFs of ?StopProcess@InputProcessManager@@QEAAXXZ @ 0x18019C190
 * Callers:
 *     ?RegisterInputProcess@InputProcessManager@@MEAAJPEAVBamoInputProcessManagerStub@@PEAVBamoInputProcessProxy@@@Z @ 0x18019BC50 (-RegisterInputProcess@InputProcessManager@@MEAAJPEAVBamoInputProcessManagerStub@@PEAVBamoInputPr.c)
 *     ??1HeatProcessor@@MEAA@XZ @ 0x1801B8EE0 (--1HeatProcessor@@MEAA@XZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180003E28 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     _tlgKeywordOn @ 0x180031A40 (_tlgKeywordOn.c)
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x18008B160 (MicrosoftTelemetryAssertTriggeredArgs.c)
 *     ?StopProcess@InputProcessManager@InputTraceLogging@@SAXXZ @ 0x18019C264 (-StopProcess@InputProcessManager@InputTraceLogging@@SAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall InputProcessManager::StopProcess(InputProcessManager *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  bool v4; // zf
  BOOL v5; // eax
  __int64 v6; // rcx
  int v7; // [rsp+50h] [rbp+8h] BYREF
  BOOL v8; // [rsp+58h] [rbp+10h] BYREF
  __int64 v9; // [rsp+60h] [rbp+18h] BYREF

  InputTraceLogging::InputProcessManager::StopProcess();
  *((_BYTE *)this + 64) = 0;
  if ( !*((_QWORD *)this + 10) )
  {
    v7 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgs(v2, 0x20000, 120);
  }
  if ( (unsigned int)dword_18024E248 > 5 && tlgKeywordOn((__int64)&dword_18024E248, 0x400000000000LL) )
  {
    v4 = *((_QWORD *)this + 10) == 0LL;
    v9 = 0x1000000LL;
    v5 = !v4;
    v4 = *((_QWORD *)this + 7) == 0LL;
    v7 = v5;
    v8 = !v4;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v3,
      (__int64)&unk_180226136,
      0LL,
      0LL,
      (__int64)&v9,
      (__int64)&v8,
      (__int64)&v7);
  }
  v6 = *((_QWORD *)this + 7);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v6 + 8) + 24LL))(v6 + 8);
}
