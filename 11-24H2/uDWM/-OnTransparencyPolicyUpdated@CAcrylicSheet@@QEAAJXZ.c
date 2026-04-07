/*
 * XREFs of ?OnTransparencyPolicyUpdated@CAcrylicSheet@@QEAAJXZ @ 0x1800A2258
 * Callers:
 *     ?OnTransparencyPolicyChanged@CWindowList@@AEAAJ_N@Z @ 0x180082894 (-OnTransparencyPolicyChanged@CWindowList@@AEAAJ_N@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001D960 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?RenderRecursive@CContainerVisual@@UEAAJXZ @ 0x180020E90 (-RenderRecursive@CContainerVisual@@UEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAcrylicSheet::OnTransparencyPolicyUpdated(CAcrylicSheet *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  CVisual::SetDirtyFlags(this, 0x4000);
  *((_OWORD *)this + 15) = 0LL;
  v4 = CContainerVisual::RenderRecursive(this, v2, v3);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x143,
    (__int64)"clientcore\\windows\\dwm\\udwm\\acrylicsheet.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
