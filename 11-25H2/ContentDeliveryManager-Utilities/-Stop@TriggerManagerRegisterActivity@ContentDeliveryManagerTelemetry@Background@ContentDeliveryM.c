/*
 * XREFs of ?Stop@TriggerManagerRegisterActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAX_NPEBD@Z @ 0x18007E1E4
 * Callers:
 *     ?RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@PEAUHSTRING__@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@V?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@9@@Z @ 0x18007CF70 (-RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@_W@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@_W@@4545645644545@Z @ 0x1800030A4 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_1800030A4.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44AEBU?$_tlgWrapSz@D@@@Z @ 0x180003754 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U-$_tlgWrapSz@D@@@-$_tlgWriteTe.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAPEBU_tlgProvider_t@@XZ @ 0x180044480 (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAPEBU_tlgProvider_t@.c)
 *     ?zInternalStop@?$ActivityBase@VCDMUtilsUnlockLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18005E6E0 (-zInternalStop@-$ActivityBase@VCDMUtilsUnlockLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsPr.c)
 */

void __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerRegisterActivity::Stop(
        ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerRegisterActivity *this,
        unsigned __int8 a2,
        const wchar_t *a3)
{
  int *v3; // rax
  int v6; // r14d
  int v7; // ecx
  int *v8; // rdi
  __int64 v9; // rcx
  const struct _tlgProvider_t *v10; // r9
  const wchar_t *v11; // rcx
  const wchar_t *v12; // rax
  __int64 v13; // r8
  __int64 v14; // rcx
  const struct _tlgProvider_t *v15; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v17; // r8
  int v18; // ecx
  __int64 v19; // r9
  int v20; // [rsp+D0h] [rbp-80h] BYREF
  int v21; // [rsp+D4h] [rbp-7Ch] BYREF
  int v22; // [rsp+D8h] [rbp-78h] BYREF
  int v23; // [rsp+DCh] [rbp-74h] BYREF
  int v24; // [rsp+E0h] [rbp-70h] BYREF
  int v25; // [rsp+E4h] [rbp-6Ch] BYREF
  int v26; // [rsp+E8h] [rbp-68h] BYREF
  __int64 v27; // [rsp+F0h] [rbp-60h] BYREF
  const wchar_t *v28; // [rsp+F8h] [rbp-58h] BYREF
  const wchar_t *v29; // [rsp+100h] [rbp-50h] BYREF
  const wchar_t *v30; // [rsp+108h] [rbp-48h] BYREF
  const wchar_t *v31; // [rsp+110h] [rbp-40h] BYREF
  const wchar_t *v32; // [rsp+118h] [rbp-38h] BYREF
  const wchar_t *v33; // [rsp+120h] [rbp-30h] BYREF
  const wchar_t *v34; // [rsp+128h] [rbp-28h] BYREF
  const wchar_t *v35; // [rsp+130h] [rbp-20h] BYREF
  const wchar_t *v36; // [rsp+138h] [rbp-18h] BYREF
  const wchar_t *v37; // [rsp+140h] [rbp-10h] BYREF
  const wchar_t *v38; // [rsp+148h] [rbp-8h] BYREF
  int v39; // [rsp+170h] [rbp+20h] BYREF
  DWORD v40; // [rsp+188h] [rbp+38h] BYREF

  v3 = (int *)*((_QWORD *)this + 34);
  v6 = a2;
  v7 = v3[18];
  if ( v7 >= 0 || v7 != v3[22] || (v8 = v3 + 20, v3 == (int *)-80LL) )
  {
    wil::ActivityBase<CDMUtilsUnlockLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v15 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider(v14);
    if ( *(_DWORD *)v15 > 5u )
    {
      v28 = a3;
      v39 = v6;
      CurrentThreadId = GetCurrentThreadId();
      v17 = *((_QWORD *)this + 34);
      v40 = CurrentThreadId;
      v18 = *(_DWORD *)(v17 + 72);
      v27 = 0LL;
      v20 = v18;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (__int64)v15,
        byte_180160DC2,
        (const GUID *)(v17 + 8),
        v19,
        (__int64)&v27,
        (__int64)&v20,
        (__int64)&v40,
        (__int64)&v39,
        &v28);
    }
  }
  else
  {
    wil::ActivityBase<CDMUtilsUnlockLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v10 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider(v9);
    if ( *(_DWORD *)v10 > 5u )
    {
      v31 = (const wchar_t *)*((_QWORD *)v8 + 15);
      v32 = (const wchar_t *)*((_QWORD *)v8 + 14);
      v22 = v8[26];
      v11 = (const wchar_t *)*((_QWORD *)v8 + 6);
      v33 = (const wchar_t *)*((_QWORD *)v8 + 12);
      v12 = (const wchar_t *)*((_QWORD *)v8 + 11);
      v28 = 0LL;
      v13 = *((_QWORD *)this + 34);
      v34 = v12;
      v23 = v8[20];
      v35 = (const wchar_t *)*((_QWORD *)v8 + 9);
      v24 = v8[8];
      v36 = (const wchar_t *)*((_QWORD *)v8 + 3);
      v25 = *v8;
      v37 = (const wchar_t *)*((_QWORD *)v8 + 16);
      v26 = v8[16];
      v38 = (const wchar_t *)*((_QWORD *)v8 + 7);
      v20 = v8[2];
      v30 = v11;
      v40 = v8[17];
      LODWORD(v11) = v8[4];
      v29 = a3;
      v39 = v6;
      v21 = (int)v11;
      v27 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (__int64)v10,
        byte_18016047C,
        (const GUID *)(v13 + 8),
        (__int64)v10,
        (__int64)&v28,
        (__int64)&v27,
        (__int64)&v20,
        &v38,
        (__int64)&v26,
        &v37,
        (__int64)&v25,
        &v36,
        (__int64)&v24,
        &v35,
        (__int64)&v23,
        &v34,
        &v33,
        (__int64)&v22,
        &v32,
        &v31,
        (__int64)&v21,
        (__int64)&v40,
        &v30,
        (__int64)&v39,
        &v29);
    }
  }
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)this);
}
