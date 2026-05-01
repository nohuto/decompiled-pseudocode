/*
 * XREFs of ??$make_shared@VWin32ProcessInfo@@AEAIAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@YA?AV?$shared_ptr@VWin32ProcessInfo@@@0@AEAIAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@@Z @ 0x18057427C
 * Callers:
 *     ?UpdateView@Win32AppInfo@@QEAAXIAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x1805760EC (-UpdateView@Win32AppInfo@@QEAAXIAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800BADF8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall std::make_shared<Win32ProcessInfo,unsigned int &,std::wstring const &>(
        _QWORD *a1,
        _DWORD *a2,
        __int64 a3)
{
  _QWORD *v6; // rax
  _DWORD *v8; // [rsp+78h] [rbp+20h]

  v8 = operator new(0x48uLL);
  *(_OWORD *)v8 = 0LL;
  v8[2] = 1;
  v8[3] = 1;
  *(_QWORD *)v8 = &std::_Ref_count_obj2<Win32ProcessInfo>::`vftable';
  LODWORD(a2) = *a2;
  *((_QWORD *)v8 + 2) = 0LL;
  *((_QWORD *)v8 + 3) = 0LL;
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  *v6 = v6;
  v6[1] = v6;
  v6[2] = v6;
  *((_WORD *)v6 + 12) = 257;
  *((_QWORD *)v8 + 2) = v6;
  v8[8] = (_DWORD)a2;
  std::wstring::wstring((__int64)(v8 + 10), a3);
  *a1 = v8 + 4;
  a1[1] = v8;
  return a1;
}
