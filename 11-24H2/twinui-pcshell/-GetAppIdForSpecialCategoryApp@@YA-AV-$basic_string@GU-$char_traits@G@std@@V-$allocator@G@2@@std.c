/*
 * XREFs of ?GetAppIdForSpecialCategoryApp@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGI@Z @ 0x1805767B0
 * Callers:
 *     ?UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@@Z @ 0x180575B30 (-UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@I.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??B?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@1@XZ @ 0x1801BA298 (--B-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA-AV-$basic_string_view@GU-$c.c)
 *     ?ToLowerCase@AppLimits@FamilySafety@Internal@Windows@@YAXAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180221D74 (-ToLowerCase@AppLimits@FamilySafety@Internal@Windows@@YAXAEAV-$basic_string@GU-$char_traits@G@st.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?ComposeWin32AppIdForJavaApp@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGAEBV?$basic_string_view@GU?$char_traits@G@std@@@2@@Z @ 0x180577468 (-ComposeWin32AppIdForJavaApp@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@.c)
 *     ?IsJavawExe@@YA_NPEBG@Z @ 0x180577A08 (-IsJavawExe@@YA_NPEBG@Z.c)
 *     ?TryExtractJavaMainClassNameFromCommandLine@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV12@@Z @ 0x180577A48 (-TryExtractJavaMainClassNameFromCommandLine@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$alloc.c)
 *     ?TryGetProcessCommandLine@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@Z @ 0x180577CA4 (-TryGetProcessCommandLine@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@I@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall GetAppIdForSpecialCategoryApp(__int64 a1, const unsigned __int16 *a2, unsigned int a3)
{
  _QWORD v7[2]; // [rsp+28h] [rbp-41h] BYREF
  __int128 v8; // [rsp+38h] [rbp-31h] BYREF
  __int64 v9; // [rsp+48h] [rbp-21h]
  __int64 v10; // [rsp+50h] [rbp-19h]
  void *v11[4]; // [rsp+58h] [rbp-11h] BYREF
  __int128 v12; // [rsp+78h] [rbp+Fh] BYREF
  __m128i si128; // [rsp+88h] [rbp+1Fh]

  v7[0] = a1;
  if ( IsJavawExe(a2) )
  {
    TryGetProcessCommandLine(v11, a3);
    if ( v11[2] )
    {
      Windows::Internal::FamilySafety::AppLimits::ToLowerCase(v11);
      TryExtractJavaMainClassNameFromCommandLine(&v8, v11);
    }
    else
    {
      v8 = 0LL;
      v9 = 0LL;
      v10 = 7LL;
      LOWORD(v8) = 0;
    }
    std::wstring::_Tidy_deallocate(v11);
    if ( v9 )
    {
      std::wstring::operator std::basic_string_view<unsigned short>(&v8, v7);
      ComposeWin32AppIdForJavaApp(&v12, a2, v7);
      *(_OWORD *)a1 = v12;
      *(__m128i *)(a1 + 16) = si128;
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      LOWORD(v12) = 0;
      std::wstring::_Tidy_deallocate((void **)&v12);
    }
    else
    {
      *(_OWORD *)a1 = 0LL;
      *(_QWORD *)(a1 + 16) = 0LL;
      *(_QWORD *)(a1 + 24) = 7LL;
      *(_WORD *)a1 = 0;
    }
    std::wstring::_Tidy_deallocate((void **)&v8);
  }
  else
  {
    *(_OWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = 7LL;
    *(_WORD *)a1 = 0;
  }
  return a1;
}
