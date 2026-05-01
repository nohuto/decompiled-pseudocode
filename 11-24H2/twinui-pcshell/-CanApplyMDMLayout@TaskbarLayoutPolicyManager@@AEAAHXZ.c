/*
 * XREFs of ?CanApplyMDMLayout@TaskbarLayoutPolicyManager@@AEAAHXZ @ 0x180166454
 * Callers:
 *     ?CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z @ 0x180166010 (-CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z.c)
 *     ?PopulateEnterpriseLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x18031F8EC (-PopulateEnterpriseLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@U.c)
 * Callees:
 *     wil::details::RunFeatureDispatch__lambda_203a32cbd1766f67226f85b07542c037__&_ @ 0x18004D1F0 (wil--details--RunFeatureDispatch__lambda_203a32cbd1766f67226f85b07542c037__-_.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MdmSupportForEdu@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18016693C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MdmSupportForEdu@@@details@wil@@QEAAX_NW4.c)
 */

__int64 __fastcall TaskbarLayoutPolicyManager::CanApplyMDMLayout(TaskbarLayoutPolicyManager *this, __int64 a2)
{
  __int64 v2; // rcx
  _QWORD v4[3]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v5; // [rsp+38h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]
  TaskbarLayoutPolicyManager *v7; // [rsp+50h] [rbp+8h] BYREF

  v4[2] = 0LL;
  v4[0] = retaddr;
  v4[1] = "pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp";
  v5 = 292;
  v7 = this;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MdmSupportForEdu>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_MdmSupportForEdu>::GetImpl'::`2'::impl,
    a2);
  return wil::details::RunFeatureDispatch__lambda_203a32cbd1766f67226f85b07542c037____(v2, (__int64)v4, (__int64)&v7);
}
