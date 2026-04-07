/*
 * XREFs of ?Initialize@CGlobalTimeTrackVisual@@MEAAJXZ @ 0x1800EC210
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CContainerVisual@@MEAAJXZ @ 0x18002E5D0 (-Initialize@CContainerVisual@@MEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CGlobalTimeTrackVisual::Initialize(struct CContainerVisualProxy **this)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = CContainerVisual::Initialize(this);
  v2 = v1;
  if ( v1 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x11,
    (__int64)"clientcore\\windows\\dwm\\udwm\\udwmglobaltimetrackvisual.cpp",
    (const char *)(unsigned int)v1);
  return v2;
}
