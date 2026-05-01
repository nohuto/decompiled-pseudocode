/*
 * XREFs of ?StartActivity@OnViewDestroyedBase@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z @ 0x1800B25E0
 * Callers:
 *     ?OnViewDestroyedBase@CSingleViewShellExperience@@AEAAJXZ @ 0x1800B30D4 (-OnViewDestroyedBase@CSingleViewShellExperience@@AEAAJXZ.c)
 * Callees:
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180024560 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     ?Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180025298 (-Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?zInternalStart@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800B1538 (-zInternalStart@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_Tl.c)
 *     _tlgKeywordOn @ 0x1800CBCCC (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@5@Z @ 0x1801652B8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U3@@-$_tlgWriteTempl.c)
 */

void __fastcall SingleViewExperienceTelemetry::OnViewDestroyedBase::StartActivity(
        SingleViewExperienceTelemetry::OnViewDestroyedBase *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3)
{
  __int64 v6; // rcx
  const struct _tlgProvider_t *v7; // rax
  const struct _tlgProvider_t *v8; // rdi
  __int64 v9; // rax
  const unsigned __int16 *v10; // [rsp+40h] [rbp-28h] BYREF
  __int64 v11[4]; // [rsp+48h] [rbp-20h] BYREF
  DWORD CurrentThreadId; // [rsp+70h] [rbp+8h] BYREF
  const unsigned __int16 *v13; // [rsp+88h] [rbp+20h] BYREF

  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStart((__int64)this);
  v7 = SingleViewExperienceLogging::Provider(v6);
  v8 = v7;
  if ( *(_DWORD *)v7 > 5u && (unsigned __int8)tlgKeywordOn(v7, 0x200000000000LL) )
  {
    v13 = a3;
    v10 = a2;
    v11[0] = 0x1000000LL;
    CurrentThreadId = GetCurrentThreadId();
    v9 = wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    ((void (__fastcall *)(const struct _tlgProvider_t *, void *, __int64, __int64, __int64 *, DWORD *, const unsigned __int16 **, const unsigned __int16 **))_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>)(
      v8,
      &unk_18081D7F0,
      *((_QWORD *)this + 34) + 8LL,
      v9,
      v11,
      &CurrentThreadId,
      &v10,
      &v13);
  }
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread((__int64)this);
}
