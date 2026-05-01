/*
 * XREFs of ?SnapWindow@CShellSnapComponent@@UEAAJPEAUHWND__@@PEBUtagRECT@@K@Z @ 0x1800CCD20
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsEnabled@CSnapComponentTelemetry@@SA_NE_K@Z @ 0x1800CCC28 (-IsEnabled@CSnapComponentTelemetry@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VCSnapComponentTelemetry@@@details@wil@@QEAAPEAVCSnapComponentTelemetry@@P6AXXZ@Z @ 0x1800CCC68 (-get@-$static_lazy@VCSnapComponentTelemetry@@@details@wil@@QEAAPEAVCSnapComponentTelemetry@@P6AX.c)
 *     ?_FireWindowSnappingEvent@CShellSnapComponent@@AEAAXPEAUIApplicationView@@W4WINDOW_SNAP_STATE@@@Z @ 0x180225B70 (-_FireWindowSnappingEvent@CShellSnapComponent@@AEAAXPEAUIApplicationView@@W4WINDOW_SNAP_STATE@@@.c)
 *     ?SnapWindow_@CSnapComponentTelemetry@@QEBAXPEAUHWND__@@PEBUtagRECT@@K@Z @ 0x18022D9FC (-SnapWindow_@CSnapComponentTelemetry@@QEBAXPEAUHWND__@@PEBUtagRECT@@K@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CShellSnapComponent::SnapWindow(
        CShellSnapComponent *this,
        HWND a2,
        const struct tagRECT *a3,
        unsigned int a4)
{
  __int64 v8; // rcx
  CSnapComponentTelemetry *v9; // rcx
  int v10; // ebp
  int v11; // eax
  unsigned int v12; // ebx
  __int64 *v14; // rcx
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // [rsp+40h] [rbp-48h] BYREF
  struct tagRECT v18; // [rsp+48h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  if ( CSnapComponentTelemetry::IsEnabled((__int64)this) )
  {
    wil::details::static_lazy<CSnapComponentTelemetry>::get(
      v8,
      (void (__cdecl *)())_lambda_3442a9d6c0a6f0a8d43c13feb2a6d4f2_::_lambda_invoker_cdecl_);
    CSnapComponentTelemetry::SnapWindow_(v9, a2, a3, a4);
  }
  v10 = a4 & 2;
  v18 = *a3;
  v11 = (*(__int64 (__fastcall **)(_QWORD, HWND, _QWORD, struct tagRECT *, int, int, int))(**((_QWORD **)this + 32)
                                                                                         + 24LL))(
          *((_QWORD *)this + 32),
          a2,
          0LL,
          &v18,
          3,
          (a4 & 1) != 0 ? 1 : 16,
          v10 != 0 ? 3 : 1);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x433,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
      (const char *)(unsigned int)v11);
    return v12;
  }
  if ( v10 )
  {
    v17 = 0LL;
    v14 = (__int64 *)*((_QWORD *)this + 11);
    v15 = *v14;
    v17 = 0LL;
    v16 = (*(__int64 (__fastcall **)(__int64 *, HWND, __int64 *))(v15 + 48))(v14, a2, &v17);
    v12 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x439,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
        (const char *)(unsigned int)v16);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v17);
      return v12;
    }
    CShellSnapComponent::_FireWindowSnappingEvent((char *)this - 136, v17, 1LL);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v17);
  }
  return 0LL;
}
