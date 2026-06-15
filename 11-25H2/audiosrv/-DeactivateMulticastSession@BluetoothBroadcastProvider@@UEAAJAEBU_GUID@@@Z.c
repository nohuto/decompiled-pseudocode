/*
 * XREFs of ?DeactivateMulticastSession@BluetoothBroadcastProvider@@UEAAJAEBU_GUID@@@Z @ 0x1800E0C70
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x18000311C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U1@@-$_tlg.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     _tlgKeywordOn @ 0x180055760 (_tlgKeywordOn.c)
 *     ?GetTimeSec@CQPCStopWatch@@QEAANXZ @ 0x1800870F0 (-GetTimeSec@CQPCStopWatch@@QEAANXZ.c)
 *     ?Start@CQPCStopWatch@@QEAAHXZ @ 0x1800A5914 (-Start@CQPCStopWatch@@QEAAHXZ.c)
 *     _lambda_23a707cc6c78406526adb642245a01c2_::operator() @ 0x1800DFBE8 (_lambda_23a707cc6c78406526adb642245a01c2_--operator().c)
 */

__int64 __fastcall BluetoothBroadcastProvider::DeactivateMulticastSession(
        BluetoothBroadcastProvider *this,
        const struct _GUID *a2)
{
  unsigned int v3; // ebx
  struct AudioSrvTelemetryProvider *v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v8; // [rsp+40h] [rbp-20h] BYREF
  LARGE_INTEGER v9; // [rsp+48h] [rbp-18h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+50h] [rbp-10h] BYREF
  LARGE_INTEGER Frequency; // [rsp+58h] [rbp-8h] BYREF
  const struct _GUID *v12; // [rsp+88h] [rbp+28h] BYREF
  double TimeSec; // [rsp+90h] [rbp+30h] BYREF
  const struct _GUID *v14; // [rsp+98h] [rbp+38h] BYREF

  PerformanceCount.QuadPart = 0LL;
  v9.QuadPart = 0LL;
  QueryPerformanceFrequency(&Frequency);
  CQPCStopWatch::Start(&v9);
  v12 = a2;
  v3 = lambda_23a707cc6c78406526adb642245a01c2_::operator()((_DWORD **)&v12);
  QueryPerformanceCounter(&PerformanceCount);
  v4 = AudioSrvTelemetryProvider::Instance();
  if ( **((_DWORD **)v4 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v4 + 1), 0x400000000000LL) )
  {
    TimeSec = CQPCStopWatch::GetTimeSec((CQPCStopWatch *)&v9);
    LODWORD(v12) = v3;
    v14 = a2;
    v8 = 50333696LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v5,
      (int)&unk_1801A0F89,
      v5,
      v6,
      (__int64)&v8,
      (__int64 *)&v14,
      (__int64)&v12,
      (__int64)&TimeSec);
  }
  return v3;
}
