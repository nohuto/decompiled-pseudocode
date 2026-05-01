/*
 * XREFs of ?StartActivity@ShowJumpViewActivity@JumpViewProvider@@QEAAXPEBG0W4JumpViewInvocationSurfaceType@JumpView@Shell@Internal@Windows@@W4JumpViewInvocationMethod@4567@@Z @ 0x180208734
 * Callers:
 *     ?BeginTelemetryActivity@CJumpViewExperienceManager@@AEAA?AVShowJumpViewActivity@JumpViewProvider@@PEAUIJumpViewParams@JumpView@Shell@Internal@Windows@@@Z @ 0x1802B6430 (-BeginTelemetryActivity@CJumpViewExperienceManager@@AEAA-AVShowJumpViewActivity@JumpViewProvider.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U3@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@544@Z @ 0x180003CD8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U3@U2@U2@@-$_tlgWrit.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180024560 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180031110 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x1800CBCCC (_tlgKeywordOn.c)
 *     ?CensorPath@JumpViewTelemetryHelper@@YAPEBGPEBG@Z @ 0x180208878 (-CensorPath@JumpViewTelemetryHelper@@YAPEBGPEBG@Z.c)
 *     ?zInternalStart@?$ActivityBase@VJumpViewProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1802A007C (-zInternalStart@-$ActivityBase@VJumpViewProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Par.c)
 *     ?Provider@JumpViewProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1802A0108 (-Provider@JumpViewProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?IsEdgePinnedWebsiteAumid@Details@JumpViewTelemetryHelper@@YA_NPEBG@Z @ 0x1802C7214 (-IsEdgePinnedWebsiteAumid@Details@JumpViewTelemetryHelper@@YA_NPEBG@Z.c)
 */

void __fastcall JumpViewProvider::ShowJumpViewActivity::StartActivity(__int64 a1, const WCHAR *a2, const WCHAR *a3)
{
  const unsigned __int16 *v6; // rdx
  const WCHAR *v7; // rsi
  const WCHAR *v8; // r14
  const unsigned __int16 *v9; // rdx
  const struct _tlgProvider_t *v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rax
  DWORD CurrentThreadId; // [rsp+54h] [rbp-1Ch] BYREF
  const WCHAR *v14; // [rsp+58h] [rbp-18h] BYREF
  const WCHAR *v15; // [rsp+60h] [rbp-10h] BYREF
  __int64 v16; // [rsp+68h] [rbp-8h] BYREF

  if ( JumpViewTelemetryHelper::Details::IsEdgePinnedWebsiteAumid(a2, a2) )
  {
    v7 = L"Microsoft.Edge.?";
    v8 = &pvData;
  }
  else
  {
    v7 = JumpViewTelemetryHelper::CensorPath(a2, v6);
    v8 = JumpViewTelemetryHelper::CensorPath(a3, v9);
  }
  wil::ActivityBase<JumpViewProvider,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(a1);
  v10 = JumpViewProvider::Provider();
  v11 = (__int64)v10;
  if ( *(_DWORD *)v10 > 5u && tlgKeywordOn((__int64)v10, 0x400000000000LL) )
  {
    v14 = v8;
    v15 = v7;
    v16 = 0LL;
    CurrentThreadId = GetCurrentThreadId();
    v12 = wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(a1);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v11,
      (__int64)&unk_1807EDC01,
      *(_QWORD *)(a1 + 272) + 8LL,
      v12,
      (__int64)&v16,
      (__int64)&CurrentThreadId,
      &v15,
      &v14);
  }
  if ( !*(_DWORD *)(a1 + 312) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 288));
}
