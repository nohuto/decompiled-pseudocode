/*
 * XREFs of SepInitializeSharedSidMap @ 0x140794DC8
 * Callers:
 *     SepVariableInitialization @ 0x140C39A60 (SepVariableInitialization.c)
 * Callees:
 *     RtlCreateHashTable @ 0x14047C500 (RtlCreateHashTable.c)
 */

__int64 SepInitializeSharedSidMap()
{
  ULONG_PTR v0; // rax

  v0 = g_SepSidMapping;
  *(_QWORD *)g_SepSidMapping = 0LL;
  *(_QWORD *)(v0 + 8) = 0LL;
  return RtlCreateHashTable((PRTL_DYNAMIC_HASH_TABLE *)(v0 + 8), 0, 0) == 0 ? 0xC0000017 : 0;
}
