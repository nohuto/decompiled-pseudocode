/*
 * XREFs of ?Provider@AppCloselogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1801881EC
 * Callers:
 *     ?Stop@?$ActivityBase@VAppCloselogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180187FF4 (-Stop@-$ActivityBase@VAppCloselogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?StartActivity@ShellAppManagerCloseRequested@AppCloseTelemetry@@QEAAXK@Z @ 0x180188134 (-StartActivity@ShellAppManagerCloseRequested@AppCloseTelemetry@@QEAAXK@Z.c)
 *     ?zInternalStart@?$ActivityBase@VAppCloselogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18018820C (-zInternalStart@-$ActivityBase@VAppCloselogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Para.c)
 *     ??1?$_TlgActivityBase@V?$ActivityData@VAppCloselogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VAppCloselogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@$0EAAAAAAAAAAA@$04@@IEAA@XZ @ 0x1802CBDC8 (--1-$_TlgActivityBase@V-$ActivityData@VAppCloselogging@@U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ??$UserInputCloseRequested@AEAKPEBGW4CloseRequestInputSource@AppCloseTelemetry@@@AppCloseTelemetry@@SAXAEAK$$QEAPEBG$$QEAW4CloseRequestInputSource@0@@Z @ 0x1802E29B8 (--$UserInputCloseRequested@AEAKPEBGW4CloseRequestInputSource@AppCloseTelemetry@@@AppCloseTelemet.c)
 *     ??1Completer@?$static_lazy@VAppCloseTelemetry@@@details@wil@@QEAA@XZ @ 0x1802E3728 (--1Completer@-$static_lazy@VAppCloseTelemetry@@@details@wil@@QEAA@XZ.c)
 *     ?NotifyFailure@?$ActivityBase@VAppCloselogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1802FF5C0 (-NotifyFailure@-$ActivityBase@VAppCloselogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param.c)
 *     ?StopActivity@ShellAppManagerCloseRequested@AppCloseTelemetry@@MEAAXXZ @ 0x1802FFEA0 (-StopActivity@ShellAppManagerCloseRequested@AppCloseTelemetry@@MEAAXXZ.c)
 * Callees:
 *     ?get@?$static_lazy@VAppCloselogging@@@details@wil@@QEAAPEAVAppCloselogging@@P6AXXZ@Z @ 0x180188298 (-get@-$static_lazy@VAppCloselogging@@@details@wil@@QEAAPEAVAppCloselogging@@P6AXXZ@Z.c)
 */

const struct _tlgProvider_t *__fastcall AppCloselogging::Provider(__int64 a1)
{
  return *(const struct _tlgProvider_t **)(wil::details::static_lazy<AppCloselogging>::get(
                                             a1,
                                             _lambda_3e26dcec44775d43d9dfc79dea49f939_::_lambda_invoker_cdecl_)
                                         + 8);
}
