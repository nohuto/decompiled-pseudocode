/*
 * XREFs of ??$move_backward_uninitialized@V?$basic_iterator@D@detail@@V?$checked_array_iterator@PEAD@stdext@@@detail@@YAXV?$basic_iterator@D@0@0V?$checked_array_iterator@PEAD@stdext@@@Z @ 0x1801D1784
 * Callers:
 *     ?reserve_region@?$vector_facade@DV?$buffer_impl@D$0DA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAD_K0@Z @ 0x1801D1640 (-reserve_region@-$vector_facade@DV-$buffer_impl@D$0DA@$00Vliberal_expansion_policy@detail@@@deta.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall detail::move_backward_uninitialized<detail::basic_iterator<char>,stdext::checked_array_iterator<char *>>(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 result; // rax
  __int64 v5; // r10
  _BYTE *v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rcx

  result = *a2;
  if ( *a2 != *a1 )
  {
    v5 = *a3;
    do
    {
      v6 = (_BYTE *)(result - 1);
      *a2 = (__int64)v6;
      if ( !v5 || (v7 = a3[2]) == 0 || (v8 = v7 - 1, a3[2] = v8, v8 >= a3[1]) )
        _invalid_parameter_noinfo_noreturn();
      *(_BYTE *)(v8 + v5) = *v6;
      result = *a2;
    }
    while ( *a2 != *a1 );
  }
  return result;
}
