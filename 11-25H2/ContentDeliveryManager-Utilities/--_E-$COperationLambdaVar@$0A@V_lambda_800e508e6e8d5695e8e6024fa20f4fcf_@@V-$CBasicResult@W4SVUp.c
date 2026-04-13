/*
 * XREFs of ??_E?$COperationLambdaVar@$0A@V_lambda_800e508e6e8d5695e8e6024fa20f4fcf_@@V?$CBasicResult@W4SVUpgradeEligibilityState@ContentManagement@@$0A@@Internal@Windows@@$$V@Internal@Windows@@UEAAPEAXI@Z @ 0x18002CC90
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$COperationLambdaVar@$0A@V_lambda_800e508e6e8d5695e8e6024fa20f4fcf_@@V?$CBasicResult@W4SVUpgradeEligibilityState@ContentManagement@@$0A@@Internal@Windows@@$$V@Internal@Windows@@UEAA@XZ @ 0x180029E88 (--1-$COperationLambdaVar@$0A@V_lambda_800e508e6e8d5695e8e6024fa20f4fcf_@@V-$CBasicResult@W4SVUpg.c)
 */

_QWORD *__fastcall Windows::Internal::COperationLambdaVar<0,_lambda_800e508e6e8d5695e8e6024fa20f4fcf_,Windows::Internal::CBasicResult<enum ContentManagement::SVUpgradeEligibilityState,0>,>::`vector deleting destructor'(
        _QWORD *a1,
        char a2)
{
  Windows::Internal::COperationLambdaVar<0,_lambda_800e508e6e8d5695e8e6024fa20f4fcf_,Windows::Internal::CBasicResult<enum ContentManagement::SVUpgradeEligibilityState,0>,>::~COperationLambdaVar<0,_lambda_800e508e6e8d5695e8e6024fa20f4fcf_,Windows::Internal::CBasicResult<enum ContentManagement::SVUpgradeEligibilityState,0>,>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
