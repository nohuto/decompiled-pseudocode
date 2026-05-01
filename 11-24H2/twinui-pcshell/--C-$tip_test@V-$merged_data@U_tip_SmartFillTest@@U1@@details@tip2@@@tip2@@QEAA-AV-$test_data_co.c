/*
 * XREFs of ??C?$tip_test@V?$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@@1@XZ @ 0x18028A1A0
 * Callers:
 *     ?GetRectForRegion@SnapLayoutHelpers@@YAJAEBUCRect@Geometry@@W4SnapLayoutFlags@1@PEAUIImmersiveMonitor@@AEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@PEAUtagRECT@@PEAUSMART_FILL_OUTPUT@1@@Z @ 0x18008CA28 (-GetRectForRegion@SnapLayoutHelpers@@YAJAEBUCRect@Geometry@@W4SnapLayoutFlags@1@PEAUIImmersiveMo.c)
 * Callees:
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18028A1DC (-ensure_data@-$tip_test@V-$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@@tip2@@AEBAAEAV-$c.c)
 *     ?begin_update@?$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ @ 0x18028B450 (-begin_update@-$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ.c)
 */

__int64 *__fastcall tip2::tip_test<tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>>::operator->(
        __int64 a1,
        __int64 *a2)
{
  __int64 *v3; // rax
  __int64 v4; // rcx

  v3 = (__int64 *)tip2::tip_test<tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>>::ensure_data(a1);
  v4 = *v3;
  *a2 = *v3;
  if ( v4 )
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 376));
  tip2::details::shared_data<0,0,1>::begin_update(*a2 + 8);
  return a2;
}
