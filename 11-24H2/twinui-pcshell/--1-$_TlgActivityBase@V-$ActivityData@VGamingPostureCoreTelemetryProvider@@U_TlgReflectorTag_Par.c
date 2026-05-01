/*
 * XREFs of ??1?$_TlgActivityBase@V?$ActivityData@VGamingPostureCoreTelemetryProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VGamingPostureCoreTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@$0EAAAAAAAAAAA@$04@@IEAA@XZ @ 0x18032CFC0
 * Callers:
 *     ??1?$ActivityData@VGamingPostureCoreTelemetryProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VGamingPostureCoreTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18032CEB8 (--1-$ActivityData@VGamingPostureCoreTelemetryProvider@@U_TlgReflectorTag_Param0IsProviderType@@@.c)
 * Callees:
 *     ??$_tlgWriteActivityAutoStop@$0EAAAAAAAAAAA@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x1802907F4 (--$_tlgWriteActivityAutoStop@$0EAAAAAAAAAAA@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?Provider@GamingPostureCoreTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x180331DFC (-Provider@GamingPostureCoreTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall _TlgActivityBase<wil::ActivityBase<GamingPostureCoreTelemetryProvider,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityData<GamingPostureCoreTelemetryProvider,_TlgReflectorTag_Param0IsProviderType>,70368744177664,5>::~_TlgActivityBase<wil::ActivityBase<GamingPostureCoreTelemetryProvider,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityData<GamingPostureCoreTelemetryProvider,_TlgReflectorTag_Param0IsProviderType>,70368744177664,5>(
        _DWORD *a1)
{
  const struct _tlgProvider_t *v2; // rax

  if ( *a1 == 1 )
  {
    *a1 = 2;
    v2 = GamingPostureCoreTelemetryProvider::Provider();
    _tlgWriteActivityAutoStop<70368744177664,5>(v2);
  }
  *a1 = 3;
}
