/*
 * XREFs of ?RegisterForWindowOrderRegionEvents@HolographicPositioner@@UEAAJUComposerContextId@ComposableShell@Internal@Windows@@PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAVWindowOrderChangedEventArgs@ComposableShell@Internal@Windows@@@Foundation@5@PEAUEventRegistrationToken@@@Z @ 0x18040B260
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 HolographicPositioner::RegisterForWindowOrderRegionEvents()
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4AF,
    (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
    (const char *)0x80004001LL);
  return 2147500033LL;
}
