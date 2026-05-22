/*
 * XREFs of ?Thresholds@ShellGestures@InputTraceLogging@@SAX_J00000@Z @ 0x18015A9F4
 * Callers:
 *     ?TraceCurrentThresholds@ShellGesturesRecognizer@@SAXXZ @ 0x18015AAC0 (-TraceCurrentThresholds@ShellGesturesRecognizer@@SAXXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33333@Z @ 0x180008250 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@.c)
 *     _tlgKeywordOn @ 0x180031A40 (_tlgKeywordOn.c)
 *     ?Instance@InputTraceLogging@@KAPEAV1@XZ @ 0x1800366D0 (-Instance@InputTraceLogging@@KAPEAV1@XZ.c)
 */

void __fastcall InputTraceLogging::ShellGestures::Thresholds(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  _DWORD *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // [rsp+50h] [rbp-30h] BYREF
  __int64 v15; // [rsp+58h] [rbp-28h] BYREF
  __int64 v16; // [rsp+60h] [rbp-20h] BYREF
  __int64 v17; // [rsp+68h] [rbp-18h] BYREF
  __int64 v18; // [rsp+70h] [rbp-10h] BYREF
  __int64 v19; // [rsp+78h] [rbp-8h] BYREF

  v10 = (_DWORD *)*((_QWORD *)InputTraceLogging::Instance() + 1);
  if ( *v10 > 4u && tlgKeywordOn((__int64)v10, 512LL) )
  {
    v14 = a6;
    v15 = a5;
    v16 = a4;
    v17 = a3;
    v18 = a2;
    v19 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      v11,
      (__int64)&unk_180222496,
      v12,
      v13,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v14);
  }
}
