/*
 * XREFs of ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x140071BD8
 * Callers:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ImplVal@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x140071750 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ImplVal@@@details@wil@@QEAAX_NW4Reporting.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MediaQI2505@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1400717D4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MediaQI2505@@@details@wil@@QEAAX_NW4Repor.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_PerfImpTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x140071858 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_PerfImpTest@@@details@wil@@QEAAX_NW4Repor.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_RemoteAudioExclusiveStreamFix@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1400718D4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_RemoteAudioExclusiveStreamFix@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_25_03_NonSec@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x14007195C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_25_03_NonSec@@@details@wil@@QE.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_25_04_NonSec@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1400719D8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_25_04_NonSec@@@details@wil@@QE.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_25_05_NonSec@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x140071A54 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_25_05_NonSec@@@details@wil@@QE.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TestGateImp@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x140071AD0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TestGateImp@@@details@wil@@QEAAX_NW4Repor.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TestLabVal@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x140071B54 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TestLabVal@@@details@wil@@QEAAX_NW4Report.c)
 * Callees:
 *     ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_KE@Z @ 0x140071C7C (-ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_deta.c)
 *     wil_details_MapReportingKind @ 0x140072454 (wil_details_MapReportingKind.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_UNKNOWN **__fastcall wil::details::ReportUsageToService(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        unsigned int a7)
{
  _UNKNOWN **result; // rax
  unsigned int v9; // r10d
  __int64 v10; // r11
  char v11; // [rsp+30h] [rbp-28h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  result = &retaddr;
  if ( a7 )
  {
    wil_details_MapReportingKind(a7, a6);
    result = (_UNKNOWN **)wil::details::ReportUsageToServiceDirect(v10, a2, v9);
    if ( (_DWORD)result )
    {
      result = (_UNKNOWN **)g_wil_details_pfnFeatureLoggingHook;
      if ( g_wil_details_pfnFeatureLoggingHook )
      {
        v11 = 0;
        return (_UNKNOWN **)g_wil_details_pfnFeatureLoggingHook(a2, a5, 0LL, a6, &a7, 0LL, v11, 1LL);
      }
    }
  }
  return result;
}
