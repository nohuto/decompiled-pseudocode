/*
 * XREFs of ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180032E78
 * Callers:
 *     _CStreamClassPolicyGainsWrapper::GetStreamClassPolicyGainsForEndpoint_::_1_::catch$12 @ 0x180049560 (_CStreamClassPolicyGainsWrapper--GetStreamClassPolicyGainsForEndpoint_--_1_--catch$12.c)
 *     _CApplication::NotifyVolumePolicyChange_::_1_::catch$7 @ 0x1800497A0 (_CApplication--NotifyVolumePolicyChange_--_1_--catch$7.c)
 *     __lambda_0a903797054c4de60318e94de109d2f9_::operator()_::_1_::catch$8 @ 0x18004B348 (__lambda_0a903797054c4de60318e94de109d2f9_--operator()_--_1_--catch$8.c)
 * Callees:
 *     ??$ReportFailure_CaughtException@$01@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z @ 0x18002FA94 (--$ReportFailure_CaughtException@$01@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Log_CaughtException(
        wil::details::in1diag3 *this,
        void *a2,
        int a3,
        const char *a4)
{
  return wil::details::ReportFailure_CaughtException<2>((int)this, (int)a2, a3);
}
