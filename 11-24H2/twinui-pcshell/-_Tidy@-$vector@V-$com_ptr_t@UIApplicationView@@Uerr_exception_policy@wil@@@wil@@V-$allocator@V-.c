/*
 * XREFs of ?_Tidy@?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x1802CBA1C
 * Callers:
 *     ??1KioskPositioner@@UEAA@XZ @ 0x18007B490 (--1KioskPositioner@@UEAA@XZ.c)
 *     ??1GamingApplicationViewCollection@@QEAA@XZ @ 0x1802D0C94 (--1GamingApplicationViewCollection@@QEAA@XZ.c)
 *     ??1UwpPrimaryAppProxy@@UEAA@XZ @ 0x1804F1004 (--1UwpPrimaryAppProxy@@UEAA@XZ.c)
 *     ??1?$_Tidy_guard@V?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@QEAA@XZ @ 0x1804F8C10 (--1-$_Tidy_guard@V-$vector@V-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V-$a.c)
 *     ??1GamingPosturePositioner@@UEAA@XZ @ 0x1804F8ED8 (--1GamingPosturePositioner@@UEAA@XZ.c)
 *     ?GetSecondaryView@GamingPosturePositioner@@AEAA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x180500560 (-GetSecondaryView@GamingPosturePositioner@@AEAA-AV-$com_ptr_t@UIApplicationView@@Uerr_exception_.c)
 *     ?TryGetTopTwoApplicationViews@GamingPosturePositioner@@UEAAXPEAPEAUIApplicationView@@0@Z @ 0x180507160 (-TryGetTopTwoApplicationViews@GamingPosturePositioner@@UEAAXPEAPEAUIApplicationView@@0@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x18017EA54 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@.c)
 */

void __fastcall std::vector<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>::_Tidy(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>>(
      (__int64)v2,
      *(_QWORD *)(a1 + 8));
    std::_Deallocate<16,0>(
      *(void **)a1,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
