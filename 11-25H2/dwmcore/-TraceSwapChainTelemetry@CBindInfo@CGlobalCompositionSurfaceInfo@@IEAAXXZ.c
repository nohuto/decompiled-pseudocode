/*
 * XREFs of ?TraceSwapChainTelemetry@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXXZ @ 0x180100FEC
 * Callers:
 *     ??1CBindInfo@CGlobalCompositionSurfaceInfo@@QEAA@XZ @ 0x180100F28 (--1CBindInfo@CGlobalCompositionSurfaceInfo@@QEAA@XZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U3@U?$_tlgWrapperByVal@$00@@U1@U1@U1@U1@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@5AEBU?$_tlgWrapperByVal@$00@@33335@Z @ 0x18010024C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U3@U-$_tlgWrapperByV.c)
 *     ?UpdateSwapChainTelemetry@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXW4SwapChainStat@CCompositionSurfaceInfo@@_N@Z @ 0x18010037C (-UpdateSwapChainTelemetry@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXW4SwapChainStat@CComposi.c)
 */

void __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::TraceSwapChainTelemetry(
        CGlobalCompositionSurfaceInfo::CBindInfo *this)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // [rsp+90h] [rbp+37h] BYREF
  __int64 v6[3]; // [rsp+98h] [rbp+3Fh] BYREF

  if ( *((_QWORD *)this + 36) )
  {
    CGlobalCompositionSurfaceInfo::CBindInfo::UpdateSwapChainTelemetry((__int64)this, 0, 0);
    if ( (unsigned int)dword_180404CA8 > 5
      && (qword_180404CB8 & 0x400000000000LL) != 0
      && (qword_180404CC0 & 0x400000000000LL) == qword_180404CC0 )
    {
      v5 = *((_QWORD *)this + 36);
      v6[0] = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        v2,
        (__int64)&unk_1803D87B0,
        v3,
        v4,
        (__int64)v6,
        &v5);
    }
  }
}
