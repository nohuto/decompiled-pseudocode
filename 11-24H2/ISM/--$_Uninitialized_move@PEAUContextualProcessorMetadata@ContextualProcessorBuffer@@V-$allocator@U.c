/*
 * XREFs of ??$_Uninitialized_move@PEAUContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@YAPEAUContextualProcessorMetadata@ContextualProcessorBuffer@@QEAU12@0PEAU12@AEAV?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@0@@Z @ 0x180097CD8
 * Callers:
 *     ??$_Emplace_reallocate@AEBUContextualProcessorMetadata@ContextualProcessorBuffer@@@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@AEAAPEAUContextualProcessorMetadata@ContextualProcessorBuffer@@QEAU23@AEBU23@@Z @ 0x180029EF0 (--$_Emplace_reallocate@AEBUContextualProcessorMetadata@ContextualProcessorBuffer@@@-$vector@UCon.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@YAXPEAUContextualProcessorMetadata@ContextualProcessorBuffer@@QEAU12@AEAV?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@0@@Z @ 0x18002BB58 (--$_Destroy_range@V-$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@st.c)
 *     ??0ContextualProcessorMetadata@ContextualProcessorBuffer@@QEAA@$$QEAU01@@Z @ 0x1801A2C8C (--0ContextualProcessorMetadata@ContextualProcessorBuffer@@QEAA@$$QEAU01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
ContextualProcessorBuffer::ContextualProcessorMetadata *__fastcall std::_Uninitialized_move<ContextualProcessorBuffer::ContextualProcessorMetadata *>(
        __int64 a1,
        __int64 a2,
        ContextualProcessorBuffer::ContextualProcessorMetadata *a3)
{
  __int64 i; // rdi

  for ( i = a1; i != a2; i += 224LL )
  {
    ContextualProcessorBuffer::ContextualProcessorMetadata::ContextualProcessorMetadata(a3, i);
    a3 = (ContextualProcessorBuffer::ContextualProcessorMetadata *)((char *)a3 + 224);
  }
  std::_Destroy_range<std::allocator<ContextualProcessorBuffer::ContextualProcessorMetadata>>(a3, a3);
  return a3;
}
