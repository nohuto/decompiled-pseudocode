/*
 * XREFs of ??1UpdateBindings@BindingMetrics@@QEAA@XZ @ 0x140067540
 * Callers:
 *     ?UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z @ 0x14015F2C0 (-UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$07@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$07@@4@Z @ 0x1400047EC (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$07@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_.c)
 *     _tlgKeywordOn @ 0x1400713E0 (_tlgKeywordOn.c)
 *     ?Stop@KStopwatch@@QEAA_KXZ @ 0x140075200 (-Stop@KStopwatch@@QEAA_KXZ.c)
 */

void __fastcall BindingMetrics::UpdateBindings::~UpdateBindings(BindingMetrics::UpdateBindings *this)
{
  unsigned __int64 v2; // rax
  __int64 v3; // r8
  __int64 v4; // rcx
  __int64 v5; // r9
  __int64 v6; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v7; // [rsp+58h] [rbp+10h] BYREF
  __int64 v8; // [rsp+60h] [rbp+18h] BYREF

  if ( *((_BYTE *)this + 17) && (unsigned int)dword_14011A7B0 > 4 )
  {
    if ( (unsigned __int8)tlgKeywordOn(&dword_14011A7B0, 32LL) )
    {
      v6 = *((_QWORD *)this + 6);
      v2 = KStopwatch::Stop((BindingMetrics::UpdateBindings *)((char *)this + 24));
      v3 = *((_QWORD *)this + 1);
      v7 = v2;
      v8 = *(_QWORD *)this + 4008LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        v4,
        (__int64)&unk_14010307A,
        v3,
        v5,
        &v8,
        (__int64)&v7,
        (__int64)&v6);
    }
  }
}
