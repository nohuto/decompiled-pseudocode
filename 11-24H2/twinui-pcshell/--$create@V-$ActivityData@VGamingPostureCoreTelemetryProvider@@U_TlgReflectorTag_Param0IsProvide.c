/*
 * XREFs of ??$create@V?$ActivityData@VGamingPostureCoreTelemetryProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VGamingPostureCoreTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@?$shared_object@V?$ActivityData@VGamingPostureCoreTelemetryProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VGamingPostureCoreTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAA_N$$QEAV?$ActivityData@VGamingPostureCoreTelemetryProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VGamingPostureCoreTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@2@@Z @ 0x18032A97C
 * Callers:
 *     ??4?$ActivityBase@VGamingPostureCoreTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x18032D494 (--4-$ActivityBase@VGamingPostureCoreTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgRefle.c)
 * Callees:
 *     ??0?$ActivityData@VXamlSwitcherLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV012@@Z @ 0x180088BC4 (--0-$ActivityData@VXamlSwitcherLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?reset@?$shared_object@V?$ActivityData@VGamingPostureCoreTelemetryProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VGamingPostureCoreTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180338014 (-reset@-$shared_object@V-$ActivityData@VGamingPostureCoreTelemetryProvider@@U_TlgReflectorTag_Pa.c)
 */

char __fastcall wil::details::shared_object<wil::ActivityBase<GamingPostureCoreTelemetryProvider,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityData<GamingPostureCoreTelemetryProvider,_TlgReflectorTag_Param0IsProviderType>>::create<wil::ActivityBase<GamingPostureCoreTelemetryProvider,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityData<GamingPostureCoreTelemetryProvider,_TlgReflectorTag_Param0IsProviderType>>(
        _QWORD *a1,
        __int64 a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rbx

  v4 = operator new(0x110uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    *v4 = 1;
    wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<XamlSwitcherLogging,_TlgReflectorTag_Param0IsProviderType>::ActivityData<XamlSwitcherLogging,_TlgReflectorTag_Param0IsProviderType>(
      (__int64)(v4 + 2),
      a2);
    wil::details::shared_object<wil::ActivityBase<GamingPostureCoreTelemetryProvider,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityData<GamingPostureCoreTelemetryProvider,_TlgReflectorTag_Param0IsProviderType>>::reset(a1);
    LOBYTE(v4) = 1;
    *a1 = v5;
  }
  return (char)v4;
}
