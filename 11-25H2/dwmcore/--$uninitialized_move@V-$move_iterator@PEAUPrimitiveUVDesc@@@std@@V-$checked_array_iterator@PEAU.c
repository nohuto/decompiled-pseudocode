/*
 * XREFs of ??$uninitialized_move@V?$move_iterator@PEAUPrimitiveUVDesc@@@std@@V?$checked_array_iterator@PEAUPrimitiveUVDesc@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUPrimitiveUVDesc@@@stdext@@V?$move_iterator@PEAUPrimitiveUVDesc@@@0@0V12@@Z @ 0x180290BD0
 * Callers:
 *     ?Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18008FC40 (-Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc.c)
 *     ?resize@?$vector_facade@UPrimitiveUVDesc@@V?$buffer_impl@UPrimitiveUVDesc@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_K@Z @ 0x180192590 (-resize@-$vector_facade@UPrimitiveUVDesc@@V-$buffer_impl@UPrimitiveUVDesc@@$03$00Vliberal_expans.c)
 * Callees:
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAUPrimitiveUVDesc@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAUPrimitiveUVDesc@@@stdext@@_J@Z @ 0x1802546F0 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAUPrimitiveUVDesc@@@stdext@@_J@std@@YA-A_TAEA.c)
 */

__int64 __fastcall std::uninitialized_move<std::move_iterator<PrimitiveUVDesc *>,stdext::checked_array_iterator<PrimitiveUVDesc *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v8; // rdx
  __int64 i; // rbx
  __int64 result; // rax
  __int64 v11; // xmm1_8

  v8 = std::_Get_unwrapped_n<stdext::checked_array_iterator<PrimitiveUVDesc *> &,__int64>(
         a4,
         0x6DB6DB6DB6DB6DB7LL * ((a3 - a2) >> 3));
  for ( i = a2 + 8; i - 8 != a3; i += 56LL )
  {
    *(_DWORD *)v8 = *(_DWORD *)(i - 8);
    *(_DWORD *)(v8 + 4) = *(_DWORD *)(i - 4);
    *(_DWORD *)(v8 + 8) = *(_DWORD *)i;
    *(_DWORD *)(v8 + 12) = *(_DWORD *)(i + 4);
    *(_DWORD *)(v8 + 16) = *(_DWORD *)(i + 8);
    *(_DWORD *)(v8 + 20) = *(_DWORD *)(i + 12);
    *(_DWORD *)(v8 + 24) = *(_DWORD *)(i + 16);
    *(_DWORD *)(v8 + 28) = *(_DWORD *)(i + 20);
    *(_DWORD *)(v8 + 32) = *(_DWORD *)(i + 24);
    *(_OWORD *)(v8 + 36) = *(_OWORD *)(i + 28);
    *(_BYTE *)(v8 + 52) = *(_BYTE *)(i + 44);
    v8 += 56LL;
  }
  result = a1;
  a4[2] = 0x6DB6DB6DB6DB6DB7LL * ((v8 - *a4) >> 3);
  v11 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v11;
  return result;
}
