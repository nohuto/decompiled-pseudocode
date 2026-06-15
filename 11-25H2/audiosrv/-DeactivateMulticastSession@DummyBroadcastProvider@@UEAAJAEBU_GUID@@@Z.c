/*
 * XREFs of ?DeactivateMulticastSession@DummyBroadcastProvider@@UEAAJAEBU_GUID@@@Z @ 0x1800F74D0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x18000311C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U1@@-$_tlg.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _tlgKeywordOn @ 0x180055760 (_tlgKeywordOn.c)
 *     ?GetTimeSec@CQPCStopWatch@@QEAANXZ @ 0x1800870F0 (-GetTimeSec@CQPCStopWatch@@QEAANXZ.c)
 *     ?Start@CQPCStopWatch@@QEAAHXZ @ 0x1800A5914 (-Start@CQPCStopWatch@@QEAAHXZ.c)
 *     _lambda_a637cfb7c0d6f432862cea2c6b753eb0_::operator() @ 0x1800F6CD0 (_lambda_a637cfb7c0d6f432862cea2c6b753eb0_--operator().c)
 */

__int64 __fastcall DummyBroadcastProvider::DeactivateMulticastSession(
        DummyBroadcastProvider *this,
        const struct _GUID *a2)
{
  HRESULT v4; // eax
  unsigned int v5; // ebx
  struct AudioSrvTelemetryProvider *v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  double TimeSec; // [rsp+40h] [rbp-29h] BYREF
  const struct _GUID *v11; // [rsp+48h] [rbp-21h] BYREF
  __int64 v12; // [rsp+50h] [rbp-19h] BYREF
  LARGE_INTEGER v13; // [rsp+58h] [rbp-11h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+60h] [rbp-9h] BYREF
  LARGE_INTEGER Frequency; // [rsp+68h] [rbp-1h] BYREF
  PROPVARIANT pvar[2]; // [rsp+70h] [rbp+7h] BYREF
  __int64 v17; // [rsp+80h] [rbp+17h]
  _QWORD v18[7]; // [rsp+88h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  unsigned int v20; // [rsp+E0h] [rbp+77h] BYREF
  LPVOID ppv; // [rsp+E8h] [rbp+7Fh] BYREF

  PerformanceCount.QuadPart = 0LL;
  v13.QuadPart = 0LL;
  QueryPerformanceFrequency(&Frequency);
  CQPCStopWatch::Start(&v13);
  ppv = 0LL;
  v17 = 0LL;
  *(_OWORD *)pvar = 0LL;
  v4 = CoCreateInstance(
         &GUID_06cca63e_9941_441b_b004_39f999ada412,
         0LL,
         0x17u,
         &GUID_6ca19947_8747_46ab_879e_349c4dbb88fb,
         &ppv);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v18[0] = this;
    v18[2] = pvar;
    v18[1] = a2;
    v18[3] = &ppv;
    v5 = lambda_a637cfb7c0d6f432862cea2c6b753eb0_::operator()((__int64)v18);
    QueryPerformanceCounter(&PerformanceCount);
    v6 = AudioSrvTelemetryProvider::Instance();
    if ( **((_DWORD **)v6 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v6 + 1), 0x400000000000LL) )
    {
      TimeSec = CQPCStopWatch::GetTimeSec((CQPCStopWatch *)&v13);
      v20 = v5;
      v11 = a2;
      v12 = 50333696LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v7,
        (int)&unk_1801A0F89,
        v7,
        v8,
        (__int64)&v12,
        (__int64 *)&v11,
        (__int64)&v20,
        (__int64)&TimeSec);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x135,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\dummybroadcastprovider.cpp",
      (const char *)(unsigned int)v4);
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&ppv);
  PropVariantClear(pvar);
  return v5;
}
