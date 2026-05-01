/*
 * XREFs of ?SetDesiredNavigationLevel@NavigationLevelHelper@LegacyWindowWrapper@@QEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180439198
 * Callers:
 *     ?v_SetDesiredNavigationLevel@LegacyWindowWrapper@@EEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180432450 (-v_SetDesiredNavigationLevel@LegacyWindowWrapper@@EEAAXW4NavigationLevel@ViewManagerInterop@Shel.c)
 * Callees:
 *     ?SetRelativeThreadpoolTimerInMilliseconds@ThreadpoolHelpers@@YAXPEAU_TP_TIMER@@_KKK@Z @ 0x180206294 (-SetRelativeThreadpoolTimerInMilliseconds@ThreadpoolHelpers@@YAXPEAU_TP_TIMER@@_KKK@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1802C8224 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?SendVisibilityToWindow@LegacyWindowWrapper@@AEAAXW4Visibility@@@Z @ 0x1804320BC (-SendVisibilityToWindow@LegacyWindowWrapper@@AEAAXW4Visibility@@@Z.c)
 *     ?GetDebounceDurationInMilliseconds@NavigationLevelHelper@LegacyWindowWrapper@@AEBAKXZ @ 0x180438F6C (-GetDebounceDurationInMilliseconds@NavigationLevelHelper@LegacyWindowWrapper@@AEBAKXZ.c)
 *     ?GetNavigationLevel@NavigationLevelHelper@LegacyWindowWrapper@@QEBA?AW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@XZ @ 0x180438FA0 (-GetNavigationLevel@NavigationLevelHelper@LegacyWindowWrapper@@QEBA-AW4NavigationLevel@ViewManag.c)
 *     ?GetVisibility@NavigationLevelHelper@LegacyWindowWrapper@@QEBA?AW4Visibility@@XZ @ 0x18043901C (-GetVisibility@NavigationLevelHelper@LegacyWindowWrapper@@QEBA-AW4Visibility@@XZ.c)
 *     ?NavigateInternal@WindowWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180440E78 (-NavigateInternal@WindowWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Wi.c)
 */

__int64 __fastcall LegacyWindowWrapper::NavigationLevelHelper::SetDesiredNavigationLevel(__int64 a1)
{
  int NavigationLevel; // r14d
  int Visibility; // ebp
  __m128i si128; // xmm2
  __int64 v5; // r9
  signed int v6; // edi
  signed int v7; // edx
  unsigned int v8; // esi
  PTP_TIMER ThreadpoolTimer; // rax
  unsigned int DebounceDurationInMilliseconds; // eax
  ThreadpoolHelpers *v11; // r9
  struct _TP_TIMER *v12; // rcx
  __int64 result; // rax
  unsigned int v14[4]; // [rsp+20h] [rbp-58h]
  __m128i v15; // [rsp+30h] [rbp-48h]
  __m128i v16; // [rsp+40h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  NavigationLevel = LegacyWindowWrapper::NavigationLevelHelper::GetNavigationLevel((unsigned int *)a1);
  Visibility = LegacyWindowWrapper::NavigationLevelHelper::GetVisibility((unsigned int *)a1);
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  *(_DWORD *)a1 = v5;
  v16 = _mm_load_si128((const __m128i *)&_xmm);
  v15 = _mm_load_si128((const __m128i *)&_xmm);
  *(__m128i *)v14 = si128;
  v6 = v14[2 * v5 + 1];
  v8 = LegacyWindowWrapper::NavigationLevelHelper::GetVisibility((unsigned int *)a1);
  if ( v7 > v6 )
  {
    if ( *(_DWORD *)(a1 + 4) > v7 )
      goto LABEL_13;
    if ( *(_QWORD *)(a1 + 8)
      || (ThreadpoolTimer = CreateThreadpoolTimer(
                              (PTP_TIMER_CALLBACK)lambda_6865f0ce4c3ba0d4b075ec8356cef312_::_lambda_invoker_cdecl_,
                              (PVOID)a1,
                              0LL),
          (*(_QWORD *)(a1 + 8) = ThreadpoolTimer) != 0LL) )
    {
      DebounceDurationInMilliseconds = LegacyWindowWrapper::NavigationLevelHelper::GetDebounceDurationInMilliseconds((LegacyWindowWrapper::NavigationLevelHelper *)a1);
      ThreadpoolHelpers::SetRelativeThreadpoolTimerInMilliseconds(
        v11,
        (struct _TP_TIMER *)DebounceDurationInMilliseconds,
        0);
      goto LABEL_13;
    }
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x7F,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\legacywindowwrapper.navigationlevelhelper.cpp",
      (const char *)0x8007000ELL);
    goto LABEL_12;
  }
  if ( v7 < v6 && *(_DWORD *)(a1 + 4) <= v6 )
  {
    v12 = *(struct _TP_TIMER **)(a1 + 8);
    if ( v12 && IsThreadpoolTimerSet(v12) )
      SetThreadpoolTimer(*(PTP_TIMER *)(a1 + 8), 0LL, 0, 0);
LABEL_12:
    *(_DWORD *)(a1 + 4) = v6;
  }
LABEL_13:
  if ( Visibility != v8 )
    LegacyWindowWrapper::SendVisibilityToWindow(a1 - 632, v8);
  result = LegacyWindowWrapper::NavigationLevelHelper::GetNavigationLevel((unsigned int *)a1);
  if ( *(_DWORD *)(a1 - 272) )
  {
    if ( (_DWORD)result != NavigationLevel )
      return WindowWrapperBase::NavigateInternal(a1 - 624, (unsigned int)result);
  }
  return result;
}
