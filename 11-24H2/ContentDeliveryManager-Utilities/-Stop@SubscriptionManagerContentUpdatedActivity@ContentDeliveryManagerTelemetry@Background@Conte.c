/*
 * XREFs of ?Stop@SubscriptionManagerContentUpdatedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXIIII@Z @ 0x180063858
 * Callers:
 *     ?OnContentUpdated@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ @ 0x18006279C (-OnContentUpdated@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180001C8C (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001CB8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@454564564444@Z @ 0x18000281C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_18000281C.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAPEBU_tlgProvider_t@@XZ @ 0x180044660 (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAPEBU_tlgProvider_t@.c)
 *     ?IgnoreCurrentThread@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800532E8 (-IgnoreCurrentThread@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryMan.c)
 *     ?zInternalStop@?$ActivityBase@VCDMUtilsUnlockLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18005EBC0 (-zInternalStop@-$ActivityBase@VCDMUtilsUnlockLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsPr.c)
 *     __security_check_cookie @ 0x1800B6D70 (__security_check_cookie.c)
 */

void __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::SubscriptionManagerContentUpdatedActivity::Stop(
        ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::SubscriptionManagerContentUpdatedActivity *this,
        int a2,
        int a3)
{
  int *v3; // rax
  int v7; // ecx
  int *v8; // rdi
  __int64 v9; // rcx
  const struct _tlgProvider_t *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // rcx
  const struct _tlgProvider_t *v15; // rax
  __int64 v16; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v18; // r8
  int v19; // [rsp+C8h] [rbp-80h] BYREF
  DWORD v20; // [rsp+CCh] [rbp-7Ch] BYREF
  int v21; // [rsp+D0h] [rbp-78h] BYREF
  int v22; // [rsp+D4h] [rbp-74h] BYREF
  int v23; // [rsp+D8h] [rbp-70h] BYREF
  int v24; // [rsp+DCh] [rbp-6Ch] BYREF
  int v25; // [rsp+E0h] [rbp-68h] BYREF
  int v26; // [rsp+E4h] [rbp-64h] BYREF
  int v27; // [rsp+E8h] [rbp-60h] BYREF
  int v28; // [rsp+ECh] [rbp-5Ch] BYREF
  __int64 v29; // [rsp+F0h] [rbp-58h] BYREF
  const wchar_t *v30; // [rsp+F8h] [rbp-50h] BYREF
  const wchar_t *v31; // [rsp+100h] [rbp-48h] BYREF
  const wchar_t *v32; // [rsp+108h] [rbp-40h] BYREF
  const wchar_t *v33; // [rsp+110h] [rbp-38h] BYREF
  const wchar_t *v34; // [rsp+118h] [rbp-30h] BYREF
  const wchar_t *v35; // [rsp+120h] [rbp-28h] BYREF
  const wchar_t *v36; // [rsp+128h] [rbp-20h] BYREF
  const wchar_t *v37; // [rsp+130h] [rbp-18h] BYREF
  __int64 v38; // [rsp+138h] [rbp-10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+148h] [rbp+0h] BYREF
  __int64 *v40; // [rsp+168h] [rbp+20h]
  __int64 v41; // [rsp+170h] [rbp+28h]
  int *v42; // [rsp+178h] [rbp+30h]
  __int64 v43; // [rsp+180h] [rbp+38h]
  DWORD *v44; // [rsp+188h] [rbp+40h]
  __int64 v45; // [rsp+190h] [rbp+48h]
  int *v46; // [rsp+198h] [rbp+50h]
  __int64 v47; // [rsp+1A0h] [rbp+58h]
  int *v48; // [rsp+1A8h] [rbp+60h]
  __int64 v49; // [rsp+1B0h] [rbp+68h]
  int *v50; // [rsp+1B8h] [rbp+70h]
  __int64 v51; // [rsp+1C0h] [rbp+78h]
  int *v52; // [rsp+1C8h] [rbp+80h]
  __int64 v53; // [rsp+1D0h] [rbp+88h]

  v3 = (int *)*((_QWORD *)this + 34);
  v7 = v3[18];
  if ( v7 >= 0 || v7 != v3[22] || (v8 = v3 + 20, v3 == (int *)-80LL) )
  {
    wil::ActivityBase<CDMUtilsUnlockLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v15 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider(v14);
    v16 = (__int64)v15;
    if ( *(_DWORD *)v15 > 5u && tlgKeywordOn((__int64)v15, 0x200000000000LL) )
    {
      v24 = 0;
      v23 = 0;
      v22 = a3;
      v21 = a2;
      CurrentThreadId = GetCurrentThreadId();
      v18 = *((_QWORD *)this + 34);
      v20 = CurrentThreadId;
      v53 = 4LL;
      v51 = 4LL;
      v19 = *(_DWORD *)(v18 + 72);
      v52 = &v24;
      v50 = &v23;
      v48 = &v22;
      v46 = &v21;
      v44 = &v20;
      v42 = &v19;
      v40 = &v29;
      v29 = 0LL;
      v49 = 4LL;
      v47 = 4LL;
      v45 = 4LL;
      v43 = 4LL;
      v41 = 8LL;
      tlgWriteTransfer_EventWriteTransfer(v16, byte_1801615F6, (const GUID *)(v18 + 8), 0LL, 9u, &v39);
    }
  }
  else
  {
    wil::ActivityBase<CDMUtilsUnlockLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v10 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider(v9);
    if ( *(_DWORD *)v10 > 5u && tlgKeywordOn((__int64)v10, 0x200000000000LL) )
    {
      v30 = (const wchar_t *)*((_QWORD *)v8 + 15);
      v31 = (const wchar_t *)*((_QWORD *)v8 + 14);
      v19 = v8[26];
      v13 = *((_QWORD *)this + 34);
      v32 = (const wchar_t *)*((_QWORD *)v8 + 12);
      v33 = (const wchar_t *)*((_QWORD *)v8 + 11);
      v20 = v8[20];
      v34 = (const wchar_t *)*((_QWORD *)v8 + 9);
      v21 = v8[8];
      v35 = (const wchar_t *)*((_QWORD *)v8 + 3);
      v22 = *v8;
      v36 = (const wchar_t *)*((_QWORD *)v8 + 16);
      v23 = v8[16];
      v37 = (const wchar_t *)*((_QWORD *)v8 + 7);
      v24 = v8[2];
      v25 = 0;
      v26 = 0;
      v27 = a3;
      v28 = a2;
      v38 = 0x1000000LL;
      v29 = 0LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v11,
        byte_180161890,
        (const GUID *)(v13 + 8),
        v12,
        (__int64)&v29,
        (__int64)&v38,
        (__int64)&v24,
        &v37,
        (__int64)&v23,
        &v36,
        (__int64)&v22,
        &v35,
        (__int64)&v21,
        &v34,
        (__int64)&v20,
        &v33,
        &v32,
        (__int64)&v19,
        &v31,
        &v30,
        (__int64)&v28,
        (__int64)&v27,
        (__int64)&v26,
        (__int64)&v25);
    }
  }
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)this);
}
