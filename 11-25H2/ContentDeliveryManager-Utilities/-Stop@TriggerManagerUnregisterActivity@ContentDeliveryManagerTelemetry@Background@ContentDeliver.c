/*
 * XREFs of ?Stop@TriggerManagerUnregisterActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBD@Z @ 0x18007E470
 * Callers:
 *     ?UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@EV?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@8@@Z @ 0x18007F200 (-UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Service.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@_W@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@_W@@454564564455@Z @ 0x180003408 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_180003408.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@D@@@Z @ 0x180003820 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapSz@D@@@-$_tlgWriteTempl.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAPEBU_tlgProvider_t@@XZ @ 0x180044480 (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAPEBU_tlgProvider_t@.c)
 *     ?zInternalStop@?$ActivityBase@VCDMUtilsUnlockLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18005E6E0 (-zInternalStop@-$ActivityBase@VCDMUtilsUnlockLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsPr.c)
 */

void __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerUnregisterActivity::Stop(
        ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerUnregisterActivity *this,
        const wchar_t *a2)
{
  int *v2; // rax
  int v5; // ecx
  int *v6; // rdi
  __int64 v7; // rcx
  const struct _tlgProvider_t *v8; // r9
  const wchar_t *v9; // rcx
  const wchar_t *v10; // rax
  __int64 v11; // r8
  __int64 v12; // rcx
  const struct _tlgProvider_t *v13; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v15; // r8
  int v16; // ecx
  __int64 v17; // r9
  int v18; // [rsp+C0h] [rbp-80h] BYREF
  int v19; // [rsp+C4h] [rbp-7Ch] BYREF
  int v20; // [rsp+C8h] [rbp-78h] BYREF
  int v21; // [rsp+CCh] [rbp-74h] BYREF
  int v22; // [rsp+D0h] [rbp-70h] BYREF
  __int64 v23; // [rsp+D8h] [rbp-68h] BYREF
  const wchar_t *v24; // [rsp+E0h] [rbp-60h] BYREF
  const wchar_t *v25; // [rsp+E8h] [rbp-58h] BYREF
  const wchar_t *v26; // [rsp+F0h] [rbp-50h] BYREF
  const wchar_t *v27; // [rsp+F8h] [rbp-48h] BYREF
  const wchar_t *v28; // [rsp+100h] [rbp-40h] BYREF
  const wchar_t *v29; // [rsp+108h] [rbp-38h] BYREF
  const wchar_t *v30; // [rsp+110h] [rbp-30h] BYREF
  const wchar_t *v31; // [rsp+118h] [rbp-28h] BYREF
  const wchar_t *v32; // [rsp+120h] [rbp-20h] BYREF
  const wchar_t *v33; // [rsp+128h] [rbp-18h] BYREF
  __int64 v34; // [rsp+130h] [rbp-10h] BYREF
  DWORD v35; // [rsp+160h] [rbp+20h] BYREF
  int v36; // [rsp+170h] [rbp+30h] BYREF
  const wchar_t *v37; // [rsp+178h] [rbp+38h] BYREF

  v2 = (int *)*((_QWORD *)this + 34);
  v5 = v2[18];
  if ( v5 >= 0 || v5 != v2[22] || (v6 = v2 + 20, v2 == (int *)-80LL) )
  {
    wil::ActivityBase<CDMUtilsUnlockLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v13 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider(v12);
    if ( *(_DWORD *)v13 > 5u )
    {
      v37 = a2;
      CurrentThreadId = GetCurrentThreadId();
      v15 = *((_QWORD *)this + 34);
      v35 = CurrentThreadId;
      v16 = *(_DWORD *)(v15 + 72);
      v23 = 0LL;
      v36 = v16;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (__int64)v13,
        byte_180161024,
        (const GUID *)(v15 + 8),
        v17,
        (__int64)&v23,
        (__int64)&v36,
        (__int64)&v35,
        &v37);
    }
  }
  else
  {
    wil::ActivityBase<CDMUtilsUnlockLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v8 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider(v7);
    if ( *(_DWORD *)v8 > 5u )
    {
      v9 = (const wchar_t *)*((_QWORD *)v6 + 6);
      v27 = (const wchar_t *)*((_QWORD *)v6 + 14);
      LODWORD(v37) = v6[26];
      v10 = (const wchar_t *)*((_QWORD *)v6 + 12);
      v23 = 0LL;
      v11 = *((_QWORD *)this + 34);
      v28 = v10;
      v29 = (const wchar_t *)*((_QWORD *)v6 + 11);
      v18 = v6[20];
      v30 = (const wchar_t *)*((_QWORD *)v6 + 9);
      v19 = v6[8];
      v31 = (const wchar_t *)*((_QWORD *)v6 + 3);
      v20 = *v6;
      v32 = (const wchar_t *)*((_QWORD *)v6 + 16);
      v21 = v6[16];
      v33 = (const wchar_t *)*((_QWORD *)v6 + 7);
      v22 = v6[2];
      v25 = v9;
      v35 = v6[17];
      v36 = v6[4];
      v26 = (const wchar_t *)*((_QWORD *)v6 + 15);
      v24 = a2;
      v34 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>>(
        (__int64)v8,
        byte_1801607A5,
        (const GUID *)(v11 + 8),
        (__int64)v8,
        (__int64)&v23,
        (__int64)&v34,
        (__int64)&v22,
        &v33,
        (__int64)&v21,
        &v32,
        (__int64)&v20,
        &v31,
        (__int64)&v19,
        &v30,
        (__int64)&v18,
        &v29,
        &v28,
        (__int64)&v37,
        &v27,
        &v26,
        (__int64)&v36,
        (__int64)&v35,
        &v25,
        &v24);
    }
  }
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)this);
}
