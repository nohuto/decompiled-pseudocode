/*
 * XREFs of ??$?0V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@X@?$com_array@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@winrt@@QEAA@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@0@Z @ 0x1802993B4
 * Callers:
 *     ?GetSnappableWindowSuggestions@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@SA?AU?$com_array@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@7@UWindowId@UI@67@@Z @ 0x180273284 (-GetSnappableWindowSuggestions@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Inter.c)
 * Callees:
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x1800549EC (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ??$_Destroy_range@V?$allocator@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@YAXPEAUSnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAU123456@AEAV?$allocator@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@0@@Z @ 0x180295B4C (--$_Destroy_range@V-$allocator@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Wind.c)
 *     _CxxThrowException_0 @ 0x1802D25D8 (_CxxThrowException_0.c)
 *     __Platform_CoTaskMemAlloc @ 0x1802D2C0D (__Platform_CoTaskMemAlloc.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::com_array<winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion>::com_array<winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion>(
        __int64 a1,
        void **a2,
        char *a3)
{
  void **v4; // rsi
  void **v6; // rdi
  __int64 v7; // rbp
  void **v8; // rax
  void **pExceptionObject; // [rsp+20h] [rbp-28h] BYREF
  const char *v11; // [rsp+28h] [rbp-20h]
  __int64 v12; // [rsp+30h] [rbp-18h]

  v4 = a2;
  v6 = 0LL;
  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 8) = 0;
  v7 = (a3 - (char *)a2) >> 4;
  if ( (_DWORD)v7 )
  {
    v8 = (void **)_Platform_CoTaskMemAlloc(16LL * (unsigned int)v7);
    *(_QWORD *)a1 = v8;
    if ( !v8 )
    {
      v12 = 0LL;
      v11 = "bad allocation";
      pExceptionObject = &std::bad_alloc::`vftable';
      throw (std::bad_alloc *)&pExceptionObject;
    }
    *(_DWORD *)(a1 + 8) = v7;
    v6 = v8;
  }
  pExceptionObject = v6;
  v11 = (const char *)v6;
  while ( v4 != (void **)a3 )
  {
    *v6 = *v4;
    winrt::hstring::hstring((winrt::hstring *)(v6 + 1), (const struct winrt::hstring *)(v4 + 1));
    v6 += 2;
    v11 = (const char *)v6;
    v4 += 2;
  }
  std::_Destroy_range<std::allocator<winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion>>(
    (winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion *)v6,
    (winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion *)v6);
  return a1;
}
