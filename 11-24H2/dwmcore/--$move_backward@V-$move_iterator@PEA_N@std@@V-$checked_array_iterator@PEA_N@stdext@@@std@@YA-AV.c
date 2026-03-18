/*
 * XREFs of ??$move_backward@V?$move_iterator@PEA_N@std@@V?$checked_array_iterator@PEA_N@stdext@@@std@@YA?AV?$checked_array_iterator@PEA_N@stdext@@V?$move_iterator@PEA_N@0@0V12@@Z @ 0x180246D24
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800C7090 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 * Callees:
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEA_N@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEA_N@stdext@@_J@Z @ 0x180246CE0 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEA_N@stdext@@_J@std@@YA-A_TAEAV-$checked_array.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 */

__int64 __fastcall std::move_backward<std::move_iterator<bool *>,stdext::checked_array_iterator<bool *>>(
        __int64 a1,
        const void *a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // xmm1_8

  v8 = std::_Get_unwrapped_n<stdext::checked_array_iterator<bool *> &,__int64>(a4, (__int64)a2 - a3);
  a4[2] = (char *)memmove_0((void *)(v8 - (a3 - (_QWORD)a2)), a2, a3 - (_QWORD)a2) - *a4;
  result = a1;
  v10 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v10;
  return result;
}
