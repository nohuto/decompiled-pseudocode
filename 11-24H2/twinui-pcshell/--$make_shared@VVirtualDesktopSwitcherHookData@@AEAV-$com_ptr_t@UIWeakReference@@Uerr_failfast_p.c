/*
 * XREFs of ??$make_shared@VVirtualDesktopSwitcherHookData@@AEAV?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@wil@@AEAPEAUHHOOK__@@@std@@YA?AV?$shared_ptr@VVirtualDesktopSwitcherHookData@@@0@AEAV?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@wil@@AEAPEAUHHOOK__@@@Z @ 0x1806A91A0
 * Callers:
 *     ??0VirtualDesktopSwitcherHook@@QEAA@V?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@wil@@@Z @ 0x1806A9968 (--0VirtualDesktopSwitcherHook@@QEAA@V-$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@wil.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18029BC1C (--0-$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 */

__int64 **__fastcall std::make_shared<VirtualDesktopSwitcherHookData,wil::com_ptr_t<IWeakReference,wil::err_failfast_policy> &,HHOOK__ * &>(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3)
{
  char *v6; // rax
  __int64 *v7; // r14
  __int64 *v8; // rsi
  __int64 v9; // rdi
  __int64 *v10; // rbx
  __int64 **result; // rax
  __int64 **v12; // [rsp+50h] [rbp+8h] BYREF

  v12 = a1;
  v6 = (char *)operator new(0x20uLL);
  v12 = (__int64 **)v6;
  v7 = (__int64 *)v6;
  *(_OWORD *)v6 = 0LL;
  *((_DWORD *)v6 + 2) = 1;
  v8 = (__int64 *)(v6 + 16);
  *((_DWORD *)v6 + 3) = 1;
  *(_QWORD *)v6 = &std::_Ref_count_obj2<VirtualDesktopSwitcherHookData>::`vftable';
  v9 = *a3;
  v10 = wil::com_ptr_t<ITaskViewFrame,wil::err_exception_policy>::com_ptr_t<ITaskViewFrame,wil::err_exception_policy>(
          (__int64 *)&v12,
          a2);
  wil::com_ptr_t<ITaskViewFrame,wil::err_exception_policy>::com_ptr_t<ITaskViewFrame,wil::err_exception_policy>(v8, v10);
  v8[1] = v9;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v10);
  result = a1;
  *a1 = v8;
  a1[1] = v7;
  return result;
}
