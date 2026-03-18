/*
 * XREFs of ??Y?$checked_array_iterator@PEAPEBVCVisualTree@@@stdext@@QEAAAEAV01@_J@Z @ 0x180196260
 * Callers:
 *     ?push_back@?$vector_facade@PEBVCVisualTree@@V?$buffer_impl@PEBVCVisualTree@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXAEBQEBVCVisualTree@@@Z @ 0x1800207A0 (-push_back@-$vector_facade@PEBVCVisualTree@@V-$buffer_impl@PEBVCVisualTree@@$07$00Vliberal_expan.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall stdext::checked_array_iterator<CVisualTree const * *>::operator+=(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // r8

  if ( !a2 )
    goto LABEL_4;
  if ( !*a1 )
    goto LABEL_7;
  if ( a2 < 0 )
  {
    if ( a1[2] < (unsigned __int64)-a2 )
      goto LABEL_7;
    a1[2] += a2;
    return a1;
  }
  else
  {
LABEL_4:
    v2 = a1 + 2;
    if ( a2 > 0 && a1[1] - *v2 < (unsigned __int64)a2 )
LABEL_7:
      _invalid_parameter_noinfo_noreturn();
    *v2 += a2;
    return a1;
  }
}
