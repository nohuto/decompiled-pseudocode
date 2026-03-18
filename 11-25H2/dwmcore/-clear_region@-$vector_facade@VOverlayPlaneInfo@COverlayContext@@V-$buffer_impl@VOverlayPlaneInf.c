/*
 * XREFs of ?clear_region@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18002F474
 * Callers:
 *     ?erase@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@2@V?$basic_iterator@$$CBVOverlayPlaneInfo@COverlayContext@@@2@@Z @ 0x18002E84C (-erase@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInfo@COver.c)
 *     ?erase_unchecked@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAA?AV?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@2@V?$basic_iterator@$$CBVOverlayPlaneInfo@COverlayContext@@@2@0@Z @ 0x18002ECA0 (-erase_unchecked@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlane.c)
 *     ??$swap_generic@V?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAXAEAV01@@Z @ 0x18002ED10 (--$swap_generic@V-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlane.c)
 * Callees:
 *     ??4OverlayPlaneInfo@COverlayContext@@QEAAAEAV01@$$QEAV01@@Z @ 0x18002F5D8 (--4OverlayPlaneInfo@COverlayContext@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // r10
  unsigned __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 i; // rbx
  __int64 v13; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v4 = *a1;
  v7 = 0x8F5C28F5C28F5C29uLL * ((a1[1] - *a1) >> 4);
  v8 = a2 + a3;
  if ( a2 + a3 > v7 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
    JUMPOUT(0x18002F5D0LL);
  }
  v9 = v4 + 400 * v7;
  if ( v8 != v7 )
  {
    if ( a2 && (!v4 || a2 < 0 || v7 < a2) )
LABEL_19:
      _invalid_parameter_noinfo_noreturn();
    v10 = v4 + 400 * v8;
    result = 0x8F5C28F5C28F5C29uLL * ((v9 - v10) >> 4);
    if ( result < 0 )
    {
      result = 0x70A3D70A3D70A3D7LL * ((v9 - v10) >> 4);
      if ( a2 < (unsigned __int64)result )
        goto LABEL_19;
    }
    else if ( result > 0 && v7 - a2 < result )
    {
      goto LABEL_19;
    }
    v11 = 400 * a2 - 400 * v8;
    while ( v10 != v9 )
    {
      result = COverlayContext::OverlayPlaneInfo::operator=(v11 + v10, v10);
      v10 += 400LL;
    }
  }
  for ( i = v9 - 400 * a3; i != v9; i += 400LL )
  {
    v13 = *(_QWORD *)(i + 16);
    if ( v13 )
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  a1[1] -= 400 * a3;
  return result;
}
