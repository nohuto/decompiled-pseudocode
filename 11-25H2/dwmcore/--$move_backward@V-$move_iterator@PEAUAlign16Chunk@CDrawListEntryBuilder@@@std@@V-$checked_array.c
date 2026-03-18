/*
 * XREFs of ??$move_backward@V?$move_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@std@@V?$checked_array_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@stdext@@V?$move_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@0@0V12@@Z @ 0x180256D70
 * Callers:
 *     ?AppendHWGeometry@CDrawListEntryBuilder@@AEAAXAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x18016A110 (-AppendHWGeometry@CDrawListEntryBuilder@@AEAAXAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDe.c)
 *     ?resize@?$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V?$buffer_impl@UAlign16Chunk@CDrawListEntryBuilder@@$0HI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_K@Z @ 0x18016CB30 (-resize@-$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V-$buffer_impl@UAlign16Chunk@CDrawL.c)
 * Callees:
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAUVisualTreePathUnit@CVisualTreePath@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAUVisualTreePathUnit@CVisualTreePath@@@stdext@@_J@Z @ 0x180009754 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAUVisualTreePathUnit@CVisualTreePath@@@stdext.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 */

__int64 __fastcall std::move_backward<std::move_iterator<CDrawListEntryBuilder::Align16Chunk *>,stdext::checked_array_iterator<CDrawListEntryBuilder::Align16Chunk *>>(
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
  v8 = std::_Get_unwrapped_n<stdext::checked_array_iterator<CVisualTreePath::VisualTreePathUnit *> &,__int64>(
         a4,
         -((a3 - (__int64)a2) >> 4));
  a4[2] = ((__int64)memmove_0((void *)(v8 - v5), a2, v5) - *a4) >> 4;
  result = a1;
  v10 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v10;
  return result;
}
