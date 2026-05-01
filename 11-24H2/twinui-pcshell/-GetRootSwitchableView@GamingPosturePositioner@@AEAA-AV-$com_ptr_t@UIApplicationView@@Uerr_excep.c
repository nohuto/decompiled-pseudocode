/*
 * XREFs of ?GetRootSwitchableView@GamingPosturePositioner@@AEAA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x180500480
 * Callers:
 *     ?HandleViewNoLongerTracked@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@PEAUHWND__@@@Z @ 0x180500C08 (-HandleViewNoLongerTracked@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@PEAUHWND__@@@Z.c)
 *     ?HandleViewRecovery@GamingPosturePositioner@@AEAAXXZ @ 0x180500E88 (-HandleViewRecovery@GamingPosturePositioner@@AEAAXXZ.c)
 *     ?MakeViewPrimary@GamingPosturePositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180502640 (-MakeViewPrimary@GamingPosturePositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?OnApplicationViewChanged@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1805032C0 (-OnApplicationViewChanged@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW.c)
 *     ?OnGroupWindowTemplateApplied@GamingPosturePositioner@@UEAAXPEAUHWND__@@KKUtagRECT@@1K@Z @ 0x180503F40 (-OnGroupWindowTemplateApplied@GamingPosturePositioner@@UEAAXPEAUHWND__@@KKUtagRECT@@1K@Z.c)
 *     ?OnShellTrackedWindowPosChanged@GamingPosturePositioner@@UEAAXPEAUHWND__@@PEAUIApplicationView@@HKUtagRECT@@@Z @ 0x1805042F0 (-OnShellTrackedWindowPosChanged@GamingPosturePositioner@@UEAAXPEAUHWND__@@PEAUIApplicationView@@.c)
 *     ?OnShowWindowPolicy@GamingPosturePositioner@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z @ 0x180504C90 (-OnShowWindowPolicy@GamingPosturePositioner@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18004D04C (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??0?$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z @ 0x1800D6010 (--0-$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall GamingPosturePositioner::GetRootSwitchableView(__int64 a1, __int64 *a2, __int64 a3)
{
  int (__fastcall *v5)(__int64, __int64 *); // rbx
  __int64 v6; // rax
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = a1;
  if ( !a3 )
    goto LABEL_6;
  v8 = 0LL;
  v5 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a3 + 360LL);
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(&v8);
  if ( v5(a3, &v8) < 0 || (v6 = v8) == 0 )
  {
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v8);
LABEL_6:
    wil::com_ptr_t<TaskViewFrame,wil::err_exception_policy>::com_ptr_t<TaskViewFrame,wil::err_exception_policy>(a2, a3);
    return a2;
  }
  v8 = 0LL;
  *a2 = v6;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v8);
  return a2;
}
