/*
 * XREFs of ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@stdext@@_J@Z @ 0x180247A38
 * Callers:
 *     ??$move_backward@V?$move_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@std@@V?$checked_array_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@stdext@@V?$move_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@0@0V12@@Z @ 0x1802478CC (--$move_backward@V-$move_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@std@@V-$checked_a.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@std@@V?$checked_array_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@stdext@@V?$move_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@0@0V12@@Z @ 0x180247988 (--$uninitialized_move@V-$move_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@std@@V-$chec.c)
 *     ??$move@V?$move_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@std@@V?$checked_array_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@stdext@@V?$move_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@0@0V12@@Z @ 0x180286360 (--$move@V-$move_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@std@@V-$checked_array_iter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Get_unwrapped_n<stdext::checked_array_iterator<CCpuClipAntialiasSinkContext::SinkEntry *> &,__int64>(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v2; // r8

  v2 = a1 + 2;
  if ( a2 < 0 )
  {
    if ( *v2 >= (unsigned __int64)-a2 )
      return *a1 + 432LL * *v2;
LABEL_6:
    _invalid_parameter_noinfo_noreturn();
  }
  if ( a2 > 0 && a1[1] - *v2 < (unsigned __int64)a2 )
    goto LABEL_6;
  return *a1 + 432LL * *v2;
}
