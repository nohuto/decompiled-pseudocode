/*
 * XREFs of ?IsPackagedApp@AppLimits@FamilySafety@Internal@Windows@@YA_NPEBG@Z @ 0x1805715A0
 * Callers:
 *     ?GetDisplayName@AppUsageTracker@@UEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180571410 (-GetDisplayName@AppUsageTracker@@UEAA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@.c)
 *     ?IsAppActive@AppUsageTracker@@UEAA_NPEBG@Z @ 0x180571520 (-IsAppActive@AppUsageTracker@@UEAA_NPEBG@Z.c)
 *     ?TerminateApp@AppUsageTracker@@UEAAXPEBGW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x180571890 (-TerminateApp@AppUsageTracker@@UEAAXPEBGW4TerminationType@AppLimits@FamilySafety@Internal@Window.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180048710 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Check_offset@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBAX_K@Z @ 0x180056DA4 (-_Check_offset@-$_String_val@U-$_Simple_types@G@std@@@std@@QEBAX_K@Z.c)
 *     ??$_Traits_compare@U?$char_traits@G@std@@@std@@YAHQEBG_K01@Z @ 0x180057764 (--$_Traits_compare@U-$char_traits@G@std@@@std@@YAHQEBG_K01@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall Windows::Internal::FamilySafety::AppLimits::IsPackagedApp(
        Windows::Internal::FamilySafety::AppLimits *this,
        const unsigned __int16 *a2)
{
  char **v2; // rbx
  unsigned __int64 v3; // rdx
  int v4; // eax
  bool v5; // bl
  void *v7[4]; // [rsp+20h] [rbp-38h] BYREF

  v2 = std::wstring::wstring((char **)v7, this);
  std::_String_val<std::_Simple_types<unsigned short>>::_Check_offset((__int64)v2, 0LL);
  v3 = 5LL;
  if ( (unsigned __int64)v2[2] < 5 )
    v3 = (unsigned __int64)v2[2];
  if ( (unsigned __int64)v2[3] > 7 )
    v2 = (char **)*v2;
  LOBYTE(v4) = std::_Traits_compare<std::char_traits<unsigned short>>((__int64)v2, v3, L"appx:", 5uLL);
  v5 = v4 == 0;
  std::wstring::_Tidy_deallocate(v7);
  return v5;
}
