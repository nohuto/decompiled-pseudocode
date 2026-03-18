/*
 * XREFs of ??0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x180091460
 * Callers:
 *     ?OnInteractionUpdate@CManipulationManager@@IEAAXXZ @ 0x1800901C0 (-OnInteractionUpdate@CManipulationManager@@IEAAXXZ.c)
 *     ?s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x180090C40 (-s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z.c)
 *     ?ManipulationThreadCallback@CManipulationManager@@SAHPEAU_MIT_INPUT_INTEROP_MESSAGE@@PEAX@Z @ 0x18018F190 (-ManipulationThreadCallback@CManipulationManager@@SAHPEAU_MIT_INPUT_INTEROP_MESSAGE@@PEAX@Z.c)
 *     ?OnInput@CManipulationManager@@IEAAXXZ @ 0x18018FF90 (-OnInput@CManipulationManager@@IEAAXXZ.c)
 * Callees:
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180092C54 (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x18012AD50 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1801CB460 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x180250CA4 (atexit.c)
 */

InputTraceLogging::PerfRegion *__fastcall InputTraceLogging::PerfRegion::PerfRegion(
        InputTraceLogging::PerfRegion *this,
        const char *a2,
        const struct InputTraceLogging::PerfRegion *a3)
{
  _OWORD *v3; // rax
  __int128 v5; // xmm0
  __int64 v6; // rcx
  const struct _tlgProvider_t *v8; // rax
  __int64 v9; // r9
  void (*v10)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  __int64 fPending; // [rsp+40h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+48h] [rbp+10h] BYREF

  *(_BYTE *)this = 0;
  *((_QWORD *)this + 1) = a2;
  v3 = (_OWORD *)((char *)this + 32);
  *((_OWORD *)this + 1) = 0LL;
  *((_OWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  if ( a3 )
  {
    v5 = *((_OWORD *)a3 + 1);
    *((_QWORD *)this + 6) = v3;
    *v3 = v5;
  }
  Context = 0LL;
  LODWORD(fPending) = 0;
  if ( InitOnceBeginInitialize(&`InputTraceLogging::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, &Context)
    && (_DWORD)fPending )
  {
    qword_1803FAC58 = 0LL;
    Context = &qword_1803FAC50;
    qword_1803FAC50 = &CompositorTracing::`vftable';
    byte_1803FAC60 = 0;
    dword_1803FAC64 = 0;
    qword_1803FAC68 = (struct _tlgProvider_t *)&`InputTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1803FAC50, qword_1803FAC68, v10);
    InitOnceComplete(&`InputTraceLogging::Instance'::`2'::wrapper, 0, &qword_1803FAC50);
  }
  v6 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v6 > 6u && (*(_BYTE *)(v6 + 16) & 1) != 0 && (*(_QWORD *)(v6 + 24) & 1LL) == *(_QWORD *)(v6 + 24) )
  {
    *(_BYTE *)this = 1;
    EventActivityIdControl(3u, (LPGUID)this + 1);
    v8 = InputTraceLogging::Provider();
    if ( *(_DWORD *)v8 > 6u && (*((_BYTE *)v8 + 16) & 1) != 0 && (*((_QWORD *)v8 + 3) & 1LL) == *((_QWORD *)v8 + 3) )
    {
      v9 = *((_QWORD *)this + 6);
      fPending = *((_QWORD *)this + 1);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
        (_DWORD)v8,
        (unsigned int)&unk_1803CA60D,
        (_DWORD)this + 16,
        v9,
        (__int64)&fPending);
    }
  }
  return this;
}
