/*
 * XREFs of ??$StartActivity@_N@SetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@QEAAXPEBG_N@Z @ 0x18033974C
 * Callers:
 *     ?EnabledAtStartup@GamingPostureConfiguration@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@SAX_N@Z @ 0x18033A9D0 (-EnabledAtStartup@GamingPostureConfiguration@implementation@Posture@GamingExperiences@Internal@W.c)
 * Callees:
 *     ?_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z @ 0x1800B6C98 (-_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1801E2024 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U-$_tlg_ea_1801E2024.c)
 *     ?Provider@GamingPostureCoreTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x180331DFC (-Provider@GamingPostureCoreTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?zInternalStart@?$ActivityBase@VGamingPostureCoreTelemetryProvider@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18033C3DC (-zInternalStart@-$ActivityBase@VGamingPostureCoreTelemetryProvider@@$0A@$0A@$04$0A@U_TlgReflecto.c)
 */

void __fastcall GamingPostureCoreTelemetryProvider::SetConfigurationValueActivity::StartActivity<bool>(
        __int64 a1,
        const WCHAR *a2,
        char a3)
{
  __int64 v6; // rcx
  const struct _tlgProvider_t *v7; // rbp
  DWORD CurrentThreadId; // eax
  __int64 v9; // r8
  const GUID *v10; // rcx
  const WCHAR *v11; // [rsp+40h] [rbp-28h] BYREF
  _QWORD v12[4]; // [rsp+48h] [rbp-20h] BYREF
  char v13; // [rsp+70h] [rbp+8h] BYREF
  DWORD v14; // [rsp+88h] [rbp+20h] BYREF

  wil::ActivityBase<GamingPostureCoreTelemetryProvider,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v7 = GamingPostureCoreTelemetryProvider::Provider(v6);
  if ( *(_DWORD *)v7 > 5u )
  {
    v13 = a3;
    v11 = a2;
    CurrentThreadId = GetCurrentThreadId();
    v9 = *(_QWORD *)(a1 + 272);
    v12[0] = 0LL;
    v14 = CurrentThreadId;
    if ( !*(_BYTE *)(v9 + 4) || _tlgGuidIsZero((const struct _GUID *)(v9 + 24)) )
      v10 = 0LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>>(
      (__int64)v7,
      byte_1807E6B24,
      (const GUID *)(v9 + 8),
      v10,
      (__int64)v12,
      (__int64)&v14,
      &v11,
      (__int64)&v13);
  }
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread(a1);
}
