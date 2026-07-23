/*
 * XREFs of RtlpCopyMappedMemoryEx @ 0x1800F4AB0
 * Callers:
 *     RtlCopyMappedMemory @ 0x1800F4A90 (RtlCopyMappedMemory.c)
 * Callees:
 *     RtlpCopyMappedMemoryEx_ExceptionFilter @ 0x180142290 (RtlpCopyMappedMemoryEx_ExceptionFilter.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 */

__int64 __fastcall RtlpCopyMappedMemoryEx(__int64 a1, void *a2, const void *a3, size_t a4)
{
  memmove(a2, a3, a4);
  return 0LL;
}
