/*
 * XREFs of ?BuildMonitorUIIDListString@SnapAccessibilityHelpers@@YA?AV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEBV?$vector@IV?$allocator@I@std@@@std@@@Z @ 0x1805BD9F8
 * Callers:
 *     ?RaiseUiaNotificationForMonitorMove@HotkeyHandler@@AEAAXPEAUHWND__@@IUIntendedHotKeySnapInfo@1@@Z @ 0x1805AF3E4 (-RaiseUiaNotificationForMonitorMove@HotkeyHandler@@AEAAXPEAUHWND__@@IUIntendedHotKeySnapInfo@1@@.c)
 *     SnapAccessibilityHelpers::HandleWinShiftHotKeyNarratorAnnouncementsAsync$_ResumeCoro$1 @ 0x1805BDF10 (SnapAccessibilityHelpers--HandleWinShiftHotKeyNarratorAnnouncementsAsync$_ResumeCoro$1.c)
 * Callees:
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x18002AC94 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@W_ea_18002AC94.c)
 *     ?ConcatFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x1800B734C (-ConcatFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBG.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18029730C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

_QWORD *__fastcall SnapAccessibilityHelpers::BuildMonitorUIIDListString(
        _QWORD *a1,
        unsigned int **a2,
        __int64 a3,
        const char *a4)
{
  unsigned int *i; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *a2 == a2[1] )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x15C,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapaccessibilityhelpers.cpp",
      a4);
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(a1, L"%u", **a2);
  for ( i = *a2;
        ++i != a2[1];
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::ConcatFormat(
          a1,
          L" %u",
          *i) )
  {
    ;
  }
  return a1;
}
