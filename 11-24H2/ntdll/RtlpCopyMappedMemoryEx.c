/*
 * XREFs of RtlpCopyMappedMemoryEx @ 0x1800F9D50
 * Callers:
 *     RtlCopyMappedMemory @ 0x1800F9D30 (RtlCopyMappedMemory.c)
 * Callees:
 *     RtlpCopyMappedMemoryEx_ExceptionFilter @ 0x180143EE0 (RtlpCopyMappedMemoryEx_ExceptionFilter.c)
 *     memmove @ 0x180167400 (memmove.c)
 */

__int64 __fastcall RtlpCopyMappedMemoryEx(__int64 a1, void *a2, const void *a3, size_t a4)
{
  memmove(a2, a3, a4);
  return 0LL;
}
