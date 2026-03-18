/*
 * XREFs of ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAVCVIRenderList@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAVCVIRenderList@@@stdext@@_J@Z @ 0x18020254C
 * Callers:
 *     ??$uninitialized_move@V?$move_iterator@PEAVCVIRenderList@@@std@@V?$checked_array_iterator@PEAVCVIRenderList@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCVIRenderList@@@stdext@@V?$move_iterator@PEAVCVIRenderList@@@0@0V12@@Z @ 0x18024A690 (--$uninitialized_move@V-$move_iterator@PEAVCVIRenderList@@@std@@V-$checked_array_iterator@PEAVCV.c)
 *     ??$move_backward@V?$move_iterator@PEAVCVIRenderList@@@std@@V?$checked_array_iterator@PEAVCVIRenderList@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCVIRenderList@@@stdext@@V?$move_iterator@PEAVCVIRenderList@@@0@0V12@@Z @ 0x1802742B8 (--$move_backward@V-$move_iterator@PEAVCVIRenderList@@@std@@V-$checked_array_iterator@PEAVCVIRend.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Get_unwrapped_n<stdext::checked_array_iterator<CVIRenderList *> &,__int64>(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v2; // r8

  v2 = a1 + 2;
  if ( a2 < 0 )
  {
    if ( *v2 < (unsigned __int64)-a2 )
      goto LABEL_7;
  }
  else if ( a2 > 0 && a1[1] - *v2 < (unsigned __int64)a2 )
  {
LABEL_7:
    _invalid_parameter_noinfo_noreturn();
  }
  return *a1 + 40LL * *v2;
}
