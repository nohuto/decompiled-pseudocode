/*
 * XREFs of ?Provider@CDMUtilsUnlockLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18008E268
 * Callers:
 *     ??$ExtendedExecutionClosed@AEA_N@CDMUtilsUnlockTelemetry@@SAXAEA_N@Z @ 0x18008BFA8 (--$ExtendedExecutionClosed@AEA_N@CDMUtilsUnlockTelemetry@@SAXAEA_N@Z.c)
 *     ??1?$_TlgActivityBase@V?$ActivityData@VCDMUtilsUnlockLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCDMUtilsUnlockLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@$0A@$04@@IEAA@XZ @ 0x18008CE40 (--1-$_TlgActivityBase@V-$ActivityData@VCDMUtilsUnlockLogging@@U_TlgReflectorTag_Param0IsProvider.c)
 *     ?NotifyFailure@?$ActivityBase@VCDMUtilsUnlockLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x18008DE50 (-NotifyFailure@-$ActivityBase@VCDMUtilsUnlockLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsPr.c)
 *     ?ReportStopActivity@?$ActivityBase@VCDMUtilsUnlockLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x18008E7C0 (-ReportStopActivity@-$ActivityBase@VCDMUtilsUnlockLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param.c)
 *     ?ReusingExistingExtendedExecution@CDMUtilsUnlockTelemetry@@SAXXZ @ 0x18008EA10 (-ReusingExistingExtendedExecution@CDMUtilsUnlockTelemetry@@SAXXZ.c)
 *     ?StartActivity@ExtendedExecutionRequested@CDMUtilsUnlockTelemetry@@QEAAXXZ @ 0x18008EF88 (-StartActivity@ExtendedExecutionRequested@CDMUtilsUnlockTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VCDMUtilsUnlockLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18008F064 (-Stop@-$ActivityBase@VCDMUtilsUnlockLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ?StopActivity@ExtendedExecutionRequested@CDMUtilsUnlockTelemetry@@MEAAXXZ @ 0x18008F140 (-StopActivity@ExtendedExecutionRequested@CDMUtilsUnlockTelemetry@@MEAAXXZ.c)
 * Callees:
 *     ?get@?$static_lazy@VCDMUtilsUnlockLogging@@@details@wil@@QEAAPEAVCDMUtilsUnlockLogging@@P6AXXZ@Z @ 0x18008F6C4 (-get@-$static_lazy@VCDMUtilsUnlockLogging@@@details@wil@@QEAAPEAVCDMUtilsUnlockLogging@@P6AXXZ@Z.c)
 */

const struct _tlgProvider_t *__fastcall CDMUtilsUnlockLogging::Provider(__int64 a1)
{
  return *(const struct _tlgProvider_t **)(wil::details::static_lazy<CDMUtilsUnlockLogging>::get(
                                             a1,
                                             _lambda_fcb9b5ef2ad8bfd832238adf5d8bb457_::_lambda_invoker_cdecl_)
                                         + 8);
}
