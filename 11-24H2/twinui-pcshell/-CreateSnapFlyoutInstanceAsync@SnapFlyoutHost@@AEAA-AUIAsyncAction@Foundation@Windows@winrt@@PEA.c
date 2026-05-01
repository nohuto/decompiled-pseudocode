/*
 * XREFs of ?CreateSnapFlyoutInstanceAsync@SnapFlyoutHost@@AEAA?AUIAsyncAction@Foundation@Windows@winrt@@PEAUHWND__@@W4SnapControlType@SnapComponent@Shell@Internal@45@IW4InputDeviceKind@9UI@WindowsUdk@5@PEAUHMONITOR__@@V?$tip_test@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@W4ShowFlags@1@@Z @ 0x18028BFD8
 * Callers:
 *     ?InternalShowFlyout@SnapFlyoutHost@@AEAAXPEAUHWND__@@W4ShowFlags@1@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1801C52D0 (-InternalShowFlyout@SnapFlyoutHost@@AEAAXPEAUHWND__@@W4ShowFlags@1@AEBV-$unique_any_t@V-$unique_.c)
 *     ?InternalShowBar@SnapFlyoutHost@@AEAAXPEAUHWND__@@W4InputDeviceKind@Shell@UI@WindowsUdk@winrt@@PEAUHMONITOR__@@@Z @ 0x180271E40 (-InternalShowBar@SnapFlyoutHost@@AEAAXPEAUHWND__@@W4InputDeviceKind@Shell@UI@WindowsUdk@winrt@@P.c)
 * Callees:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18028B6EC (--1-$com_ptr_t@V-$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@Uerr_returncode_policy.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_InitCoro$2 @ 0x1805B17BC (SnapFlyoutHost--CreateSnapFlyoutInstanceAsync$_InitCoro$2.c)
 */

// Hidden C++ exception states: #wind=1
__int64 SnapFlyoutHost::CreateSnapFlyoutInstanceAsync(__int64 a1, __int64 a2, int a3, int a4, ...)
{
  unsigned int v7; // eax
  void **v8; // rbx
  __int64 v10; // [rsp+50h] [rbp-5D8h]
  int v11; // [rsp+638h] [rbp+10h] BYREF
  int v12; // [rsp+648h] [rbp+20h] BYREF
  __int64 v13; // [rsp+650h] [rbp+28h] BYREF
  va_list va; // [rsp+650h] [rbp+28h]
  __int64 v15; // [rsp+658h] [rbp+30h] BYREF
  va_list va1; // [rsp+658h] [rbp+30h]
  __int64 v17; // [rsp+660h] [rbp+38h]
  void **v18; // [rsp+668h] [rbp+40h]
  va_list va2; // [rsp+670h] [rbp+48h] BYREF

  va_start(va2, a4);
  va_start(va1, a4);
  va_start(va, a4);
  v13 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v15 = va_arg(va2, _QWORD);
  v17 = va_arg(va2, _QWORD);
  v18 = va_arg(va2, void **);
  v12 = a4;
  v7 = (unsigned int)operator new(0x5B0uLL);
  v11 = 0;
  v10 = a1;
  v8 = v18;
  SnapFlyoutHost::CreateSnapFlyoutInstanceAsync__InitCoro_2(
    (unsigned int)&v11,
    v7 + 112,
    a2,
    a3,
    (__int64)&v12,
    (__int64)va,
    (__int64)va1,
    v17,
    (__int64)v18,
    (__int64)va2,
    v10);
  wil::com_ptr_t<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>,wil::err_returncode_policy>(v8);
  return a2;
}
