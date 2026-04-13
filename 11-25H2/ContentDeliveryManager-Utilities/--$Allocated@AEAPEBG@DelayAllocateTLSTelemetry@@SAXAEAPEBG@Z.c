/*
 * XREFs of ??$Allocated@AEAPEBG@DelayAllocateTLSTelemetry@@SAXAEAPEBG@Z @ 0x1800246C0
 * Callers:
 *     ?DelayAllocateTLS_AllocateInternal@@YAXPEAKPEBG@Z @ 0x18002E874 (-DelayAllocateTLS_AllocateInternal@@YAXPEAKPEBG@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180001010 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     _tlgKeywordOn @ 0x180001C8C (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAAPEAVDelayAllocateTLSLogging@@P6AXXZ@Z @ 0x18003E2E4 (-get@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAAPEAVDelayAllocateTLSLogging@@P6AX.c)
 */

char __fastcall DelayAllocateTLSTelemetry::Allocated<unsigned short const * &>(__int64 *a1)
{
  __int64 v2; // rax
  _DWORD *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  v2 = wil::details::static_lazy<DelayAllocateTLSLogging>::get(
         a1,
         _lambda_16ed5f466cc0787f20e3c084b27e3df3_::_lambda_invoker_cdecl_);
  v3 = *(_DWORD **)(v2 + 8);
  if ( *v3 > 5u )
  {
    LOBYTE(v2) = tlgKeywordOn((__int64)v3, 0x400000000000LL);
    if ( (_BYTE)v2 )
    {
      v8 = *a1;
      LOBYTE(v2) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
                     v4,
                     (__int64)&unk_18015E21E,
                     v5,
                     v6,
                     &v8);
    }
  }
  return v2;
}
