/*
 * XREFs of ?HolographicInteropTargetCreated_@CompositorTracing@@QEAAXAEBU_LUID@@@Z @ 0x1802D894C
 * Callers:
 *     ?EnsureInteropRenderTarget@CHolographicManager@@AEAAJXZ @ 0x1802D8534 (-EnsureInteropRenderTarget@CHolographicManager@@AEAAJXZ.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1801CAD80 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1801EBE64 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?Instance@CompositorTracing@@KAPEAV1@XZ @ 0x18021DBDC (-Instance@CompositorTracing@@KAPEAV1@XZ.c)
 */

void __fastcall CompositorTracing::HolographicInteropTargetCreated_(CompositorTracing *this, const struct _LUID *a2)
{
  _DWORD *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  CompositorTracing *v7; // [rsp+40h] [rbp+8h] BYREF
  LONG HighPart; // [rsp+50h] [rbp+18h] BYREF

  v7 = this;
  v3 = (_DWORD *)*((_QWORD *)CompositorTracing::Instance() + 1);
  if ( *v3 > 4u && tlgKeywordOn((__int64)v3, 0x400000000000LL) )
  {
    LODWORD(v7) = a2->LowPart;
    HighPart = a2->HighPart;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v4,
      byte_1803DAE1D,
      v5,
      v6,
      (__int64)&HighPart,
      (__int64)&v7);
  }
}
