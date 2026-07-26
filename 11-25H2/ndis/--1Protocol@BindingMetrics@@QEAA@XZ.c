/*
 * XREFs of ??1Protocol@BindingMetrics@@QEAA@XZ @ 0x140079940
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NAEBU_GUID@@@Z @ 0x140161320 (-Iterate@BindEngine@Ndis@@AEAA_NAEBU_GUID@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapperByRef@$0BA@@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapperByRef@$0BA@@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x140004548 (--$Write@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U-$_tlgWrapperByRef@$0BA@@@U1@U-$_tl_ea_140004548.c)
 *     _tlgKeywordOn @ 0x14008DAF0 (_tlgKeywordOn.c)
 *     ?Stop@KStopwatch@@QEAA_KXZ @ 0x140091420 (-Stop@KStopwatch@@QEAA_KXZ.c)
 */

void __fastcall BindingMetrics::Protocol::~Protocol(BindingMetrics::Protocol *this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int64 v8; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int16 *v9; // [rsp+58h] [rbp+10h] BYREF
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF
  const struct _UNICODE_STRING * near *v11; // [rsp+68h] [rbp+20h] BYREF

  if ( *((_BYTE *)this + 17) && (unsigned int)dword_1401247B0 > 4 )
  {
    if ( (unsigned __int8)tlgKeywordOn(&dword_1401247B0, 32LL, a3, a4) )
    {
      v5 = KStopwatch::Stop((BindingMetrics::Protocol *)((char *)this + 24));
      v6 = *((_QWORD *)this + 1);
      v8 = v5;
      v9 = *(unsigned __int16 **)(*(_QWORD *)(*((_QWORD *)this + 6) + 80LL) + 24LL);
      v10 = *(_QWORD *)this + 4008LL;
      v11 = (&BindingMetrics::BindingOperationNames)[*((unsigned __int8 *)this + 16)];
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByRef<16>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>>(
        (__int64)&BindingMetrics::BindingOperationNames,
        (__int64)&unk_14010C0AB,
        v6,
        v7,
        (unsigned __int16 **)&v11,
        &v10,
        &v9,
        (__int64)&v8);
    }
  }
}
