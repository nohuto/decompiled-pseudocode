/*
 * XREFs of ?HampHostEndQuiesceTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18006F5C8
 * Callers:
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18000B244 (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 * Callees:
 *     ?HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180009E5C (-HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180009EEC (-HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SerializedQuiesceFix@@@details@wil@@QEAA_NXZ @ 0x18007F00C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SerializedQuiesceFix@@@details@wi.c)
 */

void __fastcall HampHostEndQuiesceTurn(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  __int64 v1; // rbx
  char IsEnabled; // al
  __int64 v3; // rcx

  v1 = *(_QWORD *)(*((_QWORD *)a1 + 99) + 88LL);
  HampPkgAcquireLockExclusive((struct _HAM_PACKAGE *)v1);
  *(_DWORD *)(v1 + 340) &= ~8u;
  HampPkgReleaseLockExclusive((struct _HAM_PACKAGE *)v1);
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_SerializedQuiesceFix>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_SerializedQuiesceFix>::GetImpl'::`2'::impl);
  v3 = v1 + 320;
  if ( IsEnabled )
    RtlWakeAllConditionVariable(v3);
  else
    RtlWakeConditionVariable(v3);
}
