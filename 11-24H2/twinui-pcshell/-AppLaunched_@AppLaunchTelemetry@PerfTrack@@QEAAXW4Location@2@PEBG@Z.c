/*
 * XREFs of ?AppLaunched_@AppLaunchTelemetry@PerfTrack@@QEAAXW4Location@2@PEBG@Z @ 0x1803A90F4
 * Callers:
 *     ??$AppLaunched@W4Location@PerfTrack@@PEBG@AppLaunchTelemetry@PerfTrack@@SAX$$QEAW4Location@1@$$QEAPEBG@Z @ 0x1803A7F70 (--$AppLaunched@W4Location@PerfTrack@@PEBG@AppLaunchTelemetry@PerfTrack@@SAX$$QEAW4Location@1@$$Q.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1800A04C0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate.c)
 *     _tlgKeywordOn @ 0x1800CBCCC (_tlgKeywordOn.c)
 *     ?Provider@CAppLifeCycle_UILogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1803A9BF0 (-Provider@CAppLifeCycle_UILogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

char __fastcall PerfTrack::AppLaunchTelemetry::AppLaunched_(__int64 a1, int a2, const WCHAR *a3)
{
  const struct _tlgProvider_t *v5; // rax
  __int64 v6; // rcx
  __int64 v8[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v9; // [rsp+60h] [rbp+8h] BYREF
  const WCHAR *v10; // [rsp+78h] [rbp+20h] BYREF

  v9 = a1;
  v5 = CAppLifeCycle_UILogging::Provider();
  if ( *(_DWORD *)v5 > 5u )
  {
    LOBYTE(v5) = tlgKeywordOn((__int64)v5, 0x400000000000LL);
    if ( (_BYTE)v5 )
    {
      v10 = a3;
      LODWORD(v9) = a2;
      v8[0] = 50331648LL;
      LOBYTE(v5) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
                     v6,
                     byte_1807F0FDC,
                     0LL,
                     0LL,
                     (__int64)v8,
                     (__int64)&v9,
                     &v10);
    }
  }
  return (char)v5;
}
