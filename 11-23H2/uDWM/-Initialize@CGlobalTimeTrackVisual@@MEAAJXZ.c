/*
 * XREFs of ?Initialize@CGlobalTimeTrackVisual@@MEAAJXZ @ 0x180104EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CVisual@@MEAAJXZ @ 0x180035BC0 (-Initialize@CVisual@@MEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CGlobalTimeTrackVisual::Initialize(CGlobalTimeTrackVisual *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = CVisual::Initialize(this);
  v2 = v1;
  if ( v1 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x12,
    (__int64)"clientcore\\windows\\dwm\\udwm\\udwmglobaltimetrackvisual.cpp",
    (const char *)(unsigned int)v1);
  return v2;
}
