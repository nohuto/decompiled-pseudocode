/*
 * XREFs of _lambda_93656037d821f0cf4f10769c2d148d9f_::_lambda_93656037d821f0cf4f10769c2d148d9f__0 @ 0x18055C1F4
 * Callers:
 *     _lambda_c876813055a0f8eb90a291ca9ab0fec3_::operator() @ 0x18055D178 (_lambda_c876813055a0f8eb90a291ca9ab0fec3_--operator().c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z @ 0x1800D6010 (--0-$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z.c)
 *     ??0?$com_ptr_t@VVirtualDesktopGestureWindow@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVVirtualDesktopGestureWindow@@@Z @ 0x18055C560 (--0-$com_ptr_t@VVirtualDesktopGestureWindow@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVVirtualD.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_93656037d821f0cf4f10769c2d148d9f_::_lambda_93656037d821f0cf4f10769c2d148d9f__0(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        _OWORD *a4,
        _OWORD *a5,
        __int64 *a6,
        __int64 *a7,
        __int64 *a8,
        _QWORD *a9,
        int a10,
        __int64 *a11)
{
  __int64 v14; // rdx
  __int64 v15; // rcx

  wil::com_ptr_t<VirtualDesktopGestureWindow,wil::err_returncode_policy>::com_ptr_t<VirtualDesktopGestureWindow,wil::err_returncode_policy>(
    a1,
    *a2);
  *(_QWORD *)(a1 + 8) = *a3;
  *(_OWORD *)(a1 + 16) = *a4;
  *(_OWORD *)(a1 + 32) = *a5;
  v14 = *a6;
  *a6 = 0LL;
  *(_QWORD *)(a1 + 48) = v14;
  v15 = *a7;
  *(_QWORD *)(a1 + 56) = *a7;
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
  wil::com_ptr_t<TaskViewFrame,wil::err_exception_policy>::com_ptr_t<TaskViewFrame,wil::err_exception_policy>(
    (_QWORD *)(a1 + 64),
    *a8);
  *(_QWORD *)(a1 + 72) = *a9;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(a1 + 72));
  *(_DWORD *)(a1 + 80) = a10;
  wil::com_ptr_t<TaskViewFrame,wil::err_exception_policy>::com_ptr_t<TaskViewFrame,wil::err_exception_policy>(
    (_QWORD *)(a1 + 88),
    *a11);
  return a1;
}
