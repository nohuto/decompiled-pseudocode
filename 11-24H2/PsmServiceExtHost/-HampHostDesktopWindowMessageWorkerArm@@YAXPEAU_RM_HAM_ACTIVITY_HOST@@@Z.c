/*
 * XREFs of ?HampHostDesktopWindowMessageWorkerArm@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18007DC34
 * Callers:
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18000B244 (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 * Callees:
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800090C0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmActivityHostReferenceFromHam@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002704C (-RmActivityHostReferenceFromHam@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_RemoveDamPhaseForHam@@@details@wil@@QEAA_NXZ @ 0x18007EFD0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_RemoveDamPhaseForHam@@@details@wi.c)
 */

void __fastcall HampHostDesktopWindowMessageWorkerArm(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_RemoveDamPhaseForHam>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_RemoveDamPhaseForHam>::GetImpl'::`2'::impl);
  HampHostAcquireLockExclusiveEx(a1, 0);
  *((_QWORD *)a1 + 84) |= 0x40uLL;
  RmActivityHostReferenceFromHam(a1);
  TpPostWork(*((_QWORD *)a1 + 81));
  HampHostReleaseLockExclusive(a1);
}
