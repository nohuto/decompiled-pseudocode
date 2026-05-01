/*
 * XREFs of ??1?$_TlgActivityBase@V?$ActivityData@VGamingOverlayTelemetry@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VGamingOverlayTelemetry@@$0A@$0A@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@$0A@$04@@IEAA@XZ @ 0x1803479E0
 * Callers:
 *     ??1?$ActivityData@VGamingOverlayTelemetry@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VGamingOverlayTelemetry@@$0A@$0A@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180347634 (--1-$ActivityData@VGamingOverlayTelemetry@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBa.c)
 * Callees:
 *     ?Provider@GamingOverlayTelemetry@@SAPEBU_tlgProvider_t@@XZ @ 0x180298B7C (-Provider@GamingOverlayTelemetry@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x1802CF088 (--$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 */

void __fastcall _TlgActivityBase<wil::ActivityBase<GamingOverlayTelemetry,0,0,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityData<GamingOverlayTelemetry,_TlgReflectorTag_Param0IsProviderType>,0,5>::~_TlgActivityBase<wil::ActivityBase<GamingOverlayTelemetry,0,0,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityData<GamingOverlayTelemetry,_TlgReflectorTag_Param0IsProviderType>,0,5>(
        __int64 a1)
{
  const struct _tlgProvider_t *v2; // rax

  if ( *(_DWORD *)a1 == 1 )
  {
    *(_DWORD *)a1 = 2;
    v2 = GamingOverlayTelemetry::Provider(a1);
    _tlgWriteActivityAutoStop<0,5>(v2, (const GUID *)(a1 + 8));
  }
  *(_DWORD *)a1 = 3;
}
