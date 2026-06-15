/*
 * XREFs of ?ActivateMulticastSession@DummyBroadcastProvider@@UEAAJAEAV?$vector@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEBU_GUID@@@Z @ 0x1800F7100
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperArray@$0BA@@@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperArray@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x18000305C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperArray@$0BA@@@U-$_tlgW.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     _tlgKeywordOn @ 0x180055760 (_tlgKeywordOn.c)
 *     ?GetTimeSec@CQPCStopWatch@@QEAANXZ @ 0x1800870F0 (-GetTimeSec@CQPCStopWatch@@QEAANXZ.c)
 *     ??1?$vector@U_Loop_vals_t@std@@V?$allocator@U_Loop_vals_t@std@@@2@@std@@QEAA@XZ @ 0x180087958 (--1-$vector@U_Loop_vals_t@std@@V-$allocator@U_Loop_vals_t@std@@@2@@std@@QEAA@XZ.c)
 *     ?Start@CQPCStopWatch@@QEAAHXZ @ 0x1800A5914 (-Start@CQPCStopWatch@@QEAAHXZ.c)
 *     _lambda_74c162fae599aeca3eeb692ee18148b4_::operator() @ 0x1800F699C (_lambda_74c162fae599aeca3eeb692ee18148b4_--operator().c)
 */

__int64 __fastcall DummyBroadcastProvider::ActivateMulticastSession(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // ebx
  struct AudioSrvTelemetryProvider *v7; // rax
  double TimeSec; // xmm0_8
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v12; // [rsp+50h] [rbp-19h] BYREF
  __int64 v13; // [rsp+58h] [rbp-11h]
  __int64 v14; // [rsp+60h] [rbp-9h]
  __int128 *v15; // [rsp+68h] [rbp-1h]
  LARGE_INTEGER v16; // [rsp+70h] [rbp+7h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+78h] [rbp+Fh] BYREF
  LARGE_INTEGER Frequency; // [rsp+80h] [rbp+17h] BYREF
  __int128 v19; // [rsp+88h] [rbp+1Fh] BYREF
  __int64 v20; // [rsp+98h] [rbp+2Fh]
  unsigned int v21; // [rsp+D0h] [rbp+67h] BYREF
  double v22; // [rsp+D8h] [rbp+6Fh] BYREF
  __int64 v23; // [rsp+E0h] [rbp+77h] BYREF
  __int64 v24; // [rsp+E8h] [rbp+7Fh] BYREF

  PerformanceCount.QuadPart = 0LL;
  v16.QuadPart = 0LL;
  QueryPerformanceFrequency(&Frequency);
  CQPCStopWatch::Start(&v16);
  v20 = 0LL;
  v15 = &v19;
  v12 = a1;
  v19 = 0LL;
  v13 = a3;
  v14 = a2;
  v6 = lambda_74c162fae599aeca3eeb692ee18148b4_::operator()(&v12);
  QueryPerformanceCounter(&PerformanceCount);
  v7 = AudioSrvTelemetryProvider::Instance();
  if ( **((_DWORD **)v7 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v7 + 1), 0x400000000000LL) )
  {
    TimeSec = CQPCStopWatch::GetTimeSec((CQPCStopWatch *)&v16);
    v12 = v19;
    LOWORD(v13) = (__int64)(*((_QWORD *)&v19 + 1) - v19) >> 4;
    v22 = TimeSec;
    v21 = v6;
    v23 = a3;
    v24 = 50333696LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapperArray<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v9,
      (int)&unk_1801A1003,
      v9,
      v10,
      (__int64)&v24,
      &v23,
      &v12,
      (__int64)&v21,
      (__int64)&v22);
  }
  std::vector<std::_Loop_vals_t>::~vector<std::_Loop_vals_t>((__int64)&v19);
  return v6;
}
