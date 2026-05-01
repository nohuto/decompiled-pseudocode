/*
 * XREFs of ?AddView@GamingApplicationViewCollection@@QEAA_NPEAUIApplicationView@@@Z @ 0x1804FA210
 * Callers:
 *     ?EnterFullScreenForView@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x1804FC4D0 (-EnterFullScreenForView@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?HandleWin32ApplicationView@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@@Z @ 0x180501458 (-HandleWin32ApplicationView@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?FindView@GamingApplicationViewCollection@@AEAA?AV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@PEAUIApplicationView@@@Z @ 0x1804F19A4 (-FindView@GamingApplicationViewCollection@@AEAA-AV-$_Vector_const_iterator@V-$_Vector_val@U-$_Si.c)
 *     ??$emplace@AEAPEAUIApplicationView@@@?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@1@AEAPEAUIApplicationView@@@Z @ 0x1804F7EFC (--$emplace@AEAPEAUIApplicationView@@@-$vector@V-$com_ptr_t@UIApplicationView@@Uerr_exception_pol.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall GamingApplicationViewCollection::AddView(RTL_SRWLOCK *this, struct IUnknown *a2)
{
  char v4; // bl
  struct IUnknown **v6; // [rsp+30h] [rbp+8h] BYREF
  struct IUnknown *v7; // [rsp+38h] [rbp+10h] BYREF
  RTL_SRWLOCK *v8; // [rsp+40h] [rbp+18h] BYREF

  v7 = a2;
  wil::AcquireSRWLockExclusive(&v8, this + 3);
  GamingApplicationViewCollection::FindView((struct IUnknown ***)this, &v6, a2);
  if ( v6 == this[1].Ptr )
  {
    v4 = 1;
    std::vector<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>::emplace<IApplicationView * &>(
      (__int64)this,
      &v6,
      (__int64 *)this->Ptr,
      (__int64 *)&v7);
  }
  else
  {
    v4 = 0;
  }
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v8);
  return v4;
}
