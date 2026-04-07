/*
 * XREFs of ?StartImpl@CDisplayDisconnectAnimatedVisual@@EEAAJXZ @ 0x18008AF10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterGlobalTimeChangeNotification@CDisplayAnimatedVisual@@IEAAJXZ @ 0x18009B314 (-RegisterGlobalTimeChangeNotification@CDisplayAnimatedVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CDisplayDisconnectAnimatedVisual::StartImpl(CDisplayDisconnectAnimatedVisual *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = CDisplayAnimatedVisual::RegisterGlobalTimeChangeNotification(this);
  v2 = v1;
  if ( v1 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x30,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\displaydisconnectanimatedvisual.cpp",
    (const char *)(unsigned int)v1,
    v4);
  return v2;
}
