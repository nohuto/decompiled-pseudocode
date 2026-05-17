/*
 * XREFs of RtlpCopyMappedMemoryEx @ 0x1800FBC50
 * Callers:
 *     RtlCopyMappedMemory @ 0x1800FBC30 (RtlCopyMappedMemory.c)
 * Callees:
 *     RtlpCopyMappedMemoryEx_ExceptionFilter @ 0x180145454 (RtlpCopyMappedMemoryEx_ExceptionFilter.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

__int64 __fastcall RtlpCopyMappedMemoryEx(__int64 a1, void *a2, const void *a3, size_t a4)
{
  memmove(a2, a3, a4);
  return 0LL;
}
