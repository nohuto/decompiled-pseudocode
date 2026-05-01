/*
 * XREFs of ?WindowRemoved@UwpWindowWrapperBase@@UEAAJXZ @ 0x18044BEB0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18004D04C (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$WindowDestroyed@IPEAUHWND__@@@ViewManagerInteropTraceLogging@@SAX$$QEAI$$QEAPEAUHWND__@@@Z @ 0x18043CBF4 (--$WindowDestroyed@IPEAUHWND__@@@ViewManagerInteropTraceLogging@@SAX$$QEAI$$QEAPEAUHWND__@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall UwpWindowWrapperBase::WindowRemoved(UwpWindowWrapperBase *this)
{
  int *v2; // rax
  char v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 33) + 224LL))(*((_QWORD *)this + 33));
  v5 = *((int *)this + 70);
  v2 = (int *)(*(__int64 (__fastcall **)(UwpWindowWrapperBase *, char *))(*(_QWORD *)this + 288LL))(this, &v4);
  ViewManagerInteropTraceLogging::WindowDestroyed<unsigned int,HWND__ *>(v2, &v5);
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)this + 14);
  return 0LL;
}
