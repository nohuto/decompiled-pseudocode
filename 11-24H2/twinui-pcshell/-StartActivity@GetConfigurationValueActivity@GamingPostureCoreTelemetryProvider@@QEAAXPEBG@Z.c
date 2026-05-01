/*
 * XREFs of ?StartActivity@GetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@QEAAXPEBG@Z @ 0x18033B7E0
 * Callers:
 *     ??$Start@AEAPEBG@GetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@SA?AV01@AEAPEBG@Z @ 0x18033951C (--$Start@AEAPEBG@GetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@SA-AV01@AEAPE.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1800A04C0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate.c)
 *     ?_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z @ 0x1800B6C98 (-_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z.c)
 *     ?Provider@GamingPostureCoreTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x180331DFC (-Provider@GamingPostureCoreTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?zInternalStart@?$ActivityBase@VGamingPostureCoreTelemetryProvider@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18033C3DC (-zInternalStart@-$ActivityBase@VGamingPostureCoreTelemetryProvider@@$0A@$0A@$04$0A@U_TlgReflecto.c)
 */

void __fastcall GamingPostureCoreTelemetryProvider::GetConfigurationValueActivity::StartActivity(
        GamingPostureCoreTelemetryProvider::GetConfigurationValueActivity *this,
        const unsigned __int16 *a2)
{
  __int64 v4; // rcx
  const struct _tlgProvider_t *v5; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v7; // r8
  const GUID *v8; // rcx
  DWORD v9; // [rsp+60h] [rbp+8h] BYREF
  const WCHAR *v10; // [rsp+70h] [rbp+18h] BYREF
  __int64 v11; // [rsp+78h] [rbp+20h] BYREF

  wil::ActivityBase<GamingPostureCoreTelemetryProvider,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v5 = GamingPostureCoreTelemetryProvider::Provider(v4);
  if ( *(_DWORD *)v5 > 5u )
  {
    v10 = a2;
    CurrentThreadId = GetCurrentThreadId();
    v7 = *((_QWORD *)this + 34);
    v11 = 0LL;
    v9 = CurrentThreadId;
    if ( !*(_BYTE *)(v7 + 4) || _tlgGuidIsZero((const struct _GUID *)(v7 + 24)) )
      v8 = 0LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      (__int64)v5,
      byte_1807E6BF3,
      (const GUID *)(v7 + 8),
      v8,
      (__int64)&v11,
      (__int64)&v9,
      &v10);
  }
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread((__int64)this);
}
