/*
 * XREFs of ?HandleFallbackForMinimizedView@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@@Z @ 0x180500750
 * Callers:
 *     _lambda_2461923bd7d30a187d21cb937ed01b39_::operator() @ 0x1804F93DC (_lambda_2461923bd7d30a187d21cb937ed01b39_--operator().c)
 *     ?OnShellTrackedWindowPosChanged@GamingPosturePositioner@@UEAAXPEAUHWND__@@PEAUIApplicationView@@HKUtagRECT@@@Z @ 0x1805042F0 (-OnShellTrackedWindowPosChanged@GamingPosturePositioner@@UEAAXPEAUHWND__@@PEAUIApplicationView@@.c)
 * Callees:
 *     ??4?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180019118 (--4-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QE.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?FindView@GamingApplicationViewCollection@@AEAA?AV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@PEAUIApplicationView@@@Z @ 0x1804F19A4 (-FindView@GamingApplicationViewCollection@@AEAA-AV-$_Vector_const_iterator@V-$_Vector_val@U-$_Si.c)
 *     ?erase@?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x1804F37C4 (-erase@-$vector@V-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V-$allocator@V-.c)
 *     ??$emplace@AEAPEAUIApplicationView@@@?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@1@AEAPEAUIApplicationView@@@Z @ 0x1804F7EFC (--$emplace@AEAPEAUIApplicationView@@@-$vector@V-$com_ptr_t@UIApplicationView@@Uerr_exception_pol.c)
 *     ?ReleasePrimaryView@GamingPosturePositioner@@AEAAX_N0@Z @ 0x180505828 (-ReleasePrimaryView@GamingPosturePositioner@@AEAAX_N0@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall GamingPosturePositioner::HandleFallbackForMinimizedView(
        GamingPosturePositioner *this,
        struct IUnknown *a2)
{
  struct IUnknown ***v4; // rbx
  struct IUnknown **v5; // [rsp+40h] [rbp+8h] BYREF
  struct IUnknown *v6; // [rsp+48h] [rbp+10h] BYREF
  RTL_SRWLOCK *v7; // [rsp+50h] [rbp+18h] BYREF

  v4 = (struct IUnknown ***)((char *)this + 848);
  v6 = a2;
  wil::AcquireSRWLockExclusive(&v7, (RTL_SRWLOCK *)this + 109);
  GamingApplicationViewCollection::FindView(v4, &v5, a2);
  if ( v5 != v4[1] )
    std::vector<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>::erase((__int64)v4, &v5, (__int64)v5);
  std::vector<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>::emplace<IApplicationView * &>(
    (__int64)v4,
    &v5,
    (__int64 *)*v4,
    (__int64 *)&v6);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v7);
  wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_exception_policy>::operator=(
    (__int64 *)this + 115,
    (__int64)a2);
  GamingPosturePositioner::ReleasePrimaryView(this, 0, 0);
  GamingPosturePositioner::HandleViewFallback(this, 1);
}
