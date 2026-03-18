/*
 * XREFs of ??$uninitialized_move@V?$move_iterator@PEAVMatrix3x2F@D2D1@@@std@@V?$checked_array_iterator@PEAVMatrix3x2F@D2D1@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVMatrix3x2F@D2D1@@@stdext@@V?$move_iterator@PEAVMatrix3x2F@D2D1@@@0@0V12@@Z @ 0x180230FC8
 * Callers:
 *     ?Clear@CMatrixStack2D@@QEAAXXZ @ 0x1800147D4 (-Clear@CMatrixStack2D@@QEAAXXZ.c)
 *     ??$Walk@VCShapeDrawingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeDrawingContext@@@Z @ 0x180015B90 (--$Walk@VCShapeDrawingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeDrawingCont.c)
 *     ?PartitionPrimitiveWithRoundedRectangleClip@CDrawListEntryBuilder@@CA_NIAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@AEBUCRoundedRectangleGeometryData@@PEAV?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180091550 (-PartitionPrimitiveWithRoundedRectangleClip@CDrawListEntryBuilder@@CA_NIAEBUD2D_RECT_F@@W4D2D1_E.c)
 *     ?reserve_region@?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUPrimitiveSubRect@CDrawListEntryBuilder@@_K0@Z @ 0x1801DA1AC (-reserve_region@-$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V-$buffer_impl@UPrimiti.c)
 *     ??$emplace_back@UD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@_N@?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@_N@Z @ 0x1801DBC7C (--$emplace_back@UD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@_N@-$vector_facade@UPrimitiveSubRect@CDrawListEn.c)
 * Callees:
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAVMatrix3x2F@D2D1@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAVMatrix3x2F@D2D1@@@stdext@@_J@Z @ 0x18024F604 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAVMatrix3x2F@D2D1@@@stdext@@_J@std@@YA-A_TAEA.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 */

__int64 __fastcall std::uninitialized_move<std::move_iterator<D2D1::Matrix3x2F *>,stdext::checked_array_iterator<D2D1::Matrix3x2F *>>(
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
  v8 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<D2D1::Matrix3x2F *> &,__int64>(
                 a4,
                 0xAAAAAAAAAAAAAAABuLL * ((a3 - (__int64)a2) >> 3));
  memmove_0(v8, a2, v5);
  result = a1;
  a4[2] = 0xAAAAAAAAAAAAAAABuLL * ((__int64)((__int64)v8 + v5 - *a4) >> 3);
  v10 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v10;
  return result;
}
