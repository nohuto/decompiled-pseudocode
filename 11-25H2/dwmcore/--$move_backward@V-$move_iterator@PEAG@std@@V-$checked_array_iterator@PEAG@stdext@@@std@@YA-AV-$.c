/*
 * XREFs of ??$move_backward@V?$move_iterator@PEAG@std@@V?$checked_array_iterator@PEAG@stdext@@@std@@YA?AV?$checked_array_iterator@PEAG@stdext@@V?$move_iterator@PEAG@0@0V12@@Z @ 0x180290ACC
 * Callers:
 *     ?reserve_region@?$vector_facade@GV?$buffer_impl@G$0GE@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAG_K0@Z @ 0x180169B0C (-reserve_region@-$vector_facade@GV-$buffer_impl@G$0GE@$00Vliberal_expansion_policy@detail@@@deta.c)
 *     ?resize@?$vector_facade@GV?$buffer_impl@G$0KO@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_KAEBG@Z @ 0x180169DA0 (-resize@-$vector_facade@GV-$buffer_impl@G$0KO@$00Vliberal_expansion_policy@detail@@@detail@@@det.c)
 *     ?AppendHWGeometry@CDrawListEntryBuilder@@AEAAXAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x18016A110 (-AppendHWGeometry@CDrawListEntryBuilder@@AEAAXAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDe.c)
 * Callees:
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAG@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAG@stdext@@_J@Z @ 0x18016A0C0 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAG@stdext@@_J@std@@YA-A_TAEAV-$checked_array_.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 */

__int64 __fastcall std::move_backward<std::move_iterator<unsigned short *>,stdext::checked_array_iterator<unsigned short *>>(
        __int64 a1,
        const void *a2,
        __int64 a3,
        _QWORD *a4)
{
  size_t v5; // rdi
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // xmm1_8

  v5 = a3 - (_QWORD)a2;
  v8 = std::_Get_unwrapped_n<stdext::checked_array_iterator<unsigned short *> &,__int64>(a4, -((a3 - (__int64)a2) >> 1));
  a4[2] = ((__int64)memmove_0((void *)(v8 - v5), a2, v5) - *a4) >> 1;
  result = a1;
  v10 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v10;
  return result;
}
