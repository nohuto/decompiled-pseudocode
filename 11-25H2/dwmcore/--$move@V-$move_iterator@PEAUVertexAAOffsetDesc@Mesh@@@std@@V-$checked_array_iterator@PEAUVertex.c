/*
 * XREFs of ??$move@V?$move_iterator@PEAUVertexAAOffsetDesc@Mesh@@@std@@V?$checked_array_iterator@PEAUVertexAAOffsetDesc@Mesh@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUVertexAAOffsetDesc@Mesh@@@stdext@@V?$move_iterator@PEAUVertexAAOffsetDesc@Mesh@@@0@0V12@@Z @ 0x1802563B0
 * Callers:
 *     ?clear_region@?$vector_facade@UVertexAAOffsetDesc@Mesh@@V?$buffer_impl@UVertexAAOffsetDesc@Mesh@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180190F08 (-clear_region@-$vector_facade@UVertexAAOffsetDesc@Mesh@@V-$buffer_impl@UVertexAAOffsetDesc@Mesh@.c)
 * Callees:
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAUVertexAAOffsetDesc@Mesh@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAUVertexAAOffsetDesc@Mesh@@@stdext@@_J@Z @ 0x1801917A0 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAUVertexAAOffsetDesc@Mesh@@@stdext@@_J@std@@Y.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 */

__int64 __fastcall std::move<std::move_iterator<Mesh::VertexAAOffsetDesc *>,stdext::checked_array_iterator<Mesh::VertexAAOffsetDesc *>>(
        __int64 a1,
        const void *a2,
        __int64 a3,
        _QWORD *a4)
{
  size_t v5; // rsi
  void *v8; // rdi
  __int64 result; // rax
  __int64 v10; // xmm1_8

  v5 = a3 - (_QWORD)a2;
  v8 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<Mesh::VertexAAOffsetDesc *> &,__int64>(
                 a4,
                 (a3 - (__int64)a2) >> 5);
  memmove_0(v8, a2, v5);
  result = a1;
  a4[2] = (__int64)((__int64)v8 + v5 - *a4) >> 5;
  v10 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v10;
  return result;
}
