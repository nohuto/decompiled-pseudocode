/*
 * XREFs of SepInitializeSharedSidMap @ 0x140785970
 * Callers:
 *     SepVariableInitialization @ 0x140C26650 (SepVariableInitialization.c)
 * Callees:
 *     RtlCreateHashTable @ 0x140480580 (RtlCreateHashTable.c)
 */

__int64 SepInitializeSharedSidMap()
{
  ULONG_PTR v0; // rax

  v0 = g_SepSidMapping;
  *(_QWORD *)g_SepSidMapping = 0LL;
  *(_QWORD *)(v0 + 8) = 0LL;
  return RtlCreateHashTable((PRTL_DYNAMIC_HASH_TABLE *)(v0 + 8), 0, 0) == 0 ? 0xC0000017 : 0;
}
