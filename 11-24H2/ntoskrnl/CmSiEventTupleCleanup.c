/*
 * XREFs of CmSiEventTupleCleanup @ 0x14047DA8C
 * Callers:
 *     CmpHiveCacheEntryCleanup @ 0x1407E54D8 (CmpHiveCacheEntryCleanup.c)
 *     CmpOpenHiveFile @ 0x14092FE64 (CmpOpenHiveFile.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 */

NTSTATUS __fastcall CmSiEventTupleCleanup(__int64 a1)
{
  void *v2; // rcx
  NTSTATUS result; // eax

  v2 = *(void **)(a1 + 8);
  if ( v2 )
    result = ObfDereferenceObjectWithTag(v2, 0x746C6644u);
  if ( *(_QWORD *)a1 )
    return ZwClose(*(HANDLE *)a1);
  return result;
}
