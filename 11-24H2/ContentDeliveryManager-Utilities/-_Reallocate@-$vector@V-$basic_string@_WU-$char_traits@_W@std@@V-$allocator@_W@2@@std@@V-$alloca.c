/*
 * XREFs of ?_Reallocate@?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@IEAAX_K@Z @ 0x1800A23B4
 * Callers:
 *     ?_Reserve@?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@IEAAX_K@Z @ 0x1800A2478 (-_Reserve@-$vector@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V-$allocator.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004564 (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x180004768 (-_Xbad_alloc@std@@YAXXZ.c)
 *     ?_Destroy@?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@IEAAXPEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@0@Z @ 0x180088018 (-_Destroy@-$vector@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V-$allocator.c)
 *     ??$_Uninit_move@PEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAV12@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V12@@std@@YAPEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@0@PEAV10@00AEAU?$_Wrap_alloc@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@0@0U_Nonscalar_ptr_iterator_tag@0@@Z @ 0x1800A1460 (--$_Uninit_move@PEAV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@PEAV12@V-$al.c)
 */

void __fastcall std::vector<std::wstring>::_Reallocate(__int64 *a1, unsigned __int64 a2)
{
  void *v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rsi

  v4 = 0LL;
  if ( a2 )
  {
    if ( a2 > 0x7FFFFFFFFFFFFFFLL || (v4 = operator new(32 * a2)) == 0LL )
      std::_Xbad_alloc();
  }
  std::_Uninit_move<std::wstring *,std::wstring *,std::allocator<std::wstring>,std::wstring>(*a1, a1[1], (__int64)v4);
  v6 = a1[1] - *a1;
  if ( *a1 )
  {
    std::vector<std::wstring>::_Destroy(v5, (_QWORD *)*a1, (_QWORD *)a1[1]);
    operator delete((void *)*a1);
  }
  a1[2] = (__int64)v4 + 32 * a2;
  a1[1] = (__int64)v4 + (v6 & 0xFFFFFFFFFFFFFFE0uLL);
  *a1 = (__int64)v4;
}
