/*
 * XREFs of RtlCrc32 @ 0x1404493B0
 * Callers:
 *     <none>
 * Callees:
 *     Feature_FasterCrc32__private_IsEnabledDeviceUsageNoInline @ 0x140449408 (Feature_FasterCrc32__private_IsEnabledDeviceUsageNoInline.c)
 *     RtlpComputeCrcInternal @ 0x140449440 (RtlpComputeCrcInternal.c)
 *     RtlpCrc32c @ 0x1404498E0 (RtlpCrc32c.c)
 */

DWORD __cdecl RtlCrc32(const void *Buffer, size_t Size, DWORD InitialCrc)
{
  __int64 v3; // rdi

  v3 = InitialCrc;
  if ( (unsigned int)Feature_FasterCrc32__private_IsEnabledDeviceUsageNoInline() )
    return RtlpCrc32c(Buffer, Size, (unsigned int)v3);
  else
    return RtlpComputeCrcInternal(Buffer, Size, v3, &Crc32Ctrl);
}
