/*
 * XREFs of ?clear_region@?$vector_facade@URectInt32@Graphics@Windows@@V?$buffer_impl@URectInt32@Graphics@Windows@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180243C68
 * Callers:
 *     ?clear@?$vector_facade@URectInt32@Graphics@Windows@@V?$buffer_impl@URectInt32@Graphics@Windows@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180243C40 (-clear@-$vector_facade@URectInt32@Graphics@Windows@@V-$buffer_impl@URectInt32@Graphics@Windows@@.c)
 *     ??1?$vector_facade@U_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL@@V?$buffer_impl@U_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x1802C99A4 (--1-$vector_facade@U_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL@@V-$buffer_impl@U_DXGI_PRESENT_PLANE_FL.c)
 * Callees:
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAURectInt32@Graphics@Windows@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAURectInt32@Graphics@Windows@@@stdext@@_J@Z @ 0x180243D14 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAURectInt32@Graphics@Windows@@@stdext@@_J@std.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 */

void __fastcall detail::vector_facade<Windows::Graphics::RectInt32,detail::buffer_impl<Windows::Graphics::RectInt32,8,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v4; // rcx
  unsigned __int64 v5; // rax
  __int64 v6; // r14
  const void *v7; // rbx
  signed __int64 v8; // rdi
  void *v9; // rax
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = *a1;
  v5 = (a1[1] - v4) >> 4;
  if ( a3 > v5 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
  }
  v6 = 16 * a3;
  if ( a3 != v5 )
  {
    v10[2] = 0LL;
    v7 = (const void *)(v6 + v4);
    v10[0] = v4;
    v8 = 16 * v5 - v6;
    v10[1] = v5;
    v9 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<Windows::Graphics::RectInt32 *> &,__int64>(
                   v10,
                   v8 >> 4);
    memmove_0(v9, v7, v8);
  }
  a1[1] -= v6;
}
