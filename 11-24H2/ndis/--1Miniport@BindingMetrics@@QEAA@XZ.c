/*
 * XREFs of ??1Miniport@BindingMetrics@@QEAA@XZ @ 0x14006A4A0
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NAEBU_GUID@@@Z @ 0x140154AB0 (-Iterate@BindEngine@Ndis@@AEAA_NAEBU_GUID@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x140004748 (--$Write@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$0.c)
 *     _tlgKeywordOn @ 0x1400713E0 (_tlgKeywordOn.c)
 *     ?Stop@KStopwatch@@QEAA_KXZ @ 0x140075200 (-Stop@KStopwatch@@QEAA_KXZ.c)
 */

void __fastcall BindingMetrics::Miniport::~Miniport(BindingMetrics::Miniport *this)
{
  unsigned __int64 v2; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned __int64 v5; // [rsp+50h] [rbp+8h] BYREF
  __int64 v6; // [rsp+58h] [rbp+10h] BYREF
  const struct _UNICODE_STRING * near *v7; // [rsp+60h] [rbp+18h] BYREF

  if ( *((_BYTE *)this + 17) && (unsigned int)dword_14011A7B0 > 4 )
  {
    if ( (unsigned __int8)tlgKeywordOn(&dword_14011A7B0, 32LL) )
    {
      v2 = KStopwatch::Stop((BindingMetrics::Miniport *)((char *)this + 24));
      v3 = *((_QWORD *)this + 1);
      v5 = v2;
      v6 = *(_QWORD *)this + 4008LL;
      v7 = (&BindingMetrics::BindingOperationNames)[*((unsigned __int8 *)this + 16)];
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByRef<16>,_tlgWrapperByVal<8>>(
        (__int64)&BindingMetrics::BindingOperationNames,
        (__int64)&unk_140103117,
        v3,
        v4,
        (unsigned __int16 **)&v7,
        &v6,
        (__int64)&v5);
    }
  }
}
