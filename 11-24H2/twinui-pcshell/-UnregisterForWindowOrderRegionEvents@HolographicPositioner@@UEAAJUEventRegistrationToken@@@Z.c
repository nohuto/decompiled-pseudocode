/*
 * XREFs of ?UnregisterForWindowOrderRegionEvents@HolographicPositioner@@UEAAJUEventRegistrationToken@@@Z @ 0x18040C5E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall HolographicPositioner::UnregisterForWindowOrderRegionEvents(
        HolographicPositioner *this,
        struct EventRegistrationToken a2)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4B4,
    (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
    (const char *)0x80004001LL);
  return 2147500033LL;
}
