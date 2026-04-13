/*
 * XREFs of ?Stop@TriggerManagerGetTriggeredItemsForStateActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXIPEBD@Z @ 0x18007DF58
 * Callers:
 *     _lambda_0f325790d88d3e0e1d8faff7704602cc_::operator() @ 0x18007AFB0 (_lambda_0f325790d88d3e0e1d8faff7704602cc_--operator().c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@_W@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@_W@@4545645644545@Z @ 0x1800030A4 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_1800030A4.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44AEBU?$_tlgWrapSz@D@@@Z @ 0x180003754 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U-$_tlgWrapSz@D@@@-$_tlgWriteTe.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAPEBU_tlgProvider_t@@XZ @ 0x180044480 (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAPEBU_tlgProvider_t@.c)
 *     ?zInternalStop@?$ActivityBase@VCDMUtilsUnlockLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18005E6E0 (-zInternalStop@-$ActivityBase@VCDMUtilsUnlockLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsPr.c)
 */

void __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity::Stop(
        ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity *this,
        int a2,
        const wchar_t *a3)
{
  int *v3; // rax
  int v7; // ecx
  int *v8; // rdi
  __int64 v9; // rcx
  const struct _tlgProvider_t *v10; // r9
  const wchar_t *v11; // rcx
  const wchar_t *v12; // rax
  __int64 v13; // r8
  const wchar_t *v14; // rcx
  __int64 v15; // rcx
  const struct _tlgProvider_t *v16; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v18; // r8
  int v19; // ecx
  __int64 v20; // r9
  int v21; // [rsp+D0h] [rbp-80h] BYREF
  int v22; // [rsp+D4h] [rbp-7Ch] BYREF
  int v23; // [rsp+D8h] [rbp-78h] BYREF
  int v24; // [rsp+DCh] [rbp-74h] BYREF
  int v25; // [rsp+E0h] [rbp-70h] BYREF
  int v26; // [rsp+E4h] [rbp-6Ch] BYREF
  int v27; // [rsp+E8h] [rbp-68h] BYREF
  __int64 v28; // [rsp+F0h] [rbp-60h] BYREF
  const wchar_t *v29; // [rsp+F8h] [rbp-58h] BYREF
  const wchar_t *v30; // [rsp+100h] [rbp-50h] BYREF
  const wchar_t *v31; // [rsp+108h] [rbp-48h] BYREF
  const wchar_t *v32; // [rsp+110h] [rbp-40h] BYREF
  const wchar_t *v33; // [rsp+118h] [rbp-38h] BYREF
  const wchar_t *v34; // [rsp+120h] [rbp-30h] BYREF
  const wchar_t *v35; // [rsp+128h] [rbp-28h] BYREF
  const wchar_t *v36; // [rsp+130h] [rbp-20h] BYREF
  const wchar_t *v37; // [rsp+138h] [rbp-18h] BYREF
  const wchar_t *v38; // [rsp+140h] [rbp-10h] BYREF
  const wchar_t *v39; // [rsp+148h] [rbp-8h] BYREF
  int v40; // [rsp+170h] [rbp+20h] BYREF
  DWORD v41; // [rsp+188h] [rbp+38h] BYREF

  v3 = (int *)*((_QWORD *)this + 34);
  v7 = v3[18];
  if ( v7 >= 0 || v7 != v3[22] || (v8 = v3 + 20, v3 == (int *)-80LL) )
  {
    wil::ActivityBase<CDMUtilsUnlockLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v16 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider(v15);
    if ( *(_DWORD *)v16 > 5u )
    {
      v29 = a3;
      v40 = a2;
      CurrentThreadId = GetCurrentThreadId();
      v18 = *((_QWORD *)this + 34);
      v41 = CurrentThreadId;
      v19 = *(_DWORD *)(v18 + 72);
      v28 = 0LL;
      v21 = v19;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (__int64)v16,
        byte_180160F9A,
        (const GUID *)(v18 + 8),
        v20,
        (__int64)&v28,
        (__int64)&v21,
        (__int64)&v41,
        (__int64)&v40,
        &v29);
    }
  }
  else
  {
    wil::ActivityBase<CDMUtilsUnlockLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v10 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider(v9);
    if ( *(_DWORD *)v10 > 5u )
    {
      v33 = (const wchar_t *)*((_QWORD *)v8 + 14);
      v11 = (const wchar_t *)*((_QWORD *)v8 + 6);
      v23 = v8[26];
      v34 = (const wchar_t *)*((_QWORD *)v8 + 12);
      v12 = (const wchar_t *)*((_QWORD *)v8 + 11);
      v29 = 0LL;
      v13 = *((_QWORD *)this + 34);
      v35 = v12;
      v24 = v8[20];
      v36 = (const wchar_t *)*((_QWORD *)v8 + 9);
      v25 = v8[8];
      v37 = (const wchar_t *)*((_QWORD *)v8 + 3);
      v26 = *v8;
      v38 = (const wchar_t *)*((_QWORD *)v8 + 16);
      v27 = v8[16];
      v39 = (const wchar_t *)*((_QWORD *)v8 + 7);
      v21 = v8[2];
      v31 = v11;
      v41 = v8[17];
      v22 = v8[4];
      v14 = (const wchar_t *)*((_QWORD *)v8 + 15);
      v30 = a3;
      v40 = a2;
      v32 = v14;
      v28 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (__int64)v10,
        byte_180160A5C,
        (const GUID *)(v13 + 8),
        (__int64)v10,
        (__int64)&v29,
        (__int64)&v28,
        (__int64)&v21,
        &v39,
        (__int64)&v27,
        &v38,
        (__int64)&v26,
        &v37,
        (__int64)&v25,
        &v36,
        (__int64)&v24,
        &v35,
        &v34,
        (__int64)&v23,
        &v33,
        &v32,
        (__int64)&v22,
        (__int64)&v41,
        &v31,
        (__int64)&v40,
        &v30);
    }
  }
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)this);
}
