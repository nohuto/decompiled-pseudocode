/*
 * XREFs of _guard_dispatch_icall @ 0x140005A10
 * Callers:
 *     CiProcessNotification @ 0x140001180 (CiProcessNotification.c)
 *     CiSystemDetectPotentiallyStarvedProcessors @ 0x140003040 (CiSystemDetectPotentiallyStarvedProcessors.c)
 *     WPP_SF_ @ 0x140004620 (WPP_SF_.c)
 *     WPP_SF_D @ 0x140004704 (WPP_SF_D.c)
 *     WPP_SF_Sd @ 0x140004750 (WPP_SF_Sd.c)
 *     WPP_SF_Z @ 0x1400047D4 (WPP_SF_Z.c)
 *     WPP_SF_Zd @ 0x140004854 (WPP_SF_Zd.c)
 *     WPP_SF_Zq @ 0x1400048E8 (WPP_SF_Zq.c)
 *     WPP_SF_d @ 0x140004960 (WPP_SF_d.c)
 *     WPP_SF_dd @ 0x1400049A4 (WPP_SF_dd.c)
 *     WPP_SF_q @ 0x1400049FC (WPP_SF_q.c)
 *     WPP_SF_P @ 0x140004C84 (WPP_SF_P.c)
 *     WPP_SF_S @ 0x140004CD0 (WPP_SF_S.c)
 *     WPP_SF_dI @ 0x140004D48 (WPP_SF_dI.c)
 *     WPP_SF_qqd @ 0x140004DA4 (WPP_SF_qqd.c)
 *     WPP_SF_L @ 0x140004E0C (WPP_SF_L.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1400051E4 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x140005260 (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x14000534C (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140007010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     WppLoadTracingSupport @ 0x14000D010 (WppLoadTracingSupport.c)
 *     WppInitKm @ 0x14000D160 (WppInitKm.c)
 *     CsTerminate @ 0x14000D470 (CsTerminate.c)
 *     WppTraceCallback @ 0x14000D5B0 (WppTraceCallback.c)
 *     CiDispatchCreate @ 0x14000FB20 (CiDispatchCreate.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall guard_dispatch_icall()
{
  __int64 (__fastcall *v0)(); // rax

  return v0();
}
