/*
 * XREFs of ?ReparentWindow@CUIHierarchy@@AEAA?AV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@_K0@Z @ 0x1800A9FB0
 * Callers:
 *     ?OnUniversalPropertyChanged@CUIHierarchy@@AEAAXUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UUniversalPropertyChangedEventArgs@34567@@Z @ 0x1800A96E0 (-OnUniversalPropertyChanged@CUIHierarchy@@AEAAXUIUniversalAppModelWatcher@WindowManagement@Appli.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800169B4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AddWindowWorker@CUIHierarchy@@AEAAXV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@@Z @ 0x1800A8E64 (-AddWindowWorker@CUIHierarchy@@AEAAXV-$ComPtr@UCUIWindow@@@WRL@Microsoft@@@Z.c)
 *     ?RemoveWindow@CUIHierarchy@@AEAA?AV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@_K@Z @ 0x1800A9E58 (-RemoveWindow@CUIHierarchy@@AEAA-AV-$ComPtr@UCUIWindow@@@WRL@Microsoft@@_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall CUIHierarchy::ReparentWindow(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v8[2]; // [rsp+28h] [rbp-10h] BYREF

  CUIHierarchy::RemoveWindow(a1, a2, a3);
  if ( *a2 )
  {
    *(_QWORD *)(*a2 + 24) = a4;
    v8[0] = *a2;
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v8);
    CUIHierarchy::AddWindowWorker(a1, v8);
  }
  return a2;
}
