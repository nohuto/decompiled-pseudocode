/*
 * XREFs of ?GetExistingOrCreateNewInputTarget@InputDestTarget@@SA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBUtagINPUTDEST@@PEAUIInputTarget@@@Z @ 0x180091C44
 * Callers:
 *     ?ProcessMouseInputMessage@Win32kInterop@@AEAAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z @ 0x180037FA0 (-ProcessMouseInputMessage@Win32kInterop@@AEAAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z.c)
 *     ?ProcessInputMessage@Win32kInterop@@AEAAXAEBUInputMessageContext@1@AEBU_InputMessageNotification@@_N@Z @ 0x1800EF940 (-ProcessInputMessage@Win32kInterop@@AEAAXAEBUInputMessageContext@1@AEBU_InputMessageNotification.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800163E4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$Make@VInputDestTarget@@AEBUtagINPUTDEST@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VInputDestTarget@@@12@AEBUtagINPUTDEST@@@Z @ 0x180091D24 (--$Make@VInputDestTarget@@AEBUtagINPUTDEST@@@Details@WRL@Microsoft@@YA-AV-$ComPtr@VInputDestTarg.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall InputDestTarget::GetExistingOrCreateNewInputTarget(
        __int64 *a1,
        __int64 a2,
        int (__fastcall ***a3)(_QWORD, GUID *, __int64 *))
{
  int (__fastcall *v6)(_QWORD, GUID *, __int64 *); // rbx
  __int64 *v7; // rax
  __int64 v8; // rcx
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  if ( a3 )
  {
    v10 = 0LL;
    v6 = **a3;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v10);
    if ( v6(a3, &GUID_245edb10_c010_455c_a24c_6780cdaecce8, &v10) >= 0
      && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 24LL))(v10, a2) )
    {
      *a1 = (__int64)a3;
      wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(a1);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v10);
      return a1;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v10);
  }
  v7 = (__int64 *)Microsoft::WRL::Details::Make<InputDestTarget,tagINPUTDEST const &>(&v10, a2);
  *a1 = *v7;
  *v7 = 0LL;
  v8 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return a1;
}
