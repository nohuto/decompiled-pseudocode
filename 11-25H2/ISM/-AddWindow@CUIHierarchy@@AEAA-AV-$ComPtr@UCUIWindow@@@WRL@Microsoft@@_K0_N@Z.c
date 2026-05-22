/*
 * XREFs of ?AddWindow@CUIHierarchy@@AEAA?AV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@_K0_N@Z @ 0x1800AA2CC
 * Callers:
 *     ?OnWindowAdded@CUIHierarchy@@AEAAXUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UWindowChangedEventArgs@34567@@Z @ 0x1800AAF10 (-OnWindowAdded@CUIHierarchy@@AEAAXUWindowWatcher@WindowManagement@ApplicationModel@Internal@Wind.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800163E4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@UCUIWindow@@U1@AEA_KAEA_KAEA_N@Details@WRL@Microsoft@@YAJPEAPEAUCUIWindow@@AEA_K1AEA_N@Z @ 0x1800A9A40 (--$MakeAndInitialize@UCUIWindow@@U1@AEA_KAEA_KAEA_N@Details@WRL@Microsoft@@YAJPEAPEAUCUIWindow@@.c)
 *     ?AddWindowWorker@CUIHierarchy@@AEAAXV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@@Z @ 0x1800AA364 (-AddWindowWorker@CUIHierarchy@@AEAAXV-$ComPtr@UCUIWindow@@@WRL@Microsoft@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *CUIHierarchy::AddWindow(__int64 a1, __int64 *a2, ...)
{
  int v4; // eax
  __int64 v6; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v8; // [rsp+60h] [rbp+30h] BYREF
  va_list va; // [rsp+60h] [rbp+30h]
  __int64 v10; // [rsp+68h] [rbp+38h] BYREF
  va_list va1; // [rsp+68h] [rbp+38h]
  va_list va2; // [rsp+70h] [rbp+40h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v8 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v10 = va_arg(va2, _QWORD);
  *a2 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a2);
  v4 = Microsoft::WRL::Details::MakeAndInitialize<CUIWindow,CUIWindow,unsigned __int64 &,unsigned __int64 &,bool &>(
         a2,
         (__int64 *)va,
         (__int64 *)va1,
         va2);
  if ( v4 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1E1,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\attachableinputobject\\system\\componentui\\server\\cuihierarchy.cpp",
      (const char *)(unsigned int)v4,
      1);
  v6 = *a2;
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v6);
  CUIHierarchy::AddWindowWorker(a1, &v6);
  return a2;
}
