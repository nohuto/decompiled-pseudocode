/*
 * XREFs of ?DismissVirtualDesktopSwitcher@CVirtualDesktopSwitcherService@@UEAAJXZ @ 0x18049A5C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     MakeMultitaskingViewTaskCallback__lambda_e4bce3ba4ff679026706ec329dbd106a___ @ 0x18049A3C4 (MakeMultitaskingViewTaskCallback__lambda_e4bce3ba4ff679026706ec329dbd106a___.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVirtualDesktopSwitcherService::DismissVirtualDesktopSwitcher(CVirtualDesktopSwitcherService *this)
{
  __int64 v1; // rcx
  __int64 result; // rax
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_QWORD *)this + 4);
  if ( !v1 )
    return 2147500036LL;
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 24LL))(v1);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x68,
                           (int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopswitcherservice.cpp",
                           v3);
  }
  return result;
}
