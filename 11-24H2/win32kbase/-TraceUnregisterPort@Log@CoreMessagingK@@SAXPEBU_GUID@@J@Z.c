/*
 * XREFs of ?TraceUnregisterPort@Log@CoreMessagingK@@SAXPEBU_GUID@@J@Z @ 0x1400FC97C
 * Callers:
 *     ?UnregisterPort@RegistrarClient@CoreMessagingK@@SAJPEBU_GUID@@@Z @ 0x1400FC8B8 (-UnregisterPort@RegistrarClient@CoreMessagingK@@SAJPEBU_GUID@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x14000AF90 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlg.c)
 */

void __fastcall CoreMessagingK::Log::TraceUnregisterPort(const struct _GUID *a1, int a2, __int64 a3, __int64 a4)
{
  int v4; // [rsp+50h] [rbp+18h] BYREF
  const struct _GUID *v5; // [rsp+58h] [rbp+20h] BYREF

  if ( (unsigned int)dword_14029B140 > 5 )
  {
    v4 = a2;
    v5 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
      (__int64)a1,
      (__int64)&unk_140280CCF,
      a3,
      a4,
      &v5,
      (__int64)&v4);
  }
}
