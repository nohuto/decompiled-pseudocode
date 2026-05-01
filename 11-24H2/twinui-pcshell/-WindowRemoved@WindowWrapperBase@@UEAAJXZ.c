/*
 * XREFs of ?WindowRemoved@WindowWrapperBase@@UEAAJXZ @ 0x180443B20
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18004D04C (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$WindowDestroyed@IPEAUHWND__@@@ViewManagerInteropTraceLogging@@SAX$$QEAI$$QEAPEAUHWND__@@@Z @ 0x18043CBF4 (--$WindowDestroyed@IPEAUHWND__@@@ViewManagerInteropTraceLogging@@SAX$$QEAI$$QEAPEAUHWND__@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall WindowWrapperBase::WindowRemoved(WindowWrapperBase *this)
{
  int v3; // [rsp+30h] [rbp+8h] BYREF
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 33) + 216LL))(*((_QWORD *)this + 33));
  v4 = *((int *)this + 70);
  v3 = (*(__int64 (__fastcall **)(WindowWrapperBase *))(*(_QWORD *)this + 288LL))(this);
  ViewManagerInteropTraceLogging::WindowDestroyed<unsigned int,HWND__ *>(&v3, &v4);
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)this + 14);
  return 0LL;
}
