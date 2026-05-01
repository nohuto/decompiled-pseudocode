/*
 * XREFs of ?StartActivity@UndockedSearchAppExperienceManager_ResetWindowRgn@SearchAppExperienceManagerTelemetry@@QEAAXXZ @ 0x1800CDD48
 * Callers:
 *     ?ResetWindowRegionAsync@CUndockedSearchAppExperienceManagerConfig@@UEAAXPEAUHWND__@@@Z @ 0x180246680 (-ResetWindowRegionAsync@CUndockedSearchAppExperienceManagerConfig@@UEAAXPEAUHWND__@@@Z.c)
 * Callees:
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180024560 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     ?EnsureWatchingCurrentThread@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800342C0 (-EnsureWatchingCurrentThread@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDA.c)
 *     ?Provider@SearchAppLauncherLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800824C8 (-Provider@SearchAppLauncherLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?zInternalStart@?$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800CDF54 (-zInternalStart@-$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800EB7F8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 */

void __fastcall SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ResetWindowRgn::StartActivity(
        SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ResetWindowRgn *this)
{
  __int64 v2; // rcx
  const struct _tlgProvider_t *v3; // rax
  int v4; // edi
  int v5; // eax
  DWORD CurrentThreadId; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF

  wil::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v3 = SearchAppLauncherLogging::Provider(v2);
  v4 = (int)v3;
  if ( *(_DWORD *)v3 > 5u )
  {
    CurrentThreadId = GetCurrentThreadId();
    v7 = 0x1000000LL;
    v5 = wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      v4,
      (unsigned int)&unk_1807F2165,
      *((_QWORD *)this + 34) + 8,
      v5,
      (__int64)&v7,
      (__int64)&CurrentThreadId);
  }
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread((__int64)this);
}
