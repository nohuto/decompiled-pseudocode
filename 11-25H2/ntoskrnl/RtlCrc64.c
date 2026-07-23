/*
 * XREFs of RtlCrc64 @ 0x1405DE660
 * Callers:
 *     <none>
 * Callees:
 *     RtlpComputeCrcInternal @ 0x140452CD0 (RtlpComputeCrcInternal.c)
 */

ULONGLONG __cdecl RtlCrc64(const void *Buffer, size_t Size, ULONGLONG InitialCrc)
{
  return RtlpComputeCrcInternal((unsigned __int64)Buffer, Size, InitialCrc, (__int64)&Crc64Ctrl);
}
