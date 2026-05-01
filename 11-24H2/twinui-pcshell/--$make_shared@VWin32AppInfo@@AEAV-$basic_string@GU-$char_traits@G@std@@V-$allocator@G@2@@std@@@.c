/*
 * XREFs of ??$make_shared@VWin32AppInfo@@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@YA?AV?$shared_ptr@VWin32AppInfo@@@0@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@@Z @ 0x1805741D4
 * Callers:
 *     ?UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@@Z @ 0x180575B30 (-UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@I.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800BADF8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall std::make_shared<Win32AppInfo,std::wstring &>(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // rax
  _DWORD *v6; // [rsp+60h] [rbp+18h]

  v6 = operator new(0x40uLL);
  *(_OWORD *)v6 = 0LL;
  v6[2] = 1;
  v6[3] = 1;
  *(_QWORD *)v6 = &std::_Ref_count_obj2<Win32AppInfo>::`vftable';
  std::wstring::wstring((__int64)(v6 + 4), a2);
  *((_QWORD *)v6 + 6) = 0LL;
  *((_QWORD *)v6 + 7) = 0LL;
  v4 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  *v4 = v4;
  v4[1] = v4;
  v4[2] = v4;
  *((_WORD *)v4 + 12) = 257;
  *((_QWORD *)v6 + 6) = v4;
  *a1 = v6 + 4;
  a1[1] = v6;
  return a1;
}
