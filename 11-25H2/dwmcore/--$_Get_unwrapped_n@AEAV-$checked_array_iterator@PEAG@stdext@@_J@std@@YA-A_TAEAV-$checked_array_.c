/*
 * XREFs of ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAG@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAG@stdext@@_J@Z @ 0x18016A0C0
 * Callers:
 *     ??$move@V?$move_iterator@PEAG@std@@V?$checked_array_iterator@PEAG@stdext@@@std@@YA?AV?$checked_array_iterator@PEAG@stdext@@V?$move_iterator@PEAG@0@0V12@@Z @ 0x1801696D0 (--$move@V-$move_iterator@PEAG@std@@V-$checked_array_iterator@PEAG@stdext@@@std@@YA-AV-$checked_a.c)
 *     ?ensure_extra_capacity@?$buffer_impl@G$0GE@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x180169C04 (-ensure_extra_capacity@-$buffer_impl@G$0GE@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K.c)
 *     ?resize@?$vector_facade@GV?$buffer_impl@G$0KO@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_KAEBG@Z @ 0x180169DA0 (-resize@-$vector_facade@GV-$buffer_impl@G$0KO@$00Vliberal_expansion_policy@detail@@@detail@@@det.c)
 *     ?AppendHWGeometry@CDrawListEntryBuilder@@AEAAXAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x18016A110 (-AppendHWGeometry@CDrawListEntryBuilder@@AEAAXAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDe.c)
 *     ??$move_backward@V?$move_iterator@PEAG@std@@V?$checked_array_iterator@PEAG@stdext@@@std@@YA?AV?$checked_array_iterator@PEAG@stdext@@V?$move_iterator@PEAG@0@0V12@@Z @ 0x180290ACC (--$move_backward@V-$move_iterator@PEAG@std@@V-$checked_array_iterator@PEAG@stdext@@@std@@YA-AV-$.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Get_unwrapped_n<stdext::checked_array_iterator<unsigned short *> &,__int64>(
        _QWORD *a1,
        __int64 a2)
{
  if ( a2 < 0 )
  {
    if ( a1[2] >= (unsigned __int64)-a2 )
      return *a1 + 2LL * a1[2];
LABEL_6:
    _invalid_parameter_noinfo_noreturn();
  }
  if ( a2 > 0 && a1[1] - a1[2] < (unsigned __int64)a2 )
    goto LABEL_6;
  return *a1 + 2LL * a1[2];
}
