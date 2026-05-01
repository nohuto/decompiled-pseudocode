/*
 * XREFs of ??1?$_TlgActivityBase@V?$ActivityData@VGamingPostureUXTelemetryProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VGamingPostureUXTelemetryProvider@@$0A@$0A@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@$0A@$04@@IEAA@XZ @ 0x180347A24
 * Callers:
 *     ??1?$ActivityData@VGamingPostureUXTelemetryProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VGamingPostureUXTelemetryProvider@@$0A@$0A@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180347668 (--1-$ActivityData@VGamingPostureUXTelemetryProvider@@U_TlgReflectorTag_Param0IsProv_ea_180347668.c)
 * Callees:
 *     ??$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x1802CF088 (--$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?Provider@GamingPostureUXTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x180331E1C (-Provider@GamingPostureUXTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall _TlgActivityBase<wil::ActivityBase<GamingPostureUXTelemetryProvider,0,0,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityData<GamingPostureUXTelemetryProvider,_TlgReflectorTag_Param0IsProviderType>,0,5>::~_TlgActivityBase<wil::ActivityBase<GamingPostureUXTelemetryProvider,0,0,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityData<GamingPostureUXTelemetryProvider,_TlgReflectorTag_Param0IsProviderType>,0,5>(
        __int64 a1)
{
  const struct _tlgProvider_t *v2; // rax

  if ( *(_DWORD *)a1 == 1 )
  {
    *(_DWORD *)a1 = 2;
    v2 = GamingPostureUXTelemetryProvider::Provider(a1);
    _tlgWriteActivityAutoStop<0,5>(v2, (const GUID *)(a1 + 8));
  }
  *(_DWORD *)a1 = 3;
}
