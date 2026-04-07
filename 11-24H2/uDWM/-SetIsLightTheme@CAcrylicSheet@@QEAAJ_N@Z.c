/*
 * XREFs of ?SetIsLightTheme@CAcrylicSheet@@QEAAJ_N@Z @ 0x1800A22B0
 * Callers:
 *     ?SetColorizationParameters@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETERS@@@Z @ 0x1800717A8 (-SetColorizationParameters@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETER.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001D960 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?RenderRecursive@CContainerVisual@@UEAAJXZ @ 0x180020E90 (-RenderRecursive@CContainerVisual@@UEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAcrylicSheet::SetIsLightTheme(CAcrylicSheet *this, char a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 == *((_BYTE *)this + 417) )
    return 0LL;
  *((_BYTE *)this + 417) = a2;
  CVisual::SetDirtyFlags(this, 24576);
  v5 = CContainerVisual::RenderRecursive(this, v3, v4);
  v6 = v5;
  if ( v5 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x14E,
    (__int64)"clientcore\\windows\\dwm\\udwm\\acrylicsheet.cpp",
    (const char *)(unsigned int)v5);
  return v6;
}
