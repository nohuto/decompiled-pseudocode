/*
 * XREFs of ?ActivateMulticastSession@BluetoothBroadcastProvider@@UEAAJAEAV?$vector@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEBU_GUID@@@Z @ 0x1800E06A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperArray@$0BA@@@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperArray@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x18000305C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperArray@$0BA@@@U-$_tlgW.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180025844 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _tlgKeywordOn @ 0x180055760 (_tlgKeywordOn.c)
 *     ?GetTimeSec@CQPCStopWatch@@QEAANXZ @ 0x1800870F0 (-GetTimeSec@CQPCStopWatch@@QEAANXZ.c)
 *     ?Start@CQPCStopWatch@@QEAAHXZ @ 0x1800A5914 (-Start@CQPCStopWatch@@QEAAHXZ.c)
 *     _lambda_82b4d950fa5d9eeb82537f57bcb68a2f_::operator() @ 0x1800DFF80 (_lambda_82b4d950fa5d9eeb82537f57bcb68a2f_--operator().c)
 */

__int64 __fastcall BluetoothBroadcastProvider::ActivateMulticastSession(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // ebx
  struct AudioSrvTelemetryProvider *v6; // rax
  double TimeSec; // xmm0_8
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v11; // [rsp+50h] [rbp-9h] BYREF
  __int64 v12; // [rsp+58h] [rbp-1h] BYREF
  __int128 *v13; // [rsp+60h] [rbp+7h]
  __int64 v14; // [rsp+68h] [rbp+Fh]
  __int128 v15; // [rsp+70h] [rbp+17h] BYREF
  __int64 v16; // [rsp+80h] [rbp+27h]
  LARGE_INTEGER v17; // [rsp+88h] [rbp+2Fh] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+90h] [rbp+37h] BYREF
  LARGE_INTEGER Frequency; // [rsp+98h] [rbp+3Fh] BYREF
  unsigned int v20; // [rsp+C8h] [rbp+6Fh] BYREF
  double v21; // [rsp+D0h] [rbp+77h] BYREF
  __int64 v22; // [rsp+D8h] [rbp+7Fh] BYREF

  PerformanceCount.QuadPart = 0LL;
  v17.QuadPart = 0LL;
  QueryPerformanceFrequency(&Frequency);
  CQPCStopWatch::Start(&v17);
  v16 = 0LL;
  v13 = &v15;
  v12 = a2;
  v15 = 0LL;
  v14 = a3;
  v5 = lambda_82b4d950fa5d9eeb82537f57bcb68a2f_::operator()((__int64)&v12);
  QueryPerformanceCounter(&PerformanceCount);
  v6 = AudioSrvTelemetryProvider::Instance();
  if ( **((_DWORD **)v6 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v6 + 1), 0x400000000000LL) )
  {
    TimeSec = CQPCStopWatch::GetTimeSec((CQPCStopWatch *)&v17);
    v12 = v15;
    LOWORD(v13) = (__int64)(*((_QWORD *)&v15 + 1) - v15) >> 4;
    v21 = TimeSec;
    v20 = v5;
    v22 = a3;
    v11 = 50333696LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapperArray<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v8,
      (int)&unk_1801A1003,
      v8,
      v9,
      (__int64)&v11,
      &v22,
      &v12,
      (__int64)&v20,
      (__int64)&v21);
  }
  if ( (_QWORD)v15 )
    std::_Deallocate<16,0>((char *)v15, (const struct std::nothrow_t *)((v16 - v15) & 0xFFFFFFFFFFFFFFF0uLL));
  return v5;
}
