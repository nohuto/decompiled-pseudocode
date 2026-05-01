/*
 * XREFs of ?LockCoWaitForMultipleHandles@VirtualDesktopSwitchAnimator@@UEAAJXZ @ 0x1805681C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall VirtualDesktopSwitchAnimator::LockCoWaitForMultipleHandles(VirtualDesktopSwitchAnimator *this)
{
  void *v1; // rax
  HRESULT v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  DWORD v6; // [rsp+40h] [rbp+8h] BYREF
  HANDLE v7; // [rsp+48h] [rbp+10h] BYREF

  v1 = (void *)*((_QWORD *)this + 25);
  v6 = 0;
  v7 = v1;
  v2 = CoWaitForMultipleHandles(0x18u, 0xFFFFFFFF, 1u, &v7, &v6);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x85,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopswitchanimator.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
