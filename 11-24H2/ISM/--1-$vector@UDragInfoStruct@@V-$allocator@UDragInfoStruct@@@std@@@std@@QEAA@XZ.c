/*
 * XREFs of ??1?$vector@UDragInfoStruct@@V?$allocator@UDragInfoStruct@@@std@@@std@@QEAA@XZ @ 0x18014A7E0
 * Callers:
 *     _DragNDropProcessor::OnInput_::_1_::dtor$1 @ 0x1801D78BF (_DragNDropProcessor--OnInput_--_1_--dtor$1.c)
 *     _EdgyProcessor::OnInputDrag_::_1_::dtor$1 @ 0x1801D7CC2 (_EdgyProcessor--OnInputDrag_--_1_--dtor$1.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001B0D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<DragInfoStruct>::~vector<DragInfoStruct>(__int64 a1)
{
  char *v2; // rcx

  v2 = *(char **)a1;
  if ( v2 )
  {
    std::_Deallocate<16,0>(
      v2,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFE0uLL));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
