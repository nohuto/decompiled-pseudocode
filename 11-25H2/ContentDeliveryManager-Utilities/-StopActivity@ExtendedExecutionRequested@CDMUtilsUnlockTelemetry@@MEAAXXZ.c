/*
 * XREFs of ?StopActivity@ExtendedExecutionRequested@CDMUtilsUnlockTelemetry@@MEAAXXZ @ 0x18008F140
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445@Z @ 0x180001F10 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_180001F10.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180002224 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?zInternalStop@?$ActivityBase@VCDMUtilsUnlockLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18005E6E0 (-zInternalStop@-$ActivityBase@VCDMUtilsUnlockLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsPr.c)
 *     ?Provider@CDMUtilsUnlockLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18008E268 (-Provider@CDMUtilsUnlockLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall CDMUtilsUnlockTelemetry::ExtendedExecutionRequested::StopActivity(
        CDMUtilsUnlockTelemetry::ExtendedExecutionRequested *this)
{
  int *v1; // rax
  int v3; // ecx
  int *v4; // rdi
  __int64 v5; // rcx
  const struct _tlgProvider_t *v6; // r9
  const wchar_t *v7; // rcx
  __int64 v8; // r8
  const wchar_t *v9; // rax
  __int64 v10; // rcx
  const struct _tlgProvider_t *v11; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v13; // r8
  int v14; // ecx
  int v15; // [rsp+C0h] [rbp-80h] BYREF
  int v16; // [rsp+C4h] [rbp-7Ch] BYREF
  int v17; // [rsp+C8h] [rbp-78h] BYREF
  int v18; // [rsp+CCh] [rbp-74h] BYREF
  const wchar_t *v19; // [rsp+D0h] [rbp-70h] BYREF
  const wchar_t *v20; // [rsp+D8h] [rbp-68h] BYREF
  const wchar_t *v21; // [rsp+E0h] [rbp-60h] BYREF
  const wchar_t *v22; // [rsp+E8h] [rbp-58h] BYREF
  const wchar_t *v23; // [rsp+F0h] [rbp-50h] BYREF
  const wchar_t *v24; // [rsp+F8h] [rbp-48h] BYREF
  const wchar_t *v25; // [rsp+100h] [rbp-40h] BYREF
  const wchar_t *v26; // [rsp+108h] [rbp-38h] BYREF
  const wchar_t *v27; // [rsp+110h] [rbp-30h] BYREF
  __int64 v28; // [rsp+118h] [rbp-28h] BYREF
  _QWORD v29[4]; // [rsp+120h] [rbp-20h] BYREF
  DWORD v30; // [rsp+150h] [rbp+10h] BYREF
  int v31; // [rsp+158h] [rbp+18h] BYREF
  __int64 v32; // [rsp+160h] [rbp+20h] BYREF
  int v33; // [rsp+168h] [rbp+28h] BYREF

  v1 = (int *)*((_QWORD *)this + 34);
  v3 = v1[18];
  if ( v3 >= 0 || v3 != v1[22] || (v4 = v1 + 20, v1 == (int *)-80LL) )
  {
    wil::ActivityBase<CDMUtilsUnlockLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v11 = CDMUtilsUnlockLogging::Provider(v10);
    if ( *(_DWORD *)v11 > 5u )
    {
      CurrentThreadId = GetCurrentThreadId();
      v13 = *((_QWORD *)this + 34);
      v30 = CurrentThreadId;
      v14 = *(_DWORD *)(v13 + 72);
      v32 = 0LL;
      v31 = v14;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v11,
        byte_180161AC3,
        (const GUID *)(v13 + 8),
        0LL,
        (__int64)&v32,
        (__int64)&v31,
        (__int64)&v30);
    }
  }
  else
  {
    wil::ActivityBase<CDMUtilsUnlockLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v6 = CDMUtilsUnlockLogging::Provider(v5);
    if ( *(_DWORD *)v6 > 5u )
    {
      v7 = (const wchar_t *)*((_QWORD *)v4 + 6);
      v8 = *((_QWORD *)this + 34);
      LODWORD(v32) = v4[26];
      v9 = (const wchar_t *)*((_QWORD *)v4 + 12);
      v29[0] = 0LL;
      v22 = v9;
      v23 = (const wchar_t *)*((_QWORD *)v4 + 11);
      v33 = v4[20];
      v24 = (const wchar_t *)*((_QWORD *)v4 + 9);
      v15 = v4[8];
      v25 = (const wchar_t *)*((_QWORD *)v4 + 3);
      v16 = *v4;
      v26 = (const wchar_t *)*((_QWORD *)v4 + 16);
      v17 = v4[16];
      v27 = (const wchar_t *)*((_QWORD *)v4 + 7);
      v18 = v4[2];
      v19 = v7;
      v30 = v4[17];
      v31 = v4[4];
      v20 = (const wchar_t *)*((_QWORD *)v4 + 15);
      v21 = (const wchar_t *)*((_QWORD *)v4 + 14);
      v28 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (__int64)v6,
        byte_180161B1E,
        (const GUID *)(v8 + 8),
        (__int64)v6,
        (__int64)v29,
        (__int64)&v28,
        (__int64)&v18,
        &v27,
        (__int64)&v17,
        &v26,
        (__int64)&v16,
        &v25,
        (__int64)&v15,
        &v24,
        (__int64)&v33,
        &v23,
        &v22,
        (__int64)&v32,
        &v21,
        &v20,
        (__int64)&v31,
        (__int64)&v30,
        &v19);
    }
  }
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)this);
}
