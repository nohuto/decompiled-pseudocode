/*
 * XREFs of CmSiEventTupleCleanup @ 0x14047CE48
 * Callers:
 *     CmpHiveCacheEntryCleanup @ 0x1407D5668 (CmpHiveCacheEntryCleanup.c)
 *     CmpOpenHiveFile @ 0x14090F91C (CmpOpenHiveFile.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
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
