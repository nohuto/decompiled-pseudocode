/*
 * XREFs of ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@stdext@@_J@Z @ 0x1801B4460
 * Callers:
 *     ?CollectStats@CRenderTargetManager@@QEAAIPEAPEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@Z @ 0x180103700 (-CollectStats@CRenderTargetManager@@QEAAIPEAPEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@Z.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@std@@V?$checked_array_iterator@PEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@stdext@@V?$move_iterator@PEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@0@0V12@@Z @ 0x18024A5F0 (--$uninitialized_move@V-$move_iterator@PEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@std@@V-$checked_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Get_unwrapped_n<stdext::checked_array_iterator<tagCOMPOSITION_TARGET_ID_AND_STATS *> &,__int64>(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v2; // r8

  v2 = a1 + 2;
  if ( a2 < 0 )
  {
    if ( *v2 >= (unsigned __int64)-a2 )
      return *a1 + 120LL * *v2;
LABEL_6:
    _invalid_parameter_noinfo_noreturn();
  }
  if ( a2 > 0 && a1[1] - *v2 < (unsigned __int64)a2 )
    goto LABEL_6;
  return *a1 + 120LL * *v2;
}
