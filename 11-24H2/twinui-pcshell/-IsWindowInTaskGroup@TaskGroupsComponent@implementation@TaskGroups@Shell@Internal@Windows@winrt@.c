/*
 * XREFs of ?IsWindowInTaskGroup@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@AEAA_NUWindowId@WindowManagement@ApplicationModel@567@AEBUTaskGroup@34567@@Z @ 0x180588158
 * Callers:
 *     ?IsWindowValidForGroupInclusion@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEAA_NUWindowId@WindowManagement@ApplicationModel@567@AEBUTaskGroup@34567@@Z @ 0x1805881FC (-IsWindowValidForGroupInclusion@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Win.c)
 * Callees:
 *     ?SnapAssistSnappedWindows@?$consume_Windows_Internal_Shell_WindowSnapping_IGuidedSnapAssistCompletedArgs@UIGuidedSnapAssistCompletedArgs@WindowSnapping@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18026F618 (-SnapAssistSnappedWindows@-$consume_Windows_Internal_Shell_WindowSnapping_IGuidedSnapAssistCompl.c)
 *     CoTaskMemFree_0 @ 0x1802D2C01 (CoTaskMemFree_0.c)
 */

char __fastcall winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::IsWindowInTaskGroup(
        __int64 a1,
        int a2,
        __int64 **a3)
{
  _DWORD *i; // rdx
  LPVOID pv; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v7; // [rsp+28h] [rbp-10h]

  winrt::impl::consume_Windows_Internal_Shell_WindowSnapping_IGuidedSnapAssistCompletedArgs<winrt::Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistCompletedArgs>::SnapAssistSnappedWindows(
    a3,
    (__int64)&pv);
  for ( i = pv; i != (_DWORD *)((char *)pv + 4 * v7); ++i )
  {
    if ( *i == a2 )
    {
      if ( pv )
        CoTaskMemFree_0(pv);
      return 1;
    }
  }
  if ( pv )
    CoTaskMemFree_0(pv);
  return 0;
}
