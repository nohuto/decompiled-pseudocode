/*
 * XREFs of ?Run@?$COperationLambdaVar@$0A@V_lambda_800e508e6e8d5695e8e6024fa20f4fcf_@@V?$CBasicResult@W4SVUpgradeEligibilityState@ContentManagement@@$0A@@Internal@Windows@@$$V@Internal@Windows@@UEAAJW4AsyncStage@23@JAEAV?$CBasicResult@W4SVUpgradeEligibilityState@ContentManagement@@$0A@@23@@Z @ 0x18003A570
 * Callers:
 *     <none>
 * Callees:
 *     ??R_lambda_800e508e6e8d5695e8e6024fa20f4fcf_@@QEBAJAEAV?$CBasicResult@W4SVUpgradeEligibilityState@ContentManagement@@$0A@@Internal@Windows@@@Z @ 0x18002BDAC (--R_lambda_800e508e6e8d5695e8e6024fa20f4fcf_@@QEBAJAEAV-$CBasicResult@W4SVUpgradeEligibilityStat.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::COperationLambdaVar<0,_lambda_800e508e6e8d5695e8e6024fa20f4fcf_,Windows::Internal::CBasicResult<enum ContentManagement::SVUpgradeEligibilityState,0>,>::Run(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4)
{
  if ( a3 >= 0 )
    a3 = *(_DWORD *)(a1 + 16);
  if ( a2 == 1 && a3 >= 0 )
    return (unsigned int)_lambda_800e508e6e8d5695e8e6024fa20f4fcf_::operator()(a1, a4);
  return (unsigned int)a3;
}
