/*
 * XREFs of ?StartActivity@UpdateSize@SharedVisualHostProvider@@QEAAXMM@Z @ 0x18060B310
 * Callers:
 *     ??$Start@AEBMAEBM@UpdateSize@SharedVisualHostProvider@@SA?AV01@AEBM0@Z @ 0x180607AC8 (--$Start@AEBMAEBM@UpdateSize@SharedVisualHostProvider@@SA-AV01@AEBM0@Z.c)
 * Callees:
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180024560 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     _tlgKeywordOn @ 0x1800CBCCC (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44@Z @ 0x1800E1AF8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ?Provider@SharedVisualHostProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x18060A898 (-Provider@SharedVisualHostProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?zInternalStart@?$ActivityBase@VSharedVisualHostProvider@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18060EA34 (-zInternalStart@-$ActivityBase@VSharedVisualHostProvider@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgRe.c)
 */

void __fastcall SharedVisualHostProvider::UpdateSize::StartActivity(
        SharedVisualHostProvider::UpdateSize *this,
        float a2,
        float a3)
{
  __int64 v4; // rcx
  const struct _tlgProvider_t *v5; // rax
  __int64 v6; // rdi
  const GUID *v7; // rax
  DWORD CurrentThreadId; // [rsp+40h] [rbp-28h] BYREF
  __int64 v9[4]; // [rsp+48h] [rbp-20h] BYREF
  float v10; // [rsp+70h] [rbp+8h] BYREF
  float v11; // [rsp+78h] [rbp+10h]
  float v12; // [rsp+80h] [rbp+18h]
  float v13; // [rsp+88h] [rbp+20h] BYREF

  v12 = a3;
  v11 = a2;
  wil::ActivityBase<SharedVisualHostProvider,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v5 = SharedVisualHostProvider::Provider(v4);
  v6 = (__int64)v5;
  if ( *(_DWORD *)v5 > 5u && tlgKeywordOn((__int64)v5, 0x400000000000LL) )
  {
    v10 = v12;
    v13 = v11;
    v9[0] = 0x1000000LL;
    CurrentThreadId = GetCurrentThreadId();
    v7 = (const GUID *)wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v6,
      byte_18081ACF6,
      (const GUID *)(*((_QWORD *)this + 34) + 8LL),
      v7,
      (__int64)v9,
      (__int64)&CurrentThreadId,
      (__int64)&v13,
      (__int64)&v10);
  }
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread((__int64)this);
}
