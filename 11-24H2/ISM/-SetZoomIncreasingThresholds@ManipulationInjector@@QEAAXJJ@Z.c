/*
 * XREFs of ?SetZoomIncreasingThresholds@ManipulationInjector@@QEAAXJJ@Z @ 0x1801128A8
 * Callers:
 *     ?StartInteractionHelper@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z @ 0x18017C398 (-StartInteractionHelper@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall ManipulationInjector::SetZoomIncreasingThresholds(ManipulationInjector *this, int a2)
{
  int v2; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 < 0 || *((_DWORD *)this + 22) )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x5B7,
      (int)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
      (const char *)0x80070057LL,
      v2);
  *((_DWORD *)this + 6) = a2;
  *((_DWORD *)this + 7) = 600;
}
