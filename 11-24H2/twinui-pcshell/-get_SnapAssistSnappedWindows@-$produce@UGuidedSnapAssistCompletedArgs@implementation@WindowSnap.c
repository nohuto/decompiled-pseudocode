/*
 * XREFs of ?get_SnapAssistSnappedWindows@?$produce@UGuidedSnapAssistCompletedArgs@implementation@WindowSnapping@Shell@Internal@Windows@winrt@@UIGuidedSnapAssistCompletedArgs@34567@@impl@winrt@@UEAAHPEAIPEAPEAUstruct_Windows_Internal_ApplicationModel_WindowManagement_WindowId@23@@Z @ 0x1805BCA10
 * Callers:
 *     <none>
 * Callees:
 *     ??$detach_abi@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@winrt@@YA?A_P$$QEAU?$com_array@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@0@@Z @ 0x18021F724 (--$detach_abi@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@winrt.c)
 *     ??$?0UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@?$com_array@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@winrt@@QEAA@AEBV?$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$allocator@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@@Z @ 0x1802A59A4 (--$-0UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@-$com_array@UWindowId@.c)
 *     CoTaskMemFree_0 @ 0x1802D2C01 (CoTaskMemFree_0.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::WindowSnapping::implementation::GuidedSnapAssistCompletedArgs,winrt::Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistCompletedArgs>::get_SnapAssistSnappedWindows(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 result; // rax
  LPVOID pv[2]; // [rsp+20h] [rbp-28h] BYREF
  int v9; // [rsp+50h] [rbp+8h] BYREF

  *a3 = 0LL;
  v5 = a1 + 16;
  if ( !a1 )
    v5 = 32LL;
  try
  {
    winrt::com_array<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>::com_array<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>(
      (__int64)pv,
      (_QWORD *)v5);
    v6 = winrt::detach_abi<winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion>();
    *a2 = *(_DWORD *)v6;
    *a3 = *(_QWORD *)(v6 + 8);
    if ( pv[0] )
      CoTaskMemFree_0(pv[0]);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v9);
  }
  return result;
}
