/*
 * XREFs of ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAURectInt32@Graphics@Windows@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAURectInt32@Graphics@Windows@@@stdext@@_J@Z @ 0x180243D14
 * Callers:
 *     ??$uninitialized_move@V?$move_iterator@PEAURectInt32@Graphics@Windows@@@std@@V?$checked_array_iterator@PEAURectInt32@Graphics@Windows@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAURectInt32@Graphics@Windows@@@stdext@@V?$move_iterator@PEAURectInt32@Graphics@Windows@@@0@0V12@@Z @ 0x180243B8C (--$uninitialized_move@V-$move_iterator@PEAURectInt32@Graphics@Windows@@@std@@V-$checked_array_it.c)
 *     ?clear_region@?$vector_facade@URectInt32@Graphics@Windows@@V?$buffer_impl@URectInt32@Graphics@Windows@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180243C68 (-clear_region@-$vector_facade@URectInt32@Graphics@Windows@@V-$buffer_impl@URectInt32@Graphics@Wi.c)
 *     ??$move_backward@V?$move_iterator@PEAURectInt32@Graphics@Windows@@@std@@V?$checked_array_iterator@PEAURectInt32@Graphics@Windows@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAURectInt32@Graphics@Windows@@@stdext@@V?$move_iterator@PEAURectInt32@Graphics@Windows@@@0@0V12@@Z @ 0x1802BE3FC (--$move_backward@V-$move_iterator@PEAURectInt32@Graphics@Windows@@@std@@V-$checked_array_iterato.c)
 *     ?ensure_extra_capacity@?$buffer_impl@U_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1802CA390 (-ensure_extra_capacity@-$buffer_impl@U_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL@@$0BA@$00Vliberal_exp.c)
 *     ?reserve_region@?$vector_facade@U_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL@@V?$buffer_impl@U_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAU_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL@@_K0@Z @ 0x1802CA4CC (-reserve_region@-$vector_facade@U_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL@@V-$buffer_impl@U_DXGI_PRE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Get_unwrapped_n<stdext::checked_array_iterator<Windows::Graphics::RectInt32 *> &,__int64>(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v2; // r8

  v2 = a1 + 2;
  if ( a2 < 0 )
  {
    if ( *v2 >= (unsigned __int64)-a2 )
      return *a1 + 16LL * *v2;
LABEL_6:
    _invalid_parameter_noinfo_noreturn();
  }
  if ( a2 > 0 && a1[1] - *v2 < (unsigned __int64)a2 )
    goto LABEL_6;
  return *a1 + 16LL * *v2;
}
