/*
 * XREFs of ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAV?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAV?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@stdext@@_J@Z @ 0x18025990C
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1802383C0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ??$move@V?$move_iterator@PEAV?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@V?$checked_array_iterator@PEAV?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@stdext@@V?$move_iterator@PEAV?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@0@0V12@@Z @ 0x180259A60 (--$move@V-$move_iterator@PEAV-$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@V-$c.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAUNodesDataBookmark@CExpression@@@std@@V?$checked_array_iterator@PEAUNodesDataBookmark@CExpression@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUNodesDataBookmark@CExpression@@@stdext@@V?$move_iterator@PEAUNodesDataBookmark@CExpression@@@0@0V12@@Z @ 0x18029A424 (--$uninitialized_move@V-$move_iterator@PEAUNodesDataBookmark@CExpression@@@std@@V-$checked_array.c)
 *     ??$move_backward@V?$move_iterator@PEAUNodesDataBookmark@CExpression@@@std@@V?$checked_array_iterator@PEAUNodesDataBookmark@CExpression@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUNodesDataBookmark@CExpression@@@stdext@@V?$move_iterator@PEAUNodesDataBookmark@CExpression@@@0@0V12@@Z @ 0x18029A4B4 (--$move_backward@V-$move_iterator@PEAUNodesDataBookmark@CExpression@@@std@@V-$checked_array_iter.c)
 *     ??$move_backward@V?$move_iterator@PEAV?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@V?$checked_array_iterator@PEAV?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@stdext@@V?$move_iterator@PEAV?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@0@0V12@@Z @ 0x1802A8DF0 (--$move_backward@V-$move_iterator@PEAV-$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAV?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@V?$checked_array_iterator@PEAV?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@stdext@@V?$move_iterator@PEAV?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@0@0V12@@Z @ 0x1802A8E8C (--$uninitialized_move@V-$move_iterator@PEAV-$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@w.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Get_unwrapped_n<stdext::checked_array_iterator<wil::com_ptr_t<IUnknown,wil::err_returncode_policy> *> &,__int64>(
        _QWORD *a1,
        __int64 a2)
{
  if ( a2 < 0 )
  {
    if ( a1[2] >= (unsigned __int64)-a2 )
      return *a1 + 8LL * a1[2];
LABEL_6:
    _invalid_parameter_noinfo_noreturn();
  }
  if ( a2 > 0 && a1[1] - a1[2] < (unsigned __int64)a2 )
    goto LABEL_6;
  return *a1 + 8LL * a1[2];
}
