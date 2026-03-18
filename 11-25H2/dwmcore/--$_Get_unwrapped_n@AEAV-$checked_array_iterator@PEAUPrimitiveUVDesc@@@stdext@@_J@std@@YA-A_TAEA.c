/*
 * XREFs of ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAUPrimitiveUVDesc@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAUPrimitiveUVDesc@@@stdext@@_J@Z @ 0x1802546F0
 * Callers:
 *     ?Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18008FC40 (-Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc.c)
 *     ?resize@?$vector_facade@UPrimitiveUVDesc@@V?$buffer_impl@UPrimitiveUVDesc@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_K@Z @ 0x180192590 (-resize@-$vector_facade@UPrimitiveUVDesc@@V-$buffer_impl@UPrimitiveUVDesc@@$03$00Vliberal_expans.c)
 *     ??$move@V?$move_iterator@PEAUPrimitiveUVDesc@@@std@@V?$checked_array_iterator@PEAUPrimitiveUVDesc@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUPrimitiveUVDesc@@@stdext@@V?$move_iterator@PEAUPrimitiveUVDesc@@@0@0V12@@Z @ 0x180290A2C (--$move@V-$move_iterator@PEAUPrimitiveUVDesc@@@std@@V-$checked_array_iterator@PEAUPrimitiveUVDes.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAUPrimitiveUVDesc@@@std@@V?$checked_array_iterator@PEAUPrimitiveUVDesc@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUPrimitiveUVDesc@@@stdext@@V?$move_iterator@PEAUPrimitiveUVDesc@@@0@0V12@@Z @ 0x180290BD0 (--$uninitialized_move@V-$move_iterator@PEAUPrimitiveUVDesc@@@std@@V-$checked_array_iterator@PEAU.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Get_unwrapped_n<stdext::checked_array_iterator<PrimitiveUVDesc *> &,__int64>(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v2; // r8

  v2 = a1 + 2;
  if ( a2 < 0 )
  {
    if ( *v2 >= (unsigned __int64)-a2 )
      return *a1 + 56LL * *v2;
LABEL_6:
    _invalid_parameter_noinfo_noreturn();
  }
  if ( a2 > 0 && a1[1] - *v2 < (unsigned __int64)a2 )
    goto LABEL_6;
  return *a1 + 56LL * *v2;
}
