/*
 * XREFs of ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAUVertexXYW_ColorDW_UV2_AAFixup@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAUVertexXYW_ColorDW_UV2_AAFixup@@@stdext@@_J@Z @ 0x180208604
 * Callers:
 *     ??$move@V?$move_iterator@PEAUVertexXYW_ColorDW_UV2_AAFixup@@@std@@V?$checked_array_iterator@PEAUVertexXYW_ColorDW_UV2_AAFixup@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUVertexXYW_ColorDW_UV2_AAFixup@@@stdext@@V?$move_iterator@PEAUVertexXYW_ColorDW_UV2_AAFixup@@@0@0V12@@Z @ 0x180208258 (--$move@V-$move_iterator@PEAUVertexXYW_ColorDW_UV2_AAFixup@@@std@@V-$checked_array_iterator@PEAU.c)
 *     ?ensure_extra_capacity@?$buffer_impl@UVertexXYW_ColorDW_UV2_AAFixup@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1802084CC (-ensure_extra_capacity@-$buffer_impl@UVertexXYW_ColorDW_UV2_AAFixup@@$0CI@$00Vliberal_expansion_.c)
 *     ??$move_backward@V?$move_iterator@PEAUVertexXYW_ColorDW_UV2_AAFixup@@@std@@V?$checked_array_iterator@PEAUVertexXYW_ColorDW_UV2_AAFixup@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUVertexXYW_ColorDW_UV2_AAFixup@@@stdext@@V?$move_iterator@PEAUVertexXYW_ColorDW_UV2_AAFixup@@@0@0V12@@Z @ 0x18029429C (--$move_backward@V-$move_iterator@PEAUVertexXYW_ColorDW_UV2_AAFixup@@@std@@V-$checked_array_iter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Get_unwrapped_n<stdext::checked_array_iterator<VertexXYW_ColorDW_UV2_AAFixup *> &,__int64>(
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
  return *a1 + (*v2 << 6);
}
