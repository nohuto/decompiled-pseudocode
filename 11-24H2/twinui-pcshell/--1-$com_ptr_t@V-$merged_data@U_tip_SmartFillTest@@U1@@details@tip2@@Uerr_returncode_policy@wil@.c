/*
 * XREFs of ??1?$com_ptr_t@V?$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1802C69E8
 * Callers:
 *     ?GetRectForRegion@SnapLayoutHelpers@@YAJAEBUCRect@Geometry@@W4SnapLayoutFlags@1@PEAUIImmersiveMonitor@@AEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@PEAUtagRECT@@PEAUSMART_FILL_OUTPUT@1@@Z @ 0x18008CA28 (-GetRectForRegion@SnapLayoutHelpers@@YAJAEBUCRect@Geometry@@W4SnapLayoutFlags@1@PEAUIImmersiveMo.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18028A1DC (-ensure_data@-$tip_test@V-$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@@tip2@@AEBAAEAV-$c.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802C69C0 (--1-$test_watcher@V-$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802C88E0 (--1-$test_data_control@V-$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ??1?$tip_test@V?$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802D0E20 (--1-$tip_test@V-$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@AEAAKXZ @ 0x1805AC4A8 (-Release@-$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@AEAAKXZ.c)
 */

__int64 __fastcall wil::com_ptr_t<tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>,wil::err_returncode_policy>(
        void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>::Release(v1);
  return result;
}
