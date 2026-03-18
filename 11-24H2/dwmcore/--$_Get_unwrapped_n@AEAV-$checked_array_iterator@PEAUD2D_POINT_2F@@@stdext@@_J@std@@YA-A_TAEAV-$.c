/*
 * XREFs of ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@_J@Z @ 0x180186518
 * Callers:
 *     ?EnsureLayoutSize@CVisual@@QEAAXXZ @ 0x1801859C0 (-EnsureLayoutSize@CVisual@@QEAAXXZ.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAUD2D_POINT_2F@@@std@@V?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@V?$move_iterator@PEAUD2D_POINT_2F@@@0@0V12@@Z @ 0x1801860D8 (--$uninitialized_move@V-$move_iterator@PEAUD2D_POINT_2F@@@std@@V-$checked_array_iterator@PEAUD2D.c)
 *     ?push_back@?$vector_facade@PEAVCVisual@@V?$buffer_impl@PEAVCVisual@@$0EA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXAEBQEAVCVisual@@@Z @ 0x1801862D0 (-push_back@-$vector_facade@PEAVCVisual@@V-$buffer_impl@PEAVCVisual@@$0EA@$00Vliberal_expansion_p.c)
 *     ??$move_backward@V?$move_iterator@PEAUD2D_POINT_2F@@@std@@V?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@V?$move_iterator@PEAUD2D_POINT_2F@@@0@0V12@@Z @ 0x18024BA24 (--$move_backward@V-$move_iterator@PEAUD2D_POINT_2F@@@std@@V-$checked_array_iterator@PEAUD2D_POIN.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Get_unwrapped_n<stdext::checked_array_iterator<D2D_POINT_2F *> &,__int64>(
        _QWORD *a1,
        __int64 a2)
{
  if ( a2 >= 0 )
  {
    if ( a2 > 0 && a1[1] - a1[2] < (unsigned __int64)a2 )
LABEL_3:
      _invalid_parameter_noinfo_noreturn();
  }
  else if ( a1[2] < (unsigned __int64)-a2 )
  {
    goto LABEL_3;
  }
  return *a1 + 8LL * a1[2];
}
