/*
 * XREFs of _lambda_39dd6a772f697446fffa4b3e918b8dc3_::operator() @ 0x1802152D4
 * Callers:
 *     CVirtualDesktopManager::_OnViewAdded__lambda_39dd6a772f697446fffa4b3e918b8dc3___ @ 0x180214D58 (CVirtualDesktopManager--_OnViewAdded__lambda_39dd6a772f697446fffa4b3e918b8dc3___.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_39dd6a772f697446fffa4b3e918b8dc3_::operator()(_QWORD **a1)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*a1)[15] + 56LL))(
         (*a1)[15],
         *a1[1],
         *a1[2],
         (*a1)[13]);
  v2 = v1;
  if ( v1 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4E1,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v1);
  return v2;
}
