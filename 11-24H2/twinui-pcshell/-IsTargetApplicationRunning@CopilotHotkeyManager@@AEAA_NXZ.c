/*
 * XREFs of ?IsTargetApplicationRunning@CopilotHotkeyManager@@AEAA_NXZ @ 0x1806326DC
 * Callers:
 *     ?SendWindowMessageOnInvocation@CopilotHotkeyManager@@AEAA_NHAEAPEAUHWND__@@@Z @ 0x180634D90 (-SendWindowMessageOnInvocation@CopilotHotkeyManager@@AEAA_NHAEAPEAUHWND__@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18004D04C (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall CopilotHotkeyManager::IsTargetApplicationRunning(CopilotHotkeyManager *this)
{
  __int64 v2; // rdi
  int (__fastcall *v3)(__int64, _QWORD *, __int64 *); // rsi
  _QWORD *v4; // rdx
  bool v5; // bl
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  v2 = *((_QWORD *)this + 20);
  v3 = *(int (__fastcall **)(__int64, _QWORD *, __int64 *))(*(_QWORD *)v2 + 64LL);
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(&v7);
  v4 = (_QWORD *)((char *)this + 208);
  if ( *((_QWORD *)this + 29) > 7uLL )
    v4 = (_QWORD *)*v4;
  v5 = v3(v2, v4, &v7) >= 0;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v7);
  return v5;
}
