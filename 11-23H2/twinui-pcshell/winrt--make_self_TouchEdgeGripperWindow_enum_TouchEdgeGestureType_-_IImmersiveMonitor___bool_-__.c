/*
 * XREFs of winrt::make_self_TouchEdgeGripperWindow_enum_TouchEdgeGestureType_&_IImmersiveMonitor___bool_&__lambda_c23e8e667a3c4ca3ee30dd3b90606dcd___ @ 0x1806566F0
 * Callers:
 *     TouchEdgeGripperHost::CreateGripperWindowAsync$_ResumeCoro$1 @ 0x18021EBA0 (TouchEdgeGripperHost--CreateGripperWindowAsync$_ResumeCoro$1.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@XAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@std@@IEAAXXZ @ 0x1800875EC (-_Tidy@-$_Func_class@XAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@w.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     ??0TouchEdgeGripperWindow@@QEAA@W4TouchEdgeGestureType@@PEAUIImmersiveMonitor@@_NAEBV?$function@$$A6AXIAEBUPoint@Foundation@Windows@winrt@@@Z@std@@@Z @ 0x180658C9C (--0TouchEdgeGripperWindow@@QEAA@W4TouchEdgeGestureType@@PEAUIImmersiveMonitor@@_NAEBV-$function@.c)
 */

// Hidden C++ exception states: #wind=3
TouchEdgeGripperWindow **__fastcall winrt::make_self_TouchEdgeGripperWindow_enum_TouchEdgeGestureType___IImmersiveMonitor___bool____lambda_c23e8e667a3c4ca3ee30dd3b90606dcd___(
        TouchEdgeGripperWindow **a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  TouchEdgeGripperWindow *v9; // [rsp+38h] [rbp-80h]
  _QWORD v10[8]; // [rsp+40h] [rbp-78h] BYREF

  v9 = (TouchEdgeGripperWindow *)operator new(0xA8uLL);
  v6 = *a5;
  v10[0] = off_1807EFFE0;
  v10[1] = v6;
  v10[7] = v10;
  TouchEdgeGripperWindow::TouchEdgeGripperWindow(v9, (__int64)v10);
  *(_QWORD *)v9 = &winrt::impl::heap_implements<TouchEdgeGripperWindow>::`vftable';
  *a1 = v9;
  std::_Func_class<void,winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &>::_Tidy(
    (__int64)v10,
    v7);
  return a1;
}
