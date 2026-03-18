/*
 * XREFs of ??$move_backward_uninitialized@V?$basic_iterator@PEAVCVisual@@@detail@@V?$checked_array_iterator@PEAPEAVCVisual@@@stdext@@@detail@@YAXV?$basic_iterator@PEAVCVisual@@@0@0V?$checked_array_iterator@PEAPEAVCVisual@@@stdext@@@Z @ 0x1801D6670
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800BB3C0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall detail::move_backward_uninitialized<detail::basic_iterator<CVisual *>,stdext::checked_array_iterator<CVisual * *>>(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 result; // rax
  __int64 v4; // r10
  _QWORD *v5; // rax
  __int64 v6; // r9
  unsigned __int64 v7; // r9

  result = *a2;
  if ( *a2 != *a1 )
  {
    v4 = *a3;
    v5 = (_QWORD *)(result - 8);
    *a2 = (__int64)v5;
    if ( v4 )
    {
      while ( 1 )
      {
        v6 = a3[2];
        if ( !v6 )
          break;
        v7 = v6 - 1;
        a3[2] = v7;
        if ( v7 >= a3[1] )
          break;
        *(_QWORD *)(v4 + 8 * v7) = *v5;
        result = *a2;
        if ( *a2 == *a1 )
          return result;
        v5 = (_QWORD *)(result - 8);
        *a2 = (__int64)v5;
      }
    }
    _invalid_parameter_noinfo_noreturn();
  }
  return result;
}
