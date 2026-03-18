/*
 * XREFs of ?TraceSwapChainTelemetry@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXXZ @ 0x1801A4F7C
 * Callers:
 *     ??1CBindInfo@CGlobalCompositionSurfaceInfo@@QEAA@XZ @ 0x1801A4EB8 (--1CBindInfo@CGlobalCompositionSurfaceInfo@@QEAA@XZ.c)
 * Callees:
 *     ?UpdateSwapChainTelemetry@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXW4SwapChainStat@CCompositionSurfaceInfo@@_N@Z @ 0x180204280 (-UpdateSwapChainTelemetry@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXW4SwapChainStat@CComposi.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U3@U?$_tlgWrapperByVal@$00@@U1@U1@U1@U1@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@5AEBU?$_tlgWrapperByVal@$00@@33335@Z @ 0x1802110E4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U3@U-$_tlgWrapperByV.c)
 */

void __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::TraceSwapChainTelemetry(
        CGlobalCompositionSurfaceInfo::CBindInfo *this)
{
  int v2; // ecx
  int v3; // r8d
  int v4; // r9d
  __int64 v5; // [rsp+70h] [rbp+17h] BYREF
  __int64 v6; // [rsp+78h] [rbp+1Fh] BYREF
  __int64 v7; // [rsp+80h] [rbp+27h] BYREF
  __int64 v8; // [rsp+88h] [rbp+2Fh] BYREF
  __int64 v9; // [rsp+90h] [rbp+37h] BYREF
  __int64 v10[3]; // [rsp+98h] [rbp+3Fh] BYREF
  char v11; // [rsp+C0h] [rbp+67h] BYREF
  int v12; // [rsp+C8h] [rbp+6Fh] BYREF
  int v13; // [rsp+D0h] [rbp+77h] BYREF
  int v14; // [rsp+D8h] [rbp+7Fh] BYREF

  if ( *((_QWORD *)this + 36) )
  {
    CGlobalCompositionSurfaceInfo::CBindInfo::UpdateSwapChainTelemetry(this, 0LL, 0LL);
    if ( (unsigned int)dword_1803F8CA8 > 5
      && (qword_1803F8CB8 & 0x400000000000LL) != 0
      && (qword_1803F8CC0 & 0x400000000000LL) == qword_1803F8CC0 )
    {
      v12 = *((_DWORD *)this + 53);
      v5 = *((_QWORD *)this + 35);
      v6 = *((_QWORD *)this + 33);
      v7 = *((_QWORD *)this + 31);
      v8 = *((_QWORD *)this + 29);
      v13 = *((_DWORD *)this + 74);
      v14 = v13;
      v9 = *((_QWORD *)this + 36);
      v11 = 1;
      v10[0] = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        v2,
        (unsigned int)&unk_1803CD838,
        v3,
        v4,
        (__int64)v10,
        (__int64)&v9,
        (__int64)&v14,
        (__int64)&v13,
        (__int64)&v11,
        (__int64)&v8,
        (__int64)&v7,
        (__int64)&v6,
        (__int64)&v5,
        (__int64)&v12);
    }
  }
}
