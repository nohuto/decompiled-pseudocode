/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_RemoveDamPhaseForHam@@@details@wil@@QEAA_NXZ @ 0x18007EFD0
 * Callers:
 *     ?HampWakeContextTryUpdateActivityState@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@PEAU_HAM_HOST_WAKE_CONTEXT_WORKER_STATE@@@Z @ 0x180015B8C (-HampWakeContextTryUpdateActivityState@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@PEAU_HAM_HOST_WAKE_CONTEX.c)
 *     ?HampUtilAreActivityPropertiesValid@@YAKPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x18003A094 (-HampUtilAreActivityPropertiesValid@@YAKPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 *     ?HampUtilCheckStartAndRevokeFlags@@YAKPEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x18006F77C (-HampUtilCheckStartAndRevokeFlags@@YAKPEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 *     ?HampPdcPlmWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18006F960 (-HampPdcPlmWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     HamRpcSrvCreateAutoRestartActivityForDesktopBridge @ 0x18006FCC0 (HamRpcSrvCreateAutoRestartActivityForDesktopBridge.c)
 *     ?HampHostDesktopWindowMessageWorkerArm@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18007DC34 (-HampHostDesktopWindowMessageWorkerArm@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostTryEnterModsPlmPhase@@YA?AW4_HAM_PDC_BLOCK_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18007E25C (-HampHostTryEnterModsPlmPhase@@YA-AW4_HAM_PDC_BLOCK_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampPdcAllocateState@@YAJPEAU_HAM_PDC_CONTEXT@@@Z @ 0x180083634 (-HampPdcAllocateState@@YAJPEAU_HAM_PDC_CONTEXT@@@Z.c)
 *     ?HampPdcStart@@YAJPEAU_HAM_PDC_CONTEXT@@@Z @ 0x180083830 (-HampPdcStart@@YAJPEAU_HAM_PDC_CONTEXT@@@Z.c)
 *     ?RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1_KW4_HAM_HOST_WAIT_TYPE@@@Z @ 0x18008515C (-RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1_KW4_HAM_HOST_WAIT_TYPE.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_RemoveDamPhaseForHam@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18007C1A8 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_RemoveDamPhaseForHam@@@d.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_RemoveDamPhaseForHam@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18007E960 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_RemoveDamPhaseForHam@@@details@wil@@QEAAX.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_RemoveDamPhaseForHam>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_RemoveDamPhaseForHam>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_RemoveDamPhaseForHam>::ReportUsage(a1, v6 & 1, v3, v4);
  return v2;
}
