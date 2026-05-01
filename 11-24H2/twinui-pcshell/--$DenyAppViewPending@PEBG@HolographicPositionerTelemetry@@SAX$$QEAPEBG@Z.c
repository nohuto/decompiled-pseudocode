/*
 * XREFs of ??$DenyAppViewPending@PEBG@HolographicPositionerTelemetry@@SAX$$QEAPEBG@Z @ 0x1804061B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1800B24D0 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     _tlgKeywordOn @ 0x1800CBCCC (_tlgKeywordOn.c)
 *     ?Provider@HolographicPositionerProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1802AEF80 (-Provider@HolographicPositionerProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 */

char __fastcall HolographicPositionerTelemetry::DenyAppViewPending<unsigned short const *>(const WCHAR **a1)
{
  const struct _tlgProvider_t *v2; // rax
  __int64 v3; // r9
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF
  const WCHAR *v6; // [rsp+50h] [rbp+18h] BYREF

  v2 = HolographicPositionerProvider::Provider((__int64)a1);
  if ( *(_DWORD *)v2 > 4u )
  {
    LOBYTE(v2) = tlgKeywordOn((__int64)v2, 0x400000000000LL);
    if ( (_BYTE)v2 )
    {
      v6 = *a1;
      v5 = 0x2000000LL;
      LOBYTE(v2) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
                     v3,
                     byte_1807F6A51,
                     0LL,
                     v3,
                     &v6,
                     (__int64)&v5);
    }
  }
  return (char)v2;
}
